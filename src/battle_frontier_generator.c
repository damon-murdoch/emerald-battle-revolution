#include "global.h"
#include "species_info.h"
#include "battle_tower.h"
#include "trainer_class_lookups.h"
#include "battle_frontier_generator.h"
#include "config/battle_frontier_generator.h"

static void GenerateTrainerMon(u16 trainerId, u8 monId) {

}

static void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount) {
    
    s32 i, j;
    u16 chosenMonIndices[MAX_FRONTIER_PARTY_SIZE];
    u8 friendship = MAX_FRIENDSHIP;
    u8 level = SetFacilityPtrsGetLevel();
    u8 fixedIV = 0;
    u8 bfMonCount;
    const u16 monSet[];

    u32 otID = 0;
        
    // Normal battle frontier trainer.
    fixedIV = GetFrontierTrainerFixedIvs(trainerId);

    // Dereference the battle frontier trainer data
    const struct BattleFrontierTrainer trainer = gFacilityTrainers[trainerId];

    // Dereference standard trainer class from facility trainer class
    const u8 trainerClass = gFacilityClassToTrainerClass[trainer.facilityClass];

    i = 0;
    otID = Random32();

    // This switch filters out Pokemon based on the trainer class
    // For example, 
    
    switch(trainerClass) {

    }

    // Regular battle frontier trainer.
    // Attempt to fill the trainer's party with random Pokemon until 3 have been
    // successfully chosen. The trainer's party may not have duplicate pokemon species
    // or duplicate held items.

    while(i != monCount) {

    }
}