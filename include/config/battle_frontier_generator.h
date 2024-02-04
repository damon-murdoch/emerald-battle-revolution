#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// *** GENERAL ***
#define BFG_FLAG_FRONTIER_GENERATOR FLAG_UNUSED_0x020 // Flag to enable or disable random generator

#define BFG_RANDOM_BOOL_FIXED FALSE // Fixed value for RANDOM_BOOL()
#define BFG_RANDOM_OFFSET 0        // Max Value for RANDOM_OFFSET()

// *** BASE STATS ***

#define BFG_IV_MIN_BST_3 180
#define BFG_IV_MIN_BST_6 225
#define BFG_IV_MIN_BST_9 270
#define BFG_IV_MIN_BST_12 315
#define BFG_IV_MIN_BST_15 360
#define BFG_IV_MIN_BST_18 405
#define BFG_IV_MIN_BST_21 450
#define BFG_IV_MIN_BST_MAX 495

#define BFG_IV_MAX_BST_3 405
#define BFG_IV_MAX_BST_6 450
#define BFG_IV_MAX_BST_9 495
#define BFG_IV_MAX_BST_12 540
#define BFG_IV_MAX_BST_15 585
#define BFG_IV_MAX_BST_18 630
#define BFG_IV_MAX_BST_21 675
#define BFG_IV_MAX_BST_MAX 720

// *** SPECIES ***
#define BFG_TRAINER_CLASS_MON_LIMIT 0x1FF   // Maximum number of mons available per trainer class

#define BFG_LVL_50_ALLOW_BANNED_SPECIES FALSE   // Allow banned species (e.g. Kyogre,Groudon) in Frontier Lvl. 50 Mode
#define BFG_LVL_OPEN_ALLOW_BANNED_SPECIES TRUE  // Allow banned species (e.g. Kyogre,Groudon) in Frontier Open Level Mode
#define BFG_LVL_TENT_ALLOW_BANNED_SPECIES FALSE // Allow banned species (e.g. Kyogre,Groudon) in Battle Tent

// Allow custom species banlists
#define BFG_USE_CUSTOM_BANNED_SPECIES TRUE
#if BFG_USE_CUSTOM_BANNED_SPECIES == TRUE

// Custom list of common banned species
#define BFG_COMMON_CUSTOM_BANNED_SPECIES \
    SPECIES_SHEDINJA, \
    SPECIES_SMEARGLE, \
    SPECIES_UNOWN, \
    SPECIES_NONE,

// Custom list of frontier lvl. 50 banned species
#define BFG_LVL_50_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

// Custom list of frontier open lvl. banned species
#define BFG_LVL_OPEN_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

// Custom list of battle tent banned species
#define BFG_LVL_TENT_CUSTOM_BANNED_SPECIES \
    BFG_COMMON_CUSTOM_BANNED_SPECIES

#endif

// *** STATS ***
#define BFG_STAT_SELECT_RANDOM FALSE
#if BFG_STAT_SELECT_RANDOM == FALSE

#define BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD FALSE   // Prioritise atk/spatk attack over def/spdef
#define BFG_PRIORITISE_ATK_SPA_OVER_SPE FALSE       // Prioritise atk/spa over speed

#define BFG_EV_INVEST_HIGHER_STATS TRUE // Invest EVs in highest 2 stats
#define BFG_EV_HP_OFFSET 30             // Increase chances of investing in HP

#endif

// *** ABILITIES ***
#define BFG_HA_SELECTION_CHANCE 4 // Hidden ability selection chance (5 = 1/5)

// *** MOVES *** 
#define BFG_MOVE_SELECT_FAILURE_LIMIT 3 // Maximum times move selection can fail

#define BFG_MOVE_ALLOW_LEVEL_UP TRUE    // Allow level-up moves to be used
#define BFG_MOVE_ALLOW_TEACHABLE TRUE   // Allow teachable moves to be used

#define BFG_MOVE_SELECT_RANDOM FALSE    // Randomly select moves with no heuristic
#if BFG_MOVE_SELECT_RANDOM == FALSE

