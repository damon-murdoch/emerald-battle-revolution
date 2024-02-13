#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// *** GENERAL ***
#define BFG_FLAG_FRONTIER_GENERATOR FLAG_BATTLE_FRONTIER_GENERATOR // Flag to enable or disable random generator

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

#define BFG_FORME_CHANCE_PIKACHU 3
#define BFG_FORME_CHANCE_PICHU 2
#define BFG_FORME_CHANCE_TAUROS_PALDEA 2
#define BFG_FORME_CHANCE_UNOWN 2
#define BFG_FORME_CHANCE_CASTFORM 2
#define BFG_FORME_CHANCE_DEOXYS 2
#define BFG_FORME_CHANCE_BURMY_WORMADAM 2
#define BFG_FORME_CHANCE_SHELLOS_GASTRODON 2
#define BFG_FORME_CHANCE_ROTOM 1
#define BFG_FORME_CHANCE_DIALGA 2
#define BFG_FORME_CHANCE_PALKIA 2
#define BFG_FORME_CHANCE_GIRATINA 2
#define BFG_FORME_CHANCE_SHAYMIN 2
#define BFG_FORME_CHANCE_ARCEUS 2
#define BFG_FORME_CHANCE_BASCULIN 2
#define BFG_FORME_CHANCE_DEERLING_SAWSBUCK 2
#define BFG_FORME_CHANCE_TORNADUS_THERIAN 2
#define BFG_FORME_CHANCE_THUNDURUS_THERIAN 2
#define BFG_FORME_CHANCE_LANDORUS_THERIAN 2
#define BFG_FORME_CHANCE_ENAMORUS_THERIAN 2
#define BFG_FORME_CHANCE_KYUREM 2
#define BFG_FORME_CHANCE_KELDEO 2
#define BFG_FORME_CHANCE_GENESECT 2
#define BFG_FORME_CHANCE_GRENINJA 2
#define BFG_FORME_CHANCE_VIVILLON 2
#define BFG_FORME_CHANCE_FLABEBE_FLOETTE_FLORGES 2
#define BFG_FORME_CHANCE_FURFROU 2
#define BFG_FORME_CHANCE_MEOWSTIC 2
#define BFG_FORME_CHANCE_PUMPKABOO_GOURGEIST 2
#define BFG_FORME_CHANCE_ZYGARDE 2
#define BFG_FORME_CHANCE_HOOPA 2
#define BFG_FORME_CHANCE_ORICORIO 2
#define BFG_FORME_CHANCE_ROCKRUFF_LYCANROC 2
#define BFG_FORME_CHANCE_SILVALLY 2
#define BFG_FORME_CHANCE_MINIOR 2
#define BFG_FORME_CHANCE_NECROZMA 2
#define BFG_FORME_CHANCE_MAGEARNA 2
#define BFG_FORME_CHANCE_ALCREMIE 2
#define BFG_FORME_CHANCE_INDEEDEE 2
#define BFG_FORME_CHANCE_URSHIFU 2
#define BFG_FORME_CHANCE_CALYREX 2
#define BFG_FORME_CHANCE_BASCULEGION 2
#define BFG_FORME_CHANCE_OINKOLOGNE 2
#define BFG_FORME_CHANCE_MAUSHOLD 2
#define BFG_FORME_CHANCE_SQUAWKABILLY 2
#define BFG_FORME_CHANCE_TATSUGIRI 2
#define BFG_FORME_CHANCE_DUDUNSPARCE 2
#define BFG_FORME_CHANCE_GIMMIGHOUL 2
#define BFG_FORME_CHANCE_OGERPON 2
#define BFG_FORME_CHANCE_URSALUNA 2

#define BFG_FORME_CHANCE_PRIMAL 1
#define BFG_FORME_CHANCE_MEGA 1

