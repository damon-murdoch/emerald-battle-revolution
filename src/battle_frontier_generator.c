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
#define SET_MODIFIER(x,y) (((x) == BFG_MOVE_BASE_MODIFIER) ? (y) : (x))

// Apply positive / negative nature modifiers for moves
#define GET_NEG_NATURE_MULTIPLIER(n, s) ((n->negStat == s) ? BFG_MOVE_NEG_NATURE_MULTIPLIER : 1.0f)
#define GET_POS_NATURE_MULTIPLIER(n, s) ((n->posStat == s) ? BFG_MOVE_POS_NATURE_MULTIPLIER : 1.0f)
#define GET_NATURE_MULTIPLIER(n, s) ((GET_NEG_NATURE_MULTIPLIER(n,s)) * (GET_POS_NATURE_MULTIPLIER(n,s)))

// Apply positive / negative modifiers for evs
// GET_NEG_EV_MULTIPLIER should be used in the case of having a lower score with EV investment, for
// example Trick Room as a correlation to speed
// GET_POS_EV_MULTIPLIER is more useful in most other cases
#define GET_NEG_EV_MULTIPLIER(e,s) (CHECK_EVS(e,s) ? (1.0f / BFG_MOVE_EV_INVEST_MODIFIER) : 1.0f)
#define GET_POS_EV_MULTIPLIER(e,s) (CHECK_EVS(e,s) ? (1.0f * BFG_MOVE_EV_INVEST_MODIFIER) : 1.0f)

#define GET_ATK_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_ATK)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_ATTACK)))
#define GET_DEF_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_DEF)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_DEFENSE)))
#define GET_SPATK_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPATK)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_SP_ATTACK)))
#define GET_SPDEF_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPDEF)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_SP_DEFENSE)))
#define GET_SPEED_STAT_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPEED)) * (GET_POS_EV_MULTIPLIER(e, F_EV_SPREAD_SPEED)))

#define GET_SPEED_NEG_MULTIPLIER(n,e) ((GET_NATURE_MULTIPLIER(n,STAT_SPEED)) * (GET_NEG_EV_MULTIPLIER(e, F_EV_SPREAD_SPEED)))

// rating *= BFG_MOVE_EV_INVEST_MODIFIER;

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
    [3] = 180,
    [6] = 225,
    [9] = 270,
    [12] = 315,
    [15] = 360,
    [18] = 405,
    [21] = 450,
    [MAX_PER_STAT_IVS] = 495,
};