#define BFG_MOVE_BASE_RATING 1.0f   // Baseline rating for all moves
#define BFG_MOVE_BASE_MODIFIER 1.0f // Base modifier for move effects

#define BFG_MOVE_MAX_OFFENSIVE 4    // Maximum number of offensive moves
#define BFG_MOVE_MAX_PER_TYPE 2     // Maximum number of offensive moves per-type
#define BFG_MOVE_MAX_STATUS 3       // Maximum number of status moves

#define BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK 2 // Required attacks to use offensive attack boosting moves

#define BFG_MOVE_MAX_SPEED_CONTROL_EFFECT 1         // Maximum number of speed control effects
#define BFG_MOVE_MAX_SPEED_BOOSTING_EFFECT FALSE    // Maximum number of speed boosting effects
#define BFG_MOVE_MAX_OFF_BOOSTING_EFFECT 1          // Maximum number of offensive boosting effects
#define BFG_MOVE_MAX_DEF_BOOSTING_EFFECT 1          // Maximum number of defensive boosting effects
#define BFG_MOVE_MAX_STAT_CHANGING_EFFECT 1         // Maximum number of total stat-changing effects (self and opponent)

#define BFG_MOVE_SPEED_CONTROL_ALLOW_SUPPORT TRUE   // Allow mons with speed control moves to use support/self-target moves
#define BFG_MOVE_SPEED_BOOST_ALLOW_SUPPORT FALSE    // Allow mons with speed-boosting moves to use support/self-target moves
#define BFG_MOVE_OFF_BOOST_ALLOW_SUPPORT FALSE      // Allow mons with offensive-boosting moves to use support/self-target moves
#define BFG_MOVE_DEF_BOOST_ALLOW_SUPPORT TRUE       // Allow mons with defensive-boosting moves to use support/self-target moves

#define BFG_MOVE_MAX_CONFUSION_EFFECT 1     // Maximum number of confusion effects
#define BFG_MOVE_MAX_STATUS_EFFECT 1        // Maximum number of status effects
#define BFG_MOVE_MAX_FIELD_OR_ALLY_TARGET 2 // Maximum number of field targets

#define BFG_MOVE_BATON_PASS_MINIMUM 4 // Minimum stat boosting moves for baton pass

// Priority Levels Higher/Lower than this will be set to max/min respectively
#define BFG_MOVE_MIN_PRIORITY_VALUE 0 // Min. Priority Calculation
#define BFG_MOVE_MAX_PRIORITY_VALUE 3 // Max. Priority Calculation

#define BFG_MOVE_RANDOM_HIT_MULTIPLIER 0.6f  // Doubles modifier for random targeting moves
#define BFG_MOVE_STAT_BOOST_MULTIPLIER 0.8f  // Multipliplier for stat-boosting moves
#define BFG_MOVE_ALLY_HIT_MULTIPLIER 0.8f    // Doubles modifier for ally-damaging moves
#define BFG_MOVE_PRIORITY_MULTIPLIER 1.1f    // Multiplier per-stage for priority moves
#define BFG_MOVE_DOUBLES_MULTIPLIER 1.2f     // Doubles modifier for spread moves in doubles

#define BFG_MOVE_NEG_NATURE_MULTIPLIER 0.7f  // Negative nature multiplier
#define BFG_MOVE_POS_NATURE_MULTIPLIER 1.3f  // Positive nature multiplier
#define BFG_MOVE_EV_INVEST_MULTIPLIER 1.5f   // EV investment modifier
#define BFG_MOVE_STAB_MULTIPLIER 1.5f        // STAB move multiplier (Offensive Only)

#define BFG_MOVE_MISC_STAT_MODIFIER FALSE  // Multiplier for misc. stat changing moves

// Use ability effect modifiers
#define BFG_MOVE_ABILITY_MODIFIERS TRUE
#if BFG_MOVE_ABILITY_MODIFIERS == TRUE

#define BFG_MOVE_ABILITY_MODIFIER 1.5f      // Modifier to increase chance for moves affected by abilities

#endif // BFG_MOVE_ABILITY_MODIFIERS

#define BFG_MOVE_EFFECT_CHANCE_MULTIPLIER 0.3f  // Secondary effect chance multiplier

