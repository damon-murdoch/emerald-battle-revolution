#ifndef GUARD_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_BATTLE_FRONTIER_GENERATOR_H

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
#define RANDOM_CHANCE(x) ((x == 1) ? TRUE : (BFG_RANDOM_CHANCE_FIXED))
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

// Species Generator Properties
struct GeneratorProperties {
    u32 otID;
    u8 level; 
    u8 fixedIV;
    u16 minBST;
    u16 maxBST;
    bool8 allowZMove;
    bool8 allowGmax;
    bool8 allowMega;
};

// Nature lookup table
struct Nature {
    u8 posStat;
    u8 negStat;
};

bool32 GenerateTrainerPokemonHandleForme(struct Pokemon * mon, u16 speciesId, struct GeneratorProperties * properties);
bool32 GenerateTrainerPokemon(struct Pokemon * mon, u16 speciesId, u8 formeIndex, u16 move, u16 item, struct GeneratorProperties * properties);

bool32 GetSpeciesItemCheckUnique(u16 itemId, u16 * items);
u16 GetSpeciesItem(struct Pokemon * mon, u16 * items);

void DebugPrintMonData(struct Pokemon * mon);
void InitGeneratorProperties(struct GeneratorProperties * properties, u8 level, u8 fixedIV);

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level, u8 facilityMode);
void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank, u8 facilityMode);
void GenerateFacilityOpponentMons(u16 trainerId, u8 firstMonId, u8 challengeNum, u8 winStreak, u8 facilityMode);

void SetFacilityPlayerParty(u8 level);
void SetFacilityOpponentParty(u8 level);

#endif // GUARD_BATTLE_FRONTIER_GENERATOR_H
