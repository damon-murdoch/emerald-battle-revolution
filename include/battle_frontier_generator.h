#ifndef GUARD_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_BATTLE_FRONTIER_GENERATOR_H

// Species Generator Properties
struct GemeratorProperties {
    u16 minBST;
    u16 maxBST;
    bool8 hasZMove;
    bool8 hasMega;
}

// Nature lookup table
struct Nature {
    u8 posStat;
    u8 negStat;
};

static bool32 GenerateTrainerPokemonHandleForme(struct Pokemon * mon, u16 speciesId, u32 otID, u8 fixedIV, u8 level, u16 minBST, u16 maxBST, bool8 hasMega, bool8 hasZMove);
static bool32 GenerateTrainerPokemon(struct Pokemon * mon, u16 speciesId, u32 otID, u8 fixedIV, u8 level, u8 formeIndex, u16 move, u16 item);

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level, u8 facilityMode);
void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank, u8 facilityMode);

#endif // GUARD_BATTLE_FRONTIER_GENERATOR_H
