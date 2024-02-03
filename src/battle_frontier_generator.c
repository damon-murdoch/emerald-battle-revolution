#include "global.h"
#include "random.h"
#include "pokemon.h"
#include "event_data.h"
#include "battle_tower.h"
#include "frontier_util.h"
#include "battle_frontier_generator.h"
#include "config/battle_frontier_generator.h"

#include "constants/battle_move_effects.h"
#include "constants/form_change_types.h"
#include "constants/battle_frontier.h"
#include "constants/abilities.h"
#include "constants/trainers.h"
#include "constants/pokemon.h"
#include "constants/battle.h"
#include "constants/moves.h"
#include "constants/items.h"

#include "data/pokemon/natures.h"

// *** UTILITY ***

#define IN_INCLUSIVE_RANGE(a,b,n) (((n) >= (a)) && ((n) <= (b)))

#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))

// *** RANDOM ***
#ifdef BFG_RANDOM_BOOL_FIXED
#define RANDOM_BOOL() (BFG_RANDOM_BOOL_FIXED)
#else
#define RANDOM_BOOL() ((bool8)(Random() % 2))
#endif

#if BFG_RANDOM_OFFSET != 0
#define RANDOM_OFFSET() (Random() % (BFG_RANDOM_OFFSET))
#else
#define RANDOM_OFFSET() (0)
#endif

#define RANDOM_CHANCE(x) (((x) != 0) && ((Random() % (x)) == 0))

// *** FORMAT ***
#define IS_DOUBLES() (VarGet(VAR_FRONTIER_BATTLE_MODE) == FRONTIER_MODE_DOUBLES)
#define GET_LVL_MODE() (gSaveBlock2Ptr->frontier.lvlMode)

// *** STATS ***
#define CHECK_EVS(evs,stat) ((evs) & (stat))

// *** MOVE ***
#define NORMALISE(x) (((float)(x)) / 100.0f)

// These lists need to be maintained manually :(
#define IS_COUNTER_ATTACK(x) (((x) == MOVE_COUNTER) || ((x) == MOVE_MIRROR_COAT) || ((x) == MOVE_METAL_BURST))
#define IS_SUPPORT_ATTACK(x) ((x) == MOVE_FAKE_OUT || IS_COUNTER_ATTACK(x))

#define IS_CONFUSION_EFFECT(e) ((e == EFFECT_ATTRACT) || (e == EFFECT_SWAGGER) || (e == EFFECT_CONFUSE) || (e == EFFECT_FLATTER))
#define IS_STATUS_EFFECT(e) ((e == EFFECT_DARK_VOID) || (e == EFFECT_PARALYZE) || (e == EFFECT_SLEEP) || (e == EFFECT_YAWN) || (e == EFFECT_WILL_O_WISP) || (e == EFFECT_POISON) || (e == EFFECT_TOXIC))

#define IS_OFF_BOOSTING_EFFECT(e) (((e) == EFFECT_NO_RETREAT) || ((e) == EFFECT_BULK_UP) || ((e) == EFFECT_COIL) || ((e) == EFFECT_CURSE) || ((e) == EFFECT_VICTORY_DANCE) || ((e) == EFFECT_DRAGON_DANCE) || ((e) == EFFECT_SHELL_SMASH) || ((e) == EFFECT_ATTACK_SPATK_UP) || ((e) == EFFECT_GEOMANCY) || ((e) == EFFECT_QUIVER_DANCE) || ((e) == EFFECT_SHIFT_GEAR) || ((e) == EFFECT_TAKE_HEART) || ((e) == EFFECT_CALM_MIND) || ((e) == EFFECT_BELLY_DRUM) || ((e) == EFFECT_ATTACK_UP_2) || ((e) == EFFECT_ATTACK_UP_USER_ALLY) || ((e) == EFFECT_ATTACK_ACCURACY_UP) || ((e) == EFFECT_ATTACK_UP) || ((e) == EFFECT_SPECIAL_ATTACK_UP_3) || ((e) == EFFECT_SPECIAL_ATTACK_UP_2) || ((e) == EFFECT_SPECIAL_ATTACK_UP))
#define IS_DEF_BOOSTING_EFFECT(e) (((e) == EFFECT_COSMIC_POWER) || ((e) == EFFECT_STOCKPILE) || ((e) == EFFECT_DEFENSE_UP_3) || ((e) == EFFECT_DEFENSE_UP_2) || ((e) == EFFECT_DEFENSE_CURL) || ((e) == EFFECT_DEFENSE_UP) || (e == EFFECT_SPECIAL_DEFENSE_UP_2) || (e == EFFECT_SPECIAL_DEFENSE_UP))
#define IS_SPEED_BOOSTING_EFFECT(e) (((e) == EFFECT_AUTOTOMIZE) || ((e) == EFFECT_SPEED_UP_2) || ((e) == EFFECT_SPEED_UP))
#define IS_SPEED_CONTROL_EFFECT(e) (((e) == EFFECT_TRICK_ROOM) || ((e) == EFFECT_TAILWIND))

#define IS_STAT_BOOSTING_EFFECT(e) (IS_OFF_BOOSTING_EFFECT(e) || IS_DEF_BOOSTING_EFFECT(e) || IS_SPEED_BOOSTING_EFFECT(e))
#define IS_STAT_CHANGING_EFFECT(e) (IS_STAT_BOOSTING_EFFECT(e) || ((e) == EFFECT_ACCURACY_DOWN_2) || ((e) == EFFECT_EVASION_UP_2) || ((e) == EFFECT_MINIMIZE) || ((e) == EFFECT_ACCURACY_UP_2)) || (((e) == EFFECT_ATTACK_DOWN_2) || ((e) == EFFECT_DEFENSE_DOWN_2) || ((e) == EFFECT_SPECIAL_ATTACK_DOWN_2)) || (((e) == EFFECT_SPECIAL_DEFENSE_DOWN_2) || ((e) == EFFECT_SPEED_DOWN_2) || ((e) == EFFECT_EVASION_DOWN_2) || ((e) == EFFECT_ACCURACY_DOWN) || ((e) == EFFECT_EVASION_UP) || ((e) == EFFECT_ATTACK_DOWN) || (((e) == EFFECT_DEFENSE_DOWN) || ((e) == EFFECT_SPECIAL_ATTACK_DOWN) || ((e) == EFFECT_SPECIAL_DEFENSE_DOWN)) || ((e) == EFFECT_SPEED_DOWN) || ((e) == EFFECT_EVASION_DOWN))

#define IS_PROTECTING_EFFECT(e) (((e) == EFFECT_PROTECT) || ((e) == EFFECT_MAT_BLOCK) || ((e) == EFFECT_ENDURE) || ((e) == EFFECT_SUBSTITUTE))
#define IS_DOUBLES_PROTECT(x) (((x) == MOVE_WIDE_GUARD) || ((x) == MOVE_QUICK_GUARD) || ((x) == MOVE_CRAFTY_SHIELD) || ((x) == MOVE_MAT_BLOCK))
#define IS_SPECIAL_PROTECT(e,x) (((e) == EFFECT_PROTECT) && ((x) != MOVE_PROTECT))

#define IS_FIELD_OR_ALLY_TARGET(t) (((t) == MOVE_TARGET_ALL_BATTLERS) || ((t) == MOVE_TARGET_OPPONENTS_FIELD) || ((t) == MOVE_TARGET_ALLY))
#define IS_DEFENSIVE_ATTACK(x) (((x) == MOVE_BODY_PRESS) || ((x) == MOVE_FOUL_PLAY) || IS_COUNTER_ATTACK(x))
#define IS_DYNAMIC_ATTACK(x) (((x) == MOVE_TERA_BLAST) || ((x) == MOVE_PHOTON_GEYSER))

// Apply positive / negative nature modifiers for moves
#define GET_NEG_NATURE_MULTIPLIER(n, s) ((n->negStat == s) ? BFG_MOVE_NEG_NATURE_MULTIPLIER : 1.0f)
#define GET_POS_NATURE_MULTIPLIER(n, s) ((n->posStat == s) ? BFG_MOVE_POS_NATURE_MULTIPLIER : 1.0f)
#define GET_NATURE_MULTIPLIER(n, s) ((GET_NEG_NATURE_MULTIPLIER(n,s)) * (GET_POS_NATURE_MULTIPLIER(n,s)))

// Apply positive / negative modifiers for evs
// GET_NEG_EV_MULTIPLIER should be used in the case of having a lower score with EV investment, for
// example Trick Room as a correlation to speed
// GET_POS_EV_MULTIPLIER is more useful in most other cases
#define GET_NEG_EV_MULTIPLIER(e,s) (CHECK_EVS(e,s) ? (1.0f / BFG_MOVE_EV_INVEST_MULTIPLIER) : 1.0f)
#define GET_POS_EV_MULTIPLIER(e,s) (CHECK_EVS(e,s) ? (1.0f * BFG_MOVE_EV_INVEST_MULTIPLIER) : 1.0f)

#define GET_ATK_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_ATK)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_ATTACK)))
#define GET_DEF_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_DEF)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_DEFENSE)))
#define GET_SPATK_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPATK)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_SP_ATTACK)))
#define GET_SPDEF_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPDEF)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_SP_DEFENSE)))
#define GET_SPEED_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPEED)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_SPEED)))

#define GET_SPEED_NEG_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPEED)) * (GET_NEG_EV_MULTIPLIER(e, F_EV_SPREAD_SPEED)))

// rating *= BFG_MOVE_EV_INVEST_MULTIPLIER;

// *** TYPE ***
#define IS_TYPE(x,y,type) ((x) == (type) || (y) == (type))
#define IS_FWG(x,y) (IS_TYPE((x),(y),TYPE_FIRE) || IS_TYPE((x),(y),TYPE_WATER) || IS_TYPE((x),(y),TYPE_GRASS))
#define IS_FDS(x,y) (IS_TYPE((x),(y),TYPE_FAIRY) || IS_TYPE((x),(y),TYPE_DRAGON) || IS_TYPE((x),(y),TYPE_STEEL))
#define IS_PGD(x,y) (IS_TYPE((x),(y),TYPE_PSYCHIC) || IS_TYPE((x),(y),TYPE_GHOST) || IS_TYPE((x),(y),TYPE_DARK))

// *** ABILITY ***
#define HAS_ABILITY(x,y,ability) ((x) == (ability) || (y) == (ability))
#define IS_ABILITY(x,y,ability) ((x) == (ability) && (y) == ABILITY_NONE)

#define IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) (IS_TYPE((t1),(t2),TYPE_FLYING) || IS_ABILITY((a1),(a2), ABILITY_LEVITATE))