// Use move effect modifiers
#define BFG_MOVE_EFFECT_MODIFIERS TRUE
#if BFG_MOVE_EFFECT_MODIFIERS == TRUE

// Neutral / Positive Modifiers
#define BFG_MOVE_SPEED_CONTROL_MODIFIER 1.3f     // Trick Room, Tailwind
#define BFG_MOVE_DO_NOTHING_MODIFIER FALSE       // Splash, Celebrate
#define BFG_MOVE_TERRAIN_MULTIPLIER FALSE
#define BFG_MOVE_WEATHER_MULTIPLIER FALSE

#define BFG_MOVE_VOLATILE_MULTIPLIER 1.1f // Worry Seed, Leech Seed, etc.
#define BFG_MOVE_STATUS_MULTIPLIER 1.2f

#define BFG_MOVE_RECOVERY_MODIFIER 1.1f
#define BFG_MOVE_ABSORB_MODIFIER 1.5f
#define BFG_MOVE_PIVOT_MODIFIER 1.5f

#define BFG_MOVE_DOUBLES_PROTECT_MODIFIER 1.5f   // Wide Guard, Quick Guard, etc.
#define BFG_MOVE_SPECIAL_PROTECT_MODIFIER 1.5f   // Detect, Spiky Shield, etc.
#define BFG_MOVE_SUBSTITUTE_MODIFIER 1.2f        // Substitute, Shed Tail
#define BFG_MOVE_PROTECT_MODIFIER FALSE          // Normal Protect
#define BFG_MOVE_ENDURE_MODIFIER 1.0f            // Normal Endure

#define BFG_MOVE_ITEM_SWITCH_MODIFIER 1.0f   // Modifier for moves which switch the user and opponent's item
#define BFG_MOVE_ITEM_REMOVE_MODIFIER 0.8f   // Modifier for moves which remove the opponent's item (and / or item effects)

#define BFG_MOVE_COUNTER_MODIFIER 0.1f       // Multiplier for countering moves (e.g. Counter, Mirror Coat)
#define BFG_MOVE_HAZARD_MODIFIER 0.1f     // Modifier for entry hazards (e.g. Stealth Rock)
#define BFG_MOVE_FIELD_MODIFIER 1.0f       // Modifier for field effects (e.g. Haze, Perish Song)
#define BFG_MOVE_LUCK_MODIFIER 1.0f        // Status / OHKO moves with luck-based effects

// Negative Modifiers
#define BFG_MOVE_DUPLICATE_TYPE_MODIFIER 0.8f // Same-type attack deduction (per same-type move)
#define BFG_MOVE_MULTI_TURN_MODIFIER 0.5f
#define BFG_MOVE_INTERRUPT_MODIFIER FALSE   // Focus Punch
#define BFG_MOVE_RECHARGE_MODIFIER 0.5f
#define BFG_MOVE_RAMPAGE_MODIFIER 0.5f
#define BFG_MOVE_SELF_KO_MODIFIER 0.5f     // Self Destruct, Explosion
#define BFG_MOVE_LIMITED_MODIFIER FALSE    // Dream Eater, Synchronoise

#define BFG_MOVE_GENERIC_MODIFIER 1.0f  // Unhandled / General Case

// Moves which will always be selected
#define BFG_MOVE_ALWAYS_SELECT \
    MOVE_FAKE_OUT, \
    MOVE_NONE,

// Moves which will never be selected
#define BFG_MOVE_NEVER_SELECT \
    MOVE_HIDDEN_POWER, \
    MOVE_NONE,

#endif // BFG_MOVE_EFFECT_MODIFIERS
#endif // BFG_MOVE_SELECT_RANDOM

// *** ITEMS ***

// Set any of these values to 32 or above to disable them entirely

#define BFG_ITEM_IV_ALLOW_MEGA 31   // Min. IVs required for Mega Evolution
#define BFG_ITEM_IV_ALLOW_ZMOVE 31  // Min. IVs required for Z-Moves
#define BFG_ITEM_IV_ALLOW_GMAX 31   // Min. IVs required for Gigantamax