#define BFG_ZMOVE_CHANCE_PIKANIUM_Z 4
#define BFG_ZMOVE_CHANCE_EEVIUM_Z 2
#define BFG_ZMOVE_CHANCE_SNORLIUM_Z 2
#define BFG_ZMOVE_CHANCE_MEWNIUM_Z 2
#define BFG_ZMOVE_CHANCE_DECIDIUM_Z 2
#define BFG_ZMOVE_CHANCE_INCINIUM_Z 2
#define BFG_ZMOVE_CHANCE_PRIMARIUM_Z 2
#define BFG_ZMOVE_CHANCE_LYCANIUM_Z 2
#define BFG_ZMOVE_CHANCE_MIMIKIUM_Z 2
#define BFG_ZMOVE_CHANCE_KOMMONIUM_Z 2
#define BFG_ZMOVE_CHANCE_TAPUNIUM_Z 2
#define BFG_ZMOVE_CHANCE_SOLGANIUM_Z 2
#define BFG_ZMOVE_CHANCE_LUNALIUM_Z 2
#define BFG_ZMOVE_CHANCE_MARSHADIUM_Z 2
#define BFG_ZMOVE_CHANCE_ALORAICHIUM_Z 2
#define BFG_ZMOVE_CHANCE_PIKASHUNIUM_Z 4
#define BFG_ZMOVE_CHANCE_ULTRANECROZIUM_Z 2

#define BFG_ZMOVE_CHANCE_ARCEUS 2 // Use Z-Crystal instead of Plate
#define BFG_ZMOVE_CHANCE_SILVALLY 2 // Use Z-Crystal instead of Memory
#define BFG_ZMOVE_CHANCE_NECROZMA 2 // Use Solganium/Lunalium on Necrozma formes

// Allow custom species banlists
#define BFG_USE_CUSTOM_BANNED_SPECIES TRUE
#if BFG_USE_CUSTOM_BANNED_SPECIES == TRUE

// Custom list of common banned species
#define BFG_COMMON_CUSTOM_BANNED_SPECIES \
    SPECIES_DITTO, \
    SPECIES_WYNAUT, \
    SPECIES_SPINDA, \
    SPECIES_WOBBUFFET, \
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

// Accuracy modifier will be multiplied
// by itself 'n' times, in order to punish
// lower accuracy moves compared to fully
// accurate moves.
#define BFG_MOVE_ACCURACY_POWER 2
#define BFG_MOVE_CRIT_STAGE_POWER 1.2

#define BFG_MOVE_MAX_OFFENSIVE 4    // Maximum number of offensive moves
#define BFG_MOVE_MAX_PER_TYPE 2     // Maximum number of offensive moves per-type
#define BFG_MOVE_MAX_STATUS 3       // Maximum number of status moves

#define BFG_MOVE_OFF_BOOST_REQUIRE_ATTACK 2 // Required attacks to use offensive attack boosting moves
#define BFG_MOVE_CRIT_BOOST_REQUIRE_CRIT 1 // Min. Crit-Boosted effects required before using crit-boosting moves


#define BFG_MOVE_MAX_SPEED_CONTROL_EFFECT 1         // Maximum number of speed control effects
#define BFG_MOVE_MAX_STAT_CHANGING_EFFECT 1         // Maximum number of total stat-changing effects (self and opponent)

#define BFG_MOVE_ALLOW_ATK_CHANGING_EFFECT TRUE
#define BFG_MOVE_ALLOW_DEF_CHANGING_EFFECT TRUE
#define BFG_MOVE_ALLOW_SP_ATK_CHANGING_EFFECT TRUE
#define BFG_MOVE_ALLOW_SP_DEF_CHANGING_EFFECT TRUE
#define BFG_MOVE_ALLOW_SPEED_CHANGING_EFFECT FALSE

#define BFG_MOVE_SPEED_CONTROL_ALLOW_SUPPORT TRUE   // Allow mons with speed control moves to use support/self-target moves
#define BFG_MOVE_STAT_CHANGING_ALLOW_SUPPORT TRUE   // Allow mons with defensive-boosting moves to use support/self-target moves

#define BFG_MOVE_MAX_NON_VOLATILE_STATUS_EFFECT 1   // Maximum number of status effects
#define BFG_MOVE_MAX_FIELD_OR_ALLY_TARGET 2         // Maximum number of field targets
#define BFG_MOVE_MAX_CONFUSION_EFFECT 1             // Maximum number of confusion effects
#define BFG_MOVE_MAX_HAZARD_EFFECT 0                // Maximum number of hazard effects

#define BFG_MOVE_BATON_PASS_MINIMUM 4 // Minimum stat boosting moves for baton pass