// *** SPECIES ***
#define IS_BASE_SPECIES(x) (x == GET_BASE_SPECIES_ID(x))
#define IS_REGIONAL_FORME(s) ((s->isAlolanForm == TRUE) || (s->isGalarianForm == TRUE) || (s->isHisuianForm == TRUE) || (s->isPaldeanForm))
#define IS_EEVEE(s) ((s) == SPECIES_EEVEE || (s) == SPECIES_VAPOREON || (s) == SPECIES_JOLTEON || (s) == SPECIES_FLAREON || (s) == SPECIES_ESPEON || (s) == SPECIES_UMBREON || (s) == SPECIES_LEAFEON || (s) == SPECIES_GLACEON || (s) == SPECIES_SYLVEON)
#define IS_REGI(s) ((s) == SPECIES_REGIROCK || (s) == SPECIES_REGICE || (s) == SPECIES_REGISTEEL || (s) == SPECIES_REGIDRAGO || (s) == SPECIES_REGIELEKI || (s) == SPECIES_REGIGIGAS)
#define IS_STARTER(s) ( \
    ((s) >= SPECIES_BULBASAUR && (s) <= SPECIES_BLASTOISE) || \
    ((s) >= SPECIES_CHIKORITA && (s) <= SPECIES_FERALIGATR) || \
    ((s) >= SPECIES_TREECKO && (s) <= SPECIES_SWAMPERT) || \
    ((s) >= SPECIES_TURTWIG && (s) <= SPECIES_EMPOLEON) || \
    ((s) >= SPECIES_SNIVY && (s) <= SPECIES_SAMUROTT) || \
    ((s) >= SPECIES_CHESPIN && (s) <= SPECIES_GRENINJA) || \
    ((s) >= SPECIES_ROWLET && (s) <= SPECIES_PRIMARINA) || \
    ((s) >= SPECIES_GROOKEY && (s) <= SPECIES_INTELEON) || \
    ((s) >= SPECIES_SPRIGATITO && (s) <= SPECIES_QUAQUAVAL))

#define HAS_MEGA_EVOLUTION(x) ((x == SPECIES_VENUSAUR) || (x == SPECIES_CHARIZARD) || (x == SPECIES_BLASTOISE) || \
    (x == SPECIES_BEEDRILL) || (x == SPECIES_PIDGEOT) || (x == SPECIES_ALAKAZAM) || (x == SPECIES_SLOWBRO) || \
    (x == SPECIES_GENGAR) || (x == SPECIES_KANGASKHAN) || (x == SPECIES_PINSIR) || (x == SPECIES_GYARADOS) || \
    (x == SPECIES_AERODACTYL) || (x == SPECIES_MEWTWO) || (x == SPECIES_AMPHAROS) || (x == SPECIES_STEELIX) || \
    (x == SPECIES_SCIZOR) || (x == SPECIES_HERACROSS) || (x == SPECIES_HOUNDOOM) || (x == SPECIES_TYRANITAR) || \
    (x == SPECIES_SCEPTILE) || (x == SPECIES_BLAZIKEN) || (x == SPECIES_SWAMPERT) || (x == SPECIES_GARDEVOIR) || \
    (x == SPECIES_SABLEYE) || (x == SPECIES_MAWILE) || (x == SPECIES_AGGRON) || (x == SPECIES_MEDICHAM) || \
    (x == SPECIES_MANECTRIC) || (x == SPECIES_SHARPEDO) || (x == SPECIES_CAMERUPT) || (x == SPECIES_ALTARIA) || \
    (x == SPECIES_BANETTE) || (x == SPECIES_ABSOL) || (x == SPECIES_GLALIE) || (x == SPECIES_SALAMENCE) || \
    (x == SPECIES_METAGROSS) || (x == SPECIES_LATIAS) || (x == SPECIES_LATIOS) || (x == SPECIES_GARCHOMP) || \
    (x == SPECIES_LUCARIO) || (x == SPECIES_ABOMASNOW) || (x == SPECIES_GALLADE) || (x == SPECIES_AUDINO) || \
    (x == SPECIES_DIANCIE) || (x == SPECIES_RAYQUAZA))

// *** ITEM ***
#if BFG_NO_ITEM_SELECTION_CHANCE != 1
const u16 customItemsList[] = {
    BFG_CUSTOM_ITEMS_LIST, 
    ITEM_NONE // End of list
}; 
#endif

// *** CONSTANTS ***
#define SPECIES_END 0xFFFF
#define FORME_DEFAULT 0xFF

const u16 fixedIVMinBSTLookup[] = {
    [3] = BFG_IV_MIN_BST_3,
    [6] = BFG_IV_MIN_BST_6,
    [9] = BFG_IV_MIN_BST_9,
    [12] = BFG_IV_MIN_BST_12,
    [15] = BFG_IV_MIN_BST_15,
    [18] = BFG_IV_MIN_BST_18,
    [21] = BFG_IV_MIN_BST_21,
    [MAX_PER_STAT_IVS] = BFG_IV_MIN_BST_MAX,
};

const u16 fixedIVMaxBSTLookup [] = {
    [3] = BFG_IV_MAX_BST_3,
    [6] = BFG_IV_MAX_BST_6,
    [9] = BFG_IV_MAX_BST_9,
    [12] = BFG_IV_MAX_BST_12,
    [15] = BFG_IV_MAX_BST_15,
    [18] = BFG_IV_MAX_BST_18,
    [21] = BFG_IV_MAX_BST_21,
    [MAX_PER_STAT_IVS] = BFG_IV_MAX_BST_MAX,
};

// *** FUNCTIONS ***

#if BFG_MOVE_EFFECT_MODIFIERS == TRUE
static float fpow(float x, s32 n) {
    s32 i; 
    float product = 1;
    for(i = 0; i < n; i++){
        product *= x;
    }
    return product;
}
#endif

static u16 GetBaseStatTotal(u16 speciesId) {

    // Pointer to species info
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    return (
        species->baseHP + species->baseAttack + 
        species->baseDefense + species->baseSpAttack + 
        species->baseSpDefense + species->baseSpeed
    );
}

// Allow custom species banlists
#if BFG_USE_CUSTOM_BANNED_SPECIES == TRUE

const u16 customBannedSpeciesLvl50[] = {
    BFG_LVL_50_CUSTOM_BANNED_SPECIES
};

const u16 customBannedSpeciesLvlOpen[] = {
    BFG_LVL_OPEN_CUSTOM_BANNED_SPECIES
};

const u16 customBannedSpeciesLvlTent[] = {
    BFG_LVL_TENT_CUSTOM_BANNED_SPECIES
};

#endif

static bool8 SpeciesValidForFrontierLevel(u16 speciesId) {

    s32 i;

    // Get the level mode for the frontier
    u8 lvlMode = GET_LVL_MODE();

    // Switch on level mode
    switch(lvlMode) {
        case FRONTIER_LVL_50: {
            #if BFG_LVL_50_ALLOW_BANNED_SPECIES == FALSE
            for(i=0; gFrontierBannedSpecies[i] != SPECIES_END; i++) {
                if (gFrontierBannedSpecies[i] == speciesId)
                    return FALSE; // Species banned
            }
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvl50[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvl50[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
        case FRONTIER_LVL_OPEN: {
            #if BFG_LVL_OPEN_ALLOW_BANNED_SPECIES == FALSE
            for(i=0; gFrontierBannedSpecies[i] != SPECIES_END; i++) {
                if (gFrontierBannedSpecies[i] == speciesId)
                    return FALSE; // Species banned
            }
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvlOpen[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvlOpen[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
        case FRONTIER_LVL_TENT: {
            #if BFG_LVL_TENT_ALLOW_BANNED_SPECIES == FALSE
            for(i=0; gFrontierBannedSpecies[i] != SPECIES_END; i++) {
                if (gFrontierBannedSpecies[i] == speciesId)
                    return FALSE; // Species banned
            }
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvlTent[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvlTent[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
    }

    return TRUE;
}

static bool8 SpeciesValidForTrainerClass(u8 trainerClass, u16 speciesId) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    
    // Dereference types/abilities
    u8 t1 = species->types[0];
    u8 t2 = species->types[1];
    u16 a1 = species->abilities[0];
    u16 a2 = species->abilities[1];

    // Switch on trainer class
    switch(trainerClass) {
        case TRAINER_CLASS_RUIN_MANIAC: {
            if ((species->isHisuianForm) || (species->isParadoxForm) || IS_REGI(speciesId))
                return TRUE;
        } // Flow through to TRAINER_CLASS_HIKER
        case TRAINER_CLASS_HIKER: {
            if (IS_FDS(t1,t2) || IS_TYPE(t1,t2,TYPE_ROCK) || IS_TYPE(t1,t2,TYPE_GROUND) || IS_TYPE(t1,t2,TYPE_FIGHTING))
                return TRUE;
        }; break;
        case TRAINER_CLASS_AQUA_LEADER: 
            if ((species->isMythical) || (species->isLegendary)) 
                return TRUE;
        case TRAINER_CLASS_TEAM_AQUA: {
            if (IS_TYPE(t1,t2,TYPE_WATER) || IS_TYPE(t1,t2,TYPE_POISON) || IS_TYPE(t1,t2,TYPE_DARK))
                return TRUE;
        }; break;
        case TRAINER_CLASS_BIRD_KEEPER: {
            if (IS_FLYING_OR_LEVITATE(t1,t2,a1,a2))
                return TRUE;
        }; break;
        case TRAINER_CLASS_COLLECTOR: {
            if (IS_STARTER(speciesId))
                return TRUE;
        }; break;
        case TRAINER_CLASS_TRIATHLETE: {
            if (IS_TYPE(t1,t2,TYPE_ICE) || IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_FAIRY))
                return TRUE;
        }; // Flow through to TRAINER_CLASS_SAILOR
        case TRAINER_CLASS_SAILOR: {
            if (IS_TYPE(t1,t2,TYPE_WATER) || IS_TYPE(t1,t2,TYPE_FIGHTING))
                return TRUE;
        }; break;
        case TRAINER_CLASS_TUBER_M:
        case TRAINER_CLASS_TUBER_F:
        case TRAINER_CLASS_SWIMMER_M:
        case TRAINER_CLASS_SWIMMER_F: {
            if (IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_FAIRY) || IS_TYPE(t1,t2,TYPE_ICE))
                return TRUE;
        }; // Flow through to TRAINER_CLASS_FISHERMAN
        case TRAINER_CLASS_FISHERMAN:  {
            if (IS_TYPE(t1,t2,TYPE_WATER))
                return TRUE;
        }; break;
        case TRAINER_CLASS_MAGMA_LEADER: 
            if (species->isLegendary)
                return TRUE;
        case TRAINER_CLASS_TEAM_MAGMA: {
            if (IS_TYPE(t1,t2,TYPE_GROUND) || IS_TYPE(t1,t2,TYPE_POISON) || IS_TYPE(t1,t2,TYPE_DARK))
                return TRUE;
        }; break;
        case TRAINER_CLASS_EXPERT: {
            if (IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_ROCK) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) || IS_REGI(speciesId))
                return TRUE;
        }; break;
        case TRAINER_CLASS_BATTLE_GIRL: 
        case TRAINER_CLASS_BLACK_BELT: {
            if (IS_FDS(t1,t2) || IS_TYPE(t1,t2,TYPE_FIRE) || IS_TYPE(t1,t2,TYPE_ROCK) || IS_TYPE(t1,t2,TYPE_FIGHTING))
                return TRUE;
        }; break;
        case TRAINER_CLASS_HEX_MANIAC: {
            if (IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_POISON))
                return TRUE;
        }; break;
        case TRAINER_CLASS_AROMA_LADY: {
            if (IS_TYPE(t1,t2,TYPE_GRASS) || IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_FAIRY) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_BUG))
                return TRUE;
        }; break;
        case TRAINER_CLASS_RICH_BOY:
        case TRAINER_CLASS_LADY: {
            if (IS_FWG(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_FAIRY) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) || IS_EEVEE(speciesId))
                return TRUE;
        }; break;
        case TRAINER_CLASS_BEAUTY: {
            if (IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_FAIRY) || IS_EEVEE(speciesId))
                return TRUE;
        }; // Flow through to TRAINER_CLASS_PARASOL_LADY
        case TRAINER_CLASS_PARASOL_LADY: {
            if (IS_FWG(t1,t2) || IS_TYPE(t1,t2,TYPE_ELECTRIC) || IS_TYPE(t1,t2,TYPE_ICE) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_FAIRY))
                return TRUE;
        }; break;
        case TRAINER_CLASS_POKEMANIAC: {
            if (IS_FWG(t1,t2) || IS_FDS(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_ROCK) || IS_TYPE(t1,t2,TYPE_GROUND))
                return TRUE;
        }; break;
        case TRAINER_CLASS_GUITARIST: {
            if (IS_FDS(t1,t2) || IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_ELECTRIC) || IS_TYPE(t1,t2,TYPE_ROCK) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2))
                return TRUE;
        }; break;
        case TRAINER_CLASS_KINDLER: {
            if (IS_FDS(t1,t2) || IS_TYPE(t1,t2,TYPE_FIRE) || IS_TYPE(t1,t2,TYPE_GHOST))
                return TRUE;
        }; break;
        case TRAINER_CLASS_CAMPER:
        case TRAINER_CLASS_PICNICKER: {
            if(IS_TYPE(t1,t2,TYPE_POISON) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_ELECTRIC) || IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_TYPE(t1,t2,TYPE_BUG) || IS_TYPE(t1,t2,TYPE_FLYING))
                return TRUE;
        }; break;
        case TRAINER_CLASS_BUG_CATCHER: 
        case TRAINER_CLASS_BUG_MANIAC: {
            if (IS_TYPE(t1,t2,TYPE_BUG))
                return TRUE;
        }; break;
        case TRAINER_CLASS_PSYCHIC: {
            if (IS_TYPE(t1,t2,TYPE_PSYCHIC) || IS_REGI(speciesId) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2))
                return TRUE;
        }; break;
        case TRAINER_CLASS_COOLTRAINER:
        case TRAINER_CLASS_GENTLEMAN: {
            if ((species->isLegendary) || IS_FWG(t1,t2) || IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_FIGHTING))
                return TRUE;
        }; break;
        case TRAINER_CLASS_SCHOOL_KID: {
            if (IS_FWG(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_POISON) || IS_TYPE(t1,t2,TYPE_ELECTRIC) || IS_TYPE(t1,t2,TYPE_BUG) || IS_TYPE(t1,t2,TYPE_FIGHTING))
                return TRUE; 
        }; break;
        case TRAINER_CLASS_POKEFAN: {
            if(IS_FWG(t1,t2) || IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_FAIRY) || IS_EEVEE(speciesId))
                return TRUE;
        }; break;
        case TRAINER_CLASS_LASS:
        case TRAINER_CLASS_YOUNGSTER: {
            if(IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_GROUND) || IS_TYPE(t1,t2,TYPE_FLYING) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_FIGHTING) || IS_TYPE(t1,t2,TYPE_ELECTRIC) || IS_TYPE(t1,t2,TYPE_ICE))
                return TRUE;
        }; break;
        case TRAINER_CLASS_DRAGON_TAMER: {
            if (IS_FDS(t1,t2) || IS_TYPE(t1,t2,TYPE_GROUND) || IS_TYPE(t1,t2,TYPE_WATER) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2))
                return TRUE;
        }; break;
        case TRAINER_CLASS_NINJA_BOY: {
            if (IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_FIGHTING) || IS_TYPE(t1,t2,TYPE_POISON) || IS_TYPE(t1,t2,TYPE_BUG))
                return TRUE;
        }; break;
        case TRAINER_CLASS_PKMN_BREEDER: {
            if (IS_FWG(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) || IS_EEVEE(speciesId))
                return TRUE;
        }; break;
        case TRAINER_CLASS_PKMN_RANGER: {
            if(IS_TYPE(t1,t2,TYPE_BUG) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_GRASS) || IS_FLYING_OR_LEVITATE(t1,t2,a1,a2))
                return TRUE;
        }; break;
        default: 
            return TRUE; // Accept all
    }

    // case TRAINER_CLASS_INTERVIEWER: {}; break;
    // case TRAINER_CLASS_ELITE_FOUR: {}; break;
    // case TRAINER_CLASS_LEADER: {}; break;
    // case TRAINER_CLASS_SR_AND_JR: {}; break;
    // case TRAINER_CLASS_CHAMPION: {}; break;
    // case TRAINER_CLASS_TWINS: {}; break;
    // case TRAINER_CLASS_RIVAL: {}; break;
    // case TRAINER_CLASS_YOUNG_COUPLE: {}; break;
    // case TRAINER_CLASS_OLD_COUPLE: {}; break;
    // case TRAINER_CLASS_SIS_AND_BRO: {}; break;
    // case TRAINER_CLASS_RS_PROTAG: {}; break;

    return FALSE;
}

