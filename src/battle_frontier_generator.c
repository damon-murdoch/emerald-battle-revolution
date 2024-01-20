#include "global.h"
#include "random.h"
#include "pokemon.h"
#include "battle_tower.h"
#include "battle_frontier_generator.h"
#include "config/battle_frontier_generator.h"

#include "constants/battle_move_effects.h"
#include "constants/form_change_types.h"
#include "constants/battle_frontier.h"
#include "constants/abilities.h"
#include "constants/trainers.h"
#include "constants/pokemon.h"
#include "constants/moves.h"

#define FORME_DEFAULT 0xFF // No alternate forme

#ifdef BFG_RANDOM_BOOL_FIXED
#define RANDOM_BOOL() (BFG_RANDOM_BOOL_FIXED)
#else
#define RANDOM_BOOL() ((bool8)(Random() % 2))
#endif

#ifdef BFG_RANDOM_OFFSET
#define RANDOM_OFFSET() (Random() % BFG_RANDOM_OFFSET)
#else
#define RANDOM_OFFSET() (0)
#endif

#define RANDOM_CHANCE(x) ((x != 0) && ((Random() % x) == 0))

#define NORMALISE(x) (((float)(x)) / 100.0f)
#define SET_MODIFIER(x,y) ((x == BFG_MOVE_BASE_MODIFIER) ? y : x)

#define IS_TYPE(x,y,type) (x == type || y == type)
#define IS_FWG(x,y) (IS_TYPE(x,y,TYPE_FIRE) || IS_TYPE(x,y,TYPE_WATER) || IS_TYPE(x,y,TYPE_GRASS))
#define IS_FDS(x,y) (IS_TYPE(x,y,TYPE_FAIRY) || IS_TYPE(x,y,TYPE_DRAGON) || IS_TYPE(x,y,TYPE_STEEL))
#define IS_PGD(x,y) (IS_TYPE(x,y,TYPE_PSYCHIC) || IS_TYPE(x,y,TYPE_GHOST) || IS_TYPE(x,y,TYPE_DARK))

#define HAS_ABILITY(x,y,ability) (x == ability || y == ability)
#define IS_ABILITY(x,y,ability) (x == ability && y == ABILITY_NONE)

#define IS_FLYING_OR_LEVITATE(t1,t2,a1,a2) (IS_TYPE(t1,t2,TYPE_FLYING) || IS_ABILITY(a1,a2, ABILITY_LEVITATE))

#define IS_EEVEE(s) (s == SPECIES_EEVEE || s == SPECIES_VAPOREON || s == SPECIES_JOLTEON || s == SPECIES_FLAREON || s == SPECIES_ESPEON || s == SPECIES_UMBREON || s == SPECIES_LEAFEON || s == SPECIES_GLACEON || s == SPECIES_SYLVEON)
#define IS_REGI(s) (s == SPECIES_REGIROCK || s == SPECIES_REGICE || s == SPECIES_REGISTEEL || s == SPECIES_REGIDRAGO || s == SPECIES_REGIELEKI || s == SPECIES_REGIGIGAS)
#define IS_STARTER(s) ( \
    (s >= SPECIES_BULBASAUR && s <= SPECIES_BLASTOISE) || \
    (s >= SPECIES_CHIKORITA && s <= SPECIES_FERALIGATR) || \
    (s >= SPECIES_TREECKO && s <= SPECIES_SWAMPERT) || \
    (s >= SPECIES_TURTWIG && s <= SPECIES_EMPOLEON) || \
    (s >= SPECIES_SNIVY && s <= SPECIES_SAMUROTT) || \
    (s >= SPECIES_CHESPIN && s <= SPECIES_GRENINJA) || \
    (s >= SPECIES_ROWLET && s <= SPECIES_PRIMARINA) || \
    (s >= SPECIES_GROOKEY && s <= SPECIES_INTELEON) || \
    (s >= SPECIES_SPRIGATITO && s <= SPECIES_QUAQUAVAL))

