#include "global.h"
#include "pokemon.h"
#include "species_info.h"
#include "battle_tower.h"
#include "constants/moves.h"
#include "constants/pokemon.h"
#include "trainer_class_lookups.h"
#include "battle_frontier_generator.h"
#include "constants/battle_frontier.h"
#include "config/battle_frontier_generator.h"

const u8 fixedIVMinBSTLookup[] = {
    [3] = 180;
    [6] = 225;
    [9] = 270;
    [12] = 315;
    [15] = 360;
    [18] = 405;
    [21] = 450;
    [MAX_PER_STAT_IVS] = 495;
};

const u8 fixedIVMaxBSTLookup [] = {
    [3] = 405;
    [6] = 450;
    [9] = 495;
    [12] = 540;
    [15] = 585;
    [18] = 630;
    [21] = 675;
    [MAX_PER_STAT_IVS] = 720;
};

static u8 GetBaseStatTotal(struct SpeciesInfo * species) {
    return (
        species->baseHP + species->baseAttack + 
        species->baseDefense + species->baseSpAttack + 
        species->baseSpDefense + species->baseSpeed
    );
}

static bool8 SpeciesValidForFrontierLevel(struct SpeciesInfo * species) {
    return TRUE; // Placeholder
}

static bool8 SpeciesValidForTrainerClass(u8 trainerClass, struct SpeciesInfo * species) {
    return TRUE; // Placeholder
}

static void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount) {
    
    s32 i, j;
    u16 chosenMonIndices[MAX_FRONTIER_PARTY_SIZE];
    u8 friendship = MAX_FRIENDSHIP;
    u8 level = SetFacilityPtrsGetLevel();
    const u16 monSet[NUM_SPECIES];
    struct SpeciesInfo * species;
    u32 otID = 0;
        
    // Normal battle frontier trainer.
    u8 fixedIV = GetFrontierTrainerFixedIvs(trainerId);
    
    // Min/Max BST Value Lookup Table
    u8 minBST = fixedIVMinBSTLookup[fixedIV];
    u8 maxBST = fixedIVMaxBSTLookup[fixedIV];

    // Dereference the battle frontier trainer data
    const struct BattleFrontierTrainer * trainer = &(gFacilityTrainers[trainerId]);
    const u8 trainerClass = gFacilityClassToTrainerClass[trainer->facilityClass];

    u8 bst;
    otID = Random32();
    u8 bfMonCount = 0;

    // Loop over all species
    for(i = 0; i < NUM_SPECIES; i++) {
        // Dereference species info
        species = &(gSpeciesInfo[i]);
        bst = GetBaseStatTotal(species);

        // Skip above/below bst limits
        if (bst < minBST || bst > maxBST)
            continue;

        // Skip species if banned in frontier level
        if (SpeciesValidForFrontierLevel(species) == FALSE)
            continue;

        // Skip species if not valid for trainer class
        if (SpeciesValidForTrainerClass(trainerClass, species) == FALSE)
            continue;
        
        // Add species to mon set
        monSet[bfMonCount++] = i;
    }

    // Has mega / z move
    bool8 hasMega = FALSE;
    bool8 hasZMove = FALSE;
    
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

        // Place the chosen pokemon into the trainer's party
        CreateMonWithEVSpreadNatureOTID(&gEnemyParty[i + firstMonId],
                                                speciesId, 
                                                level,
                                                NATURE_QUIRKY, // Neutral
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
        SetMonMoveSlot(&gEnemyParty[i + firstMonId], MOVE_TACKLE, 0);
        SetMonMoveSlot(&gEnemyParty[i + firstMonId], MOVE_NONE, 1);
        SetMonMoveSlot(&gEnemyParty[i + firstMonId], MOVE_NONE, 2);
        SetMonMoveSlot(&gEnemyParty[i + firstMonId], MOVE_NONE, 3);

        // Set friendship / held item
        SetMonData(&gEnemyParty[i + firstMonId], MON_DATA_FRIENDSHIP, &friendship);
        // SetMonData(&gEnemyParty[i + firstMonId], MON_DATA_HELD_ITEM, ITEM_NONE);

        // The pokemon was successfully added to the trainer's party, so it's safe to move on to
        // the next party slot.
        i++;
    }
}