static u8 GetNatureFromStats(u8 posStat, u8 negStat) {
    s32 i;
    // Loop over the natures
    for(i=0; i<NUM_NATURES; i++) { 
        // Return matching nature (if found)
        if ((gNatureInfo[i].posStat == posStat) && 
        (gNatureInfo[i].negStat == negStat))
            return i;
    }
    // Default (neutral)
    return NATURE_HARDY;
}

static u8 GetSpeciesNature(u16 speciesId) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    #if BFG_NATURE_SELECT_RANDOM == TRUE
    return Random() % NUM_NATURES;
    #else
    s32 i; 

    u8 posStat = 0;
    u8 posStatValue = 0;

    u8 negStat = 0;
    u8 negStatValue = 0;

    u16 temp1 = ((species->baseAttack) + RANDOM_OFFSET());
    u16 temp2 = ((species->baseSpAttack) + RANDOM_OFFSET());

    // If both attack and special attack stats match
    if (temp1 == temp2)
    {
        // prioritise special attack
        if (RANDOM_BOOL())
        {
            negStat = STAT_ATK;
            negStatValue = species->baseAttack;
        }
        else // Prioritise attack
        {
            negStat = STAT_SPATK;
            negStatValue = species->baseSpAttack;
        }
    }
    else if (temp1 > temp2) 
    {
        negStat = STAT_SPATK;
        negStatValue = species->baseSpAttack;
    }
    else // Special attack is greater than attack
    {
        negStat = STAT_ATK;
        negStatValue = species->baseAttack; 
    }

    // If negative speed natures are allowed
    if (BFG_PRIORITISE_ATK_SPA_OVER_SPE && negStatValue > species->baseSpeed) {
        negStat = STAT_SPEED;
        negStatValue = species->baseSpeed;
    }

    // Loop over the stats (pick best stat)
    for(i = STAT_ATK; i < NUM_STATS; i++){
        if (i == negStat)
            continue; 

        temp1 = (posStatValue + RANDOM_OFFSET());

        switch(i) {
            case STAT_ATK: {
                temp2 = ((species->baseAttack) + RANDOM_OFFSET());
                if ((temp2 > temp1) || ((temp2 == temp1) && (
                    ((posStat == STAT_DEF || posStat == STAT_SPDEF) && BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD) || 
                    (posStat == STAT_SPEED && BFG_PRIORITISE_ATK_SPA_OVER_SPE)
                ))) 
                {
                    posStat = STAT_ATK;
                    posStatValue = species->baseAttack;
                }
            }; break;
            case STAT_DEF: {
                temp2 = ((species->baseDefense) + RANDOM_OFFSET());
                if ((temp2 > temp1) || ((temp2 == temp1) && (
                    (((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD == FALSE)) || 
                    (posStat == STAT_SPDEF && RANDOM_BOOL()))
                ))) 
                {
                    posStat = STAT_DEF;
                    posStatValue = species->baseDefense;
                }
            }; break;
            case STAT_SPATK: {
                temp2 = ((species->baseSpAttack) + RANDOM_OFFSET());
                if ((temp2 > temp1) || ((temp2 == temp1) && (
                    ((posStat == STAT_DEF || posStat == STAT_SPDEF) && BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD) || 
                    (posStat == STAT_SPEED && BFG_PRIORITISE_ATK_SPA_OVER_SPE)
                ))) 
                {
                    posStat = STAT_SPATK;
                    posStatValue = species->baseSpAttack;
                }
            }; break;
            case STAT_SPDEF: {
                temp2 = ((species->baseSpDefense) + RANDOM_OFFSET());
                if ((temp2 > temp1) || ((temp2 == temp1) && (
                    (((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD == FALSE)) || 
                    (posStat == STAT_DEF && RANDOM_BOOL()))
                ))) 
                {
                    posStat = STAT_SPDEF;
                    posStatValue = species->baseSpDefense;
                }
            }; break;
            case STAT_SPEED: {
                temp2 = ((species->baseSpeed) + RANDOM_OFFSET());
                if ((temp2 > temp1) || ((temp2 == temp1) && (
                    ((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_SPE == FALSE)) || 
                    (posStat == STAT_DEF || posStat == STAT_SPDEF)
                )))
                {
                    posStat = STAT_SPEED;
                    posStatValue = species->baseSpeed;
                }
            }; break;
        }
    }

    // Return the nature matching that stats (if any)
    // If no matching nature is found, will return 'HARDY'
    return GetNatureFromStats(posStat, negStat);
    #endif
}

static u8 GetSpeciesEVs(u16 speciesId, u8 natureId) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    u8 evs = 0;
    u8 stat1, stat2;

    #if BFG_EV_SELECT_RANDOM
    stat1 = Random() % NUM_STATS;
    stat2 = stat1;
    while(stat2 == stat1)
        stat2 = Random() % NUM_STATS;
    #else
    s32 i;
    u16 val1 = 0; 
    u16 val2 = 0; 
    u16 valT, valR;

    const struct Nature * nature = &(gNatureInfo[natureId]);

    // Default Values
    stat1 = 0xFF;
    stat2 = 0xFF;

    for(i = STAT_HP; i < NUM_STATS; i++)
    {
        if (i == nature->negStat)
            continue;
        switch(i)
        {
            case STAT_HP:
                valT = (species->baseHP) + BFG_EV_HP_OFFSET;
                break;
            case STAT_ATK:
                valT = species->baseAttack;
                break;
            case STAT_DEF:
                valT = species->baseDefense;
                break;
            case STAT_SPATK:
                valT = species->baseSpAttack;
                break;
            case STAT_SPDEF:
                valT = species->baseSpDefense;
                break;
            case STAT_SPEED:
                valT = species->baseSpeed;
                break;
        }

        // For calculating with offset
        valR = (valT + RANDOM_OFFSET());

        // If stat 1 is undefined, or new stat is greater
        if (stat1 == 0xFF || ((val2 > val1) && (valR > (val1 + RANDOM_OFFSET())))) {
            stat1 = i; 
            val1 = valT;
        }
        // If stat 2 is undefined, or new stat is greater
        else if (stat2 == 0xFF || ((val2 < val1) && (valR > (val2 + RANDOM_OFFSET())))) {
            stat2 = i; 
            val2 = valT;
        }
        // Both stat 1 and stat 2 match
        else if ((val2 == val1) && (valR > (val2 + RANDOM_OFFSET()))) {
            // Replace stat1
            if (RANDOM_BOOL()) {
                stat1 = i; 
                val1 = valT;
            }
            else // Replace stat2
            {
                stat2 = i; 
                val2 = valT;
            }
        }
    }
    #endif

    // Apply stat bitmasks to evs
    if (stat1 == STAT_HP || stat2 == STAT_HP)
        evs |= F_EV_SPREAD_HP;
    if (stat1 == STAT_ATK || stat2 == STAT_ATK)
        evs |= F_EV_SPREAD_ATTACK;
    if (stat1 == STAT_DEF || stat2 == STAT_DEF)
        evs |= F_EV_SPREAD_DEFENSE;
    if (stat1 == STAT_SPATK || stat2 == STAT_SPATK)
        evs |= F_EV_SPREAD_SP_ATTACK;
    if (stat1 == STAT_SPDEF || stat2 == STAT_SPDEF)
        evs |= F_EV_SPREAD_SP_DEFENSE;
    if (stat1 == STAT_SPEED || stat2 == STAT_SPEED)
        evs |= F_EV_SPREAD_SPEED;

    return evs;
}

