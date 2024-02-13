#ifndef GUARD_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_BATTLE_FRONTIER_GENERATOR_H

// Nature lookup table
struct Nature {
    u8 posStat;
    u8 negStat;
};

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level);

#endif // GUARD_BATTLE_FRONTIER_GENERATOR_H
