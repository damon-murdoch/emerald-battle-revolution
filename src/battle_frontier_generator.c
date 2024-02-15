#include "global.h"
#include "battle.h"
#include "random.h"
#include "pokemon.h"
#include "event_data.h"
#include "battle_util.h"
#include "battle_tower.h"
#include "frontier_util.h"
#include "battle_ai_util.h"
#include "battle_frontier_generator.h"
#include "config/battle_frontier_generator.h"

#include "constants/battle_frontier_generator.h"
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

// Random Boolean Value
#ifdef BFG_RANDOM_BOOL_FIXED
#define RANDOM_BOOL() (BFG_RANDOM_BOOL_FIXED)
#else
#define RANDOM_BOOL() ((bool8)(Random() % 2))
#endif

// Random Chance (1/x)
#ifdef BFG_RANDOM_CHANCE_FIXED
#define RANDOM_CHANCE(x) (BFG_RANDOM_CHANCE_FIXED)
#else
#define RANDOM_CHANCE(x) (((x) != 0) && ((Random() % (x)) == 0))
#endif

// Random Range (x-inclusive, y-exclusive)
#ifdef BFG_RANDOM_RANGE_FIXED
#define RANDOM_RANGE(x, y) ((x) + ((BFG_RANDOM_RANGE_FIXED) % ((y) - (x))))
#else
#define RANDOM_RANGE(x, y) ((x) + (Random() % ((y) - (x))))
#endif

// Random Offset
#if BFG_RANDOM_OFFSET_MIN == BFG_RANDOM_OFFSET_MAX
#define RANDOM_OFFSET() (BFG_RANDOM_OFFSET_MIN)
#else
#define RANDOM_OFFSET() RANDOM_RANGE(BFG_RANDOM_OFFSET_MIN, BFG_RANDOM_OFFSET_MAX)
#endif

// *** FORMAT ***
#define IS_DOUBLES() (VarGet(VAR_FRONTIER_BATTLE_MODE) == FRONTIER_MODE_DOUBLES)
#define GET_LVL_MODE() (gSaveBlock2Ptr->frontier.lvlMode)

// *** STATS ***
#define CHECK_EVS(evs,stat) ((evs) & (stat))

// *** MOVE ***
#define NORMALISE(x) (((float)(x)) / 100.0f)

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

#define IS_OFF_BOOSTING_EFFECT(e) (((e) == EFFECT_NO_RETREAT) || ((e) == EFFECT_BULK_UP) || ((e) == EFFECT_COIL) || ((e) == EFFECT_CURSE) || ((e) == EFFECT_VICTORY_DANCE) || ((e) == EFFECT_DRAGON_DANCE) || ((e) == EFFECT_SHELL_SMASH) || ((e) == EFFECT_ATTACK_SPATK_UP) || ((e) == EFFECT_GEOMANCY) || ((e) == EFFECT_QUIVER_DANCE) || ((e) == EFFECT_SHIFT_GEAR) || ((e) == EFFECT_TAKE_HEART) || ((e) == EFFECT_CALM_MIND) || ((e) == EFFECT_BELLY_DRUM) || ((e) == EFFECT_ATTACK_UP_2) || ((e) == EFFECT_ATTACK_UP_USER_ALLY) || ((e) == EFFECT_ATTACK_ACCURACY_UP) || ((e) == EFFECT_ATTACK_UP) || ((e) == EFFECT_SPECIAL_ATTACK_UP_3) || ((e) == EFFECT_SPECIAL_ATTACK_UP_2) || ((e) == EFFECT_SPECIAL_ATTACK_UP))
#define IS_DEF_BOOSTING_EFFECT(e) (((e) == EFFECT_COSMIC_POWER) || ((e) == EFFECT_STOCKPILE) || ((e) == EFFECT_DEFENSE_UP_3) || ((e) == EFFECT_DEFENSE_UP_2) || ((e) == EFFECT_DEFENSE_CURL) || ((e) == EFFECT_DEFENSE_UP) || (e == EFFECT_SPECIAL_DEFENSE_UP_2) || (e == EFFECT_SPECIAL_DEFENSE_UP))
#define IS_SPEED_BOOSTING_EFFECT(e) (((e) == EFFECT_AUTOTOMIZE) || ((e) == EFFECT_SPEED_UP_2) || ((e) == EFFECT_SPEED_UP))
#define IS_SPEED_CONTROL_EFFECT(e) (((e) == EFFECT_TRICK_ROOM) || ((e) == EFFECT_TAILWIND))
#define IS_STAT_REDUCING_EFFECT(e) (((e) == MOVE_EFFECT_ATK_MINUS_1) || ((e) == MOVE_EFFECT_DEF_MINUS_1) || ((e) == MOVE_EFFECT_SPD_MINUS_1) ||  ((e) == MOVE_EFFECT_SP_ATK_MINUS_1) || ((e) == MOVE_EFFECT_SP_ATK_TWO_DOWN) || ((e) == MOVE_EFFECT_V_CREATE) || ((e) == MOVE_EFFECT_ATK_DEF_DOWN) || ((e) == MOVE_EFFECT_DEF_SPDEF_DOWN) || ((e) == MOVE_EFFECT_SP_DEF_MINUS_1) || ((e) == MOVE_EFFECT_SP_DEF_MINUS_2))

#define IS_PROTECTING_EFFECT(e) (((e) == EFFECT_PROTECT) || ((e) == EFFECT_MAT_BLOCK) || ((e) == EFFECT_ENDURE) || ((e) == EFFECT_SUBSTITUTE))
#define IS_DOUBLES_PROTECT(x) (((x) == MOVE_WIDE_GUARD) || ((x) == MOVE_QUICK_GUARD) || ((x) == MOVE_CRAFTY_SHIELD) || ((x) == MOVE_MAT_BLOCK))
#define IS_SPECIAL_PROTECT(e,x) (((e) == EFFECT_PROTECT) && ((x) != MOVE_PROTECT))

#define IS_FIELD_OR_ALLY_TARGET(t) (((t) == MOVE_TARGET_ALL_BATTLERS) || ((t) == MOVE_TARGET_OPPONENTS_FIELD) || ((t) == MOVE_TARGET_ALLY))
#define IS_DYNAMIC_ATTACK(x) (((x) == MOVE_TERA_BLAST) || ((x) == MOVE_PHOTON_GEYSER))

// *** TYPE ***
#define IS_TYPE(x,y,type) ((x) == (type) || (y) == (type))
#define IS_FWG(x,y) (IS_TYPE((x),(y),TYPE_FIRE) || IS_TYPE((x),(y),TYPE_WATER) || IS_TYPE((x),(y),TYPE_GRASS))
#define IS_FDS(x,y) (IS_TYPE((x),(y),TYPE_FAIRY) || IS_TYPE((x),(y),TYPE_DRAGON) || IS_TYPE((x),(y),TYPE_STEEL))
#define IS_PGD(x,y) (IS_TYPE((x),(y),TYPE_PSYCHIC) || IS_TYPE((x),(y),TYPE_GHOST) || IS_TYPE((x),(y),TYPE_DARK))

#define GET_TYPE_EFFECTIVENESS(attacking,defending) (sTypeEffectivenessTable[attacking][defending])

// *** ABILITY ***
#define HAS_ABILITY(x,y,ability) ((x) == (ability) || (y) == (ability))
#define IS_ABILITY(x,y,ability) ((x) == (ability) && (y) == ABILITY_NONE)

#define IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) (IS_TYPE((t1),(t2),TYPE_FLYING) || IS_ABILITY((a1),(a2), ABILITY_LEVITATE))

// *** SPECIES ***
#define IS_BASE_SPECIES(x) ((x) == GET_BASE_SPECIES_ID(x))
#define IS_REGIONAL_FORME(s) (((s)->isAlolanForm == TRUE) || ((s)->isGalarianForm == TRUE) || ((s)->isHisuianForm == TRUE) || ((s)->isPaldeanForm))
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

#define CHECK_ARCEUS_ZMOVE ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_ARCEUS))
#define CHECK_SILVALLY_ZMOVE ((P_SILVALLY_TYPE_CHANGE_Z_CRYSTAL) && (fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SILVALLY))

// *** MOVES ***
const u16 moveSinglesAlwaysSelectList[] = {
    BFG_MOVE_ALWAYS_SELECT_SINGLES
};

const u16 moveDoublesAlwaysSelectList[] = {
    BFG_MOVE_ALWAYS_SELECT_DOUBLES
};

const u16 moveSinglesNeverSelectList[] = {
    BFG_MOVE_NEVER_SELECT_SINGLES
}; 

const u16 moveDoublesNeverSelectList[] = {
    BFG_MOVE_NEVER_SELECT_DOUBLES
}; 

// *** ITEM ***
const u16 customItemsList[] = {
    BFG_CUSTOM_ITEMS_LIST, 
    ITEM_NONE // End of list
}; 

const u16 recycleItemsList[] = {
    BFG_RECYCLE_ITEMS_LIST, 
    ITEM_NONE // End of list
};

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