#if BFG_MOVE_SELECT_RANDOM == FALSE

const u16 moveAlwaysSelectList[] = {
    BFG_MOVE_ALWAYS_SELECT
};

const u16 moveNeverSelectList[] = {
    BFG_MOVE_NEVER_SELECT
}; 

#define IS_SUN_EFFECT(e) ((e == EFFECT_SUNNY_DAY))
#define IS_RAIN_EFFECT(e) ((e == EFFECT_RAIN_DANCE))
#define IS_SAND_EFFECT(e) ((e == EFFECT_SANDSTORM))
#define IS_HAIL_EFFECT(e) ((e == EFFECT_HAIL) || (e == EFFECT_SNOWSCAPE))

#define IS_WEATHER_EFFECT(e) (IS_SUN_EFFECT(e) || IS_RAIN_EFFECT(e) || IS_SAND_EFFECT(e) || IS_HAIL_EFFECT(e))
#define IS_TERRAIN_EFFECT(e) ((e == EFFECT_MISTY_TERRAIN) || (e == EFFECT_GRASSY_TERRAIN) || (e == EFFECT_PSYCHIC_TERRAIN) || (e == EFFECT_ELECTRIC_TERRAIN))

#define IS_SUN_ABILITY(a) ((a == ABILITY_DROUGHT) || (a == ABILITY_DESOLATE_LAND) || (a == ABILITY_ORICHALCUM_PULSE))
#define IS_RAIN_ABILITY(a) ((a == ABILITY_DRIZZLE) || (a == ABILITY_PRIMORDIAL_SEA))
#define IS_SAND_ABILITY(a) ((a == ABILITY_SAND_STREAM) || (a == ABILITY_SAND_SPIT))
#define IS_HAIL_ABILITY(a) ((a == ABILITY_SNOW_WARNING) || (a == ABILITY_DESOLATE_LAND) || (a == ABILITY_ORICHALCUM_PULSE))

#define IS_WEATHER_ABILITY(a) (IS_SUN_ABILITY(a) || IS_RAIN_ABILITY(a) || IS_SAND_ABILITY(a) || IS_HAIL_ABILITY(a))

#define IS_MISTY_ABILITY(a) (a == ABILITY_MISTY_SURGE)
#define IS_GRASSY_ABILITY(a) ((a == ABILITY_GRASSY_SURGE) || (a == ABILITY_SEED_SOWER))
#define IS_PSYCHIC_ABILITY(a) (a == ABILITY_PSYCHIC_SURGE)
#define IS_ELECTRIC_ABILITY(a) (a == ABILITY_ELECTRIC_SURGE)

#define IS_TERRAIN_ABILITY(a) (IS_MISTY_ABILITY(a) || IS_GRASSY_ABILITY(a) || IS_PSYCHIC_ABILITY(a) || IS_ELECTRIC_ABILITY(a))

