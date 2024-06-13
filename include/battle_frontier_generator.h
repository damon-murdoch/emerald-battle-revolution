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

#define GET_TRAINER_ID() (gSaveBlock2Ptr->playerTrainerId[0] + gSaveBlock2Ptr->playerTrainerId[1] + gSaveBlock2Ptr->playerTrainerId[2] + gSaveBlock2Ptr->playerTrainerId[3])

// *** FORMAT ***
#define IS_DOUBLES() (VarGet(VAR_FRONTIER_BATTLE_MODE) == FRONTIER_MODE_DOUBLES)
#define GET_LVL_MODE() (gSaveBlock2Ptr->frontier.lvlMode)

#define GET_CHALLENGE_NUM(battleMode, lvlMode) ((gSaveBlock2Ptr->frontier.factoryWinStreaks[battleMode][lvlMode]) / FRONTIER_STAGES_PER_CHALLENGE)

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

// Forme / Gimmick not allowed
#define BFG_ITEM_IV_BANNED 32

bool32 GenerateTrainerPokemonHandleForme(struct Pokemon * mon, u16 speciesId, struct GeneratorProperties * properties);
bool32 GenerateTrainerPokemon(struct Pokemon * mon, u16 speciesId, u8 formeIndex, u16 move, u16 item, struct GeneratorProperties * properties);

bool32 GetSpeciesItemCheckUnique(u16 itemId, u16 * items, u8 itemCount);
u16 GetSpeciesItem(struct Pokemon * mon, u16 * items, u8 itemCount);

void DebugPrintMonData(struct Pokemon * mon);
void InitGeneratorProperties(struct GeneratorProperties * properties, u8 level, u8 fixedIV);
void InitGeneratorForLvlMode(struct GeneratorProperties * properties, u8 lvlMode); 
void UpdateGeneratorForLvlMode(struct GeneratorProperties * properties, u8 lvlMode); 

void GenerateTrainerParty(u16 trainerId, u8 firstMonId, u8 monCount, u8 level);
void GenerateFacilityInitialRentalMons(u8 firstMonId, u8 challengeNum, u8 rentalRank);
void GenerateFacilityOpponentMons(u16 trainerId, u8 firstMonId, u8 challengeNum, u8 winStreak);

void FillFacilityTrainerParty(u16 trainerId, u32 otID, u8 firstMonId, u8 challengeNum, u8 level, u8 fixedIV);

void SetFacilityPlayerAndOpponentParties();
void SetRentalsToFacilityOpponentParty();

void RestoreFacilityPlayerPartyHeldItems(u8 challengeNum);

bool8 FrontierBattlerCanMegaEvolve();
bool8 FrontierBattlerCanUseZMove();

bool8 FrontierBattlerCanTerastalise();
bool8 FrontierBattlerShouldTerastal(struct Pokemon * mon);

bool8 FrontierBattlerCanDynamax(struct Pokemon * mon);
bool8 FrontierBattlerShouldDynamax(struct Pokemon * mon);

#endif // GUARD_BATTLE_FRONTIER_GENERATOR_H