const struct Nature natureLookup[NUM_NATURES] = {
    // Attack Boosting
    [NATURE_HARDY] = {STAT_ATK,STAT_ATK}, 
    [NATURE_LONELY] = {STAT_ATK,STAT_DEF}, 
    [NATURE_BRAVE] = {STAT_ATK,STAT_SPEED}, 
    [NATURE_ADAMANT] = {STAT_ATK,STAT_SPATK}, 
    [NATURE_NAUGHTY] = {STAT_ATK,STAT_SPDEF}, 
    // Defense Boosting
    [NATURE_BOLD] = {STAT_DEF,STAT_ATK}, 
    [NATURE_DOCILE] = {STAT_DEF,STAT_DEF}, 
    [NATURE_RELAXED] = {STAT_DEF,STAT_SPEED}, 
    [NATURE_IMPISH] = {STAT_DEF,STAT_SPATK}, 
    [NATURE_LAX] = {STAT_DEF,STAT_SPDEF}, 
    // Speed Boosting
    [NATURE_TIMID] = {STAT_SPEED,STAT_ATK}, 
    [NATURE_HASTY] = {STAT_SPEED,STAT_DEF}, 
    [NATURE_SERIOUS] = {STAT_SPEED,STAT_SPEED}, 
    [NATURE_JOLLY] = {STAT_SPEED,STAT_SPATK}, 
    [NATURE_NAIVE] = {STAT_SPEED,STAT_SPDEF}, 
    // Sp. Attack Boosting
    [NATURE_MODEST] = {STAT_SPATK,STAT_ATK}, 
    [NATURE_MILD] = {STAT_SPATK,STAT_DEF}, 
    [NATURE_QUIET] = {STAT_SPATK,STAT_SPEED}, 
    [NATURE_BASHFUL] = {STAT_SPATK,STAT_SPATK}, 
    [NATURE_RASH] = {STAT_SPATK,STAT_SPDEF}, 
    // Sp. Defense Boosting
    [NATURE_CALM] = {STAT_SPDEF,STAT_ATK}, 
    [NATURE_GENTLE] = {STAT_SPDEF,STAT_DEF}, 
    [NATURE_SASSY] = {STAT_SPDEF,STAT_SPEED}, 
    [NATURE_CAREFUL] = {STAT_SPDEF,STAT_SPATK}, 
    [NATURE_QUIRKY] = {STAT_SPDEF,STAT_SPDEF}, 
};

const u16 customItemsList[] = {
    BFG_CUSTOM_ITEMS_LIST, 
    ITEM_NONE // End of list
}; 

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

static u16 GetBaseStatTotal(const struct SpeciesInfo * species) {
    return (
        species->baseHP + species->baseAttack + 
        species->baseDefense + species->baseSpAttack + 
        species->baseSpDefense + species->baseSpeed
    );
}

static bool8 SpeciesValidForFrontierLevel(const struct SpeciesInfo * species, u16 speciesId) {
    return TRUE; // Placeholder
}

static bool8 SpeciesValidForTrainerClass(u8 trainerClass, const struct SpeciesInfo * species, u16 speciesId) {
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
        if ((natureLookup[i].posStat == posStat) && 
        (natureLookup[i].negStat == negStat))
            return i;
    }
    // Default (neutral)
    return NATURE_HARDY;
}