static float GetMoveRating(u16 moveId, u16 speciesId, u8 natureId, u8 evs, u8 abilityNum, u16 * currentMoves) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct Nature * nature = &(gNatureInfo[natureId]);
    const struct BattleMove * move, * currentMove;
    s32 i;

    // Move counters
    u8 numPhysical = 0;
    u8 numSpecial = 0;
    u8 numStatus = 0;
    u8 numOfType = 0;

    // Stat Changing Effects
    u8 numStatChangingEffect = 0;
    u8 numOffStatBoostingEffect = 0;
    u8 numDefStatBoostingEffect = 0;
    u8 numSpeedStatBoostingEffect = 0;
    u8 numSpeedControlEffect = 0;

    // Other Effects
    u8 numFieldOrAllyTarget = 0;
    u8 numConfusionEffect = 0;
    u8 numStatusEffect = 0;

    // Move weather/terrain effects
    u16 weatherEffect = 0;
    u16 terrainEffect = 0;

    // Move for calculating rating
    move = &(gBattleMoves[moveId]);

    // Check existing moves (skip last)
    for(i = 0; i < MAX_MON_MOVES - 1; i++) 
    {
        // Move is not null
        if (currentMoves[i] != MOVE_NONE)
        {
            // Reject duplicates
            if (currentMoves[i] == moveId)
                return 0; 

            currentMove = &(gBattleMoves[currentMoves[i]]);

            // Status Move (Fake Out is also considered a status move)
            if ((currentMove->split == SPLIT_STATUS) || IS_SUPPORT_ATTACK(currentMoves[i]))
            {
                // Check if move has weather effect
                if (weatherEffect == 0 && IS_WEATHER_EFFECT(currentMove->effect))
                    weatherEffect = currentMove->effect;

                // Check if move has terrain effect
                else if (terrainEffect == 0 && IS_TERRAIN_EFFECT(currentMove->effect))
                    terrainEffect = currentMove->effect;

                // If the move is a field effect (both opponents and all players)
                if (IS_FIELD_OR_ALLY_TARGET(move->target))
                    numFieldOrAllyTarget++;

                // If the current move is a stat changing effect
                if (IS_STAT_CHANGING_EFFECT(currentMove->effect)) 
                {   
                    // Increment stat changing effect counter
                    numStatChangingEffect++;

                    // Check individual boosting effect types

                    // Offensive boosting effect
                    if (IS_OFF_BOOSTING_EFFECT(move->effect))
                        numOffStatBoostingEffect++;

                    // Defensive boosting effect
                    if (IS_DEF_BOOSTING_EFFECT(move->effect))
                        numDefStatBoostingEffect++;

                    // Speed boosting effect
                    if (IS_SPEED_BOOSTING_EFFECT(move->effect))
                        numSpeedStatBoostingEffect++;

                    // Speed control effect
                    if (IS_SPEED_CONTROL_EFFECT(move->effect))
                        numSpeedControlEffect++;
                }


                // If the move is a confusion effect
                else if (IS_CONFUSION_EFFECT(currentMove->effect) == TRUE)
                    numConfusionEffect++;
                // If the move is a status effect
                else if (IS_STATUS_EFFECT(currentMove->effect) == TRUE)
                    numStatusEffect++;

                numStatus++;
            }
            else // Physical / Special Move
            {
                // Dynamic (split-switching) attack
                if (IS_DYNAMIC_ATTACK(moveId)) {
                    // Get both attack, special attack modifiers
                    float atkMod = GET_ATK_STAT_MULTIPLIER(nature, evs);
                    float spaMod = GET_SPATK_STAT_MULTIPLIER(nature, evs);

                    // Boost highest stat

                    // Physical stat
                    if (spaMod > atkMod)
                        numSpecial++;
                    else // Special stat
                        numPhysical++;
                }
                else // Standard Attack
                {   
                    // Physical move
                    if (currentMove->split == SPLIT_PHYSICAL)
                        numPhysical++;
                    else // Special move
                        numSpecial++;
                }

                if (move->type == currentMove->type) {
                    // Check if move is a duplicate
                    if (
                        (move->split == currentMove->split) && 
                        ((!IS_DOUBLES()) || (move->target == currentMove->target)) &&
                        (MAX(move->priority,0) == MAX(currentMove->priority,0))
                    )
                        return 0; // No duplicate moves

                    numOfType++;
                }
            }
        }
    }

    // Check if move is in never select list
    for(i=0; moveNeverSelectList[i] != MOVE_NONE; i++) {
        if (moveNeverSelectList[i] == moveId)
            return 0; // Never select
    }

    // Check if move is in always select list
    for(i=0; moveAlwaysSelectList[i] != MOVE_NONE; i++) {
        if (moveAlwaysSelectList[i] == moveId)
            return 999; // Always select
    }

    // Might be updated
    u8 type = move->type;
    u8 accuracy = move->accuracy;
    u8 priority = MIN(MAX(move->priority, BFG_MOVE_MIN_PRIORITY_VALUE), BFG_MOVE_MAX_PRIORITY_VALUE);
    u8 hits = MAX(move->strikeCount, 1); // At least 1

    // Move power (if modified)
    u16 power = move->power;

    // Move rating (Casted to u16 at the end)
    float rating = BFG_MOVE_BASE_RATING;

    // Switch on move target
    switch(move->target) {
        // Entry Hazards
        case MOVE_TARGET_OPPONENTS_FIELD: {
            if (numFieldOrAllyTarget < BFG_MOVE_MAX_FIELD_OR_ALLY_TARGET)
                rating *= BFG_MOVE_HAZARD_MODIFIER;
            else 
                return 0; // Skip
        }; 
        break;
        // Random targeting move
        case MOVE_TARGET_RANDOM: 
            if (IS_DOUBLES())
                rating *= BFG_MOVE_RANDOM_HIT_MULTIPLIER;
            break;
        // Ally-targeting move
        case MOVE_TARGET_ALLY: 
            if (IS_DOUBLES() && (numFieldOrAllyTarget < BFG_MOVE_MAX_FIELD_OR_ALLY_TARGET))
                rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
            else // Singles
                return 0; // Cannot be used
            break;
        // Ally-damaging spread move
        case MOVE_TARGET_FOES_AND_ALLY:
            if (IS_DOUBLES()) {
                rating *= BFG_MOVE_ALLY_HIT_MULTIPLIER;
                rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
            }
            break;
        // Field effects
        case MOVE_TARGET_ALL_BATTLERS:
            if (numFieldOrAllyTarget < BFG_MOVE_MAX_FIELD_OR_ALLY_TARGET)
                rating *= BFG_MOVE_FIELD_MODIFIER;
            else 
                return 0; // Skip
        // Standard spread move
        case MOVE_TARGET_BOTH:
            if (IS_DOUBLES())
                if (move->split != SPLIT_STATUS)
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
        break;
    }

    #if BFG_MOVE_ABILITY_MODIFIERS == TRUE
    // Get the ability for the species
    u16 ability = species->abilities[abilityNum];

    switch(ability) {
        // Crit Modifier
        case ABILITY_SNIPER:
        case ABILITY_SUPER_LUCK:
            if ((move->highCritRatio == TRUE) || (move->effect == EFFECT_FOCUS_ENERGY))
                rating *= BFG_MOVE_ABILITY_MODIFIER; // Natural high crit chance, or focus energy
        // Stat-Changing
        case ABILITY_SPEED_BOOST: 
        // Any other stat-boosting abilities
        case ABILITY_MOODY: 
            numStatChangingEffect++;
        break;
        // Type-Changing
        case ABILITY_NORMALIZE: 
            type = TYPE_NORMAL;
        break;
        case ABILITY_AERILATE: 
            if (type == TYPE_NORMAL) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_FLYING;
            }
        break;
        case ABILITY_PIXILATE: 
            if (type == TYPE_NORMAL)  {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_FAIRY;
            }
        break;
        case ABILITY_REFRIGERATE: 
            if (type == TYPE_NORMAL) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_ICE;
            }
        break;
        case ABILITY_GALVANIZE: 
            if (type == TYPE_NORMAL) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_ELECTRIC;
            }
        break;
        case ABILITY_LIQUID_VOICE: 
            if (move->soundMove == TRUE) {
                // This doesn't actually increase damage aside from STAB, but
                // we might as well increase the chances anyway :)
                rating *= BFG_MOVE_ABILITY_MODIFIER; 
                type = TYPE_WATER;
            }
        break;
        // Rain Affected Abilities
        case ABILITY_SWIFT_SWIM:
        case ABILITY_RAIN_DISH:
        case ABILITY_HYDRATION:
        case ABILITY_DRY_SKIN: 
            // Move has rain effect
            if (IS_RAIN_EFFECT(move->effect))
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        // Sun Affected Abilities
        case ABILITY_CHLOROPHYLL:
        case ABILITY_SOLAR_POWER: 
        case ABILITY_FLOWER_GIFT: // Cherrim
        case ABILITY_HARVEST: 
            // Move has sun effect
            if (IS_SUN_EFFECT(move->effect))
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        // Sand Affected Abilities
        case ABILITY_SAND_RUSH: 
        case ABILITY_SAND_FORCE: 
        case ABILITY_SAND_VEIL: 
            // Move has sand effect
            if (IS_SAND_EFFECT(move->effect))
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        // Hail Affected Abilities
        case ABILITY_ICE_BODY: 
        case ABILITY_ICE_FACE: // Eiscue
        case ABILITY_SNOW_CLOAK:
        case ABILITY_SLUSH_RUSH: 
            // Move has hail effect
            if (IS_HAIL_EFFECT(move->effect))
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        // Rating Changing
        case ABILITY_PUNK_ROCK:
            if (move->soundMove == TRUE)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_STEELWORKER:
            if (type == TYPE_STEEL)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_STRONG_JAW: 
            if (move->bitingMove == TRUE)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_MEGA_LAUNCHER: 
            if (move->ballisticMove == TRUE)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_TOUGH_CLAWS: 
            if (move->makesContact == TRUE)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_TECHNICIAN: 
            if (move->power <= 60)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_IRON_FIST: 
            if (move->punchingMove == TRUE)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_HUGE_POWER: 
            if (move->split == SPLIT_PHYSICAL)
                rating *= fpow(BFG_MOVE_ABILITY_MODIFIER, 2);
        case ABILITY_WATER_BUBBLE: 
            if (type == TYPE_WATER && (move->split != SPLIT_STATUS))
                rating *= fpow(BFG_MOVE_ABILITY_MODIFIER, 2); // 2x power for water moves
        break;
        case ABILITY_PRANKSTER:
            if (move->split == SPLIT_STATUS)
                priority = MIN((priority + 1), BFG_MOVE_MAX_PRIORITY_VALUE); // +1 Priority
        case ABILITY_ELECTRIC_SURGE:
        case ABILITY_VITAL_SPIRIT:
        case ABILITY_MISTY_SURGE:
        case ABILITY_SWEET_VEIL:
        case ABILITY_INSOMNIA:
            if (moveId == MOVE_REST)
                return 0; // Cannot fall asleep
        case ABILITY_PROTEAN: 
        case ABILITY_LIBERO:
            // If move does not have STAB bonus, apply it
            if (!(IS_TYPE(species->types[0], species->types[1], type)))
                rating *= BFG_MOVE_STAB_MULTIPLIER;
        break;
    }
    #endif

    // Apply general weather changes

    // Rain effect / ability
    if (IS_RAIN_EFFECT(weatherEffect) || IS_RAIN_ABILITY(ability)) {
        if ((moveId == MOVE_THUNDER) || (moveId == MOVE_HURRICANE) || (moveId == MOVE_BLEAKWIND_STORM) || (moveId == MOVE_WILDBOLT_STORM) || (moveId == MOVE_SANDSEAR_STORM))
            accuracy = 100; // 100% Accurate in rain
        else if ((moveId == MOVE_WEATHER_BALL)) {
            type = TYPE_WATER; // Change type
            power = 100; // Double move power
        }
        if (move->split != SPLIT_STATUS) {
            if (type == TYPE_WATER)
                rating *= BFG_MOVE_STAB_MULTIPLIER; // 50% boost in rain
            else if (type == TYPE_FIRE)
                rating /= BFG_MOVE_STAB_MULTIPLIER; // 50% reduction in rain
        }
    } 
    // Sun Effect / Ability
    else if (IS_SUN_EFFECT(weatherEffect) || IS_SUN_ABILITY(ability)) {
        if ((moveId == MOVE_THUNDER) || (moveId == MOVE_HURRICANE))
            accuracy = 50; // 50% Accurate in sun
        else if ((moveId == MOVE_WEATHER_BALL)) {
            type = TYPE_FIRE; // Change type
            power = 100; // Double move power
        }
        if (move->split != SPLIT_STATUS) {
            if (type == TYPE_FIRE)
                rating *= BFG_MOVE_STAB_MULTIPLIER; // 50% boost in sun
            else if (type == TYPE_WATER)
                rating /= BFG_MOVE_STAB_MULTIPLIER; // 50% reduction in sun
        }
    } 
    // Sand Effect / Ability
    else if (IS_SAND_EFFECT(weatherEffect) || IS_SAND_ABILITY(ability)) {
        if ((moveId == MOVE_WEATHER_BALL)) {
            type = TYPE_ROCK; // Change type
            power = 100; // Double move power
        }
    } 
    // Hail Effect / Ability
    else if (IS_HAIL_EFFECT(weatherEffect) || IS_HAIL_ABILITY(ability)) {
        if (moveId == MOVE_BLIZZARD)
            accuracy = 100; // 100% accurate in hail / snow
        else if ((moveId == MOVE_WEATHER_BALL)) {
            type = TYPE_ICE; // Change type
            power = 100; // Double move power
        }
    }

    // Apply general terrain changes (If not flying/levitate)
    if ((!(IS_TYPE(species->types[0], species->types[1], TYPE_FLYING)) || (ability == ABILITY_LEVITATE))) {

        // Grassy Terrain Effect / Ability
        if (terrainEffect == EFFECT_GRASSY_TERRAIN || IS_GRASSY_ABILITY(ability)) {
            if ((move->split != SPLIT_STATUS) && (type == TYPE_GRASS))
                rating *= BFG_MOVE_STAB_MULTIPLIER; // 50% boost in grassy terrain
            if (moveId == MOVE_GRASSY_GLIDE) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                priority = MIN((priority + 1), BFG_MOVE_MAX_PRIORITY_VALUE); // +1 Priority
            }
        }
        // Misty Terrain Effect / Ability
        else if (terrainEffect == EFFECT_MISTY_TERRAIN || IS_GRASSY_ABILITY(ability)) {
            if ((move->split != SPLIT_STATUS) && (type == TYPE_DRAGON))
                rating /= BFG_MOVE_STAB_MULTIPLIER; // 50% reduction in misty terrain

            // Status / confusion afflicting moves will be blocked below
        }
        // Psychic Terrain Effect / Ability
        else if (terrainEffect == EFFECT_PSYCHIC_TERRAIN || IS_PSYCHIC_ABILITY(ability)) {
            if (type == TYPE_PSYCHIC)
                rating *= BFG_MOVE_STAB_MULTIPLIER; // 50% boost in psychic terrain
            if (IS_DOUBLES()) {
                rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                power += power; // x2
            }
            rating *= BFG_MOVE_ABILITY_MODIFIER;
        }
        // Electric Terrain Effect / Ability
        else if (terrainEffect == EFFECT_ELECTRIC_TERRAIN || IS_ELECTRIC_ABILITY(ability)) {
            if (type == TYPE_ELECTRIC)
                rating *= BFG_MOVE_STAB_MULTIPLIER; // 50% boost in electric terrain

            if (moveId == MOVE_RISING_VOLTAGE) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                power += power; // x2 
            }
        }
    }

    // Status moves
    if ((move->split == SPLIT_STATUS) || IS_SUPPORT_ATTACK(moveId)) {

        // Check if Max. Status moves is reached
        if (numStatus >= BFG_MOVE_MAX_STATUS)
            return 0;

        // If the current move is a confusion effect, and we have reached the limit for confusion effects
        if ((IS_CONFUSION_EFFECT(move->effect) == TRUE) && (numConfusionEffect >= BFG_MOVE_MAX_CONFUSION_EFFECT))
            return 0;

        // If the current move is a status effect, and we have reached the limit for status effects
        if ((IS_STATUS_EFFECT(move->effect) == TRUE) && (numStatusEffect >= BFG_MOVE_MAX_STATUS_EFFECT))
            return 0;

        // If the current move is a stat changing effect
        if (IS_STAT_CHANGING_EFFECT(move->effect)) 
        {   
            // If we have reached the limit for stat changing effects
            if (numStatChangingEffect >= BFG_MOVE_MAX_STAT_CHANGING_EFFECT)
                return 0;

            // Check individual boosting effect types

            // Offensive boosting effect, and we have reached the offensive boosting effect limit
            if (IS_OFF_BOOSTING_EFFECT(move->effect) && (numOffStatBoostingEffect >= BFG_MOVE_MAX_OFF_BOOSTING_EFFECT))
                return 0;

            // Defensive boosting effect, and we have reached the defensive boosting effect limit
            if (IS_DEF_BOOSTING_EFFECT(move->effect) && (numDefStatBoostingEffect >= BFG_MOVE_MAX_DEF_BOOSTING_EFFECT))
                return 0;

            // Speed boosting effect, and we have reached the speed boosting effect limit
            if (IS_SPEED_BOOSTING_EFFECT(move->effect) && (numSpeedStatBoostingEffect >= BFG_MOVE_MAX_SPEED_BOOSTING_EFFECT))
                return 0;

            // Speed control effect, and we have reached the speed control effect limit
            if (IS_SPEED_CONTROL_EFFECT(move->effect) && (numSpeedControlEffect >= BFG_MOVE_MAX_SPEED_CONTROL_EFFECT))
                return 0;
        }

        // If the move is a field or ally-targeting move, or a non-protecting self-targeting move
        if (IS_FIELD_OR_ALLY_TARGET(move->target) || (move->target == MOVE_TARGET_USER) || (!(IS_PROTECTING_EFFECT(move->effect)))) {
            
            if ((numSpeedStatBoostingEffect > 0) && (BFG_MOVE_SPEED_BOOST_ALLOW_SUPPORT == FALSE)) 
                return 0; // Not eligible
            
            if ((numSpeedControlEffect > 0) && (BFG_MOVE_SPEED_CONTROL_ALLOW_SUPPORT == FALSE)) 
                return 0; // Not eligible

            if ((numOffStatBoostingEffect > 0) && (BFG_MOVE_OFF_BOOST_ALLOW_SUPPORT == FALSE)) 
                return 0; // Not eligible
            
            if ((numDefStatBoostingEffect > 0) && (BFG_MOVE_DEF_BOOST_ALLOW_SUPPORT == FALSE)) 
                return 0; // Not eligible
        }

        // Increase selection chance if invested in def/spdef
        rating *= GET_POS_EV_MULTIPLIER(evs, F_EV_SPREAD_HP);
        rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs);
        rating *= GET_DEF_STAT_MULTIPLIER(nature, evs);

        #if BFG_MOVE_EFFECT_MODIFIERS == TRUE
        // Switch on move effect
        switch(move->effect) {
            // Multi-Stat Boosters
            case EFFECT_NO_RETREAT:
                if ((numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK) || (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK))
                    return 0;
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_BULK_UP:
            case EFFECT_COIL: 
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break; 
            case EFFECT_CURSE: 
                if (!(IS_TYPE(species->types[0], species->types[1], TYPE_GHOST))) {
                    if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                        return 0;
                    rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                    rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                    rating *= GET_SPEED_NEG_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // -1
                }
            break;
            case EFFECT_VICTORY_DANCE: 
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_DRAGON_DANCE:
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_SHELL_SMASH: 
                if ((numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK) || (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK))
                    return 0;
                rating *= fpow(GET_ATK_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
                rating *= fpow(GET_SPEED_NEG_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_ATTACK_SPATK_UP:
                if ((numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK) || (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK))
                    return 0;
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_GEOMANCY:
                if (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
                rating *= fpow(GET_SPDEF_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
                rating *= BFG_MOVE_MULTI_TURN_MODIFIER;
            break;
            case EFFECT_QUIVER_DANCE: 
                if (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_SHIFT_GEAR: 
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_TAKE_HEART:
            case EFFECT_CALM_MIND: 
                if (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_COSMIC_POWER: 
            case EFFECT_STOCKPILE: 
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // Attack Boosting
            case EFFECT_BELLY_DRUM: 
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= fpow(GET_ATK_STAT_MULTIPLIER(nature, evs), 6) * BFG_MOVE_STAT_BOOST_MULTIPLIER;
            break;
            case EFFECT_ATTACK_UP_2:
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= fpow(GET_ATK_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_ATTACK_UP_USER_ALLY:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
            case EFFECT_ATTACK_ACCURACY_UP:
            case EFFECT_ATTACK_UP:
                if (numPhysical < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // Defense Boosting
            case EFFECT_DEFENSE_UP_3:
                rating *= fpow(GET_DEF_STAT_MULTIPLIER(nature, evs), 3) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +3
            break;
            case EFFECT_STUFF_CHEEKS:
                // Only usable holding a berry
                rating *= BFG_MOVE_LIMITED_MODIFIER;
            case EFFECT_DEFENSE_UP_2:
                rating *= fpow(GET_DEF_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_DEFENSE_CURL:
            case EFFECT_DEFENSE_UP:
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // Special Attack Boosting
            case EFFECT_SPECIAL_ATTACK_UP_3:
                if (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature, evs), 3) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +3
            break;
            case EFFECT_SPECIAL_ATTACK_UP_2:
                if (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_SPECIAL_ATTACK_UP:
                if (numSpecial < BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK)
                    return 0;
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // Special Defense Boosting
            case EFFECT_SPECIAL_DEFENSE_UP_2: 
                rating *= fpow(GET_SPDEF_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_SPECIAL_DEFENSE_UP: 
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // Speed Boosting
            case EFFECT_AUTOTOMIZE:
            case EFFECT_SPEED_UP_2:
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature, evs), 2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_SPEED_UP: 
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // Misc. Stat Changes (2 Stages)
            case EFFECT_ACCURACY_DOWN_2:
            case EFFECT_EVASION_UP_2:
            case EFFECT_MINIMIZE: 
                rating *= fpow(BFG_MOVE_LUCK_MODIFIER, 2);
            case EFFECT_ACCURACY_UP_2:
            case EFFECT_ATTACK_DOWN_2:
            case EFFECT_DEFENSE_DOWN_2:
            case EFFECT_SPECIAL_ATTACK_DOWN_2:
            case EFFECT_SPECIAL_DEFENSE_DOWN_2:
            case EFFECT_SPEED_DOWN_2:
            case EFFECT_EVASION_DOWN_2:
                rating *= fpow(BFG_MOVE_MISC_STAT_MODIFIER, 2);
            break;
            // Misc. Stat Changes
            case EFFECT_ACCURACY_DOWN: 
            case EFFECT_EVASION_UP:
                rating *= BFG_MOVE_LUCK_MODIFIER;
            case EFFECT_ACCURACY_UP:
            case EFFECT_ATTACK_DOWN:
            case EFFECT_DEFENSE_DOWN:
            case EFFECT_SPECIAL_ATTACK_DOWN:
            case EFFECT_SPECIAL_DEFENSE_DOWN:
            case EFFECT_SPEED_DOWN:
            case EFFECT_EVASION_DOWN:
                rating *= BFG_MOVE_MISC_STAT_MODIFIER;
            break;
            // Status Afflicting Moves
            case EFFECT_DARK_VOID: 
            case EFFECT_PARALYZE: 
            case EFFECT_SLEEP: 
            case EFFECT_YAWN:
                // Luck-based status moves
                rating *= BFG_MOVE_LUCK_MODIFIER;
            case EFFECT_WILL_O_WISP: 
            case EFFECT_POISON: 
            case EFFECT_TOXIC: 
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // Volatile Status Moves
            case EFFECT_ATTRACT:
                // Only effects opposite gender
                rating *= BFG_MOVE_LIMITED_MODIFIER;
            case EFFECT_SWAGGER:
            case EFFECT_CONFUSE:
            case EFFECT_FLATTER:
                // Luck-based volatile status moves
                rating *= BFG_MOVE_LUCK_MODIFIER;

                // Confusion Effects
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // case EFFECT_WORRY_SEED:
            case EFFECT_LEECH_SEED:
            // case EFFECT_HEAL_BLOCK: 
            // case EFFECT_MEAN_LOOK: 
            case EFFECT_FAKE_OUT:
            case EFFECT_DISABLE: 
            case EFFECT_ENCORE: 
            case EFFECT_TAUNT: 
            case EFFECT_FEINT: 
                rating *= BFG_MOVE_VOLATILE_MULTIPLIER;
            break;
            // Weather Setting Moves
            case EFFECT_RAIN_DANCE:
            case EFFECT_SUNNY_DAY:
            case EFFECT_SANDSTORM: 
            case EFFECT_SNOWSCAPE:
            case EFFECT_HAIL:
                if (weatherEffect > 0 || IS_WEATHER_ABILITY(ability))
                    return 0; // Already have weather effect / ability
                rating *= BFG_MOVE_WEATHER_MULTIPLIER;
            break;
            // Terrain Setting Moves
            case EFFECT_ELECTRIC_TERRAIN: 
            case EFFECT_PSYCHIC_TERRAIN:
            case EFFECT_GRASSY_TERRAIN:
            case EFFECT_MISTY_TERRAIN:
                if (terrainEffect > 0 || IS_TERRAIN_ABILITY(ability))
                    return 0; // Already have terrain effect / ability
                rating *= BFG_MOVE_TERRAIN_MULTIPLIER;
            break;
            // Doubles Recovery Moves
            case EFFECT_JUNGLE_HEALING:
            case EFFECT_HEAL_PULSE: 
                if (!IS_DOUBLES())
                    break; // Not doubles
                rating *= BFG_MOVE_DOUBLES_MULTIPLIER * BFG_MOVE_RECOVERY_MODIFIER;
            break;
            // Sun Boosted Recovery Moves
            case EFFECT_MORNING_SUN: 
            case EFFECT_SYNTHESIS: 
            case EFFECT_MOONLIGHT:
                if (IS_WEATHER_EFFECT(weatherEffect) || IS_WEATHER_ABILITY(ability)){
                    if ((weatherEffect == EFFECT_SUNNY_DAY) || IS_SUN_ABILITY(ability))
                        rating *= BFG_MOVE_ABILITY_MODIFIER; // 75% in Sun
                    else
                        rating /= BFG_MOVE_ABILITY_MODIFIER; // 25% Elsewhere
                }
            // Recovery Moves
            case EFFECT_RESTORE_HP: 
            case EFFECT_SOFTBOILED: 
            case EFFECT_SHORE_UP: 
            case EFFECT_ROOST: 
                rating *= BFG_MOVE_RECOVERY_MODIFIER;
            break;
            // Rest (Multi-Turn Move)
            case EFFECT_REST: 
                rating *= BFG_MOVE_MULTI_TURN_MODIFIER;
                rating *= BFG_MOVE_RECOVERY_MODIFIER;
            break;
            case EFFECT_STRENGTH_SAP: 
                rating *= BFG_MOVE_ABSORB_MODIFIER;
            break;
            // Pivoting Moves
            case EFFECT_BATON_PASS:
                // Less stat-changing moves than required for baton pass
                if (numStatChangingEffect < BFG_MOVE_BATON_PASS_MINIMUM)
                    return 0; // No baton pass without status moves
                rating *= BFG_MOVE_PIVOT_MODIFIER;
            break;
            case EFFECT_TELEPORT: 
                // Higher selection chance for low-speed Pokemon
                rating *= GET_SPEED_NEG_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER;
            case EFFECT_PARTING_SHOT: 
                if (numStatChangingEffect > 0)
                    return 0; // No pivots with stat changing effects
                rating *= BFG_MOVE_PIVOT_MODIFIER;
            break;
            // Speed Control Moves
            case EFFECT_TRICK_ROOM:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                rating *= fpow(GET_SPEED_NEG_MULTIPLIER(nature, evs), 6);
                rating *= BFG_MOVE_SPEED_CONTROL_MODIFIER;
                DebugPrintf("Trick Room Rating: %d", (rating*100));
            break;
            case EFFECT_TAILWIND:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature, evs), 2);
                rating *= BFG_MOVE_SPEED_CONTROL_MODIFIER;
                DebugPrintf("Tailwind Rating: %d", (rating*100));
            break;
            // Item Stealing / Blocking Moves
            case EFFECT_MAGIC_ROOM: 
            case EFFECT_EMBARGO: 
                rating *= BFG_MOVE_ITEM_REMOVE_MODIFIER;
            break;
            // Item Switching Moves
            case EFFECT_TRICK: 
                rating *= BFG_MOVE_ITEM_SWITCH_MODIFIER;
            break;
            // Limited-target moves
            case EFFECT_SLEEP_TALK:
            case EFFECT_SWALLOW: 
            case EFFECT_SNATCH: 
                rating *= BFG_MOVE_LIMITED_MODIFIER;
            break;
            // Substitute Moves
            // case EFFECT_SHED_TAIL: 
                // rating *= BFG_MOVE_PIVOT_MODIFIER;
            case EFFECT_SUBSTITUTE:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                rating *= BFG_MOVE_SUBSTITUTE_MODIFIER;
            break;
            // Endure
            case EFFECT_ENDURE:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                rating *= BFG_MOVE_ENDURE_MODIFIER;
            break;
            // Protecting moves
            case EFFECT_MAT_BLOCK:
            case EFFECT_PROTECT:
                // Special protecting moves (e.g. Spiky Shield, Wide Guard))
                if (IS_SPECIAL_PROTECT(move->effect, moveId)) {
                    // Wide Guard, Quick Guard, etc.
                    if (IS_DOUBLES_PROTECT(moveId)) 
                    {
                        if (IS_DOUBLES())
                            rating *= BFG_MOVE_DOUBLES_PROTECT_MODIFIER; // Doubles-specific protect modifier
                        else
                            return 0; // Move useless outside of doubles
                    } 
                    else // Non-Doubles Special protect move
                        rating *= BFG_MOVE_SPECIAL_PROTECT_MODIFIER; // Special protect modifier
                }

                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;

                rating *= BFG_MOVE_PROTECT_MODIFIER;
            break;
            // Joke moves (The ultimate flex)
            case EFFECT_DO_NOTHING:
                rating *= BFG_MOVE_DO_NOTHING_MODIFIER;
            break;
            default: // Unhandled
                DebugPrintf("Unhandled effect: %d", move->effect);
                rating *= BFG_MOVE_GENERIC_MODIFIER;
            break;
        }

        // Stop if rating is zero
        if (rating <= 0)
            return 0;
        #endif
    }
    else // Physical / Special
    {
        // Offensive move count
        u8 numOffensive = numPhysical + numSpecial;

        // If we already have max. offensive moves, or max. offensive moves of type
        if ((numOfType >= BFG_MOVE_MAX_PER_TYPE) || (numOffensive >= BFG_MOVE_MAX_OFFENSIVE))
            return 0;

        // At least one type duplicate
        if (numOfType > 0)
            // Reduce selection chance for multiple same-type moves
            // e.g. 3 same-typed moves = rating * (0.8f * 0.8f * 0.8f)
            rating *= fpow(BFG_MOVE_DUPLICATE_TYPE_MODIFIER, numOfType);

        // Counter Attacks, Body Press, Foul Play, etc.
        if (IS_DEFENSIVE_ATTACK(moveId)) {

            // Apply hp stat modifier
            rating *= GET_POS_EV_MULTIPLIER(evs, F_EV_SPREAD_HP);
            
            // Move is not body press
            if (moveId != MOVE_BODY_PRESS)
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs); // Apply spdef modifier

            // Apply Def modifier
            rating *= GET_DEF_STAT_MULTIPLIER(nature, evs);
        }
        else if (IS_DYNAMIC_ATTACK(moveId)) // Offensive split-changing attacks
        {
            // Get both attack, special attack modifiers
            float atkMod = GET_ATK_STAT_MULTIPLIER(nature, evs);
            float spaMod = GET_SPATK_STAT_MULTIPLIER(nature, evs);

            // Boost highest stat
            if (spaMod > atkMod)
                rating *= spaMod;
            else
                rating *= atkMod;
        }
        else // General Case
        {
            if (move->split == SPLIT_PHYSICAL) 
            {
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs);
            }
            else // move->split == SPLIT_SPECIAL
            {
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs);
            }
        }

        // Stop if rating is zero
        if (rating <= 0)
            return 0;

        #if BFG_MOVE_EFFECT_MODIFIERS
        // Switch on move effect
        switch(move->effect) {
            // Rating Modifiers
            case EFFECT_OHKO: 
                rating *= BFG_MOVE_LUCK_MODIFIER; 
            break;
            break;
            // Multi-Turn Moves
            case EFFECT_FUTURE_SIGHT: 
            case EFFECT_BIDE: 
                // These moves suck lmao
                rating *= fpow(BFG_MOVE_MULTI_TURN_MODIFIER, 3);
            break;
            // Two-Turn Moves
            case EFFECT_METEOR_BEAM:
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER;
            case EFFECT_SEMI_INVULNERABLE:
            case EFFECT_TWO_TURNS_ATTACK: 
                rating *= BFG_MOVE_MULTI_TURN_MODIFIER;
            break;
            // Solar Beam
            case EFFECT_SOLAR_BEAM:
                // Only apply multi-turn modifier if ability is not drought or desolate land
                if ((weatherEffect == EFFECT_SUNNY_DAY) || IS_SUN_ABILITY(ability))
                    rating *= BFG_MOVE_ABILITY_MODIFIER;
                else
                    rating *= BFG_MOVE_MULTI_TURN_MODIFIER;
            break;
            // Interruptable Moves
            case EFFECT_FOCUS_PUNCH:
                rating *= BFG_MOVE_INTERRUPT_MODIFIER;
            break;
            // Recharging Moves
            case EFFECT_RECHARGE:
                rating *= BFG_MOVE_RECHARGE_MODIFIER;
            break;
            // Limited Effect Moves
            case EFFECT_SYNCHRONOISE: 
            case EFFECT_LAST_RESORT:
            case EFFECT_DREAM_EATER: 
            case EFFECT_SLEEP_HIT:
            case EFFECT_SPIT_UP:
            case EFFECT_SNORE:
                rating *= BFG_MOVE_LIMITED_MODIFIER;
            break;
            // Rampaging Moves
            case EFFECT_RAMPAGE:
                rating *= BFG_MOVE_RAMPAGE_MODIFIER;
            break;
            // Self-KOing moves
            case EFFECT_EXPLOSION:
                rating *= BFG_MOVE_SELF_KO_MODIFIER;
            break;
            // Pivoting Moves
            case EFFECT_HIT_ESCAPE: 
                if (numStatChangingEffect > 0)
                    return 0; // No pivots with stat changing effects
                rating *= BFG_MOVE_PIVOT_MODIFIER;
            break;
            // Status Effects
            case EFFECT_BURN_HIT: 
            #if B_USE_FROSTBITE == TRUE
            case EFFECT_FROSTBITE_HIT: 
            #else
            case EFFECT_FREEZE_HIT: 
            #endif
            case EFFECT_PARALYZE_HIT: 
            case EFFECT_DIRE_CLAW: 
                rating *= BFG_MOVE_LUCK_MODIFIER;
            case EFFECT_MORTAL_SPIN:
            case EFFECT_POISON_FANG:  
            case EFFECT_POISON_HIT: 
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // Volatile Status Effects
            case EFFECT_FLINCH_STATUS: 
            case EFFECT_CONFUSE_HIT: 
            case EFFECT_FLINCH_HIT: 
                rating *= BFG_MOVE_LUCK_MODIFIER;
            case EFFECT_SYRUP_BOMB: 
            case EFFECT_SALT_CURE: 
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // Stat Changing Effects
            case EFFECT_ATTACK_UP_HIT:
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_DEFENSE_UP2_HIT:
                rating *= fpow(GET_DEF_STAT_MULTIPLIER(nature, evs),2) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +2
            break;
            case EFFECT_DEFENSE_UP_HIT:
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_SPECIAL_ATTACK_UP_HIT:
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            // case EFFECT_SPECIAL_DEFENSE_UP_HIT:
            case EFFECT_SPEED_UP_HIT: 
            case EFFECT_RAPID_SPIN:
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs) * BFG_MOVE_STAT_BOOST_MULTIPLIER; // +1
            break;
            case EFFECT_KNOCK_OFF:
                power = 97; // 50% boost from item
            // Item Stealing Moves
            case EFFECT_BUG_BITE:
            case EFFECT_THIEF:
                rating *= BFG_MOVE_ITEM_REMOVE_MODIFIER;
            // Healing Moves
            case EFFECT_MATCHA_GOTCHA: 
            case EFFECT_ABSORB:
                rating *= BFG_MOVE_ABSORB_MODIFIER;
            break;
            // Always Crit Moves
            case EFFECT_ALWAYS_CRIT:
                rating *= 1.5f; // Crit damage bonus
            // Power / etc. Fixes
            case EFFECT_MULTI_HIT:
                if (ability == ABILITY_SKILL_LINK)
                    hits = 5; // Garuanteed 5 hits
                else
                    hits = 3; // Avg. Multi-Hit
            break;
            case EFFECT_FRUSTRATION:
            case EFFECT_RETURN:
                power = 102;
            break;
            case EFFECT_HIT_ENEMY_HEAL_ALLY: 
                if (IS_DOUBLES())
                    rating *= (BFG_MOVE_RECOVERY_MODIFIER * BFG_MOVE_DOUBLES_MULTIPLIER);
                // Otherwise, just a normal attack
            break;
            // Counter Attacks
            // These aren't status moves, but work best on bulky 
            // Pokemon and should NOT be the only attack
            case EFFECT_COUNTER: 
            case EFFECT_MIRROR_COAT: 
            case EFFECT_METAL_BURST: 
                rating *= BFG_MOVE_COUNTER_MODIFIER;
            break;
            case EFFECT_HIT: 
                rating *= BFG_MOVE_GENERIC_MODIFIER;
            break;
            default: // Unhandled
                DebugPrintf("Unhandled effect: %d", move->effect);
                rating *= BFG_MOVE_GENERIC_MODIFIER;
            break;
        }

        // Stop if rating is zero
        if (rating <= 0)
            return 0;
        #endif

        // If either one of the species's types matches the move
        if (IS_TYPE(species->types[0],species->types[1], type)) 
        {
            // 1.5x boost
            rating *= BFG_MOVE_STAB_MULTIPLIER;
        }

        // Apply secondary effect rating
        if (move->secondaryEffectChance > 0) {
            // Parse secondary effect chance (e.g. 60% -> 0.6), and apply modifier
            rating *= 1.0f + (NORMALISE(move->secondaryEffectChance) * BFG_MOVE_EFFECT_CHANCE_MULTIPLIER);
        }

        // Add power (* hits count) to move rating
        if (power > 0 && hits > 0)
            rating *= NORMALISE(power * hits);
    }

    // Apply accuracy mod
    if (accuracy > 0)
        rating *= NORMALISE(accuracy);

    // Apply priority mod
    if (priority != 0) 
        rating *= fpow(BFG_MOVE_PRIORITY_MULTIPLIER, priority);

    // Return the rating
    return rating;
}
#endif

static u8 GetSpeciesMoves(u16 speciesId, u8 index, u8 nature, u8 evs, u8 abilityNum, u16 requiredMove) {

    s32 i,j, moveCount;
    u16 moveId, levelUpMoves, teachableMoves;
    u8 friendship = FRIENDSHIP_MAX;

    u16 moves[MAX_MON_MOVES] = {
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
    };

    const struct LevelUpMove* levelUpLearnset;
    const u16 * teachableLearnset;

    moveCount = 0;
    levelUpMoves = 0;
    teachableMoves = 0;

    #if BFG_MOVE_SELECT_RANDOM == TRUE
    u16 moveIndex;
    #else
    float rating, bestRating; // For heuristic
    #endif

    #if BFG_MOVE_ALLOW_LEVEL_UP == TRUE
    levelUpLearnset = GetSpeciesLevelUpLearnset(speciesId);
    while(levelUpLearnset[levelUpMoves].move != LEVEL_UP_MOVE_END)
        levelUpMoves++;
    #endif

    #if BFG_MOVE_ALLOW_TEACHABLE == TRUE
    teachableLearnset = GetSpeciesTeachableLearnset(speciesId);
    while(teachableLearnset[teachableMoves] != MOVE_UNAVAILABLE)
        teachableMoves++;
    #endif

    DebugPrintf("%d level up moves, %d teachable moves ...", levelUpMoves, teachableMoves);

    // Duplicate move tracker
    u16 failures = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        DebugPrintf("Selecting move %d ...", i);

        moveId = MOVE_NONE;

        // First move index, and required move is set
        if (i == 0 && requiredMove != MOVE_NONE) {
            moveId = requiredMove;
        }
        else  // General case
        {
            // While no move found, and failure limit has not been reached
            while((moveId == MOVE_NONE) && (failures < BFG_MOVE_SELECT_FAILURE_LIMIT)) {
                #if BFG_MOVE_SELECT_RANDOM == TRUE
                moveIndex = Random() % (teachableMoves + levelUpMoves);
                // Teachable learnset
                if (moveIndex >= levelUpMoves) 
                {
                    moveIndex %= levelUpMoves;

                    moveId = teachableLearnset[moveIndex];
                }
                else // Level-up learnset
                {
                    moveId = levelUpLearnset[moveIndex].move;
                }
                // Check previous moves
                for(j = 0; j < i; j++) {
                    if (moves[j] == moveId) {
                        moveId = MOVE_NONE;
                        failures++;
                        break;
                    }
                }

                // Move found
                if moveId != MOVE_NONE:
                    moveCount++;
                #else
                // Default rating
                bestRating = 0;

                DebugPrintf("Processing level up moves ...");

                for(j=0; j < levelUpMoves; j++) 
                {
                    rating = GetMoveRating(levelUpLearnset[j].move, 
                        speciesId, nature, evs, abilityNum, moves);

                    if (rating > bestRating || ((rating == bestRating) && RANDOM_BOOL())) {
                        moveId = levelUpLearnset[j].move;
                        bestRating = rating;
                    }
                }

                DebugPrintf("Processing teachable moves ...");

                for(j=0; j < teachableMoves; j++)
                {
                    rating = GetMoveRating(teachableLearnset[j], 
                        speciesId, nature, evs, abilityNum, moves);

                    if (rating > bestRating || ((rating == bestRating) && RANDOM_BOOL())) {
                        moveId = teachableLearnset[j];
                        bestRating = rating;
                    }
                }

                // Failed to find move
                if (bestRating == 0) {
                    moveId = MOVE_NONE;
                    failures++;
                }
                else // Found move
                    moveCount++;
                #endif
            }
        }

        // Otherwise, left as MOVE_NONE
        
        // Set the move slot data
        SetMonMoveSlot(&gEnemyParty[index], moveId, i);
        moves[i] = moveId;

        // Frustration is more powerful the
        // lower the pokemon's friendship is.
        if (moveId == MOVE_FRUSTRATION)
            friendship = 0;  
    }
    
    // Set friendship / held item
    SetMonData(&gEnemyParty[index], MON_DATA_FRIENDSHIP, &friendship);

    return moveCount; // Move count
}