#define BFG_NO_ITEM_SELECTION_CHANCE 1
#if BFG_NO_ITEM_SELECTION_CHANCE != 1

#define BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE 4
#define BFG_ITEM_RESIST_BERRY_SELECTION_CHANCE 4
#define BFG_ITEM_BOOST_BERRY_SELECTION_CHANCE 8

#define BFG_ITEM_GEM_SELECTION_CHANCE 4
#define BFG_ITEM_TYPE_SELECTION_CHANCE 4

// Unique Items (e.g. Rusted Sword, Light Ball)
#define BFG_ITEM_UNIQUE_SELECTION_CHANCE 1

// Items with specific use-cases
#define BFG_ITEM_ADRENALINE_ORB 1   // Competitive / Defiant
#define BFG_ITEM_PUNCHING_GLOVE 1   // Punching moves
#define BFG_ITEM_ASSAULT_VEST 1     // No Status Moves
#define BFG_ITEM_CHOICE_SCARF 1     // Fast, only attacking moves
#define BFG_ITEM_CHOICE_SPECS 1     // Only special attacks
#define BFG_ITEM_BLACK_SLUDGE 1     // Bulky Poison Type
#define BFG_ITEM_THROAT_SPRAY 1     // Sound Moves
#define BFG_ITEM_CHESTO_BERRY 1     // Rest
#define BFG_ITEM_LOADED_DICE 1      // Multi-Hits
#define BFG_ITEM_AIR_BALLOON 1      // Ground Weakness
#define BFG_ITEM_CHOICE_BAND 1     // Only physical attacks
#define BFG_ITEM_WHITE_HERB 1       // Overheat / Draco Meteor
#define BFG_ITEM_EJECT_PACK 1       // Overheat / Draco Meteor
#define BFG_ITEM_POWER_HERB 1       // Two-Turn Move(s)
#define BFG_ITEM_SCOPE_LENS 1       // Crit Raising Moves
#define BFG_ITEM_LIGHT_CLAY 1       // Screens/Other Moves
#define BFG_ITEM_FOCUS_SASH 1       // Low Defensive Stats
#define BFG_ITEM_TOXIC_ORB 1       // Poison heal
#define BFG_ITEM_FLAME_ORB 1       // Guts
#define BFG_ITEM_EVIOLITE 1         // Not Fully Evolved
#define BFG_ITEM_LIFE_ORB 1         // Offensive invested

// Custom list of items which can be selected, in 
// addition to the flags set above. A random item 
// from this list will be chosen if none of the 
// above flags are matched.
#define BFG_CUSTOM_ITEMS_LIST \
    ITEM_UTILITY_UMBRELLA, \
    ITEM_HEAVY_DUTY_BOOTS, \
    ITEM_WEAKNESS_POLICY, \
    ITEM_PROTECTIVE_PADS, \
    ITEM_BLUNDER_POLICY, \
    ITEM_ABILITY_SHIELD, \
    ITEM_MARANGA_BERRY, \
    ITEM_SITRUS_BERRY, \
    ITEM_CUSTAP_BERRY, \
    ITEM_JABOCA_BERRY, \
    ITEM_CLEAR_AMULET, \
    ITEM_COVERT_CLOAK, \
    ITEM_EJECT_BUTTON, \
    ITEM_ROCKY_HELMET, \
    ITEM_MIRROR_HERB, \
    ITEM_MICLE_BERRY, \
    ITEM_ROWAP_BERRY, \
    ITEM_SHELL_BELL, \
    ITEM_WIDE_LENS, \
    ITEM_LUM_BERRY, \
    ITEM_KEE_BERRY, \
    ITEM_LEFTOVERS, \
    ITEM_RED_CARD

// Here are some other *fun* items you can add :)
// ITEM_BRIGHT_POWDER, \
// ITEM_QUICK_CLAW, \
// ITEM_KINGS_ROCK, \
// ITEM_FOCUS_BAND, \
// ITEM_RAZOR_CLAW, \
// ITEM_RAZOR_FANG, \
// ITEM_RED_CARD

#endif // BFG_NO_ITEM_SELECTION_CHANCE != 1
#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
