#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_BODY_SLAM].effect == EFFECT_PARALYZE_HIT);
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Facade")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_BURN; expectedMove = MOVE_FACADE; }

    GIVEN {
        ASSUME(gBattleMoves[MOVE_FACADE].effect == EFFECT_FACADE);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(60); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_FACADE); Status1(status1); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_FACADE)
            MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Smelling Salt")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_PARALYSIS; expectedMove = MOVE_SMELLING_SALTS; }

    GIVEN {
        ASSUME(B_UPDATED_MOVE_DATA >= GEN_6);
        ASSUME(gBattleMoves[MOVE_SMELLING_SALTS].effect == EFFECT_SMELLING_SALTS);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(60); Status1(status1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_SMELLING_SALTS); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_SMELLING_SALTS)
            MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Wake Up Slap")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_SLEEP; expectedMove = MOVE_WAKE_UP_SLAP; }

    GIVEN {
        ASSUME(B_UPDATED_MOVE_DATA >= GEN_6);
        ASSUME(gBattleMoves[MOVE_WAKE_UP_SLAP].effect == EFFECT_WAKE_UP_SLAP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MEGANIUM) { HP(35); Status1(status1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_WAKE_UP_SLAP); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_WAKE_UP_SLAP)
            MESSAGE("Meganium fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Grav Apple")
{
    u32 movePlayer;
    u16 expectedMove;

    PARAMETRIZE { movePlayer = MOVE_CELEBRATE; expectedMove = MOVE_TROP_KICK; }
    PARAMETRIZE { movePlayer = MOVE_GRAVITY; expectedMove = MOVE_GRAV_APPLE; }

    GIVEN {
        ASSUME(gBattleMoves[MOVE_GRAV_APPLE].effect == EFFECT_GRAV_APPLE);
        ASSUME(gBattleMoves[MOVE_TROP_KICK].effect == EFFECT_ATTACK_DOWN_HIT);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(81); Speed(20); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(10); Moves(MOVE_TROP_KICK, MOVE_GRAV_APPLE); }
    } WHEN {
        TURN { MOVE(player, movePlayer); EXPECT_MOVE(opponent, MOVE_TROP_KICK); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_GRAV_APPLE)
            MESSAGE("Wobbuffet fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Flail")
{
    u16 hp, expectedMove;

    PARAMETRIZE { hp = 490; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { hp = 5; expectedMove = MOVE_FLAIL; }

    GIVEN {
        ASSUME(gBattleMoves[MOVE_FLAIL].effect == EFFECT_FLAIL);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { Speed(10); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(hp); MaxHP(490); Speed(20); Moves(MOVE_BODY_SLAM, MOVE_FLAIL); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    }
}

AI_SINGLE_BATTLE_TEST("AI will only use Dream Eater if target is asleep")
{
    u16 status1, expectedMove;

    PARAMETRIZE { status1 = STATUS1_NONE; expectedMove = MOVE_BODY_SLAM; }
    PARAMETRIZE { status1 = STATUS1_SLEEP; expectedMove = MOVE_DREAM_EATER; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_MEGANIUM) { HP(38); Status1(status1); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_BODY_SLAM, MOVE_DREAM_EATER); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, expectedMove); }
    } SCENE {
        if (expectedMove == MOVE_DREAM_EATER)
            MESSAGE("Meganium fainted!");
    }
}

AI_SINGLE_BATTLE_TEST("AI sees increased base power of Spit Up")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_STOCKPILE].effect == EFFECT_STOCKPILE);
        ASSUME(gBattleMoves[MOVE_SPIT_UP].effect == EFFECT_SPIT_UP);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET) { HP(43); }
        OPPONENT(SPECIES_WOBBUFFET) { Moves(MOVE_STOCKPILE, MOVE_SPIT_UP, MOVE_TACKLE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_STOCKPILE); }
        TURN { EXPECT_MOVE(opponent, MOVE_SPIT_UP); }
    } SCENE {
        // MESSAGE("Wobbuffet fainted!");
    }
}