const u16 fixedIVMaxBSTLookup [] = {
    [3] = 405,
    [6] = 450,
    [9] = 495,
    [12] = 540,
    [15] = 585,
    [18] = 630,
    [21] = 675,
    [MAX_PER_STAT_IVS] = 720,
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
            if ((currentMove->split == SPLIT_STATUS) || (currentMoves[i] == MOVE_FAKE_OUT)) {
                numStatus++;
            }
            else // Physical / Special Move
            {
                // Physical move
                if (currentMove->split == SPLIT_PHYSICAL)
                    numPhysical++;
                else // Special move
                    numSpecial++;

                if (move->type == currentMove->type) {
                    // Check if move is a duplicate
                    if (
                        (move->split == currentMove->split) && 
                        // (move->target == moveTemp->target) && TODO: Make this column check for doubles
                        (move->priority == currentMove->priority)
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

    // Might be updated by pixilate/refridgerate/etc.
    u8 type = move->type;

    // Move rating (Casted to u16 at the end)
    float rating = BFG_MOVE_BASE_RATING;

    // Switch on move target
    switch(move->target) {
        // Entry Hazards
        case MOVE_TARGET_OPPONENTS_FIELD: {
            rating *= BFG_MOVE_HAZARD_MULTIPLIER;
        }; 
        break;
        // Random targeting move
        case MOVE_TARGET_RANDOM: 
            if (IS_DOUBLES())
                rating *= BFG_MOVE_RANDOM_HIT_MULTIPLIER;
        // Ally-targeting move
        case MOVE_TARGET_ALLY: 
            if (IS_DOUBLES())
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
                rating *= BFG_MOVE_FIELD_MULTIPLIER;
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
        // Type-Changing
        case ABILITY_NORMALIZE: 
            type = TYPE_NORMAL;
        break;
        case ABILITY_AERILATE: 
            if (move->type == TYPE_NORMAL) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_FLYING;
            }
        break;
        case ABILITY_PIXILATE: 
            if (move->type == TYPE_NORMAL)  {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_FAIRY;
            }
        break;
        case ABILITY_REFRIGERATE: 
            if (move->type == TYPE_NORMAL) {
                rating *= BFG_MOVE_ABILITY_MODIFIER;
                type = TYPE_ICE;
            }
        break;
        case ABILITY_GALVANIZE: 
            if (move->type == TYPE_NORMAL) {
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
        // Rating Changing
        case ABILITY_PUNK_ROCK:
            if (move->soundMove == TRUE)
                rating *= BFG_MOVE_ABILITY_MODIFIER;
        break;
        case ABILITY_STEELWORKER:
            if (move->type == TYPE_STEEL)
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
            if (move->type == TYPE_WATER)
                rating *= fpow(BFG_MOVE_ABILITY_MODIFIER, 2);
        break;
        case ABILITY_PRANKSTER:
            if (move->split == SPLIT_STATUS)
                rating *= BFG_MOVE_PRIORITY_MULTIPLIER;
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
                rating *= BFG_MOVE_STAB_MODIFIER;
        break;
    }
    #endif

    // Status moves
    if ((move->split == SPLIT_STATUS) || (moveId == MOVE_FAKE_OUT)) {

        // Check if Max. Status moves is reached
        if (numStatus >= BFG_MOVE_MAX_STATUS)
            return 0;

        // Increase selection chance if invested in def/spdef
        rating *= GET_POS_EV_MULTIPLIER(evs, F_EV_SPREAD_HP);
        rating *= GET_SPDEF_STAT_MULTIPLIER(nature,evs);
        rating *= GET_DEF_STAT_MULTIPLIER(nature,evs);

        #if BFG_MOVE_EFFECT_MODIFIERS == TRUE
        // Switch on move effect
        switch(move->effect) {
            // Multi-Stat Boosters
            case EFFECT_NO_RETREAT: 
                rating *= GET_ATK_STAT_MULTIPLIER(nature, evs);
                rating *= GET_DEF_STAT_MULTIPLIER(nature, evs);
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs);
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature, evs);
                rating *= GET_SPEED_STAT_MULTIPLIER(nature, evs);
            break;
            case EFFECT_BULK_UP:
            case EFFECT_COIL: 
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs);
                rating *= GET_DEF_STAT_MULTIPLIER(nature,evs);
            break; 
            case EFFECT_CURSE: 
                if (!(IS_TYPE(species->types[0], species->types[1], TYPE_GHOST))) {
                    rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
                    rating *= GET_DEF_STAT_MULTIPLIER(nature,evs); // +1
                    rating *= GET_SPEED_NEG_MULTIPLIER(nature,evs); // -1
                }
            break;
            case EFFECT_VICTORY_DANCE: 
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_DEF_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_DRAGON_DANCE:
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_SHELL_SMASH: 
                rating *= fpow(GET_ATK_STAT_MULTIPLIER(nature,evs), 2); // +2
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature,evs), 2); // +2
                rating *= fpow(GET_SPEED_NEG_MULTIPLIER(nature,evs), 2); // +2
            break;
            case EFFECT_ATTACK_SPATK_UP:
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPATK_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_GEOMANCY:
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature,evs), 2); // +2
                rating *= fpow(GET_SPDEF_STAT_MULTIPLIER(nature,evs), 2); // +2
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature,evs), 2); // +2
                rating *= BFG_MOVE_MULTI_TURN_MODIFIER;
            break;
            case EFFECT_QUIVER_DANCE: 
                rating *= GET_SPATK_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPEED_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_SHIFT_GEAR: 
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature,evs), 2); // +2
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_TAKE_HEART:
            case EFFECT_CALM_MIND: 
                rating *= GET_SPATK_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_COSMIC_POWER: 
            case EFFECT_STOCKPILE: 
                rating *= GET_DEF_STAT_MULTIPLIER(nature,evs); // +1
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // Attack Boosting
            case EFFECT_BELLY_DRUM: 
                rating *= fpow(GET_ATK_STAT_MULTIPLIER(nature, evs), 6);
            break;
            case EFFECT_ATTACK_UP_2:
                rating *= fpow(GET_ATK_STAT_MULTIPLIER(nature,evs), 2); // +2
            break;
            case EFFECT_ATTACK_UP_USER_ALLY:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
            case EFFECT_ATTACK_ACCURACY_UP:
            case EFFECT_ATTACK_UP:
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // Defense Boosting
            case EFFECT_DEFENSE_UP_3:
                rating *= fpow(GET_DEF_STAT_MULTIPLIER(nature,evs), 3); // +3
            break;
            case EFFECT_DEFENSE_UP_2:
                rating *= fpow(GET_DEF_STAT_MULTIPLIER(nature,evs), 2); // +2
            break;
            case EFFECT_DEFENSE_CURL:
            case EFFECT_DEFENSE_UP:
                rating *= GET_DEF_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // Special Attack Boosting
            case EFFECT_SPECIAL_ATTACK_UP_3:
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature,evs), 3); // +3
            break;
            case EFFECT_SPECIAL_ATTACK_UP_2:
                rating *= fpow(GET_SPATK_STAT_MULTIPLIER(nature,evs), 2); // +2
            break;
            case EFFECT_SPECIAL_ATTACK_UP:
                rating *= GET_SPATK_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // Special Defense Boosting
            case EFFECT_SPECIAL_DEFENSE_UP_2: 
                rating *= fpow(GET_SPDEF_STAT_MULTIPLIER(nature,evs), 2); // +2
            break;
            case EFFECT_SPECIAL_DEFENSE_UP: 
                rating *= GET_SPDEF_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // Speed Boosting
            case EFFECT_AUTOTOMIZE:
            case EFFECT_SPEED_UP_2:
                rating *= fpow(GET_SPEED_STAT_MULTIPLIER(nature,evs), 2); // +2
            break;
            case EFFECT_SPEED_UP: 
                rating *= GET_SPEED_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // Misc. Stat Changes (2 Stages)
            case EFFECT_ACCURACY_DOWN_2:
            case EFFECT_EVASION_UP_2:
            case EFFECT_MINIMIZE: 
                rating *= fpow(BFG_MOVE_LUCK_MULTIPLIER, 2);
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
                rating *= BFG_MOVE_LUCK_MULTIPLIER;
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
                rating *= BFG_MOVE_LUCK_MULTIPLIER;
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
                rating *= BFG_MOVE_LUCK_MULTIPLIER;
            case EFFECT_WORRY_SEED:
            case EFFECT_LEECH_SEED:
            case EFFECT_HEAL_BLOCK: 
            case EFFECT_MEAN_LOOK: 
            case EFFECT_FAKE_OUT:
            case EFFECT_DISABLE: 
            case EFFECT_ENCORE: 
            case EFFECT_TAUNT: 
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // Weather Setting Moves
            case EFFECT_RAIN_DANCE:
            case EFFECT_SUNNY_DAY:
            case EFFECT_SANDSTORM: 
            case EFFECT_SNOWSCAPE:
            case EFFECT_HAIL:
                rating *= BFG_MOVE_WEATHER_MULTIPLIER;
            break;
            // Terrain Setting Moves
            case EFFECT_ELECTRIC_TERRAIN: 
            case EFFECT_PSYCHIC_TERRAIN:
            case EFFECT_GRASSY_TERRAIN:
            case EFFECT_MISTY_TERRAIN:
                rating *= BFG_MOVE_TERRAIN_MULTIPLIER;
            break;
            // Recovery Moves
            case EFFECT_JUNGLE_HEALING:
            case EFFECT_HEAL_PULSE: 
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                else
                    break;
            case EFFECT_MORNING_SUN: 
            case EFFECT_RESTORE_HP: 
            case EFFECT_SOFTBOILED: 
            case EFFECT_SYNTHESIS: 
            case EFFECT_MOONLIGHT: 
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
            case EFFECT_PARTING_SHOT: 
            case EFFECT_BATON_PASS:
                rating *= BFG_MOVE_PIVOT_MODIFIER;
            break;
            // Speed Control Moves
            case EFFECT_TRICK_ROOM:
                rating *= GET_SPEED_NEG_MULTIPLIER(nature,evs);
            break;
            case EFFECT_TAILWIND:
                rating *= GET_SPEED_STAT_MULTIPLIER(nature,evs);
            break;
            // Limited-target moves
            case EFFECT_SLEEP_TALK:
            case EFFECT_SNATCH: 
                rating *= BFG_MOVE_LIMITED_MODIFIER;
            break;
            // Protect moves
            case EFFECT_MAT_BLOCK:
            case EFFECT_PROTECT:
            case EFFECT_ENDURE:
                if (IS_DOUBLES())
                    rating *= BFG_MOVE_DOUBLES_MULTIPLIER;
                rating *= BFG_MOVE_PROTECT_MODIFIER;
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
        // Number of move hits
        u8 hits = 1;

        // Offensive move count
        u8 numOffensive = numPhysical + numSpecial;

        // If we already have max. offensive moves, or max. offensive moves of type
        if ((numOfType >= BFG_MOVE_MAX_PER_TYPE) || (numOffensive >= BFG_MOVE_MAX_OFFENSIVE))
            return 0;

        if (move->split == SPLIT_PHYSICAL) 
        {
           rating *= GET_ATK_STAT_MULTIPLIER(nature,evs);
        }
        else // move->split == SPLIT_SPECIAL
        {
            rating *= GET_SPATK_STAT_MULTIPLIER(nature,evs);
        }

        // Stop if rating is zero
        if (rating <= 0)
            return 0;

        // Move power (if modified)
        u8 power = move->power;

        #if BFG_MOVE_EFFECT_MODIFIERS
        // Switch on move effect
        switch(move->effect) {
            // Rating Modifiers
            case EFFECT_OHKO: 
                rating *= BFG_MOVE_LUCK_MULTIPLIER; 
            break;
            // Multi-Turn Moves
            case EFFECT_FUTURE_SIGHT: 
            case EFFECT_BIDE: 
                // These moves suck lmao
                rating *= fpow(BFG_MOVE_MULTI_TURN_MODIFIER, 3);
            break;
            // Two-Turn Moves
            case EFFECT_METEOR_BEAM:
                rating *= GET_SPATK_STAT_MULTIPLIER(nature, evs);
            case EFFECT_SEMI_INVULNERABLE:
            case EFFECT_TWO_TURNS_ATTACK: 
            case EFFECT_SOLAR_BEAM:
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
                rating *= BFG_MOVE_LUCK_MULTIPLIER;
            case EFFECT_MORTAL_SPIN:
            case EFFECT_POISON_FANG:  
            case EFFECT_POISON_HIT: 
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // Volatile Status Effects
            case EFFECT_FLINCH_STATUS: 
            case EFFECT_CONFUSE_HIT: 
            case EFFECT_FLINCH_HIT: 
                rating *= BFG_MOVE_LUCK_MULTIPLIER;
            case EFFECT_SYRUP_BOMB: 
            case EFFECT_SALT_CURE: 
                rating *= BFG_MOVE_STATUS_MULTIPLIER;
            break;
            // Stat Changing Effects
            case EFFECT_ATTACK_UP_HIT:
                rating *= GET_ATK_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_DEFENSE_UP2_HIT:
                rating *= fpow(GET_DEF_STAT_MULTIPLIER(nature,evs),2); // +2
            break;
            case EFFECT_DEFENSE_UP_HIT:
                rating *= GET_DEF_STAT_MULTIPLIER(nature,evs); // +1
            break;
            case EFFECT_SPECIAL_ATTACK_UP_HIT:
                rating *= GET_SPATK_STAT_MULTIPLIER(nature,evs); // +1
            break;
            // case EFFECT_SPECIAL_DEFENSE_UP_HIT:
            case EFFECT_SPEED_UP_HIT: 
            case EFFECT_RAPID_SPIN:
                rating *= GET_SPEED_STAT_MULTIPLIER(nature,evs); // +1
            break;
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
                hits = 3; // Avg. Multi-Hit
            break;
            case EFFECT_FRUSTRATION:
            case EFFECT_RETURN:
                power = 102;
            break;
            case EFFECT_KNOCK_OFF:
                power = 97; // 50% boost from item
            break;
            case EFFECT_HIT_ENEMY_HEAL_ALLY: 
                if (IS_DOUBLES())
                    rating *= (BFG_MOVE_RECOVERY_MODIFIER * BFG_MOVE_DOUBLES_MULTIPLIER);
                // Otherwise, just a normal attack
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
            rating *= BFG_MOVE_STAB_MODIFIER;
        }

        // Apply secondary effect rating
        if (move->secondaryEffectChance > 0) {
            // Parse secondary effect chance (e.g. 60% -> 0.6), and apply modifier
            rating *= 1.0f + (NORMALISE(move->secondaryEffectChance) * BFG_MOVE_EFFECT_CHANCE_MULTIPLIER);
        }

        // If strike count is defined, update hits
        if (move->strikeCount > 1 && hits == 1)
            hits = move->strikeCount;

        // Add power (* hits count) to move rating
        rating *= NORMALISE(power * hits);
    }

    // Apply accuracy mod
    if (move->accuracy > 0)
        rating *= NORMALISE(move->accuracy);

    // Apply priority mod
    if (move->priority > 0) 
        rating *= fpow(BFG_MOVE_PRIORITY_MULTIPLIER, move->priority);

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

        // Skip species if banned in frontier level
        if (SpeciesValidForFrontierLevel(i) == FALSE)
            continue;

        // Skip species if not valid for trainer class
        if (SpeciesValidForTrainerClass(trainerClass, i) == FALSE)
            continue;

        // Pointer to species info
        species = &(gSpeciesInfo[i]);

        // Skip gigantamax, mega, primal or ultra burst formes
        if (species->isGigantamax || species->isMegaEvolution || species->isPrimalReversion || species->isUltraBurst)
            continue;

        // Get base stat total
        bst = GetBaseStatTotal(i);

        // Skip above/below bst limits
        if (bst < minBST || bst > maxBST)
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
                        if (BFG_ITEM_ALLOW_MEGA && (bst + 100 <= maxBST))
                            forme = j;
                    }; break;
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE:
                    case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM: {
                        if (BFG_ITEM_ALLOW_MEGA && (bst + 100 <= maxBST) && (hasMega == FALSE))
                            hasMega = TRUE;
                            forme = j;
                    }; break;
                    case FORM_CHANGE_BATTLE_ULTRA_BURST: {
                        if (BFG_ITEM_ALLOW_ZMOVE && (bst + 76 <= maxBST) && (hasZMove == FALSE)) {
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