// Priority Levels Higher/Lower than this will be set to max/min respectively
#define BFG_MOVE_MIN_PRIORITY_VALUE 0 // Min. Priority Calculation
#define BFG_MOVE_MAX_PRIORITY_VALUE 3 // Max. Priority Calculation

#define BFG_MOVE_RANDOM_HIT_MULTIPLIER 0.6f  // Doubles modifier for random targeting moves
#define BFG_MOVE_CRIT_BOOST_MULTIPLIER 1.1f  // Multipliplier for crit-boosting moves
#define BFG_MOVE_STAT_BOOST_MULTIPLIER 0.8f  // Multipliplier for stat-boosting moves
#define BFG_MOVE_ALLY_HIT_MULTIPLIER 0.8f    // Doubles modifier for ally-damaging moves
#define BFG_MOVE_PRIORITY_MULTIPLIER 1.1f    // Multiplier per-stage for priority moves
#define BFG_MOVE_DOUBLES_MULTIPLIER 1.2f     // Doubles modifier for spread moves in doubles

#define BFG_MOVE_NEG_NATURE_MULTIPLIER 0.7f  // Negative nature multiplier
#define BFG_MOVE_POS_NATURE_MULTIPLIER 1.3f  // Positive nature multiplier
#define BFG_MOVE_EV_INVEST_MULTIPLIER 1.5f   // EV investment modifier
#define BFG_MOVE_STAB_MULTIPLIER 1.5f        // STAB move multiplier (Offensive Only)

#define BFG_MOVE_MISC_STAT_UP_MODIFIER 1.0f  // Multiplier for misc. stat changing moves
#define BFG_MOVE_OPP_STAT_DOWN_MODIFIER 0.0f  // Multiplier for misc. stat changing moves

#define BFG_MOVE_ABILITY_MODIFIER 1.5f      // Modifier to increase chance for moves affected by abilities
#define BFG_MOVE_EFFECT_CHANCE_MULTIPLIER 0.3f  // Secondary effect chance multiplier

// Use move effect modifiers
#define BFG_MOVE_EFFECT_MODIFIERS TRUE
#if BFG_MOVE_EFFECT_MODIFIERS == TRUE

// Neutral / Positive Modifiers
#define BFG_MOVE_SPEED_CONTROL_MODIFIER 1.3f     // Trick Room, Tailwind
#define BFG_MOVE_DO_NOTHING_MODIFIER FALSE       // Splash, Celebrate
#define BFG_MOVE_TERRAIN_MULTIPLIER FALSE
#define BFG_MOVE_WEATHER_MULTIPLIER FALSE

#define BFG_MOVE_VOLATILE_MULTIPLIER 1.0f
#define BFG_MOVE_STATUS_MULTIPLIER 1.2f
#define BFG_MOVE_SCREEN_MULTIPLIER 0.9f // Reflect, Light Screen, etc.

#define BFG_MOVE_RECOVERY_MODIFIER 1.1f
#define BFG_MOVE_ABSORB_MODIFIER 1.5f
#define BFG_MOVE_PIVOT_MODIFIER 1.5f
#define BFG_MOVE_PHASE_MODIFIER 0.5f

#define BFG_MOVE_DOUBLES_PROTECT_MODIFIER 1.5f   // Wide Guard, Quick Guard, etc.
#define BFG_MOVE_SPECIAL_PROTECT_MODIFIER FALSE  // Detect, Spiky Shield, etc.
#define BFG_MOVE_SUBSTITUTE_MODIFIER 1.0f        // Substitute, Shed Tail
#define BFG_MOVE_PROTECT_MODIFIER FALSE          // Normal Protect
#define BFG_MOVE_ENDURE_MODIFIER 0.5f            // Normal Endure

#define BFG_MOVE_TYPE_CHANGE_MODIFIER 0.6f      // Modifier for moves which change the user/opponent's type
#define BFG_MOVE_ABILITY_CHANGE_MODIFIER 0.6f   // Modifier for moves which change the user/opponent's ability

#define BFG_MOVE_ITEM_RECYCLE_MODIFIER 1.0f   // Modifier for moves which recycle the user's held item
#define BFG_MOVE_ITEM_SWITCH_MODIFIER 1.0f   // Modifier for moves which switch the user and opponent's item
#define BFG_MOVE_ITEM_REMOVE_MODIFIER 0.8f   // Modifier for moves which remove the opponent's item (and / or item effects)

