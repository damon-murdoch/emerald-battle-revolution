#ifndef GUARD_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_BATTLE_FRONTIER_GENERATOR_H

// Nature lookup table
struct Nature {
    u8 posStat;
    u8 negStat;
};

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level, u8 facilityMode);
void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank, u8 facilityMode);
#endif // GUARD_BATTLE_FRONTIER_GENERATOR_H