static bool8 SpeciesValidForFrontierLevel(u16 speciesId) 
{
    s32 i;

    // Get the level mode for the frontier
    u8 lvlMode = GET_LVL_MODE();

    // Switch on level mode
    switch(lvlMode) 
    {
        case FRONTIER_LVL_50: {
            #if BFG_LVL_50_ALLOW_BANNED_SPECIES == FALSE
            for(i=0; gFrontierBannedSpecies[i] != SPECIES_END; i++) 
                if (gFrontierBannedSpecies[i] == speciesId)
                    return FALSE; // Species banned
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvl50[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvl50[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
        case FRONTIER_LVL_OPEN: {
            #if BFG_LVL_OPEN_ALLOW_BANNED_SPECIES == FALSE
            for(i=0; gFrontierBannedSpecies[i] != SPECIES_END; i++) 
                if (gFrontierBannedSpecies[i] == speciesId)
                    return FALSE; // Species banned
            #endif
            #if BFG_USE_CUSTOM_BANNED_SPECIES
            for(i=0; customBannedSpeciesLvlOpen[i] != SPECIES_NONE; i++)
                if (customBannedSpeciesLvlOpen[i] == speciesId)
                    return FALSE; // Species banned
            #endif
        }; break;
        case FRONTIER_LVL_TENT: {
            #if BFG_LVL_TENT_ALLOW_BANNED_SPECIES == FALSE
            for(i=0; gFrontierBannedSpecies[i] != SPECIES_END; i++)
                if (gFrontierBannedSpecies[i] == speciesId)
                    return FALSE; // Species banned
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

static bool8 SpeciesValidForTrainerClass(u8 trainerClass, u16 speciesId) 
{
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    
    // Dereference types/abilities
    u8 t1 = species->types[0];
    u8 t2 = species->types[1];
    u16 a1 = species->abilities[0];
    u16 a2 = species->abilities[1];

    // Switch on trainer class
    switch(trainerClass) 
    {
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

static u8 GetNatureFromStats(u8 posStat, u8 negStat) 
{
    s32 i;
    // Loop over the natures
    for(i=0; i<NUM_NATURES; i++) 
    { 
        // Return matching nature (if found)
        if ((gNatureInfo[i].posStat == posStat) && 
        (gNatureInfo[i].negStat == negStat))
            return i;
    }
    // Default (neutral)
    return NATURE_HARDY;
}

static u8 GetSpeciesNature(u16 speciesId) 
{
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
    if (BFG_PRIORITISE_ATK_SPA_OVER_SPE && negStatValue > species->baseSpeed) 
    {
        negStat = STAT_SPEED;
        negStatValue = species->baseSpeed;
    }

    // Loop over the stats (pick best stat)
    for(i = STAT_ATK; i < NUM_STATS; i++){
        if (i == negStat)
            continue; 

        temp1 = (posStatValue + RANDOM_OFFSET());

        switch(i) 
        {
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

static u8 GetSpeciesEVs(u16 speciesId, u8 natureId) 
{
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
        if (stat1 == 0xFF || ((val2 > val1) && (valR > (val1 + RANDOM_OFFSET())))) 
        {
            stat1 = i; 
            val1 = valT;
        }
        // If stat 2 is undefined, or new stat is greater
        else if (stat2 == 0xFF || ((val2 < val1) && (valR > (val2 + RANDOM_OFFSET())))) 
        {
            stat2 = i; 
            val2 = valT;
        }
        // Both stat 1 and stat 2 match
        else if ((val2 == val1) && (valR > (val2 + RANDOM_OFFSET()))) 
        {
            // Replace stat1
            if (RANDOM_BOOL()) 
            {
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

static u8 GetSpreadType(u8 natureId, u8 evs){
    // Spread investment counters
    u8 offensive=0,defensive=0;

    // hp/spe can be used for either, 
    // irrelevant for this calc

    // Check offensive ev stats
    if (CHECK_EVS(evs,F_EV_SPREAD_ATTACK))
        offensive++;
    if (CHECK_EVS(evs,F_EV_SPREAD_SP_ATTACK))
        offensive++;

    // Check defensive ev stats
    if (CHECK_EVS(evs,F_EV_SPREAD_DEFENSE))
        defensive++;
    if (CHECK_EVS(evs,F_EV_SPREAD_SP_DEFENSE))
        defensive++;

    // Compare offensive / defensive evs
    if (offensive > defensive)
        return BFG_SPREAD_TYPE_OFFENSIVE;
    else if (offensive < defensive)
        return BFG_SPREAD_TYPE_DEFENSIVE;

    // Both values match

    // Compare offensive / defensive nature
    if ((gNatureInfo[natureId].posStat == STAT_ATK) || (gNatureInfo[natureId].posStat == STAT_SPATK))
        return BFG_SPREAD_TYPE_OFFENSIVE;
    else if ((gNatureInfo[natureId].posStat == STAT_DEF) || (gNatureInfo[natureId].posStat == STAT_SPDEF))
        return BFG_SPREAD_TYPE_DEFENSIVE;

    // Comparison failed
    return RANDOM_BOOL(); // Coinflip
}

static u8 GetSpreadCategory(u8 natureId, u8 evs){
    // Spread category counters
    u8 physical=0,special=0;

    // Check offensive ev stats
    if (CHECK_EVS(evs,F_EV_SPREAD_ATTACK))
        physical++;
    if (CHECK_EVS(evs,F_EV_SPREAD_SP_ATTACK))
        special++;

    // Compare physical / special evs
    if (physical > special)
        return BFG_SPREAD_CATEGORY_PHYSICAL;
    else if (physical < special)
        return BFG_SPREAD_CATEGORY_SPECIAL;

    // Physical attack nature-boosted, or special is nature-reduced
    if ((gNatureInfo[natureId].posStat == STAT_ATK) || (gNatureInfo[natureId].negStat == STAT_SPATK))
        return BFG_SPREAD_CATEGORY_PHYSICAL;

    // Special attack nature-boosted, or physical is nature-reduced
    if ((gNatureInfo[natureId].posStat == STAT_SPATK) || (gNatureInfo[natureId].negStat == STAT_ATK))
        return BFG_SPREAD_CATEGORY_SPECIAL;

    // Comparison failed
    return BFG_SPREAD_CATEGORY_MIXED; // Mixed nature
}

static void ResetMoves(u8 index)
{
    s32 i;
    for(i=0; i<MAX_MON_MOVES; i++)
        SetMonMoveSlot(&gEnemyParty[index], MOVE_NONE, i);
}

static bool32 IsNeverSelectMove(u16 moveId) 
{
    if (IS_DOUBLES())
    {
        for(s32 i=0; moveDoublesNeverSelectList[i] != MOVE_NONE; i++)
            if (moveDoublesNeverSelectList[i] == moveId)
                return TRUE; // Never select
    }
    else // Not doubles
    {
        for(s32 i=0; moveSinglesNeverSelectList[i] != MOVE_NONE; i++)
            if (moveSinglesNeverSelectList[i] == moveId)
                return TRUE; // Never select
    }
    return FALSE;
}

static bool32 IsAlwaysSelectMove(u16 moveId) 
{
    if (IS_DOUBLES())
    {
        for(s32 i=0; moveDoublesAlwaysSelectList[i] != MOVE_NONE; i++)
            if (moveDoublesAlwaysSelectList[i] == moveId)
                return TRUE; // Never select
    }
    else // Not doubles
    {
        for(s32 i=0; moveSinglesAlwaysSelectList[i] != MOVE_NONE; i++)
            if (moveSinglesAlwaysSelectList[i] == moveId)
                return TRUE; // Never select
    }
    return FALSE;
}

static u16 GetMovePower(u16 moveId)
{
    const struct MoveInfo* move = &(gMovesInfo[moveId]);

    // Dereference move power
    u16 power = move->power;

    // Special Cases
    switch(moveId) 
    {
        case MOVE_FRUSTRATION:
        case MOVE_RETURN:
            power = 102;
        break;
        case MOVE_KNOCK_OFF:
            power = 97;
        break;
    }

    // Apply multi-hit modifier
    if (move->strikeCount >= 0)
        power *= move->strikeCount;

    return power;
}

static u16 GetBestMove(u16 speciesId, u16 moveNew, u16 moveOld)
{
    // If move is duplicate, never select move, or none - Reject new move
    if ((moveNew == moveOld) || (moveNew == MOVE_NONE))
        return moveOld;

    // Replace old move if none
    if (moveOld == MOVE_NONE)
        return moveNew;
    
    // TODO: Implement actual logic

    // Randomly return either
    if (RANDOM_BOOL())
        return moveNew;
    return moveOld;
}

#define CATEGORY(m) (gMovesInfo[m].category)

static u8 GetSpeciesMoves(u16 speciesId, u8 index, u8 nature, u8 evs, u8 abilityNum, u16 requiredMove) 
{
    s32 i, j;
    u16 moveIndex;

    u16 moves[MAX_MON_MOVES] = {
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
    };

    // Number of moves per type
    u8 types[NUMBER_OF_MON_TYPES] = {
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,
    };

    const struct LevelUpMove* levelUpLearnset;
    const u16 * teachableLearnset;

    u16 levelUpMoves = 0;
    u16 teachableMoves = 0;

    // Get offensive/defensive & physical/special split
    u8 spreadType = GetSpreadType(nature, evs);
    u8 spreadCategory = GetSpreadCategory(nature, evs);

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

    // Friendship level
    // This is changed for Frustration
    u8 friendship = FRIENDSHIP_MAX;

    // Number of moves learnt
    u8 moveCount = 0;

    // Current move
    u16 moveId;

    // Get the method for selecting the moves
    u8 method = BFG_MOVE_SELECTION_METHOD;

    #if BFG_VAR_MOVE_SELECTION_METHOD != 0
    if (method == BFG_MOVE_SELECT_VARIABLE) 
        method = VarGet(BFG_VAR_MOVE_SELECTION_METHOD);
    #endif

    // Switch on selection method
    switch(method) 
    {
        // Random (Fast) Selection
        case BFG_MOVE_SELECT_RANDOM: {
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                DebugPrintf("Selecting move %d ...", i);

                moveId = MOVE_NONE;

                // First move index, and required move is set
                if (i == 0 && requiredMove != MOVE_NONE) 
                    moveId = requiredMove;
                else  // General case
                {
                    // While no move found, and failure limit has not been reached
                    while((moveId == MOVE_NONE) && (failures < BFG_MOVE_SELECT_FAILURE_LIMIT)) 
                    {
                        // Sample random move index
                        moveIndex = Random() % (teachableMoves + levelUpMoves);

                        // Teachable learnset
                        if (moveIndex >= levelUpMoves) 
                        {
                            moveIndex %= levelUpMoves;

                            moveId = teachableLearnset[moveIndex];
                        }
                        else // Level-up learnset
                            moveId = levelUpLearnset[moveIndex].move;

                        // Check banned moves
                        if (IsNeverSelectMove(moveId)) 
                        {
                            moveId = MOVE_NONE;
                            failures++;
                            break;
                        }
                        
                        // Check previous moves
                        for(j = 0; j < i; j++) 
                        {
                            if (GetMonData(&gEnemyParty[index], MON_DATA_MOVE1 + j) == moveId)
                            {
                                moveId = MOVE_NONE;
                                failures++;
                                break;
                            }
                        }

                        // Due to the nature of this algorithm, 
                        // moveAlwaysSelectList is not checked

                        // Move found
                        if (moveId != MOVE_NONE)
                            moveCount++;
                    }
                }

                // Otherwise, left as MOVE_NONE
                
                // Set the move slot data
                SetMonMoveSlot(&gEnemyParty[index], moveId, i);

                // Frustration is more powerful the
                // lower the pokemon's friendship is.
                if (moveId == MOVE_FRUSTRATION)
                    friendship = 0;
            }
        }; break;
        // Filtered Selection
        case BFG_MOVE_SELECT_FILTERED:
        case BFG_MOVE_SELECT_FILTERED_ATTACKS_ONLY: {
            
            // Current / new move id
            u8 moveCategory;
            
            // Always-selected move
            bool8 alwaysSelect;

            // Moves that cannot be replaced
            bool8 fixed[MAX_MON_MOVES] = {
                FALSE, FALSE, FALSE, FALSE
            };

            // Number of required attacking moves
            // This is 3-4 for offensive mons, and 1-2 for defensive mons
            u8 requiredAttacks = (spreadType == BFG_SPREAD_TYPE_OFFENSIVE) ? RANDOM_RANGE(3,4) : RANDOM_RANGE(1,2);

            // Clear moves list
            ResetMoves(index);

            // Required move provided
            if (requiredMove != MOVE_NONE)
            {
                // Status move
                if (CATEGORY(requiredMove) == DAMAGE_CATEGORY_STATUS)
                {
                    moves[requiredAttacks + 1] = requiredMove;
                    fixed[requiredAttacks + 1] = TRUE;
                }
                else // Offensive move
                {
                    moves[0] = requiredMove;
                    fixed[0] = TRUE;
                }
            }

            // Check level-up moves
            for(i=0; i < levelUpMoves; i++)
            {
                moveId = levelUpLearnset[i].move;

                if (IsNeverSelectMove(moveId))
                    continue; // Skip never-select move
                
                if (IsAlwaysSelectMove(moveId))
                    alwaysSelect = TRUE; // Always-select move

                moveCategory = CATEGORY(moveId);

                // Move is a status move
                if (moveCategory == DAMAGE_CATEGORY_STATUS) 
                {
                    for(j=(requiredAttacks + 1); j<MAX_MON_MOVES; j++)
                    {
                        if (fixed[j] == TRUE)
                            continue; // Skip fixed moves
                        else if (alwaysSelect)
                        {
                            moves[j] = moveId;
                            fixed[j] = TRUE;
                        }
                        else // Need to compare
                            moves[j] = GetBestMove(speciesId, moveId, moves[j]);
                    }
                }
                else // Physical/Special Move
                {
                    if ((!alwaysSelect) && ((moveCategory == DAMAGE_CATEGORY_PHYSICAL && spreadCategory == BFG_SPREAD_CATEGORY_SPECIAL) || 
                        (moveCategory == DAMAGE_CATEGORY_SPECIAL && spreadCategory == BFG_SPREAD_CATEGORY_PHYSICAL)))
                        continue; // Skip mismatched move

                    for(j=0; j<requiredAttacks; j++)
                    {
                        if (fixed[j] == TRUE)
                            continue; // Skip fixed moves
                        else if (alwaysSelect)
                        {
                            moves[j] = moveId;
                            fixed[j] = TRUE;
                        }
                        else // Need to compare
                            moves[j] = GetBestMove(speciesId, moveId, moves[j]);
                    }
                }
            }

            // Check teachable moves
            for(i=0; i<teachableMoves; i++)
            {
                moveId = teachableLearnset[i];
            }

        }; break;
        // Default (Level-Up / Required Move Only)
        default: 
            DebugPrintf("Unhandled move selection method: %d, falling back to default method ...", method);
        case BFG_MOVE_SELECT_DEFAULT: {
            // Keeps track of if move slot '0' will be replaced by
            // the required move for the species, if set.
            bool8 needRequiredMove = (requiredMove != MOVE_NONE);
            
            // Loop over all of the moves
            for(i=0; i<MAX_MON_MOVES; i++)
            {
                // Get the currently-selected move for the species
                moveId = GetMonData((&gEnemyParty[index]), MON_DATA_MOVE1 + i);

                // Need required move is true, and current move matches
                if (needRequiredMove && requiredMove == moveId) 
                    needRequiredMove = FALSE; // Move already present

                // Move not none
                if (moveId != MOVE_NONE) 
                {
                    moveCount++; // Increment move count

                    // Special case for frustration
                    if (moveId == MOVE_FRUSTRATION)
                        friendship = 0;
                }
            }

            // Set first index to required move
            if (needRequiredMove)
                SetMonMoveSlot(&gEnemyParty[index], requiredMove, 0);
        }; break;
    }

    // Update friendship
    SetMonData(&gEnemyParty[index], MON_DATA_FRIENDSHIP, &friendship);

    return moveCount;
}

static bool32 GetSpeciesItemCheckUnique(u16 itemId, u8 index) 
{
    s32 i;
    for(i=0; i < index; i++)
        if (GetMonData(&gEnemyParty[i], MON_DATA_HELD_ITEM) == itemId)
            return FALSE; // Duplicate itemId
    return TRUE; // Unique itemId
}

static u16 GetSpeciesItem(u16 speciesId, u8 index, u8 natureId, u8 evs, u8 abilityNum) 
{
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct Nature * nature = &(gNatureInfo[natureId]);
    const struct MoveInfo * move; 

    s32 i,f;
    u16 itemId, moveId, abilityId;
    
    u8 numPhysical = 0;
    u8 numDynamic = 0;
    u8 numSpecial = 0; 
    u8 numStatus = 0; 
    
    u8 numOffensive, currentType;

    // Move flags

    bool8 hasEvolution = FALSE;
    bool8 hasTerrain = FALSE;
    bool8 hasTwoTurn = FALSE; 
    bool8 hasRecycle = FALSE;
    bool8 hasRest = FALSE;

    // Move Counters
    u8 numCritModifier = 0;
    u8 numInaccurate = 0;
    u8 numMultiHit = 0;
    u8 numStatDrop = 0;
    u8 numScreens = 0;
    u8 numPunch = 0;
    u8 numSound = 0;

    // Weather effect placeholder
    u16 hasWeather = MOVE_NONE;

    // Check for species evolutions
    const struct Evolution * evolutions = GetSpeciesEvolutions(speciesId);
    if (evolutions != NULL)
        hasEvolution = TRUE;

    u8 moveTypeCount[NUMBER_OF_MON_TYPES];

    // Pokemon Weaknesses for use with resist berries
    uq4_12_t typeModifier[NUMBER_OF_MON_TYPES];

    // Loop over all of the (attacking) types
    for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
    {
        // Initialise move counter
        moveTypeCount[i] = 0;

        // Apply primary type modifier
        typeModifier[i] = uq4_12_multiply(UQ_4_12(1.0), GetTypeModifier(i, species->types[0]));

        // If the species is not a mono-type Pokemon
        if ((species->types[0]) != (species->types[1]))
            typeModifier[i] = uq4_12_multiply(typeModifier[i], GetTypeModifier(i, species->types[1]));
    }

    // Loop over the species moves
    for (i = 0; i < MAX_MON_MOVES; i++) 
    {
        moveId = GetMonData(&gEnemyParty[index], (MON_DATA_MOVE1 + i));
        move = &(gMovesInfo[moveId]);

        // Set move flags (offensive and status)

        // Move accuracy
        if (move->accuracy != 0 && move->accuracy < 100)
            numInaccurate++;

        // Move 
        
        // Multi-turn moves
        if (move->twoTurnMove == TRUE)
            hasTwoTurn = TRUE; 

        // Sound-based moves
        if (move->soundMove == TRUE)
            numSound++;

        // Status Move
        if (move->category == DAMAGE_CATEGORY_STATUS) 
        {
            // Increment status counter
            numStatus++; 

            // Weather effects
            if IS_RAIN_EFFECT(move->effect)
                hasWeather = MOVE_RAIN_DANCE;
            else if IS_SUN_EFFECT(move->effect)
                hasWeather = MOVE_SUNNY_DAY;
            else if IS_SAND_EFFECT(move->effect)
                hasWeather = MOVE_SANDSTORM;
            else if IS_HAIL_EFFECT(move->effect)
                hasWeather = MOVE_HAIL;
            else // Other cases
            {
                // Terrain
                if (IS_TERRAIN_EFFECT(move->effect))
                    hasTerrain = TRUE; 

                // Screens
                if (moveId == MOVE_LIGHT_SCREEN || moveId == MOVE_REFLECT || moveId == MOVE_AURORA_VEIL)
                    numScreens++;

                // Crit rate up
                if (move->effect == EFFECT_FOCUS_ENERGY)
                    numCritModifier++;

                // Has recycle (Can reuse berries)
                if (move->effect == EFFECT_RECYCLE)
                    hasRecycle = TRUE;

                // Rest
                if (moveId == MOVE_REST)
                    hasRest = TRUE;
            }
        } 
        else // Non-Status Move
        {
            // Multi-hit moves
            if (move->effect == EFFECT_MULTI_HIT)
                numMultiHit++;

            // Stat-dropping moves
            if (IS_STAT_REDUCING_EFFECT(move->effect))
                numStatDrop++;

            // Punching moves
            if (move->punchingMove == TRUE)
                numPunch++;

            // High-crit ratio moves
            if (move->criticalHitStage > 0)
                numCritModifier++; 

            // Offensive split-changing attacks
            if (IS_DYNAMIC_ATTACK(moveId))
                numDynamic++; // Increment dynamic counter
            else // General Case
            {
                // Physical move
                if (move->category == DAMAGE_CATEGORY_PHYSICAL)
                {
                    numPhysical++; // Increment physical counter
                }
                else // move->category == DAMAGE_CATEGORY_SPECIAL
                {
                    numSpecial++; // Increment special counter
                }
            }

            // Increment type counter
            moveTypeCount[move->type]++;
        }
    }

    // Get total number of offensive moves
    numOffensive = numPhysical + numSpecial + numDynamic;

    // Get the ability id for the species
    abilityId = species->abilities[abilityNum];

    // No weather moves found
    if (hasWeather != MOVE_NONE)
    {
        // Check weather ability
        if (IS_RAIN_ABILITY(abilityId))
            hasWeather = MOVE_RAIN_DANCE;
        else if (IS_SUN_ABILITY(abilityId))
            hasWeather = MOVE_SUNNY_DAY;
        else if (IS_SAND_ABILITY(abilityId))
            hasWeather = MOVE_SANDSTORM;
        else if (IS_HAIL_ABILITY(abilityId))
            hasWeather = MOVE_HAIL;
    }

    // Loop over the custom items list
    for(i=0; customItemsList[i] != ITEM_NONE; i++)
        ;

    // Length of custom items
    u16 customItemsLength = i;

    // Loop over the recycle items list
    for(i=0; recycleItemsList[i] != ITEM_NONE; i++)
        ;

    // Length of recycle items
    u16 recycleItemsLength = i;

    // Loop until failure limit is reached (or item found)
    for(f=0; f < BFG_ITEM_SELECT_FAILURE_LIMIT; f++) 
    {
        // Default item id
        itemId = ITEM_NONE;

        // *** Competitive items with specific use cases ***

        // Eviolite
        if ((hasRecycle == FALSE) && hasEvolution == TRUE && RANDOM_CHANCE(BFG_ITEM_EVIOLITE_SELECTION_CHANCE))
            itemId = ITEM_EVIOLITE;

        // Booster Energy
        if ((itemId == ITEM_NONE) && ((abilityId == ABILITY_PROTOSYNTHESIS) && (abilityId == ABILITY_QUARK_DRIVE)) && RANDOM_CHANCE(BFG_ITEM_BOOSTER_ENERGY_SELECTION_CHANCE))
            itemId = ITEM_BOOSTER_ENERGY;

        // Focus Sash (No investment in HP/Def/SpDef)
        if ((CHECK_EVS(evs,F_EV_SPREAD_HP) == FALSE) && (CHECK_EVS(evs,F_EV_SPREAD_DEFENSE) == FALSE) && (CHECK_EVS(evs,F_EV_SPREAD_SP_DEFENSE)) && RANDOM_CHANCE(BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE))
            itemId = ITEM_FOCUS_SASH;

        // Assault Vest (4 offensive moves)
        if ((hasRecycle == FALSE) && (numOffensive == 4) && RANDOM_CHANCE(BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE))
            itemId = ITEM_ASSAULT_VEST;

        // Choice Items
        if ((hasRecycle == FALSE) && (itemId == ITEM_NONE) && ((numPhysical + numDynamic) >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE))
            itemId = ITEM_CHOICE_BAND;

        if ((hasRecycle == FALSE) && (itemId == ITEM_NONE) && ((numSpecial + numDynamic) >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE))
            itemId = ITEM_CHOICE_SPECS;

        if ((hasRecycle == FALSE) && (itemId == ITEM_NONE) && (numOffensive >= BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE))
            itemId = ITEM_CHOICE_SCARF;   

        // Life Orb
        if ((hasRecycle == FALSE) && (itemId == ITEM_NONE) && (numOffensive >= BFG_ITEM_LIFE_ORB_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_LIFE_ORB_SELECTION_CHANCE))
            itemId = ITEM_LIFE_ORB;

        // Weakness Policy
        if ((itemId == ITEM_NONE) && (numOffensive >= BFG_ITEM_WEAKNESS_POLICY_OFFENSIVE_MOVES_REQUIRED) && RANDOM_CHANCE(BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE))
            itemId = ITEM_WEAKNESS_POLICY;

        // Power Herb (Multi-turn moves)
        if ((itemId == ITEM_NONE) && hasTwoTurn && RANDOM_CHANCE(BFG_ITEM_POWER_HERB_SELECTION_CHANCE))
            itemId = ITEM_POWER_HERB;

        // Mental Herb (Has status moves)
        for(i=0; ((itemId == ITEM_NONE) && (i < numStatus)); i++)
            if (RANDOM_CHANCE(BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE))
                itemId = ITEM_MENTAL_HERB;

        // Throat Spray (Sound-based moves)
        for(i=0; ((itemId == ITEM_NONE) && (i < numSound)); i++)
            if (RANDOM_CHANCE(BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE))
                itemId = ITEM_THROAT_SPRAY;

        // Other non-recyclable items
        if (hasRecycle == FALSE)
        {
            // Loaded Dice (Multi-hit moves)
            for(i=0; ((itemId == ITEM_NONE) && (i < numMultiHit)); i++)
                if (RANDOM_CHANCE(BFG_ITEM_LOADED_DICE_SELECTION_CHANCE))
                    itemId = ITEM_LOADED_DICE;

            // Flame Orb (Guts, with at least one Physical attack)
            if ((itemId == ITEM_NONE) && ((abilityId == ABILITY_GUTS && (numPhysical + numDynamic) >= BFG_ITEM_FLAME_ORB_MOVES_REQUIRED) || (abilityId == ABILITY_FLARE_BOOST && (numSpecial + numDynamic) >= BFG_ITEM_FLAME_ORB_MOVES_REQUIRED)) && RANDOM_CHANCE(BFG_ITEM_FLAME_ORB_SELECTION_CHANCE))
                itemId = ITEM_FLAME_ORB;

            // Toxic Orb (Toxic Heal / Toxic Boost)
            if ((itemId == ITEM_NONE) && ((abilityId == ABILITY_TOXIC_BOOST && (numPhysical + numDynamic) >= BFG_ITEM_TOXIC_ORB_MOVES_REQUIRED) || abilityId == ABILITY_POISON_HEAL) && RANDOM_CHANCE(BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE))
                itemId = ITEM_TOXIC_ORB;

            // Light Clay (Has screens)
            for(i=0; ((itemId == ITEM_NONE) && (i < numScreens)); i++)
                if (RANDOM_CHANCE(BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE))
                    itemId = ITEM_LIGHT_CLAY;

            // Scope Lens (Modified Crit Ratio)
            for(i=0; ((itemId == ITEM_NONE) && (i < numCritModifier)); i++)
            {
                if (RANDOM_CHANCE(BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE))
                    itemId = ITEM_SCOPE_LENS;
                else if (RANDOM_CHANCE(BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE))
                    itemId = ITEM_RAZOR_CLAW;
            }
        }

        // If the itemId is not ITEM_NONE, and the selected item is unique
        if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, index))
            return itemId; // Unique item found
        else
            itemId = ITEM_NONE; // Reset itemId

        // *** Type-Specific Items ***

        // Random chance to use type items / gems / z-moves
        if (((hasRecycle == FALSE) && (BFG_ITEM_TYPE_SELECTION_CHANCE || BFG_ITEM_ZMOVE_SELECTION_CHANCE)) || BFG_ITEM_GEM_SELECTION_CHANCE)
        {
            // Placeholders
            currentType = TYPE_NONE;
            bool8 currentStab = FALSE;

            // Loop over the types
            for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
            {
                // At least one move of this type
                if (moveTypeCount[i] > 0) 
                {    
                    // Check if move type is the same type as the species
                    bool8 isStabType = IS_TYPE(species->types[0], species->types[1], i);

                    // Current type has STAB boost, and new type does not
                    if (currentStab == TRUE && isStabType == FALSE)
                        continue; // Do not replace STAB type

                    // If stab types are not required, or the type is a STAB type
                    if ((!(BFG_ITEM_TYPE_ITEM_STAB_REQUIRED) || isStabType))
                    {
                        // Type Item (e.g. Mystic Water) Check
                        if ((hasRecycle == FALSE) && (moveTypeCount[i] >= BFG_ITEM_TYPE_ITEM_TYPE_MOVES_REQUIRED) && 
                        (RANDOM_CHANCE(BFG_ITEM_TYPE_SELECTION_CHANCE))) 
                        {
                            currentType = i; // Update current type
                            currentStab = isStabType;

                            // Switch on current type
                            switch(currentType) 
                            {
                                case TYPE_NORMAL: itemId = ITEM_SILK_SCARF; break;
                                case TYPE_FIRE: itemId = ITEM_CHARCOAL; break;
                                case TYPE_WATER: itemId = ITEM_MYSTIC_WATER; break;
                                case TYPE_ELECTRIC: itemId = ITEM_MAGNET; break;
                                case TYPE_GRASS: itemId = ITEM_MIRACLE_SEED; break;
                                case TYPE_ICE: itemId = ITEM_NEVER_MELT_ICE; break;
                                case TYPE_FIGHTING: itemId = ITEM_BLACK_BELT; break;
                                case TYPE_POISON: itemId = ITEM_POISON_BARB; break;
                                case TYPE_GROUND: itemId = ITEM_SOFT_SAND; break;
                                case TYPE_FLYING: itemId = ITEM_SHARP_BEAK; break;
                                case TYPE_PSYCHIC: itemId = ITEM_TWISTED_SPOON; break;
                                case TYPE_BUG: itemId = ITEM_SILVER_POWDER; break;
                                case TYPE_ROCK: itemId = ITEM_HARD_STONE; break;
                                case TYPE_GHOST: itemId = ITEM_SPELL_TAG; break;
                                case TYPE_DRAGON: itemId = ITEM_DRAGON_FANG; break;
                                case TYPE_DARK: itemId = ITEM_BLACK_GLASSES; break;
                                case TYPE_STEEL: itemId = ITEM_METAL_COAT; break;
                                case TYPE_FAIRY: itemId = ITEM_FAIRY_FEATHER; break;
                                default: itemId = ITEM_NONE; break;
                            }
                        }
                        // Z-Move (e.g. Electrium Z) Check
                        if ((hasRecycle == FALSE) && (RANDOM_CHANCE(BFG_ITEM_ZMOVE_SELECTION_CHANCE)))
                        {
                            currentType = i; // Update current type
                            currentStab = isStabType;

                            // Switch on current type
                            switch(currentType) 
                            {
                                case TYPE_NORMAL: itemId = ITEM_NORMALIUM_Z; break;
                                case TYPE_FIRE: itemId = ITEM_FIRIUM_Z; break;
                                case TYPE_WATER: itemId = ITEM_WATERIUM_Z; break;
                                case TYPE_ELECTRIC: itemId = ITEM_ELECTRIUM_Z; break;
                                case TYPE_GRASS: itemId = ITEM_GRASSIUM_Z; break;
                                case TYPE_ICE: itemId = ITEM_ICIUM_Z; break;
                                case TYPE_FIGHTING: itemId = ITEM_FIGHTINIUM_Z; break;
                                case TYPE_POISON: itemId = ITEM_POISONIUM_Z; break;
                                case TYPE_GROUND: itemId = ITEM_GROUNDIUM_Z; break;
                                case TYPE_FLYING: itemId = ITEM_FLYINIUM_Z; break;
                                case TYPE_PSYCHIC: itemId = ITEM_PSYCHIUM_Z; break;
                                case TYPE_BUG: itemId = ITEM_BUGINIUM_Z; break;
                                case TYPE_ROCK: itemId = ITEM_ROCKIUM_Z; break;
                                case TYPE_GHOST: itemId = ITEM_GHOSTIUM_Z; break;
                                case TYPE_DRAGON: itemId = ITEM_DRAGONIUM_Z; break;
                                case TYPE_DARK: itemId = ITEM_DARKINIUM_Z; break;
                                case TYPE_STEEL: itemId = ITEM_STEELIUM_Z; break;
                                case TYPE_FAIRY: itemId = ITEM_FAIRIUM_Z; break;
                                default: itemId = ITEM_NONE; break;
                            }
                        }

                        // Gem (e.g. Fire Gem) Check
                        if (RANDOM_CHANCE(BFG_ITEM_GEM_SELECTION_CHANCE))
                        {
                            currentType = i; // Update current type
                            currentStab = isStabType;

                            // Switch on current type
                            switch(currentType) 
                            {
                                case TYPE_NORMAL: itemId = ITEM_NORMAL_GEM; break;
                                case TYPE_FIRE: itemId = ITEM_FIRE_GEM; break;
                                case TYPE_WATER: itemId = ITEM_WATER_GEM; break;
                                case TYPE_ELECTRIC: itemId = ITEM_ELECTRIC_GEM; break;
                                case TYPE_GRASS: itemId = ITEM_GRASS_GEM; break;
                                case TYPE_ICE: itemId = ITEM_ICE_GEM; break;
                                case TYPE_FIGHTING: itemId = ITEM_FIGHTING_GEM; break;
                                case TYPE_POISON: itemId = ITEM_POISON_GEM; break;
                                case TYPE_GROUND: itemId = ITEM_GROUND_GEM; break;
                                case TYPE_FLYING: itemId = ITEM_FLYING_GEM; break;
                                case TYPE_PSYCHIC: itemId = ITEM_PSYCHIC_GEM; break;
                                case TYPE_BUG: itemId = ITEM_BUG_GEM; break;
                                case TYPE_ROCK: itemId = ITEM_ROCK_GEM; break;
                                case TYPE_GHOST: itemId = ITEM_GHOST_GEM; break;
                                case TYPE_DRAGON: itemId = ITEM_DRAGON_GEM; break;
                                case TYPE_DARK: itemId = ITEM_DARK_GEM; break;
                                case TYPE_STEEL: itemId = ITEM_STEEL_GEM; break;
                                case TYPE_FAIRY: itemId = ITEM_FAIRY_GEM; break;
                                default: itemId = ITEM_NONE; break;
                            }
                        }
                    }
                }
            }
        }

        // If the itemId is not ITEM_NONE, and the selected item is unique
        if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, index))
            return itemId; // Unique item found
        else
            itemId = ITEM_NONE; // Reset itemId

        // *** Common Berries ***

        // Sitrus Berry
        if ((itemId == ITEM_NONE) && RANDOM_CHANCE(BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE))
            itemId = ITEM_SITRUS_BERRY;

        // Lum Berry
        if ((itemId == ITEM_NONE) && RANDOM_CHANCE(BFG_ITEM_LUM_BERRY_SELECTION_CHANCE))
            itemId = ITEM_LUM_BERRY;

        // Fiwam Berries
        if ((itemId == ITEM_NONE) && RANDOM_CHANCE(BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE))
            // Get the fiwam berry opposite to which would confuse
            itemId = gFiwamConfuseLookup[nature->negStat];

        // If the itemId is not ITEM_NONE, and the selected item is unique
        if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, index))
            return itemId; // Unique item found
        else
            itemId = ITEM_NONE; // Reset itemId

        // *** Resist Berries *** 

        // Random chance to use resist berry
        if (BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE || BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE) 
        {
            // Placeholders
            currentType = TYPE_NONE;
            uq4_12_t currentValue = UQ_4_12(1.0);

            // Loop over the types
            for(i = 0; i < NUMBER_OF_MON_TYPES; i++) 
            {
                // Switch on type modifier
                switch(typeModifier[i]) 
                {
                    case UQ_4_12(2.0): // 2x Weakness
                        // Skip if we have already found a 4x weakness
                        if ((currentValue != UQ_4_12(4.0)) && (RANDOM_CHANCE(BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE))) 
                        {
                            // Update selected type, value
                            currentValue = typeModifier[i];
                            currentType = i;
                        }
                    break;
                    case UQ_4_12(4.0): // 4x Weakness
                        if (RANDOM_CHANCE(BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE)) 
                        {
                            // Update selected type, value
                            currentValue = typeModifier[i];
                            currentType = i;
                        }
                    break;
                }
            }

            // Switch on type selected
            switch(currentType) 
            {
                case TYPE_NORMAL: itemId = ITEM_CHILAN_BERRY; break;
                case TYPE_FIRE: itemId = ITEM_OCCA_BERRY; break;
                case TYPE_WATER: itemId = ITEM_PASSHO_BERRY; break;
                case TYPE_ELECTRIC: itemId = ITEM_WACAN_BERRY; break;
                case TYPE_GRASS: itemId = ITEM_RINDO_BERRY; break;
                case TYPE_ICE: itemId = ITEM_YACHE_BERRY; break;
                case TYPE_FIGHTING: itemId = ITEM_COBA_BERRY; break;
                case TYPE_POISON: itemId = ITEM_KEBIA_BERRY; break;
                case TYPE_GROUND: itemId = ITEM_SHUCA_BERRY; break;
                case TYPE_FLYING: itemId = ITEM_COBA_BERRY; break;
                case TYPE_PSYCHIC: itemId = ITEM_PAYAPA_BERRY; break;
                case TYPE_BUG: itemId = ITEM_TANGA_BERRY; break;
                case TYPE_ROCK: itemId = ITEM_CHARTI_BERRY; break;
                case TYPE_GHOST: itemId = ITEM_KASIB_BERRY; break;
                case TYPE_DRAGON: itemId = ITEM_HABAN_BERRY; break;
                case TYPE_DARK: itemId = ITEM_COLBUR_BERRY; break;
                case TYPE_STEEL: itemId = ITEM_BABIRI_BERRY; break;
                case TYPE_FAIRY: itemId = ITEM_ROSELI_BERRY; break;
                default: 
                    itemId = ITEM_NONE;
                    break;
            }
        }

        // If the itemId is not ITEM_NONE, and the selected item is unique
        if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, index))
            return itemId; // Unique item found
        else
            itemId = ITEM_NONE; // Reset itemId

        // *** Obscure items with specific use cases ***

        // White Herb (Has stat dropping move)
        for(i=0; ((itemId == ITEM_NONE) && (i < numStatDrop)); i++)
        {
            if (RANDOM_CHANCE(BFG_ITEM_WHITE_HERB_SELECTION_CHANCE))
                itemId = ITEM_WHITE_HERB;
            else if (RANDOM_CHANCE(BFG_ITEM_EJECT_PACK_SELECTION_CHANCE))
                itemId = ITEM_EJECT_PACK;
        }

        // Chesto Berry (Has rest)
        if ((itemId == ITEM_NONE) && (hasRest == TRUE) && RANDOM_CHANCE(BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE))
            itemId = ITEM_CHESTO_BERRY;

        // Wide Lens / Blunder Policy (Inaccurate moves)
        for(i=0; ((itemId == ITEM_NONE) && (i < numInaccurate)); i++)
        {
            if ((hasRecycle == FALSE) && (RANDOM_CHANCE(BFG_ITEM_WIDE_LENS_SELECTION_CHANCE)))
                itemId = ITEM_WIDE_LENS;
            else if (RANDOM_CHANCE(BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE))
                itemId = ITEM_BLUNDER_POLICY;
        }

        // Non-recyclable misc. moves
        if (hasRecycle == FALSE) 
        {
            // Punching Glove (Punching Moves, increased chance with Iron Fist)
            for(i=0; ((itemId == ITEM_NONE) && (i < numPunch)); i++)
                if (RANDOM_CHANCE(BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE))
                    itemId = ITEM_PUNCHING_GLOVE;

            // Black Sludge (For poison types)
            if ((itemId == ITEM_NONE) && IS_TYPE(species->types[0], species->types[1], TYPE_POISON) && RANDOM_CHANCE(BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE))
                itemId = ITEM_BLACK_SLUDGE;

            // Terrain Extender (Terrain Moves / Abilities)
            if ((itemId == ITEM_NONE) && (hasTerrain == TRUE || IS_TERRAIN_ABILITY(abilityId)) && RANDOM_CHANCE(BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE))
                itemId = ITEM_TERRAIN_EXTENDER;

            // Weather Extending Items (Weather-Specific Moves/Abilities)
            if ((itemId == ITEM_NONE) && (hasWeather != MOVE_NONE) && RANDOM_CHANCE(BFG_ITEM_WEATHER_EXTENDER_SELECTION_CHANCE)) 
            {
                switch(hasWeather)
                {
                    case MOVE_RAIN_DANCE:
                        itemId = ITEM_DAMP_ROCK; 
                    break; 
                    case MOVE_SUNNY_DAY:
                        itemId = ITEM_HEAT_ROCK;
                    break;
                    case MOVE_SANDSTORM:
                        itemId = ITEM_SMOOTH_ROCK;
                    break;
                    case MOVE_HAIL:
                        itemId = ITEM_ICY_ROCK;
                    break;
                }
            }
        }

        // Air Balloon
        if ((itemId == ITEM_NONE) && (abilityId != ABILITY_LEVITATE) &&
            // Different odds for both 2x and 4x ground weaknesses, exclude levitating Pokemon
            ((typeModifier[TYPE_GROUND] == UQ_4_12(2.0) && (RANDOM_CHANCE(BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE))) || 
            (typeModifier[TYPE_GROUND] == UQ_4_12(4.0) && (RANDOM_CHANCE(BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE)))))
            itemId = ITEM_AIR_BALLOON;

        // Adrenaline Orb (Defiant / Competitive)
        if ((itemId == ITEM_NONE) && ((abilityId == ABILITY_DEFIANT) || (abilityId == ABILITY_COMPETITIVE)) && RANDOM_CHANCE(BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE))
            itemId = ITEM_ADRENALINE_ORB;

        // Stat Boosting Berries
        if ((itemId != ITEM_NONE) && RANDOM_CHANCE(BFG_ITEM_STAT_BOOST_BERRY_SELECTION_CHANCE)) 
        {
            // Get the stat boosting berry for the nature-boosted stat
            switch(nature->posStat) 
            {
                case STAT_ATK: 
                    itemId = ITEM_LIECHI_BERRY; 
                case STAT_DEF: 
                    itemId = ITEM_GANLON_BERRY;
                case STAT_SPATK:
                    itemId = ITEM_PETAYA_BERRY;
                case STAT_SPDEF: 
                    itemId = ITEM_APICOT_BERRY;
                case STAT_SPEED: 
                    itemId = ITEM_SALAC_BERRY;
            }
        }

        // If the itemId is not ITEM_NONE, and the selected item is unique
        if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, index))
            return itemId; // Unique item found

        // Otherwise, continue looping
    }

    // *** Fallback (Custom Items List) ***

    if (hasRecycle) // Use recyclable list if has recycle is true
        itemId = recycleItemsList[Random() % recycleItemsLength];
    else // Otherwise use normal custom items list
        itemId = customItemsList[Random() % customItemsLength];

    // If the itemId is not ITEM_NONE, and the selected item is unique
    if ((itemId != ITEM_NONE) && GetSpeciesItemCheckUnique(itemId, index))
        return itemId; // Unique item found

    // No item found
    return ITEM_NONE;
}

static bool32 GenerateTrainerPokemon(u16 speciesId, u8 index, u32 otID, u8 fixedIV, u8 level, u8 formeIndex, u16 move, u16 item) 
{
    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);
    const struct FormChange * formChanges;

    u8 evs, nature, abilityNum, moveCount;

    // Forme ID placeholder
    u16 formeId = speciesId;

    // Forme is not default
    if (formeIndex != FORME_DEFAULT) 
    {
        // Get the species form change table
        formChanges = GetSpeciesFormChanges(speciesId);

        // Get the forme change target species
        formeId = formChanges[formeIndex].targetSpecies;
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
    if (((species->abilities[1] != ABILITY_NONE) && (species->abilities[2] != ABILITY_NONE)) && RANDOM_CHANCE(BFG_HA_SELECTION_CHANCE)) 
    {
        abilityNum = 3; // Hidden ability index
        SetMonData(&gEnemyParty[index], MON_DATA_ABILITY_NUM, &abilityNum);
    }

    // No forme change
    if (formeId == speciesId) 
    {
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

    // Meets the minimum number of moves to accept
    if (moveCount >= BFG_MOVE_SELECT_MINIMUM) 
    {
        DebugPrintf("Moves found: %d ...", moveCount);

        // Currently has no held item
        if ((item == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
            item = GetSpeciesItem(formeId, index, nature, evs, abilityNum);

        SetMonData(&gEnemyParty[index], MON_DATA_HELD_ITEM, &item);

        // Set generated successfully
        return TRUE;
    }

    // No moves, generation failed
    return FALSE;
}


void DebugTrainerPokemon(u8 index) 
{
    s32 i;
    struct Pokemon * pokemon = (&gEnemyParty[index]);
    u16 speciesId = GetMonData(pokemon, MON_DATA_SPECIES);
    u8 abilityNum = GetMonData(pokemon,MON_DATA_ABILITY_NUM);

    DebugPrintf("%d @ %d", speciesId, GetMonData(pokemon,MON_DATA_HELD_ITEM));
    DebugPrintf("Ability: %d (%d)", abilityNum, gSpeciesInfo[speciesId].abilities[abilityNum]);
    DebugPrintf("IVs: %d / %d / %d / %d / %d / %d", GetMonData(pokemon,MON_DATA_HP_IV),GetMonData(pokemon,MON_DATA_ATK_IV), GetMonData(pokemon,MON_DATA_DEF_IV), GetMonData(pokemon,MON_DATA_SPATK_IV), GetMonData(pokemon,MON_DATA_SPDEF_IV), GetMonData(pokemon,MON_DATA_SPEED_IV));
    DebugPrintf("EVs: %d / %d / %d / %d / %d / %d", GetMonData(pokemon,MON_DATA_HP_EV),GetMonData(pokemon,MON_DATA_ATK_EV), GetMonData(pokemon,MON_DATA_DEF_EV), GetMonData(pokemon,MON_DATA_SPATK_EV), GetMonData(pokemon,MON_DATA_SPDEF_EV), GetMonData(pokemon,MON_DATA_SPEED_EV));
    DebugPrintf("%d nature", GetNature(pokemon));
    for(i=0; i<MAX_MON_MOVES; i++)
        DebugPrintf("- %d", GetMonData(pokemon, MON_DATA_MOVE1 + i));
}

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level) 
{
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
    for(i = 0; i < NUM_SPECIES; i++) 
    {
        // Break loop if mon limit reached
        if (bfMonCount == BFG_TRAINER_CLASS_MON_LIMIT) 
        {
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
        bst = GetTotalBaseStat(i);

        // Check bst limit (and special cases)
        if ((bst > maxBST) || ((bst < minBST) && (
            // Special case for rotom formes
            (!((i == SPECIES_ROTOM) && (BFG_FORME_CHANCE_ROTOM >= 1))) || 
            // Special case for mega evolutions
            (!(HAS_MEGA_EVOLUTION(i) && (fixedIV >= BFG_ITEM_IV_ALLOW_MEGA)))
        )))
            continue;

        // Add species to mon set
        monSet[bfMonCount++] = i;
    }

    DebugPrintf("Possible species found: %d ...", bfMonCount);

    // Regular battle frontier trainer.
    // Attempt to fill the trainer's party with random Pokemon until 3 have been
    // successfully chosen. The trainer's party may not have duplicate pokemon species
    // or duplicate held items.

    hasZMove = FALSE;
    hasMega = FALSE;

    i = 0;
    while(i != monCount) 
    {
        DebugPrintf("Generating mon number %d ...", i);

        // Sample random species from the mon count
        speciesId = monSet[Random() % bfMonCount];

        // Get base stat total
        bst = GetTotalBaseStat(speciesId);

        // Alt. Forme (e.g. mega, ultra burst)
        forme = FORME_DEFAULT; // Default

        // Ensure this pokemon species isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
            if (GetMonData(&gEnemyParty[j], MON_DATA_SPECIES, NULL) == speciesId)
                break;
        if (j != i + firstMonId)
            continue;

        // Move / item placeholder
        u16 move = MOVE_NONE;
        u16 item = ITEM_NONE;

        // Get species forme change table
        formChanges = GetSpeciesFormChanges(speciesId);
        if (formChanges != NULL) 
        {
            DebugPrintf("Checking for megas/z/other formes ...");
     
            // Switch on the species
            switch(speciesId) 
            {
                case SPECIES_PIKACHU: {
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_PIKANIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        
                        move = MOVE_VOLT_TACKLE;
                        item = ITEM_PIKANIUM_Z;
                    }
                    else // Z-Move not selected
                    {
                        if (RANDOM_CHANCE(BFG_FORME_CHANCE_PIKACHU))
                            speciesId = RANDOM_RANGE(SPECIES_PIKACHU_COSPLAY, SPECIES_PICHU_SPIKY_EARED);

                        // Hat Pikachu-Exclusive Z-Move
                        if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE) && IN_INCLUSIVE_RANGE(SPECIES_PIKACHU_ORIGINAL_CAP,SPECIES_PIKACHU_WORLD_CAP,speciesId) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_PIKASHUNIUM_Z)) 
                        {
                                hasZMove = TRUE;
                            
                            move = MOVE_THUNDERBOLT;
                            item = ITEM_PIKASHUNIUM_Z;
                        }
                        else if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LIGHT_BALL_SELECTION_CHANCE))
                            item = ITEM_LIGHT_BALL; 
                    }
                }; break;
                case SPECIES_PICHU: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_PICHU))
                        speciesId = SPECIES_PICHU_SPIKY_EARED;
                }; break;
                case SPECIES_TAUROS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_TAUROS_PALDEA))
                        speciesId = RANDOM_RANGE(SPECIES_TAUROS_PALDEAN_COMBAT_BREED,SPECIES_WOOPER_PALDEAN);
                }; break;
                case SPECIES_UNOWN: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_UNOWN))
                        speciesId = RANDOM_RANGE(SPECIES_UNOWN_B, SPECIES_CASTFORM_SUNNY);
                }; break;
                case SPECIES_CASTFORM: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_CASTFORM))
                        speciesId = RANDOM_RANGE(SPECIES_CASTFORM_SUNNY,SPECIES_DEOXYS_ATTACK);
                }; break;
                case SPECIES_DEOXYS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_DEOXYS))
                        speciesId = RANDOM_RANGE(SPECIES_DEOXYS_ATTACK, SPECIES_BURMY_SANDY_CLOAK);
                }; break;
                case SPECIES_BURMY: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BURMY_WORMADAM))
                        speciesId = RANDOM_RANGE(SPECIES_BURMY_SANDY_CLOAK, SPECIES_WORMADAM_SANDY_CLOAK);
                }; break;
                case SPECIES_WORMADAM: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BURMY_WORMADAM))
                        speciesId = RANDOM_RANGE(SPECIES_WORMADAM_SANDY_CLOAK, SPECIES_CHERRIM_SUNSHINE);
                }; break;
                case SPECIES_SHELLOS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHELLOS_GASTRODON))
                        speciesId = SPECIES_SHELLOS_EAST_SEA;
                }; break;
                case SPECIES_GASTRODON: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHELLOS_GASTRODON))
                        speciesId = SPECIES_GASTRODON_EAST_SEA;
                }; break;
                case SPECIES_ROTOM: {
                    if ((bst + 80 <= maxBST) && RANDOM_CHANCE(BFG_FORME_CHANCE_ROTOM)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_ROTOM_HEAT, SPECIES_DIALGA_ORIGIN);
                        switch(speciesId) 
                        {
                            case SPECIES_ROTOM_HEAT: move = MOVE_OVERHEAT; break;
                            case SPECIES_ROTOM_WASH: move = MOVE_HYDRO_PUMP; break;
                            case SPECIES_ROTOM_FROST: move = MOVE_BLIZZARD; break;
                            case SPECIES_ROTOM_FAN: move = MOVE_AIR_SLASH; break;
                            case SPECIES_ROTOM_MOW: move = MOVE_LEAF_STORM; break;
                        }
                    }
                }; break;
                case SPECIES_DIALGA: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_DIALGA))
                        speciesId = SPECIES_DIALGA_ORIGIN;
                }; break;
                case SPECIES_PALKIA: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_PALKIA))
                        speciesId = SPECIES_PALKIA_ORIGIN;
                }; break;
                case SPECIES_GIRATINA: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_GIRATINA))
                        speciesId = SPECIES_GIRATINA_ORIGIN;
                }; break;
                case SPECIES_SHAYMIN: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SHAYMIN))
                        speciesId = SPECIES_SHAYMIN_SKY;
                }; break;
                case SPECIES_ARCEUS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ARCEUS)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_ARCEUS_FIGHTING, SPECIES_BASCULIN_BLUE_STRIPED);
                        switch(speciesId) 
                        {
                            case SPECIES_ARCEUS_FIGHTING: item = CHECK_ARCEUS_ZMOVE ? ITEM_FIGHTINIUM_Z : ITEM_FIST_PLATE; if (item == ITEM_FIGHTINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_FLYING: item = CHECK_ARCEUS_ZMOVE ? ITEM_FLYINIUM_Z : ITEM_SKY_PLATE; if (item == ITEM_FLYINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_POISON: item = CHECK_ARCEUS_ZMOVE ? ITEM_POISONIUM_Z : ITEM_TOXIC_PLATE; if (item == ITEM_POISONIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_GROUND: item = CHECK_ARCEUS_ZMOVE ? ITEM_GROUNDIUM_Z : ITEM_EARTH_PLATE; if (item == ITEM_GROUNDIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_ROCK: item = CHECK_ARCEUS_ZMOVE ? ITEM_ROCKIUM_Z : ITEM_STONE_PLATE; if (item == ITEM_ROCKIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_BUG: item = CHECK_ARCEUS_ZMOVE ? ITEM_BUGINIUM_Z : ITEM_INSECT_PLATE; if (item == ITEM_BUGINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_GHOST: item = CHECK_ARCEUS_ZMOVE ? ITEM_GHOSTIUM_Z : ITEM_SPOOKY_PLATE; if (item == ITEM_GHOSTIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_STEEL: item = CHECK_ARCEUS_ZMOVE ? ITEM_STEELIUM_Z : ITEM_IRON_PLATE; if (item == ITEM_STEELIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_FIRE: item = CHECK_ARCEUS_ZMOVE ? ITEM_FIRIUM_Z : ITEM_FLAME_PLATE; if (item == ITEM_FIRIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_WATER: item = CHECK_ARCEUS_ZMOVE ? ITEM_WATERIUM_Z : ITEM_SPLASH_PLATE; if (item == ITEM_WATERIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_GRASS: item = CHECK_ARCEUS_ZMOVE ? ITEM_GRASSIUM_Z : ITEM_MEADOW_PLATE; if (item == ITEM_GRASSIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_ELECTRIC: item = CHECK_ARCEUS_ZMOVE ? ITEM_ELECTRIUM_Z : ITEM_ZAP_PLATE; if (item == ITEM_ELECTRIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_PSYCHIC: item = CHECK_ARCEUS_ZMOVE ? ITEM_PSYCHIUM_Z : ITEM_MIND_PLATE; if (item == ITEM_PSYCHIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_ICE: item = CHECK_ARCEUS_ZMOVE ? ITEM_ICIUM_Z : ITEM_ICICLE_PLATE; if (item == ITEM_ICIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_DRAGON: item = CHECK_ARCEUS_ZMOVE ? ITEM_DRAGONIUM_Z : ITEM_DRACO_PLATE; if (item == ITEM_DRAGONIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_DARK: item = CHECK_ARCEUS_ZMOVE ? ITEM_DARKINIUM_Z : ITEM_DREAD_PLATE; if (item == ITEM_DARKINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_ARCEUS_FAIRY: item = CHECK_ARCEUS_ZMOVE ? ITEM_FAIRIUM_Z : ITEM_PIXIE_PLATE; if (item == ITEM_FAIRIUM_Z) hasZMove = TRUE; break;
                        }
                        move = MOVE_JUDGMENT; // Changes type based on held item
                    }
                }; break;
                case SPECIES_BASCULIN: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BASCULIN))
                        speciesId = RANDOM_RANGE(SPECIES_BASCULIN_BLUE_STRIPED, SPECIES_DARMANITAN_ZEN_MODE);
                }; break;
                case SPECIES_DEERLING: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_DEERLING_SAWSBUCK))
                        speciesId = RANDOM_RANGE(SPECIES_DEERLING_SUMMER, SPECIES_SAWSBUCK_SUMMER);
                }; break;
                case SPECIES_SAWSBUCK: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_DEERLING_SAWSBUCK))
                        speciesId = RANDOM_RANGE(SPECIES_SAWSBUCK_SUMMER, SPECIES_TORNADUS_THERIAN);
                }; break;
                case SPECIES_TORNADUS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_TORNADUS_THERIAN))
                        speciesId = SPECIES_TORNADUS_THERIAN;
                }; break;
                case SPECIES_THUNDURUS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_THUNDURUS_THERIAN))
                        speciesId = SPECIES_THUNDURUS_THERIAN;
                }; break;
                case SPECIES_LANDORUS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_LANDORUS_THERIAN))
                        speciesId = SPECIES_LANDORUS_THERIAN;
                }; break;
                case SPECIES_ENAMORUS: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ENAMORUS_THERIAN))
                        speciesId = SPECIES_ENAMORUS_THERIAN;
                }; break;
                case SPECIES_KYUREM: {
                    if ((bst + 40 <= maxBST) && RANDOM_CHANCE(BFG_FORME_CHANCE_KYUREM)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_KYUREM_BLACK, SPECIES_KELDEO_RESOLUTE);
                        switch(speciesId) 
                        {
                            case SPECIES_KYUREM_BLACK: {
                                move = MOVE_FUSION_BOLT;
                            }; break;
                            case SPECIES_KYUREM_WHITE: {
                                move = MOVE_FUSION_FLARE;
                            }; break;
                        }
                    }
                }; break;
                case SPECIES_KELDEO: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_KELDEO)) 
                    {
                        speciesId = SPECIES_KELDEO_RESOLUTE;
                        move = MOVE_SECRET_SWORD;
                    }
                }; break;
                case SPECIES_GENESECT: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_GENESECT)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_GENESECT_DOUSE_DRIVE, SPECIES_GRENINJA_BATTLE_BOND);
                        switch(speciesId) 
                        {
                            case SPECIES_GENESECT_DOUSE_DRIVE: item = ITEM_DOUSE_DRIVE; break;
                            case SPECIES_GENESECT_SHOCK_DRIVE: item = ITEM_SHOCK_DRIVE; break;
                            case SPECIES_GENESECT_BURN_DRIVE: item = ITEM_BURN_DRIVE; break;
                            case SPECIES_GENESECT_CHILL_DRIVE: item = ITEM_CHILL_DRIVE; break;
                        }
                    }
                }; break;
                case SPECIES_GRENINJA: {
                    if ((bst + 110 <= maxBST) && RANDOM_CHANCE(BFG_FORME_CHANCE_GRENINJA)) 
                    {
                        speciesId = SPECIES_GRENINJA_BATTLE_BOND;
                        move = MOVE_WATER_SHURIKEN;
                    }
                }; break;
                case SPECIES_VIVILLON: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_VIVILLON))
                        speciesId = RANDOM_RANGE(SPECIES_VIVILLON_POLAR, SPECIES_FLABEBE_YELLOW_FLOWER);
                }; break;
                case SPECIES_FLABEBE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                        speciesId = RANDOM_RANGE(SPECIES_FLABEBE_YELLOW_FLOWER, SPECIES_FLOETTE_YELLOW_FLOWER);
                }; break;
                case SPECIES_FLOETTE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                        speciesId = RANDOM_RANGE(SPECIES_FLOETTE_YELLOW_FLOWER, SPECIES_FLORGES_YELLOW_FLOWER);
                }; break;
                case SPECIES_FLORGES: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES))
                        speciesId = RANDOM_RANGE(SPECIES_FLORGES_YELLOW_FLOWER, SPECIES_FURFROU_HEART_TRIM);
                }; break;
                case SPECIES_FURFROU: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_FURFROU))
                        speciesId = RANDOM_RANGE(SPECIES_FURFROU_HEART_TRIM, SPECIES_MEOWSTIC_FEMALE);
                }; break;
                case SPECIES_MEOWSTIC: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_MEOWSTIC))
                        speciesId = SPECIES_MEOWSTIC_FEMALE;
                    else 
                        speciesId = SPECIES_MEOWSTIC_MALE;
                }; break;
                case SPECIES_PUMPKABOO: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST))
                        speciesId = RANDOM_RANGE(SPECIES_PUMPKABOO_SMALL, SPECIES_GOURGEIST_SMALL);
                }; break;
                case SPECIES_GOURGEIST: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST))
                        speciesId = RANDOM_RANGE(SPECIES_GOURGEIST_SMALL, SPECIES_XERNEAS_ACTIVE);
                }; break;
                case SPECIES_ZYGARDE: {
                    // Switch between zygarde 10%/50%
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ZYGARDE))
                        speciesId = SPECIES_ZYGARDE_10;
                    // Change to power construct
                    if (708 <= maxBST) 
                    {
                        switch(speciesId) 
                        {
                            case SPECIES_ZYGARDE_10: 
                                speciesId = SPECIES_ZYGARDE_10_POWER_CONSTRUCT;
                            break;
                            case SPECIES_ZYGARDE_50: 
                                speciesId = SPECIES_ZYGARDE_50_POWER_CONSTRUCT;
                            break;
                        }
                    }
                }; break;
                case SPECIES_HOOPA: {
                    if ((bst + 80 <= maxBST) && RANDOM_CHANCE(BFG_FORME_CHANCE_HOOPA))
                        speciesId = SPECIES_HOOPA_UNBOUND;
                }; break;
                case SPECIES_ORICORIO: {
                    // Signature move
                    move = MOVE_REVELATION_DANCE;
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ORICORIO))
                        speciesId = RANDOM_RANGE(SPECIES_ORICORIO_POM_POM, SPECIES_ROCKRUFF_OWN_TEMPO);
                }; break;
                case SPECIES_ROCKRUFF: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ROCKRUFF_LYCANROC))
                        speciesId = SPECIES_ROCKRUFF_OWN_TEMPO;
                }; break;
                case SPECIES_LYCANROC: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ROCKRUFF_LYCANROC))
                        speciesId = RANDOM_RANGE(SPECIES_LYCANROC_MIDNIGHT, SPECIES_WISHIWASHI_SCHOOL);
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_LYCANIUM_Z))
                    {                            
                        hasZMove = TRUE;

                        move = MOVE_STONE_EDGE;
                        item = ITEM_LYCANIUM_Z;
                    }
                }; break;
                case SPECIES_SILVALLY: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SILVALLY)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_SILVALLY_FIGHTING, SPECIES_MINIOR_METEOR_ORANGE);
                        switch(speciesId) 
                        {
                            case SPECIES_SILVALLY_FIGHTING: item = CHECK_SILVALLY_ZMOVE ? ITEM_FIGHTINIUM_Z : ITEM_FIGHTING_MEMORY; if (item == ITEM_FIGHTINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_FLYING: item = CHECK_SILVALLY_ZMOVE ? ITEM_FLYINIUM_Z : ITEM_FLYING_MEMORY; if (item == ITEM_FLYINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_POISON: item = CHECK_SILVALLY_ZMOVE ? ITEM_POISONIUM_Z : ITEM_POISON_MEMORY; if (item == ITEM_POISONIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_GROUND: item = CHECK_SILVALLY_ZMOVE ? ITEM_GROUNDIUM_Z : ITEM_GROUND_MEMORY; if (item == ITEM_GROUNDIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_ROCK: item = CHECK_SILVALLY_ZMOVE ? ITEM_ROCKIUM_Z : ITEM_ROCK_MEMORY; if (item == ITEM_ROCKIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_BUG: item = CHECK_SILVALLY_ZMOVE ? ITEM_BUGINIUM_Z : ITEM_BUG_MEMORY; if (item == ITEM_BUGINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_GHOST: item = CHECK_SILVALLY_ZMOVE ? ITEM_GHOSTIUM_Z : ITEM_GHOST_MEMORY; if (item == ITEM_GHOSTIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_STEEL: item = CHECK_SILVALLY_ZMOVE ? ITEM_STEELIUM_Z : ITEM_STEEL_MEMORY; if (item == ITEM_STEELIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_FIRE: item = CHECK_SILVALLY_ZMOVE ? ITEM_FIRIUM_Z : ITEM_FIRE_MEMORY; if (item == ITEM_FIRIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_WATER: item = CHECK_SILVALLY_ZMOVE ? ITEM_WATERIUM_Z : ITEM_WATER_MEMORY; if (item == ITEM_WATERIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_GRASS: item = CHECK_SILVALLY_ZMOVE ? ITEM_GRASSIUM_Z : ITEM_GRASS_MEMORY; if (item == ITEM_GRASSIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_ELECTRIC: item = CHECK_SILVALLY_ZMOVE ? ITEM_ELECTRIUM_Z : ITEM_ELECTRIC_MEMORY; if (item == ITEM_ELECTRIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_PSYCHIC: item = CHECK_SILVALLY_ZMOVE ? ITEM_PSYCHIUM_Z : ITEM_PSYCHIC_MEMORY; if (item == ITEM_PSYCHIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_ICE: item = CHECK_SILVALLY_ZMOVE ? ITEM_ICIUM_Z :  ITEM_ICE_MEMORY; if (item == ITEM_ICIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_DRAGON: item = CHECK_SILVALLY_ZMOVE ? ITEM_DRAGONIUM_Z : ITEM_DRAGON_MEMORY; if (item == ITEM_DRAGONIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_DARK: item = CHECK_SILVALLY_ZMOVE ? ITEM_DARKINIUM_Z : ITEM_DARK_MEMORY; if (item == ITEM_DARKINIUM_Z) hasZMove = TRUE; break;
                            case SPECIES_SILVALLY_FAIRY: item = CHECK_SILVALLY_ZMOVE ? ITEM_FAIRIUM_Z : ITEM_FAIRY_MEMORY; if (item == ITEM_FAIRIUM_Z) hasZMove = TRUE; break;
                        }
                        move = MOVE_MULTI_ATTACK; // Changes type based on held item
                    }
                }; break;
                case SPECIES_MINIOR: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_MINIOR))
                        speciesId = RANDOM_RANGE(SPECIES_MINIOR_METEOR_ORANGE, SPECIES_MINIOR_CORE_RED);
                }; break;
                case SPECIES_NECROZMA: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_NECROZMA)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_NECROZMA_DUSK_MANE, SPECIES_NECROZMA_ULTRA);

                        // Z-Moves are allowed
                        if (fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) 
                        {
                            // Random chance to select ultra-burst
                            if ((bst + 76 <= maxBST) && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_ULTRANECROZIUM_Z)) 
                            {
                                move = MOVE_PHOTON_GEYSER;
                                item = ITEM_ULTRANECROZIUM_Z;
                                forme = 3; // SPECIES_NECROZMA_ULTRA

                                hasZMove = TRUE;
                            }
                            else if (RANDOM_CHANCE(BFG_ZMOVE_CHANCE_NECROZMA)) // Use Solganium/Lunalium Z
                            {
                                // Select signature move
                                switch(speciesId) 
                                {
                                    case SPECIES_NECROZMA_DAWN_WINGS:
                                        move = MOVE_SUNSTEEL_STRIKE;
                                        item = ITEM_SOLGANIUM_Z;
                                    break;
                                    case SPECIES_NECROZMA_DUSK_MANE:
                                        move = MOVE_MOONGEIST_BEAM;
                                        move = ITEM_LUNALIUM_Z;
                                    break;
                                }
                                
                                hasZMove = TRUE;
                            }
                        }
                    }
                }; break;
                case SPECIES_MAGEARNA: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_MAGEARNA))
                        speciesId = SPECIES_MAGEARNA_ORIGINAL_COLOR;
                }; break;
                case SPECIES_ALCREMIE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_ALCREMIE))
                        speciesId = RANDOM_RANGE(SPECIES_ALCREMIE_RUBY_CREAM, SPECIES_EISCUE_NOICE_FACE);
                }; break;
                case SPECIES_INDEEDEE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_INDEEDEE))
                        speciesId = SPECIES_INDEEDEE_FEMALE;
                    else
                        speciesId = SPECIES_INDEEDEE_MALE;
                }; break;
                case SPECIES_ZACIAN: {
                    if ((bst + 60 <= maxBST)) 
                    {
                        speciesId = SPECIES_ZACIAN_CROWNED_SWORD;
                        item = ITEM_RUSTED_SWORD;
                        move = MOVE_IRON_HEAD;
                    }
                }; break;
                case SPECIES_ZAMAZENTA: {
                    if ((bst + 60 <= maxBST)) 
                    {
                        speciesId = SPECIES_ZAMAZENTA_CROWNED_SHIELD;
                        item = ITEM_RUSTED_SHIELD;
                        move = MOVE_IRON_HEAD;
                    }
                }; break;
                case SPECIES_URSHIFU: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_URSHIFU))
                        speciesId = SPECIES_URSHIFU_RAPID_STRIKE_STYLE;
                }; break;
                case SPECIES_CALYREX: {
                    if ((680 <= maxBST) && RANDOM_CHANCE(BFG_FORME_CHANCE_CALYREX)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_CALYREX_ICE_RIDER, SPECIES_CALYREX_SHADOW_RIDER);
                        switch(speciesId) 
                        {
                            // Signature Moves
                            case SPECIES_CALYREX_ICE_RIDER: {
                                move = MOVE_GLACIAL_LANCE;
                            }; break;
                            case SPECIES_CALYREX_SHADOW_RIDER: {
                                move = MOVE_ASTRAL_BARRAGE;
                            }; break;
                        }
                    }
                }; break;
                case SPECIES_BASCULEGION: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_BASCULEGION))
                        speciesId = SPECIES_BASCULEGION_FEMALE;
                    else 
                        speciesId = SPECIES_BASCULEGION_MALE;
                }; break;
                case SPECIES_OINKOLOGNE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_OINKOLOGNE))
                        speciesId = SPECIES_OINKOLOGNE_FEMALE;
                    else 
                        speciesId = SPECIES_OINKOLOGNE_MALE;
                }; break;
                case SPECIES_MAUSHOLD: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_MAUSHOLD))
                        speciesId = SPECIES_MAUSHOLD_FAMILY_OF_FOUR;
                }; break;
                case SPECIES_SQUAWKABILLY: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_SQUAWKABILLY))
                        speciesId = RANDOM_RANGE(SPECIES_SQUAWKABILLY_BLUE_PLUMAGE, SPECIES_NACLI);
                }; break;
                case SPECIES_TATSUGIRI: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_TATSUGIRI))
                        speciesId = RANDOM_RANGE(SPECIES_TATSUGIRI_DROOPY, SPECIES_ANNIHILAPE);
                }; break;
                case SPECIES_DUDUNSPARCE: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_DUDUNSPARCE))
                        speciesId = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
                }; break;
                case SPECIES_GIMMIGHOUL: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_GIMMIGHOUL))
                        speciesId = SPECIES_GIMMIGHOUL_ROAMING;
                }; break;
                case SPECIES_OGERPON: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_OGERPON)) 
                    {
                        speciesId = RANDOM_RANGE(SPECIES_OGERPON_WELLSPRING_MASK, SPECIES_OGERPON_TEAL_MASK_TERA);
                        // Required hold item
                        switch(speciesId) 
                        {
                            case SPECIES_OGERPON_WELLSPRING_MASK: item = ITEM_WELLSPRING_MASK; break;
                            case SPECIES_OGERPON_HEARTHFLAME_MASK: item = ITEM_HEARTHFLAME_MASK; break;
                            case SPECIES_OGERPON_CORNERSTONE_MASK: item = ITEM_CORNERSTONE_MASK; break;
                        }; 
                        // Signature move
                        move = MOVE_IVY_CUDGEL;
                    }
                }; break;
                case SPECIES_URSALUNA: {
                    if (RANDOM_CHANCE(BFG_FORME_CHANCE_URSALUNA))
                        speciesId = SPECIES_URSALUNA_BLOODMOON;
                }; break;
                // Species-specific items
                case SPECIES_FARFETCHD:
                case SPECIES_FARFETCHD_GALARIAN:
                case SPECIES_SIRFETCHD: 
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LEEK_SELECTION_CHANCE))
                        item = ITEM_LEEK;
                break;
                case SPECIES_MAROWAK:
                case SPECIES_MAROWAK_ALOLAN:
                case SPECIES_MAROWAK_ALOLAN_TOTEM:
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_THICK_CLUB_SELECTION_CHANCE))
                        item = ITEM_THICK_CLUB;
                break; 
                case SPECIES_CHANSEY: 
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_LUCKY_PUNCH_SELECTION_CHANCE))
                        item = ITEM_LUCKY_PUNCH;
                break; 
                case SPECIES_DITTO: 
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_DITTO_POWDER_SELECTION_CHANCE)) 
                    {
                        // Select ditto item
                        if (RANDOM_BOOL())
                            item = ITEM_METAL_POWDER;
                        else
                            item = ITEM_QUICK_POWDER;
                    }
                break;
                case SPECIES_GOREBYSS: 
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_DEEP_SEA_SCALE_SELECTION_CHANCE))
                        item = ITEM_DEEP_SEA_SCALE; 
                break;
                case SPECIES_HUNTAIL: 
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_DEEP_SEA_TOOTH_SELECTION_CHANCE))
                        item = ITEM_DEEP_SEA_SCALE; 
                break;
                case SPECIES_LATIAS:
                case SPECIES_LATIOS:
                    if (BFG_NO_ITEM_SELECTION_CHANCE != 1 && RANDOM_CHANCE(BFG_ITEM_SOUL_DEW_SELECTION_CHANCE))
                        item = ITEM_SOUL_DEW;
                break;
                // Signature Z-Moves
                case SPECIES_EEVEE:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_EEVIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_LAST_RESORT;
                        item = ITEM_EEVIUM_Z;
                    }
                break;
                case SPECIES_SNORLAX:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SNORLIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_GIGA_IMPACT;
                        item = ITEM_SNORLIUM_Z;
                    }
                break;
                case SPECIES_MEW:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_MEWNIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_PSYCHIC;
                        item = ITEM_MEWNIUM_Z;
                    }
                break;
                case SPECIES_DECIDUEYE:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_DECIDIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_SPIRIT_SHACKLE;
                        item = ITEM_DECIDIUM_Z;
                    }
                break;
                case SPECIES_INCINEROAR:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_INCINIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_DARKEST_LARIAT;
                        item = ITEM_INCINIUM_Z;
                    }
                break;
                case SPECIES_PRIMARINA:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_PRIMARIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_SPARKLING_ARIA;
                        item = ITEM_PRIMARIUM_Z;
                    }
                break;
                case SPECIES_MIMIKYU:
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_MIMIKIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_PLAY_ROUGH;
                        item = ITEM_MIMIKIUM_Z;
                    }
                break;
                case SPECIES_KOMMO_O: 
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_KOMMONIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_CLANGING_SCALES;
                        item = ITEM_KOMMONIUM_Z;
                    }
                break;
                case SPECIES_TAPU_FINI: 
                case SPECIES_TAPU_BULU: 
                case SPECIES_TAPU_LELE: 
                case SPECIES_TAPU_KOKO: 
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_TAPUNIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_NATURES_MADNESS;
                        item = ITEM_TAPUNIUM_Z;
                    }
                break;
                case SPECIES_SOLGALEO: 
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_SOLGANIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_SUNSTEEL_STRIKE;
                        item = ITEM_SOLGANIUM_Z;
                    }
                break;
                case SPECIES_LUNALA: 
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_LUNALIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_MOONGEIST_BEAM;
                        item = ITEM_LUNALIUM_Z;
                    }
                break;
                case SPECIES_MARSHADOW: 
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_MARSHADIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_SPECTRAL_THIEF;
                        item = ITEM_MARSHADIUM_Z;
                    }
                break;
                case SPECIES_RAICHU_ALOLAN: 
                    if ((fixedIV >= BFG_ITEM_IV_ALLOW_ZMOVE) && (hasZMove == FALSE)  && RANDOM_CHANCE(BFG_ZMOVE_CHANCE_ALORAICHIUM_Z)) 
                    {
                        hasZMove = TRUE;
                        move = MOVE_THUNDERBOLT;
                        item = ITEM_ALORAICHIUM_Z;
                    }
                break;
            }

            // Check for Mega/Primal/Gigantamax
            for(j = 0; formChanges[j].method != FORM_CHANGE_TERMINATOR; j++) 
            {
                switch(formChanges[j].method) 
                {
                    #if B_FLAG_DYNAMAX_BATTLE != 0
                    case FORM_CHANGE_BATTLE_GIGANTAMAX: {
                        if (FlagGet(B_FLAG_DYNAMAX_BATTLE) && BFG_ITEM_ALLOW_GMAX)
                            forme = j;
                    }; break;
                    #endif
                    case FORM_CHANGE_BATTLE_PRIMAL_REVERSION: {
                        if ((item == ITEM_NONE) && (fixedIV >= BFG_ITEM_IV_ALLOW_MEGA) && (bst + 100 <= maxBST) && RANDOM_CHANCE(BFG_FORME_CHANCE_PRIMAL)) 
                        {
                            item = formChanges[j].param1; // ItemId
                            forme = j;
                        }
                    }; break;
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE: {
                        if ((move == MOVE_NONE) && (fixedIV >= BFG_ITEM_IV_ALLOW_MEGA) && (bst + 100 <= maxBST) && (hasMega == FALSE) && RANDOM_CHANCE(BFG_FORME_CHANCE_MEGA)) 
                        {
                            move = formChanges[j].param1; // MoveId
                            hasMega = TRUE;
                            forme = j;
                        }
                    }; break;
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM: {
                        if ((item == ITEM_NONE) && (fixedIV >= BFG_ITEM_IV_ALLOW_MEGA) && (bst + 100 <= maxBST) && (hasMega == FALSE) && RANDOM_CHANCE(BFG_FORME_CHANCE_MEGA)) 
                        {
                            item = formChanges[j].param1; // ItemId
                            hasMega = TRUE;
                            forme = j;
                        }
                    }; break;
                }
                if (forme == j) 
                {
                    DebugPrintf("Forme found: %d ...", forme);
                    break; // Break if forme found
                }
            }
        }

        DebugPrintf("Generating set for species %d ...", speciesId);

        // Generate trainer Pokemon and add it to the team

        // If the pokemon was successfully added to the trainer's party, move on to the next party slot.
        if (GenerateTrainerPokemon(speciesId, i + firstMonId, otID, fixedIV, level, forme, move, item) == TRUE)
            DebugTrainerPokemon(i++);
    }
}