#define BFG_MOVE_COUNTER_MODIFIER 0.1f    // Multiplier for countering moves (e.g. Counter, Mirror Coat)
#define BFG_MOVE_HAZARD_MODIFIER 0.1f     // Modifier for entry hazards (e.g. Stealth Rock)
#define BFG_MOVE_FIELD_MODIFIER 1.0f      // Modifier for field effects (e.g. Haze, Perish Song)
#define BFG_MOVE_LUCK_MODIFIER 1.0f       // Status / OHKO moves with luck-based effects
#define BFG_MOVE_OHKO_MODIFIER FALSE      // Status / OHKO moves with luck-based effects

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

// Number of times item can fail to be found
// before 'ITEM_NONE' will be returned
#define BFG_ITEM_SELECT_FAILURE_LIMIT 4

// Set any of these values to 32 or above to disable them entirely

#define BFG_ITEM_IV_ALLOW_MEGA 31   // Min. IVs required for Mega Evolution
#define BFG_ITEM_IV_ALLOW_ZMOVE 31  // Min. IVs required for Z-Moves
#define BFG_ITEM_IV_ALLOW_GMAX 31   // Min. IVs required for Gigantamax

#define BFG_NO_ITEM_SELECTION_CHANCE FALSE
#if BFG_NO_ITEM_SELECTION_CHANCE != 1

// Moves required for certain items to be eligible
#define BFG_ITEM_WEAKNESS_POLICY_OFFENSIVE_MOVES_REQUIRED 2
#define BFG_ITEM_LIFE_ORB_OFFENSIVE_MOVES_REQUIRED 3
#define BFG_ITEM_CHOICE_OFFENSIVE_MOVES_REQUIRED 4
#define BFG_ITEM_TYPE_ITEM_TYPE_MOVES_REQUIRED 2
#define BFG_ITEM_TYPE_ITEM_STAB_REQUIRED TRUE
#define BFG_ITEM_TOXIC_ORB_MOVES_REQUIRED 2
#define BFG_ITEM_FLAME_ORB_MOVES_REQUIRED 1

// Common Items
#define BFG_ITEM_WEAKNESS_POLICY_SELECTION_CHANCE 3
#define BFG_ITEM_ASSAULT_VEST_SELECTION_CHANCE 2
#define BFG_ITEM_FOCUS_SASH_SELECTION_CHANCE 2
#define BFG_ITEM_LIFE_ORB_SELECTION_CHANCE 3
#define BFG_ITEM_EVIOLITE_SELECTION_CHANCE 2

// Choice Items
#define BFG_ITEM_CHOICE_SPECS_SELECTION_CHANCE 2
#define BFG_ITEM_CHOICE_SCARF_SELECTION_CHANCE 2
#define BFG_ITEM_CHOICE_BAND_SELECTION_CHANCE 2

// Ability-Specific Items
#define BFG_ITEM_TERRAIN_EXTENDER_SELECTION_CHANCE 4
#define BFG_ITEM_WEATHER_EXTENDER_SELECTION_CHANCE 4
#define BFG_ITEM_ADRENALINE_ORB_SELECTION_CHANCE 2
#define BFG_ITEM_TOXIC_ORB_SELECTION_CHANCE 2
#define BFG_ITEM_FLAME_ORB_SELECTION_CHANCE 2

// Move-Specific Items
#define BFG_ITEM_BLUNDER_POLICY_SELECTION_CHANCE 4  // numInaccurate
#define BFG_ITEM_PUNCHING_GLOVE_SELECTION_CHANCE 3  // numPunch
#define BFG_ITEM_CHESTO_BERRY_SELECTION_CHANCE 2    // hasRest
#define BFG_ITEM_THROAT_SPRAY_SELECTION_CHANCE 2    // numSound
#define BFG_ITEM_MENTAL_HERB_SELECTION_CHANCE 3     // numStatus
#define BFG_ITEM_LOADED_DICE_SELECTION_CHANCE 3     // numMultiHit
#define BFG_ITEM_LIGHT_CLAY_SELECTION_CHANCE 3      // numScreens
#define BFG_ITEM_WHITE_HERB_SELECTION_CHANCE 4      // numStatDrop
#define BFG_ITEM_EJECT_PACK_SELECTION_CHANCE 4      // numStatDrop
#define BFG_ITEM_SCOPE_LENS_SELECTION_CHANCE 4      // numCritModifier
#define BFG_ITEM_RAZOR_CLAW_SELECTION_CHANCE 4      // numCritModifier
#define BFG_ITEM_POWER_HERB_SELECTION_CHANCE 2      // hasMultiTurn
#define BFG_ITEM_WIDE_LENS_SELECTION_CHANCE 4       // numInaccurate

