#include "global.h"
#include "pokemon.h"
#include "test/test.h"
#include "test/battle.h"

#include "config/battle_frontier_generator.h"
#include "battle_frontier_generator.h"

// Battle Frontier Generator is configured
#if BFG_FLAG_FRONTIER_GENERATOR != 0

#if BFG_TEST_SET_GENERATION == TRUE

// Set fixed random number generators

#if BFG_TEST_FIXED_RNG == TRUE
#ifndef BFG_RANDOM_RANGE_FIXED
#define BFG_RANDOM_RANGE_FIXED FALSE
#define UNDEF_BFG_RANDOM_RANGE_FIXED
#endif 

#ifndef BFG_RANDOM_CHANCE_FIXED
#define BFG_RANDOM_CHANCE_FIXED FALSE
#define UNDEF_BFG_RANDOM_CHANCE_FIXED
#endif 

#ifndef BFG_RANDOM_BOOL_FIXED
#define BFG_RANDOM_BOOL_FIXED FALSE
#define UNDEF_BFG_RANDOM_BOOL_FIXED
#endif 
#endif // BFG_TEST_FIXED_RNG == TRUE

bool8 TestRandomPokemonGenerator(struct Pokemon * mon, u16 speciesId, u8 level, u8 lvlMode, u8 fixedIV)
{
    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, level, fixedIV);
    InitGeneratorForLvlMode(&properties, lvlMode);

    // Generate thee trainer Pokemon with the test species, properties
    bool8 success = GenerateTrainerPokemonHandleForme(mon, speciesId, &properties);
    EXPECT_EQ(success,TRUE);
    if (success)
    {
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPECIES), speciesId);
        EXPECT_EQ(GetMonData(mon, MON_DATA_LEVEL), level);
        EXPECT_EQ(GetMonData(mon, MON_DATA_HP_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_DEF_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPATK_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPDEF_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), fixedIV);
    }
    
    #if BFG_TEST_PRINT_RESULTS
    if (success == TRUE)
        DebugPrintMonData(mon);
    #endif

    return success;
}

TEST("Generate Random Set (Lvl. 50, 0 IVs)")
{
    struct Pokemon mon;
    TestRandomPokemonGenerator(&mon, BFG_TEST_SET_SPECIES, 50, FRONTIER_LVL_50, 0);
}

TEST("Generate Venusaur with Venusaurite (Lvl. 50)")
{
    struct Pokemon mon;

    #if BFG_FLAG_FRONTIER_ALLOW_MEGA != 0
    FLAG_SET(BFG_FLAG_FRONTIER_ALLOW_MEGA);
    #endif

    bool8 success = TestRandomPokemonGenerator(&mon, SPECIES_VENUSAUR, 50, FRONTIER_LVL_50, BFG_ITEM_IV_ALLOW_MEGA);
    if (success == TRUE)
    {
        // Check Mega Stone is held
        EXPECT_EQ(GetMonData(&mon, MON_DATA_HELD_ITEM), ITEM_VENUSAURITE);
    }
}

TEST("Generate Venusaur WITHOUT Venusaurite (Lvl. 50, 0 IVs)")
{
    struct Pokemon mon;

    bool8 success = TestRandomPokemonGenerator(&mon, SPECIES_VENUSAUR, 50, FRONTIER_LVL_50, 0);
    if (success == TRUE)
    {
        // Check Mega Stone is NOT held
        EXPECT_NE(GetMonData(&mon, MON_DATA_HELD_ITEM), ITEM_VENUSAURITE);
    }
}

// Cleanup modified defines

#if BFG_TEST_FIXED_RNG == TRUE
#ifdef UNDEF_BFG_RANDOM_RANGE_FIXED
#undef BFG_RANDOM_RANGE_FIXED
#undef UNDEF_BFG_RANDOM_RANGE_FIXED
#endif 

#ifdef UNDEF_BFG_RANDOM_CHANCE_FIXED
#undef BFG_RANDOM_CHANCE_FIXED
#undef UNDEF_BFG_RANDOM_CHANCE_FIXED
#endif 

#ifdef UNDEF_BFG_RANDOM_BOOL_FIXED
#undef BFG_RANDOM_BOOL_FIXED
#undef UNDEF_BFG_RANDOM_BOOL_FIXED
#endif 
#endif // BFG_TEST_FIXED_RNG == TRUE

#endif // BFG_TEST_SET_GENERATION == TRUE

#endif // BFG_FLAG_FRONTIER_GENERATOR != 0