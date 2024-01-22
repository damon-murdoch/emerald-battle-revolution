#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// *** GENERAL ***
#define BFG_FLAG_FRONTIER_GENERATOR FLAG_UNUSED_0x020 // Flag to enable or disable random generator

#define BFG_RANDOM_BOOL_FIXED FALSE // Fixed value for RANDOM_BOOL()
#define BFG_RANDOM_OFFSET 0         // Max Value for RANDOM_OFFSET()

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
#define BFG_HA_SELECTION_CHANCE 5 // Hidden ability selection chance

// *** MOVES *** 
#define BFG_MOVE_SELECT_FAILURE_LIMIT 3 // Maximum times move selection can fail

#define BFG_MOVE_ALLOW_TEACHABLE TRUE   // Allow teachable moves to be used
#define BFG_MOVE_ALLOW_LEVEL_UP TRUE    // Allow level up moves to be used

#define BFG_MOVE_SELECT_RANDOM FALSE    // Randomly select moves with no heuristic
#if BFG_MOVE_SELECT_RANDOM == FALSE

#define BFG_MOVE_BASE_RATING 1.0f   // Baseline rating for all moves
#define BFG_MOVE_BASE_MODIFIER 1.0f // Base modifier for move effects

#define BFG_MOVE_MAX_OFFENSIVE 4    // Maximum number of offensive moves
#define BFG_MOVE_MAX_PER_TYPE 2     // Maximum number of offensive moves per-type
#define BFG_MOVE_MAX_STATUS 3       // Maximum number of status moves

#define BFG_MOVE_ALLY_HIT_MULTIPLIER 1.0f   // Modifier for ally-damaging moves
#define BFG_MOVE_DOUBLES_MULTIPLIER 1.1f    // Modifier for doubles moves
#define MOVE_PRIORITY_MULTIPLIER 1.2f       // Multiplier per-stage for doubles moves
#define BFG_MOVE_LUCK_MULTIPLIER 0.0f       // Status moves that induce luck-based effects

// Use ability effect modifiers
#define BFG_MOVE_ABILITY_MODIFIERS TRUE
#if BFG_MOVE_ABILITY_MODIFIERS == TRUE

#define BFG_MOVE_ABILITY_MODIFIER 1.5f

#endif // BFG_MOVE_ABILITY_MODIFIERS == TRUE

// Use move effect modifiers
#define BFG_MOVE_EFFECT_MODIFIERS TRUE
#if BFG_MOVE_EFFECT_MODIFIERS == TRUE

#define BFG_MOVE_SPEED_CONTROL_MODIFIER 1.0f

#define BFG_MOVE_TERRAIN_MULTIPLIER FALSE
#define BFG_MOVE_WEATHER_MULTIPLIER FALSE
#define BFG_MOVE_STATUS_MULTIPLIER 1.2f 
#define BFG_MOVE_RECOVERY_MODIFIER 1.2f
#define BFG_MOVE_PROTECT_MODIFIER FALSE
#define BFG_MOVE_ABSORB_MODIFIER 1.2f
#define BFG_MOVE_PIVOT_MODIFIER 1.2f

#define BFG_MOVE_MULTI_TURN_MODIFIER FALSE
#define BFG_MOVE_INTERRUPT_MODIFIER FALSE
#define BFG_MOVE_RECHARGE_MODIFIER FALSE
#define BFG_MOVE_SELF_KO_MODIFIER FALSE
#define BFG_MOVE_RAMPAGE_MODIFIER 0.6f
#define BFG_MOVE_RECOIL_MODIFIER 0.9f

#define BFG_MOVE_GENERIC_MODIFIER 1.0f

#endif // BFG_MOVE_EFFECT_MODIFIERS

