#include "global.h"
#include "random.h"
#include "pokemon.h"
#include "battle_tower.h"
#include "constants/moves.h"
#include "constants/pokemon.h"
#include "battle_frontier_generator.h"
#include "config/battle_frontier_generator.h"

#include "constants/trainers.h"
#include "constants/battle_frontier.h"
#include "constants/abilities.h"

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

    // Calculate base stat total
    u16 bst = GetBaseStatTotal(species);

    // Switch on trainer class
    switch(trainerClass) {
        case TRAINER_CLASS_RUIN_MANIAC: {
            if (IS_REGI(speciesId))
                return TRUE;
        } // Flow through to TRAINER_CLASS_HIKER
        case TRAINER_CLASS_HIKER: {
            if (IS_FDS(t1,t2) || IS_TYPE(t1,t2,TYPE_ROCK) || IS_TYPE(t1,t2,TYPE_GROUND) || IS_TYPE(t1,t2,TYPE_FIGHTING))
                return TRUE;
        }; break;
        case TRAINER_CLASS_AQUA_LEADER: 
            if (bst >= 600)
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
            if (bst >= 600)
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
            if (bst >= 600 || IS_FWG(t1,t2) || IS_PGD(t1,t2) || IS_TYPE(t1,t2,TYPE_NORMAL) || IS_TYPE(t1,t2,TYPE_FIGHTING))
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

    // If both attack and special attack stats match
    if (species->baseAttack == species->baseSpAttack)
    {
        // prioritise special attack
        if (BFG_PRIORITISE_SPA_OVER_ATK)
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
    else if (species->baseAttack > species->baseSpAttack) 
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
    for(i = STAT_ATK; i < STAT_SPDEF; i++){
        // Skip reduced stat
        if (i == negStat)
            continue; 

        // Switch on stat
        switch(i) {
            case STAT_ATK: {
                if ((posStatValue < species->baseAttack) || (
                    (posStatValue == species->baseAttack) && (
                    ((posStat == STAT_DEF || posStat == STAT_SPDEF) && BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD) || 
                    (posStat == STAT_SPEED && BFG_PRIORITISE_ATK_SPA_OVER_SPE)
                ))) 
                {
                    posStat = STAT_ATK;
                    posStatValue = species->baseAttack;
                }
            }; break;
            case STAT_DEF: {
                if ((posStatValue < species->baseDefense) || (
                    (posStatValue == species->baseDefense) && (
                    ((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD == FALSE))
                ))) 
                {
                    posStat = STAT_DEF;
                    posStatValue = species->baseDefense;
                }
            }; break;
            case STAT_SPATK: {
                if ((posStatValue < species->baseSpAttack) || (
                    (posStatValue == species->baseSpAttack) && (
                    ((posStat == STAT_DEF || posStat == STAT_SPDEF) && BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD) || 
                    (posStat == STAT_SPEED && BFG_PRIORITISE_ATK_SPA_OVER_SPE)
                ))) 
                {
                    posStat = STAT_SPATK;
                    posStatValue = species->baseSpAttack;
                }
            }; break;
            case STAT_SPDEF: {
                if ((posStatValue < species->baseSpDefense) || (
                    (posStatValue == species->baseSpDefense) && (
                    ((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD == FALSE))
                ))) 
                {
                    posStat = STAT_SPDEF;
                    posStatValue = species->baseSpDefense;
                }
            }; break;
            case STAT_SPEED: {
                if ((posStatValue < species->baseSpeed) || (
                    ((posStat == STAT_ATK || posStat == STAT_SPATK) && (BFG_PRIORITISE_ATK_SPA_OVER_SPE == FALSE)) || 
                    (posStat == STAT_DEF || posStat == STAT_SPDEF)
                ))
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

/*
static u8 GetSpeciesEVs(const struct SpeciesInfo * species, u8 nature) {
    // F_EV_SPREAD_HP | F_EV_SPREAD_SPEED
}
*/

static void GenerateTrainerPokemon(u16 speciesId, u8 index, u32 otID, u8 fixedIV, u8 level) {

    const struct SpeciesInfo * species = &(gSpeciesInfo[speciesId]);

    u8 friendship = MAX_FRIENDSHIP;
    u8 nature = GetSpeciesNature(species);
    u16 item = ITEM_CHOICE_SCARF;

    // Place the chosen pokemon into the trainer's party
    CreateMonWithEVSpreadNatureOTID(&gEnemyParty[index],
                                            speciesId, 
                                            level,
                                            nature,
                                            fixedIV,
                                            F_EV_SPREAD_HP | F_EV_SPREAD_SPEED, // 255 HP/SPEED
                                            otID);

    // Give the chosen pokemon its specified moves.
    friendship = MAX_FRIENDSHIP;
    
    /*
    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        SetMonMoveSlot(&gEnemyParty[i + firstMonId], MOVE_TACKLE);
        if (gFacilityTrainerMons[monId].moves[j] == MOVE_FRUSTRATION)
            friendship = 0;  // Frustration is more powerful the lower the pokemon's friendship is.
    }
    */

    // [PLACEHOLDER] Test move code
    SetMonMoveSlot(&gEnemyParty[index], MOVE_MEMENTO, 0);
    SetMonMoveSlot(&gEnemyParty[index], MOVE_NONE, 1);
    SetMonMoveSlot(&gEnemyParty[index], MOVE_NONE, 2);
    SetMonMoveSlot(&gEnemyParty[index], MOVE_NONE, 3);

    // Set friendship / held item
    SetMonData(&gEnemyParty[index], MON_DATA_FRIENDSHIP, &friendship);
    SetMonData(&gEnemyParty[index], MON_DATA_HELD_ITEM, &item);
}

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level) {

    s32 i, j;
    u16 monSet[BFG_TRAINER_CLASS_MON_LIMIT];
    u32 otID = 0;
        
    // Normal battle frontier trainer.
    u8 fixedIV = GetFrontierTrainerFixedIvs(trainerId);

    // Min/Max BST Value Lookup Table
    u16 minBST = fixedIVMinBSTLookup[fixedIV];
    u16 maxBST = fixedIVMaxBSTLookup[fixedIV];

    // Dereference the battle frontier trainer data
    const struct BattleFrontierTrainer * trainer = &(gFacilityTrainers[trainerId]);
    const u8 trainerClass = gFacilityClassToTrainerClass[trainer->facilityClass];
    const struct SpeciesInfo * species;

    u16 bst;
    otID = Random32();
    u16 bfMonCount = 0;

    // Loop over all species
    for(i = 0; i < NUM_SPECIES; i++) {

        // Break loop if mon limit reached
        if (bfMonCount == BFG_TRAINER_CLASS_MON_LIMIT)
            break;

        // Pointer to species info
        species = &(gSpeciesInfo[i]);

        bst = GetBaseStatTotal(species);

        // Skip above/below bst limits
        if (bst < minBST || bst > maxBST)
            continue;

        // Skip species if banned in frontier level
        if (SpeciesValidForFrontierLevel(species, i) == FALSE)
            continue;

        // Skip species if not valid for trainer class
        if (SpeciesValidForTrainerClass(trainerClass, species, i) == FALSE)
            continue;

        // Add species to mon set
        monSet[bfMonCount++] = i;
    }

    // Regular battle frontier trainer.
    // Attempt to fill the trainer's party with random Pokemon until 3 have been
    // successfully chosen. The trainer's party may not have duplicate pokemon species
    // or duplicate held items.

    i = 0;
    while(i != monCount) {
        // Sample random species from the mon count
        u16 speciesId = monSet[Random() % bfMonCount];

        // Ensure this pokemon species isn't a duplicate.
        for (j = 0; j < i + firstMonId; j++)
            if (GetMonData(&gEnemyParty[j], MON_DATA_SPECIES, NULL) == speciesId)
                break;
        if (j != i + firstMonId)
            continue;

        // Generate trainer Pokemon and add it to the team
        GenerateTrainerPokemon(speciesId, i + firstMonId, otID, fixedIV, level);
        
        // If the pokemon was successfully added to the trainer's party, so it's safe to move on to
        // the next party slot.
        i++;
    }
}