#if BFG_NO_ITEM_SELECTION_CHANCE != 1
static u16 GetSpeciesItem(u16 speciesId, u8 nature, u8 evs, u8 abilityNum) {
    return ITEM_NONE; // TODO
}
#endif 

static bool32 GenerateTrainerPokemon(u16 speciesId, u8 index, u32 otID, u8 fixedIV, u8 level, u8 formeIndex) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct FormChange * formChanges;

    u8 evs, nature, abilityNum, moveCount;

    // Move / item placeholder
    u16 move = MOVE_NONE;
    u16 item = ITEM_NONE;

    // Forme ID placeholder
    u16 formeId = speciesId;

    // Forme is not default
    if (formeIndex != FORME_DEFAULT) {
        // Get the species form change table
        formChanges = GetSpeciesFormChanges(speciesId);

        // Get the forme change target species
        formeId = formChanges[formeIndex].targetSpecies;

        // switch on the form change method
        switch(formChanges[formeIndex].method) {
            case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM: 
            case FORM_CHANGE_BATTLE_PRIMAL_REVERSION: 
            case FORM_CHANGE_BATTLE_ULTRA_BURST: {
                item = formChanges[formeIndex].param1; // ItemId
            }; break;
            case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE: {
                move = formChanges[formeIndex].param1; // MoveId 
            }; break;
        }
    }

    // Calculate species nature, evs
    nature = GetSpeciesNature(formeId);
    evs = GetSpeciesEVs(formeId, nature);

    // Place the chosen pokemon into the trainer's party
    CreateMonWithEVSpreadNatureOTID(
        &gEnemyParty[index], speciesId, level, 
        nature, fixedIV, evs, otID
    );

    // If this species has a hidden ability
    if ((species->abilities[2] != ABILITY_NONE) && RANDOM_CHANCE(BFG_HA_SELECTION_CHANCE)) {
        abilityNum = 3; // Hidden ability index
        SetMonData(&gEnemyParty[index], MON_DATA_ABILITY_NUM, &abilityNum);
    }

    // No forme change
    if (formeId == speciesId) {
        // Get the actual selected ability for the species
        abilityNum = GetMonData(&gEnemyParty[index], MON_DATA_ABILITY_NUM);
    }
    else // Forme change
    {
        abilityNum = 0;
    }

    // Give the chosen pokemon its specified moves.
    // Returns FRIENDSHIP_MAX unless the moveset
    // contains 'FRUSTRATION'. 
    moveCount = GetSpeciesMoves(formeId, index, nature, evs, abilityNum, move);

    // At least one move
    if (moveCount > 0) {
        #if BFG_NO_ITEM_SELECTION_CHANCE != 1
        // Currently has no held item
        if (item == ITEM_NONE && (!RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE)))
            item = GetSpeciesItem(formeId, nature, evs, abilityNum);
        #endif 

        SetMonData(&gEnemyParty[index], MON_DATA_HELD_ITEM, &item);

        // Set generated successfully
        return TRUE;
    }

    // No moves, generation failed
    return FALSE;
}

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level) {

    u8 forme;
    u16 speciesId, bst;
    bool32 hasMega,hasZMove;

    s32 i, j;
    u16 monSet[BFG_TRAINER_CLASS_MON_LIMIT];
    u32 otID = Random32();
        
    // Normal battle frontier trainer.
    u8 fixedIV = GetFrontierTrainerFixedIvs(trainerId);

    // Min/Max BST Value Lookup Table
    u16 minBST = fixedIVMinBSTLookup[fixedIV];
    u16 maxBST = fixedIVMaxBSTLookup[fixedIV];

    u16 bfMonCount = 0;

    // Dereference the battle frontier trainer data
    const struct BattleFrontierTrainer * trainer = &(gFacilityTrainers[trainerId]);
    const u8 trainerClass = gFacilityClassToTrainerClass[trainer->facilityClass];

    const struct SpeciesInfo * species;
    const struct FormChange * formChanges;

    DebugPrintf("Finding sets for trainer class %d ...", trainerClass);

    // Loop over all species
    for(i = 0; i < NUM_SPECIES; i++) {

        // Break loop if mon limit reached
        if (bfMonCount == BFG_TRAINER_CLASS_MON_LIMIT) {
            DebugPrintf("Trainer Class Mon %d Count limit reached: %d, modifying limit/constraints ...", trainerClass, bfMonCount);
            break;
        }

        // Pointer to species info
        species = &(gSpeciesInfo[i]);

        // Skip if not base species, or regional variant
        if (!(IS_BASE_SPECIES(i)) || (IS_REGIONAL_FORME(species)))
            continue;

        // Skip species if banned in frontier level
        if (SpeciesValidForFrontierLevel(i) == FALSE)
            continue;

        // Skip species if not valid for trainer class
        if (SpeciesValidForTrainerClass(trainerClass, i) == FALSE)
            continue;

        // Get base stat total
        bst = GetBaseStatTotal(i);

        // If species is above bst limit, or below than the minimum, and does not have a mega (or megas are not enabled)
        if ((bst > maxBST) || ((bst < minBST) && (!((fixedIV >= BFG_ITEM_IV_ALLOW_MEGA) && HAS_MEGA_EVOLUTION(i)))))
            continue; 

        // Add species to mon set
        monSet[bfMonCount++] = i;
    }

    DebugPrintf("Possible species found: %d ...", bfMonCount);

    // Regular battle frontier trainer.
    // Attempt to fill the trainer's party with random Pokemon until 3 have been
    // successfully chosen. The trainer's party may not have duplicate pokemon species
    // or duplicate held items.

    i = 0;
    while(i != monCount) {

        DebugPrintf("Generating mon number %d ...", i);

        // Sample random species from the mon count
        speciesId = monSet[Random() % bfMonCount];

        // Get base stat total
        bst = GetBaseStatTotal(speciesId);

        // Alt. Forme (e.g. mega, ultra burst)
        forme = FORME_DEFAULT; // Default

        // Ensure this pokemon species isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
            if (GetMonData(&gEnemyParty[j], MON_DATA_SPECIES, NULL) == speciesId)
                break;
        if (j != i + firstMonId)
            continue;

        // Get species forme change table
        formChanges = GetSpeciesFormChanges(speciesId);
        if (formChanges != NULL) {
                
            DebugPrintf("Checking for megas/z/other formes ...");

            for(j = 0; formChanges[j].method != FORM_CHANGE_TERMINATOR; j++) {
                switch(formChanges[j].method) {
                    #if B_FLAG_DYNAMAX_BATTLE != 0
                    case FORM_CHANGE_BATTLE_GIGANTAMAX: {
                        if (FlagGet(B_FLAG_DYNAMAX_BATTLE) && BFG_ITEM_ALLOW_GMAX)
                            forme = j;
                    }; break;
                    #endif
                    case FORM_CHANGE_BATTLE_PRIMAL_REVERSION: {
                        if ((fixedIV >= BFG_ITEM_IV_ALLOW_MEGA) && (bst + 100 <= maxBST))
                            forme = j;
                    }; break;
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE:
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM: {
                        if ((fixedIV >= BFG_ITEM_IV_ALLOW_MEGA) && (bst + 100 <= maxBST) && (hasMega == FALSE)) {
                            hasMega = TRUE;
                            forme = j;
                        }
                    }; break;
                    case FORM_CHANGE_BATTLE_ULTRA_BURST: {
                        if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (bst + 76 <= maxBST) && (hasZMove == FALSE)) {
                            hasZMove = TRUE;
                            forme = j;
                        }
                    }; break;
                }
                if (forme == j) {
                    DebugPrintf("Forme found: %d ...", forme);
                    break; // Break if forme found
                }
            }
        }

        DebugPrintf("Generating set for species %d ...", speciesId);

        // Generate trainer Pokemon and add it to the team

        // If the pokemon was successfully added to the trainer's party, move on to the next party slot.
        if (GenerateTrainerPokemon(speciesId, i + firstMonId, otID, fixedIV, level, forme) == TRUE)
            i++;
    }
}