#define BFG_MOVE_STAB_MODIFIER 1.5f             // STAB move multiplier (Offensive Only)
#define BFG_MOVE_EV_INVEST_MODIFIER 1.5f        // EV investment modifier
#define BFG_MOVE_NEG_NATURE_MULTIPLIER 0.0f     // Negative nature multiplier
#define BFG_MOVE_POS_NATURE_MULTIPLIER 1.1f     // Positive nature multiplier

#endif // BFG_MOVE_SELECT_RANDOM

// *** ITEMS ***
#define BFG_ITEM_ALLOW_MEGA TRUE    // Allow Mega Evolutions
#define BFG_ITEM_ALLOW_ZMOVE TRUE   // Allow Z-Moves
#define BFG_ITEM_ALLOW_GMAX TRUE    // Allow Gigantamax (In Dynamax Battles Only)

#define BFG_NO_ITEM_SELECTION_CHANCE 1
#if BFG_NO_ITEM_SELECTION_CHANCE != 1

#define BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE 4
#define BFG_ITEM_RESIST_BERRY_SELECTION_CHANCE 4
#define BFG_ITEM_BOOST_BERRY_SELECTION_CHANCE 8

#define BFG_ITEM_GEM_SELECTION_CHANCE 4
#define BFG_ITEM_TYPE_SELECTION_CHANCE 4
#define BFG_ITEM_CHOICE_SELECTION_CHANCE 4

// Unique Items (e.g. Rusted Sword, Light Ball)
#define BFG_ITEM_UNIQUE_SELECTION_CHANCE 1

// This is a catch-all for items which are useful in 
// a single situation, but pointless to have individual 
// cases for. 
// No Status Moves: ITEM_ASSAULT_VEST
// Not Fully Evolved: ITEM_EVIOLITE
// Overheat/Draco Meteor: ITEM_WHITE_HERB / ITEM_EJECT_PACK
// Two-Turn Move(s): ITEM_POWER_HERB
// Crit Raising Moves: ITEM_SCOPE_LENS
// Screens/Other Moves: ITEM_LIGHT_CLAY
// Low Defensive Stats: ITEM_FOCUS_SASH
// Poison Type: ITEM_BLACK_SLUDGE
// Ground Weakness: ITEM_AIR_BALLOON
// Competitive / Defiant: ITEM_ADRENALINE_ORB
// Sound Moves: ITEM_THROAT_SPRAY
// Rest: ITEM_CHESTO_BERRY
// Punches: ITEM_PUNCHING_GLOVE
// Multi-Hits: ITEM_LOADED_DICE
#define BFG_ITEM_OTHER_SELECTION_CHANCE 1

// Custom list of items which can be selected, in 
// addition to the flags set above. A random item 
// from this list will be chosen if none of the 
// above flags are matched.
#define BFG_CUSTOM_ITEMS_LIST \
    ITEM_LEFTOVERS, \
    ITEM_SHELL_BELL, \
    ITEM_WIDE_LENS, \
    ITEM_LIFE_ORB, \
    ITEM_ROCKY_HELMET, \
    ITEM_EJECT_BUTTON, \
    ITEM_RED_CARD, \
    ITEM_WEAKNESS_POLICY, \
    ITEM_HEAVY_DUTY_BOOTS, \
    ITEM_HEAVY_DUTY_BOOTS, \
    ITEM_PROTECTIVE_PADS, \
    ITEM_BLUNDER_POLICY, \
    ITEM_UTILITY_UMBRELLA, \
    ITEM_LUM_BERRY, \
    ITEM_SITRUS_BERRY, \
    ITEM_MICLE_BERRY, \
    ITEM_CUSTAP_BERRY, \
    ITEM_JABOCA_BERRY, \
    ITEM_ROWAP_BERRY, \
    ITEM_KEE_BERRY, \
    ITEM_MARANGA_BERRY, \
    ITEM_ABILITY_SHIELD, \
    ITEM_CLEAR_AMULET, \
    ITEM_COVERT_CLOAK, \
    ITEM_MIRROR_HERB

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