static u8 GetSpeciesNature(const struct SpeciesInfo * species) {

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

static u8 GetSpeciesEVs(const struct SpeciesInfo * species, u8 nature) {

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

    const struct Nature * natureInfo = &(natureLookup[nature]);

    // Default Values
    stat1 = 0xFF;
    stat2 = 0xFF;

    for(i = STAT_HP; i < NUM_STATS; i++)
    {
        if (i == natureInfo->negStat)
            continue;
        switch(i)
        {
            case STAT_HP:
                valT = (species->baseHP) + BFG_HP_OFFSET;
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

#if BFG_MOVE_SELECT_RANDOM == FALSE // Change this
static float GetMoveRating(u16 moveId, const struct SpeciesInfo * species, u8 nature, u8 evs, u16 speciesId, u16 * moves) {

    const struct Nature * natureInfo = &(natureLookup[nature]);
    const struct BattleMove * move, * moveTemp;
    s32 i;

    // Move for calculating rating
    move = &(gBattleMoves[moveId]);

    // Move rating (Casted to u16 at the end)
    float rating = BFG_MOVE_BASE_RATING;

    // Move counters
    u8 numPhysical = 0;
    u8 numSpecial = 0;

    #if BFG_MOVE_ENABLE_EFFECT_MODIFIERS == TRUE
    // Used by moves with additional effects
    float modifier = BFG_MOVE_BASE_MODIFIER;
    #endif

    // Status moves
    if (move->split == SPLIT_STATUS) {

        // Status counter
        u8 numStatus = 0;

        // Check existing moves (skip last)
        for(i = 0; i < MAX_MON_MOVES - 1; i++) 
        {
            if (moves[i] != MOVE_NONE) 
            {
                // Double-up move
                if (moves[i] == moveId)
                    return 0; // Reject duplicate

                moveTemp = &(gBattleMoves[moves[i]]);

                switch(moveTemp->split) {
                    case SPLIT_PHYSICAL:
                        numPhysical++;
                    break;
                    case SPLIT_SPECIAL:
                        numSpecial++;
                    break;
                    case SPLIT_STATUS:
                        numStatus++;
                    break;
                }
            }
        }

        // Check if Max. Status moves is reached
        if (numStatus >= BFG_MOVE_MAX_STATUS)
            return 0;

        #if BFG_MOVE_ENABLE_EFFECT_MODIFIERS
        // Switch on move effect
        switch(move->effect) {
            // Attack Boosting
            case EFFECT_BELLY_DRUM: 
                modifier = MODIFY(modifier, (100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 3)));
            case EFFECT_DRAGON_DANCE: 
            case EFFECT_ATTACK_UP_2:
                modifier = MODIFY(modifier, (100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2)));
            case EFFECT_ATTACK_UP:
                if (numPhysical == 0)
                    return 0; // No physical moves to boost
                modifier = MODIFY(modifier, (100 + BFG_MOVE_SELF_STAT_UP_MODIFIER));
                if (natureInfo->negStat == STAT_ATK)
                    modifier = MULTIPLY(modifier, BFG_NEG_NATURE_MULTIPLIER);
                else if (natureInfo->posStat == STAT_ATK)
                    modifier = MULTIPLY(modifier, BFG_POS_NATURE_MULTIPLIER);
            break;
            // Defense Boosting
            case EFFECT_DEFENSE_UP_3:
                modifier = MODIFY(modifier, (100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 3)));
            case EFFECT_DEFENSE_UP_2:
                modifier = MODIFY(modifier, (100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2)));
            case EFFECT_DEFENSE_CURL:
            case EFFECT_DEFENSE_UP:
                modifier = MODIFY(modifier, (100 + BFG_MOVE_SELF_STAT_UP_MODIFIER * 2));
                if (natureInfo->negStat == STAT_DEF)
                    modifier = MULTIPLY(modifier, BFG_NEG_NATURE_MULTIPLIER);
                else if (natureInfo->posStat == STAT_DEF)
                    modifier = MULTIPLY(modifier, BFG_POS_NATURE_MULTIPLIER);
            break;
            // Special Attack Boosting
            case EFFECT_GEOMANCY: 
                #if BFG_ITEM_OTHER_SELECTION_CHANCE != 0
                modifier = MODIFY(modifier, ((100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 6)) / BFG_ITEM_OTHER_SELECTION_CHANCE));
                #else
                mod = BFG_ITEM_OTHER_SELECTION_CHANCE; // TODO
                #endif
            case EFFECT_SPECIAL_ATTACK_UP_3:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 3));
            case EFFECT_SPECIAL_ATTACK_UP_2:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2));
            case EFFECT_ATTACK_UP_USER_ALLY: 
            case EFFECT_SPECIAL_ATTACK_UP:
                if (numSpecial == 0)
                    return 0; // No special moves to boost
                modifier = MODIFY(modifier, 100 + BFG_MOVE_SELF_STAT_UP_MODIFIER);
                if (natureInfo->negStat == STAT_SPATK)
                    modifier = MULTIPLY(modifier, BFG_NEG_NATURE_MULTIPLIER);
                else if (natureInfo->posStat == STAT_SPATK)
                    modifier = MULTIPLY(modifier, BFG_POS_NATURE_MULTIPLIER);
            break;
            // Special Defense Boosting
            case EFFECT_SPECIAL_DEFENSE_UP_2: 
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2));
            case EFFECT_SPECIAL_DEFENSE_UP: 
                modifier = MODIFY(modifier, 100 + BFG_MOVE_SELF_STAT_UP_MODIFIER);
                if (natureInfo->negStat == STAT_SPDEF)
                    modifier = MULTIPLY(modifier, BFG_NEG_NATURE_MULTIPLIER);
                else if (natureInfo->posStat == STAT_SPDEF)
                    modifier = MULTIPLY(modifier, BFG_POS_NATURE_MULTIPLIER);
            break;
            // Speed Boosting
            case EFFECT_SHIFT_GEAR: 
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 3));
            case EFFECT_AUTOTOMIZE: 
            case EFFECT_SPEED_UP_2: 
            case EFFECT_TAILWIND:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2));
            case EFFECT_SPEED_UP: 
                modifier = MODIFY(modifier, 100 + BFG_MOVE_SELF_STAT_UP_MODIFIER);
                if (natureInfo->negStat == STAT_SPEED)
                    modifier = MULTIPLY(modifier, BFG_NEG_NATURE_MULTIPLIER);
                else if (natureInfo->posStat == STAT_SPEED)
                    modifier = MULTIPLY(modifier, BFG_POS_NATURE_MULTIPLIER);
            break;
            case EFFECT_ATTACK_DOWN_2:
            case EFFECT_DEFENSE_DOWN_2:
            case EFFECT_SPECIAL_ATTACK_DOWN_2:
            case EFFECT_SPECIAL_DEFENSE_DOWN_2:
            case EFFECT_SPEED_DOWN_2:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_OPP_STAT_DOWN_MODIFIER * 2));
            break;
            case EFFECT_ATTACK_DOWN:
            case EFFECT_DEFENSE_DOWN:
            case EFFECT_SPECIAL_ATTACK_DOWN:
            case EFFECT_SPECIAL_DEFENSE_DOWN:
            case EFFECT_SPEED_DOWN:
                modifier = MODIFY(modifier, 100 + BFG_MOVE_OPP_STAT_DOWN_MODIFIER);
            break;
            // Luck Increasing Moves
            case EFFECT_ACCURACY_UP_2:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2));
            case EFFECT_ACCURACY_UP:
                modifier = MODIFY(modifier, 100 + BFG_MOVE_SELF_STAT_UP_MODIFIER);
            case EFFECT_EVASION_DOWN_2:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_OPP_STAT_DOWN_MODIFIER * 2));
            case EFFECT_EVASION_DOWN:
                modifier = MODIFY(modifier, 100 + BFG_MOVE_OPP_STAT_DOWN_MODIFIER);
            case EFFECT_GRAVITY: 
            case EFFECT_DEFOG:
                modifier = MULTIPLY(modifier, BFG_MOVE_LUCK_UP_MULTIPLIER);
            break;
            // Luck Reducing Moves
            case EFFECT_ACCURACY_DOWN_2:
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_OPP_STAT_DOWN_MODIFIER * 2));
            case EFFECT_ACCURACY_DOWN: 
                modifier = MODIFY(modifier, 100 + BFG_MOVE_OPP_STAT_DOWN_MODIFIER);
            case EFFECT_EVASION_UP_2:
            case EFFECT_MINIMIZE: 
                modifier = MODIFY(modifier, 100 + (BFG_MOVE_SELF_STAT_UP_MODIFIER * 2));
            case EFFECT_EVASION_UP:
                modifier = MODIFY(modifier, 100 + BFG_MOVE_SELF_STAT_UP_MODIFIER);

                modifier = MULTIPLY(modifier, BFG_MOVE_LUCK_DOWN_MULTIPLIER);
            break;
            // Weather Setting Moves
            case EFFECT_RAIN_DANCE:
            case EFFECT_SUNNY_DAY:
            case EFFECT_SANDSTORM: 
            case EFFECT_SNOWSCAPE:
            case EFFECT_HAIL:
                modifier = MULTIPLY(modifier, BFG_MOVE_WEATHER_MULTIPLIER);
            break;
            // Terrain Setting Moves
            case EFFECT_ELECTRIC_TERRAIN: 
            case EFFECT_PSYCHIC_TERRAIN:
            case EFFECT_GRASSY_TERRAIN:
            case EFFECT_MISTY_TERRAIN:
                modifier = MULTIPLY(modifier, BFG_MOVE_TERRAIN_MULTIPLIER);
            break;
            // Status Afflicting Moves
            case EFFECT_WILL_O_WISP: 
            case EFFECT_DARK_VOID: 
            case EFFECT_PARALYZE: 
            case EFFECT_POISON: 
            case EFFECT_TOXIC: 
            case EFFECT_SLEEP: 
            case EFFECT_YAWN:
                modifier = MULTIPLY(modifier, BFG_MOVE_STATUS_MULTIPLIER);
            break;
            // Volatile Status Moves
            case EFFECT_TEETER_DANCE: 
            case EFFECT_ENTRAINMENT:
            case EFFECT_LEECH_SEED:
            case EFFECT_WORRY_SEED:
            case EFFECT_HEAL_BLOCK:
            case EFFECT_MEAN_LOOK: 
            case EFFECT_TORMENT: 
            case EFFECT_CONFUSE: 
            case EFFECT_DISABLE: 
            case EFFECT_SWAGGER: 
            case EFFECT_ATTRACT: 
            case EFFECT_FLATTER: 
            case EFFECT_ENCORE: 
            case EFFECT_TAUNT:
                modifier = MULTIPLY(modifier, BFG_MOVE_VOLATILE_MODIFIER);
            break;
            // Self-Recovery Moves
            case EFFECT_MORNING_SUN: 
            case EFFECT_RESTORE_HP: 
            case EFFECT_SOFTBOILED: 
            case EFFECT_SYNTHESIS: 
            case EFFECT_MOONLIGHT: 
            case EFFECT_SHORE_UP: 
            case EFFECT_INGRAIN: 
            case EFFECT_ROOST: 
            case EFFECT_WISH: 
            case EFFECT_REST:
                modifier = MULTIPLY(modifier, BFG_MOVE_SELF_RECOVERY_MODIFIER);
            break;
            case EFFECT_REVIVAL_BLESSING: 
            case EFFECT_LIGHT_SCREEN:
            case EFFECT_AURORA_VEIL: 
            case EFFECT_MAGIC_COAT: 
            case EFFECT_HEAL_BELL: 
            case EFFECT_SAFEGUARD: 
            case EFFECT_REFLECT: 
                modifier = MULTIPLY(modifier, BFG_MOVE_PARTY_SUPPORT_MODIFIER);
            break;
            case EFFECT_PARTING_SHOT: 
            case EFFECT_BATON_PASS:
            case EFFECT_TELEPORT:
                modifier = MULTIPLY(modifier, BFG_MOVE_PIVOT_MODIFIER);
            break;
            // Offensive Counter Effects
            case EFFECT_METAL_BURST: 
            case EFFECT_SHELL_TRAP:
            case EFFECT_MIRROR_COAT: 
            case EFFECT_COUNTER: 
                modifier = MULTIPLY(modifier, BFG_MOVE_COUNTER_MODIFIER);
            break;
            // Health absorb moves
            case EFFECT_STRENGTH_SAP: 
                modifier = MULTIPLY(modifier, BFG_MOVE_ABSORB_MODIFIER);
            break;
            /*
            case EFFECT_ROAR: 
                // TODO
            break;
            case EFFECT_DO_NOTHING: 
                // TODO
            break;
            case EFFECT_SUBSTITUTE: 
                // TODO
            break;
            case EFFECT_SKILL_SWAP:
            case EFFECT_ROLE_PLAY:
                // TODO
            break;
            case EFFECT_TRICK:
                // TODO
            break;
            case EFFECT_TRICK_ROOM:
                // TODO
            break;
            case EFFECT_HIT_ENEMY_HEAL_ALLY: 
            case EFFECT_JUNGLE_HEALING: 
            case EFFECT_HELPING_HAND: 
            case EFFECT_ALLY_SWITCH:
            case EFFECT_HEAL_PULSE: 
            case EFFECT_AFTER_YOU:
            case EFFECT_FOLLOW_ME:
            case EFFECT_MAT_BLOCK: 
            case EFFECT_INSTRUCT: 
            case EFFECT_DECORATE: 
            case EFFECT_COACHING:
            case EFFECT_PSYCH_UP: 
            case EFFECT_PROTECT:
            case EFFECT_ENDURE:
            case EFFECT_QUASH:
                // TODO
            break;
            */
            default: // Unhandled
                DebugPrintf("Unhandled effect: %d", move->effect);
            break;
        }

        // Apply the modifier to the rating
        rating = MULTIPLY(rating, modifier);

        // Stop if rating is zero
        if (rating <= 0)
            return 0;
        #endif
    }
    else // Physical / Special
    {
        // Number of move hits
        u8 hits = 1;

        // Number of same-typed moves
        u8 numOfType = 0;
        
        // Offensive move count
        u8 numOffensive = 0;

        // Check existing moves (skip last)
        for(i = 0; i < MAX_MON_MOVES - 1; i++) 
        {
            if (moves[i] != MOVE_NONE)
            {
                // Double-up move
                if (moves[i] == moveId)
                    return 0; // Reject duplicate

                moveTemp = &(gBattleMoves[moves[i]]);

                // Move is physical/special
                if ((moveTemp->split != SPLIT_STATUS)) {

                    if (move->type == moveTemp->type) {
                        // Check if move is a duplicate
                        if (
                            (move->split == moveTemp->split) && 
                            // (move->target == moveTemp->target) && TODO: Make this column check for doubles
                            (move->priority == moveTemp->priority)
                        )
                            return 0; // No duplicate moves

                        numOfType++;
                    }

                    numOffensive++;
                }
            }
        }

        // If we already have max. offensive moves, or max. offensive moves of type
        if ((numOfType >= BFG_MOVE_MAX_PER_TYPE) || (numOffensive >= BFG_MOVE_MAX_OFFENSIVE))
            return 0;

        if (move->split == SPLIT_PHYSICAL) 
        {
            if (natureInfo->negStat == STAT_ATK)
                rating *= BFG_NEG_NATURE_MULTIPLIER;
            else if (natureInfo->posStat == STAT_ATK)
                rating *= BFG_POS_NATURE_MULTIPLIER;
        }
        else // move->split == SPLIT_SPECIAL
        {
            if (natureInfo->negStat == STAT_SPATK)
                rating *= BFG_NEG_NATURE_MULTIPLIER;
            else if (natureInfo->posStat == STAT_SPATK)
                rating *= BFG_POS_NATURE_MULTIPLIER;
        }

        // Stop if rating is zero
        if (rating <= 0)
            return 0;

        #if BFG_MOVE_ENABLE_EFFECT_MODIFIERS
        // Switch on move effect
        switch(move->effect) {
            case EFFECT_MULTI_HIT:
                #if BFG_ITEM_OTHER_SELECTION_CHANCE != 0
                hits = 5; // For Loaded Dice
                #else
                hits = 3; // Avg. Multi-Hit
                #endif
            break;
            case EFFECT_BURN_HIT: 
            #if B_USE_FROSTBITE == TRUE
            case EFFECT_FROSTBITE_HIT: 
            #else
            case EFFECT_FREEZE_HIT: 
            #endif
            case EFFECT_PARALYZE_HIT: 
            case EFFECT_MORTAL_SPIN:
            case EFFECT_POISON_FANG:  
            case EFFECT_POISON_HIT: 
            case EFFECT_DIRE_CLAW: 
                modifier = MULTIPLY(modifier, BFG_MOVE_STATUS_MULTIPLIER);
            break;
            case EFFECT_FLINCH_STATUS: 
            case EFFECT_CONFUSE_HIT: 
            case EFFECT_FLINCH_HIT: 
            case EFFECT_SYRUP_BOMB: 
            case EFFECT_SALT_CURE: 
                modifier = MULTIPLY(modifier, BFG_MOVE_VOLATILE_MODIFIER);
            break;
            case EFFECT_OHKO: 
                modifier = MULTIPLY(modifier, BFG_MOVE_OHKO_MODIFIER); 
            break;
            case EFFECT_METEOR_BEAM:
                // TODO 
            case EFFECT_SEMI_INVULNERABLE:
            case EFFECT_TWO_TURNS_ATTACK: 
            case EFFECT_SOLAR_BEAM:
                // TODO
            break;
            case EFFECT_HIT_ESCAPE: 
                // TODO
            break;
            case EFFECT_TRAP: 
                // TODO
            break;
            case EFFECT_RECOIL_IF_MISS: 
                // TODO
            break;
            case EFFECT_EXPLOSION:
                // TODO
            break;
            case EFFECT_MIND_BLOWN: 
            case EFFECT_STEEL_BEAM: 
                // TODO
            break;
            case EFFECT_RECOIL_50:
            case EFFECT_RECOIL_33_STATUS:
            case EFFECT_RECOIL_33:
            case EFFECT_RECOIL_25:
            case EFFECT_RECOIL_HP_25:
                // TODO
            break;
            case EFFECT_RAMPAGE: 
                // TODO
            break;
            case EFFECT_ATTACK_UP_HIT:
            case EFFECT_DEFENSE_UP_HIT:
            case EFFECT_DEFENSE_UP2_HIT: 
            case EFFECT_SPECIAL_ATTACK_UP_HIT:
            // case EFFECT_SPECIAL_DEFENSE_UP_HIT:
            case EFFECT_SPEED_UP_HIT: 
            case EFFECT_RAPID_SPIN:
                // TODO
            break;
            case EFFECT_ALL_STATS_UP_HIT: 
                // TODO
            break;
            case EFFECT_ATTACK_DOWN_HIT:
            case EFFECT_DEFENSE_DOWN_HIT:
            case EFFECT_SPECIAL_ATTACK_DOWN_HIT:
            case EFFECT_SPECIAL_DEFENSE_DOWN_HIT:
            case EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2:
            case EFFECT_SPEED_DOWN_HIT:
            case EFFECT_BULLDOZE: 
                // TODO
            break;
            case EFFECT_CLOSE_COMBAT: 
            case EFFECT_OVERHEAT:
                // TODO
            break;
            case EFFECT_RECHARGE:
                // TODO
            break;
            case EFFECT_MATCHA_GOTCHA: 
            case EFFECT_ABSORB: 
                // TODO
            break;
            case EFFECT_SUPER_FANG: 
                // TODO
            break;
            case EFFECT_LEVEL_DAMAGE: 
            case EFFECT_DRAGON_RAGE:
                // TODO
            break;
            case EFFECT_RETURN:
            case EFFECT_FRUSTRATION: 
                // TODO
            break;
            case EFFECT_FOCUS_PUNCH:
                // TODO
            break;
            case EFFECT_FAKE_OUT: 
                // TODO
            break;
            case EFFECT_INCINERATE: 
            case EFFECT_BUG_BITE: 
            case EFFECT_THIEF:
                // TODO
            break;
            case EFFECT_HIT_PREVENT_ESCAPE:
                // TODO
            break;
            case EFFECT_HIT_SWITCH_TARGET: 
                // TODO
            break;
            case EFFECT_ALWAYS_CRIT:
                // TODO
            break;
            case EFFECT_KNOCK_OFF:
                // TODO
            break;
            case EFFECT_ERUPTION:
                // TODO
            break;
            case EFFECT_SKY_DROP: 
                // TODO
            break;
            case EFFECT_FEINT:
                // TODO
            break;
            case EFFECT_DYNAMAX_DOUBLE_DMG:
                // TODO
            break;
            case EFFECT_HIT: 
                // Nothing special
            break;
            default: // Unhandled
                DebugPrintf("Unhandled effect: %d", move->effect);
            break;
        }
        // Apply the modifier to the rating
        rating = MULTIPLY(rating, modifier);

        // Stop if rating is zero
        if (rating <= 0)
            return 0;
        #endif

        // If either one of the species's types matches the move
        if (IS_TYPE(species->types[0],species->types[1], move->type)) 
        {
            // 1.5x boost
            rating *= BFG_MOVE_STAB_MODIFIER;
        }

        // Apply secondary effect modifier
        if (move->secondaryEffectChance > 0)
            rating *= NORMALISE(100.0f + move->secondaryEffectChance);

        // If strike count is defined, update hits
        if (move->strikeCount > 1 && hits == 1)
            hits = move->strikeCount;

        // Add power (* hits count) to move rating
        rating *= NORMALISE((move->power) * hits);
    }

    // Apply accuracy mod
    if (move->accuracy > 0)
        rating *= NORMALISE(move->accuracy);

    // Return the rating
    return rating;
}
#endif