// Species-specific items
#define BFG_ITEM_LIGHT_BALL_SELECTION_CHANCE 1          // Pikachu
#define BFG_ITEM_LEEK_SELECTION_CHANCE 1                // Farfetcd/Galar/Sirfetchd
#define BFG_ITEM_THICK_CLUB_SELECTION_CHANCE 1          // Marowak/Alola
#define BFG_ITEM_LUCKY_PUNCH_SELECTION_CHANCE FALSE     // Chansey
#define BFG_ITEM_DITTO_POWDER_SELECTION_CHANCE FALSE    // Ditto
#define BFG_ITEM_DEEP_SEA_SCALE_SELECTION_CHANCE FALSE  // Gorebyss
#define BFG_ITEM_DEEP_SEA_TOOTH_SELECTION_CHANCE FALSE  // Huntail
#define BFG_ITEM_SOUL_DEW_SELECTION_CHANCE 4            // Latias/Latios

// Other Items
#define BFG_ITEM_AIR_BALLOON_4X_SELECTION_CHANCE 0  // Non Functional
#define BFG_ITEM_AIR_BALLOON_2X_SELECTION_CHANCE 0  // Non Functional
#define BFG_ITEM_BLACK_SLUDGE_SELECTION_CHANCE 2

// Type-Specific Items
#define BFG_ITEM_GEM_SELECTION_CHANCE 4
#define BFG_ITEM_TYPE_SELECTION_CHANCE 4
#define BFG_ITEM_ZMOVE_SELECTION_CHANCE 0 // Excludes signature Z-Moves

// Common Berries
#define BFG_ITEM_SITRUS_BERRY_SELECTION_CHANCE 4
#define BFG_ITEM_LUM_BERRY_SELECTION_CHANCE 4

// Resist / Weakness Berries
#define BFG_ITEM_RESIST_BERRY_4X_SELECTION_CHANCE 2
#define BFG_ITEM_RESIST_BERRY_2X_SELECTION_CHANCE 4

#define BFG_ITEM_STAT_BOOST_BERRY_SELECTION_CHANCE 8
#define BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE 4

// Custom list of items which can be selected, in
// the event that the pokemon has the move 'recycle'.
// A random item from this list will be selected, if
// none of the above berry flags are checked.
#define BFG_RECYCLE_ITEMS_LIST \
    ITEM_MARANGA_BERRY, \
    ITEM_CUSTAP_BERRY, \
    ITEM_JABOCA_BERRY, \
    ITEM_LANSAT_BERRY, \
    ITEM_STARF_BERRY, \
    ITEM_MICLE_BERRY, \
    ITEM_ROWAP_BERRY, \
    ITEM_CHILAN_BERRY, \
    ITEM_KEE_BERRY

// Custom list of items which can be selected, in 
// addition to the flags set above. A random item 
// from this list will be chosen if none of the 
// above flags are matched.
#define BFG_CUSTOM_ITEMS_LIST \
    BFG_RECYCLE_ITEMS_LIST, \
    ITEM_BRIGHT_POWDER, \
    ITEM_ROCKY_HELMET, \
    ITEM_MIRROR_HERB, \
    ITEM_FOCUS_BAND, \
    ITEM_QUICK_CLAW, \
    ITEM_KINGS_ROCK, \
    ITEM_SHELL_BELL, \
    ITEM_LEFTOVERS, \
    ITEM_RED_CARD

// TODO items
// ITEM_PROTECTIVE_PADS
// ITEM_ABILITY_SHIELD
// ITEM_ROCKY_HELMET
// ITEM_CLEAR_AMULET
// ITEM_COVERT_CLOAK
// ITEM_EJECT_BUTTON
// ITEM_RED_CARD

#endif // BFG_NO_ITEM_SELECTION_CHANCE != 1
#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