static u8 GetSpeciesMoves(const struct SpeciesInfo * species, u8 index, u8 nature, u8 evs, u16 requiredMove, u16 speciesId) {

    s32 i,j;
    u8 friendship = FRIENDSHIP_MAX;
    u16 moveId, levelUpMoves, teachableMoves, totalMoves;

    u16 moves[MAX_MON_MOVES] = {
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
        MOVE_NONE,
    };

    const struct LevelUpMove* levelUpLearnset;
    const u16 * teachableLearnset;

    levelUpMoves = 0;
    teachableMoves = 0;

    #if BFG_MOVE_SELECT_RANDOM == TRUE
    u16 moveIndex;
    #else
    float rating, bestRating; // For heuristic
    #endif

    #if BFG_ALLOW_LEVEL_UP_MOVES == TRUE
    levelUpLearnset = GetSpeciesLevelUpLearnset(speciesId);
    while(levelUpLearnset[levelUpMoves].move != LEVEL_UP_MOVE_END)
        levelUpMoves++;
    #endif

    #if BFG_ALLOW_TEACHABLE_MOVES == TRUE
    teachableLearnset = GetSpeciesTeachableLearnset(speciesId);
    while(teachableLearnset[teachableMoves] != MOVE_UNAVAILABLE)
        teachableMoves++;
    #endif

    DebugPrintf("%d level up moves, %d teachable moves ...", levelUpMoves, teachableMoves);

    // Get the total number of moves
    totalMoves = teachableMoves + levelUpMoves;

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
        else if (totalMoves > (i + failures)) // General case
        {
            while(moveId == MOVE_NONE) {
                #if BFG_MOVE_SELECT_RANDOM == TRUE
                moveIndex = Random() % totalMoves;
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
                #else
                // Default rating
                bestRating = 0;

                DebugPrintf("Processing level up moves ...");

                for(j=0; j < levelUpMoves; j++) 
                {
                    rating = GetMoveRating(levelUpLearnset[j].move, 
                        species, nature, evs, speciesId, moves);

                    if (rating > bestRating || ((rating == bestRating) && RANDOM_BOOL())) {
                        moveId = levelUpLearnset[j].move;
                        bestRating = rating;
                    }
                }

                DebugPrintf("Processing teachable moves ...");

                for(j=0; j < teachableMoves; j++)
                {
                    rating = GetMoveRating(teachableLearnset[j], 
                        species, nature, evs, speciesId, moves);

                    if (rating > bestRating || ((rating == bestRating) && RANDOM_BOOL())) {
                        moveId = teachableLearnset[j];
                        bestRating = rating;
                    }
                }

                DebugPrintf("Done. Best move: %d (rating: %d)", moveId, (u16)(bestRating*100));
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

    return friendship;
}

static u16 GetSpeciesItem(const struct SpeciesInfo * species, u8 nature, u8 evs, u16 speciesId) {
    return ITEM_NONE; // TODO
}

static void GenerateTrainerPokemon(u16 speciesId, u8 index, u32 otID, u8 fixedIV, u8 level, u8 formeId) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    const struct FormChange * formChanges;
    const struct SpeciesInfo * forme;

    u8 evs, nature, abilityNum, friendship;

    // Move / item placeholder
    u16 move = MOVE_NONE;
    u16 item = ITEM_NONE;

    // Forme is not default
    if (formeId != FORME_DEFAULT) {
        // Get the species form change table
        formChanges = GetSpeciesFormChanges(speciesId);

        // switch on the form change method
        switch(formChanges[formeId].method) {
            case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM: 
            case FORM_CHANGE_BATTLE_PRIMAL_REVERSION: 
            case FORM_CHANGE_BATTLE_ULTRA_BURST: {
                item = formChanges[formeId].param1; // ItemId
            }; break;
            case FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE: {
                move = formChanges[formeId].param1; // MoveId 
            }; break;
        }

        // Get the target species from the forme
        forme = &(gSpeciesInfo[(formChanges[formeId]).targetSpecies]);
    } 
    else // Forme is default
    {
        // Same as species
        forme = species;
    }

    nature = GetSpeciesNature(forme);
    evs = GetSpeciesEVs(forme, nature);

    // Place the chosen pokemon into the trainer's party
    CreateMonWithEVSpreadNatureOTID(
        &gEnemyParty[index], speciesId, level, 
        nature, fixedIV, evs, otID
    );

    // Give the chosen pokemon its specified moves.
    // Returns FRIENDSHIP_MAX unless the moveset
    // contains 'FRUSTRATION'. 
    friendship = GetSpeciesMoves(
        forme, index, nature, evs, move, speciesId
    );

    // If this species has a hidden ability
    if ((species->abilities[2] != ABILITY_NONE) && RANDOM_CHANCE(BFG_HA_SELECTION_CHANCE)) {
        abilityNum = 3; // Hidden ability index
        SetMonData(&gEnemyParty[index], MON_DATA_ABILITY_NUM, &abilityNum);
    }

    // Currently has no held item
    if (item == ITEM_NONE && (!RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE)))
        item = GetSpeciesItem(forme, nature, evs, speciesId);

    // Set friendship / held item
    SetMonData(&gEnemyParty[index], MON_DATA_FRIENDSHIP, &friendship);
    SetMonData(&gEnemyParty[index], MON_DATA_HELD_ITEM, &item);
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

        // Skip species if banned in frontier level
        if (SpeciesValidForFrontierLevel(species, i) == FALSE)
            continue;

        // Skip species if not valid for trainer class
        if (SpeciesValidForTrainerClass(trainerClass, species, i) == FALSE)
            continue;

        // Skip gigantamax, mega, primal or ultra burst formes
        if (species->isGigantamax || species->isMegaEvolution || species->isPrimalReversion || species->isUltraBurst)
            continue;

        // Get base stat total
        bst = GetBaseStatTotal(species);

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

        // Pointer to species info
        species = &(gSpeciesInfo[i]);

        // Get base stat total
        bst = GetBaseStatTotal(species);

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
        GenerateTrainerPokemon(speciesId, i + firstMonId, otID, fixedIV, level, forme);

        // If the pokemon was successfully added to the trainer's party, so it's safe to move on to
        // the next party slot.
        i++;
    }
}