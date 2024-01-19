#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// Flag to enable or disable random generator
#define BFG_FLAG_USE_FRONTIER_GENERATOR FLAG_UNUSED_0x020

// Maximum number of mons available for a given trainer 
// class - The default value is 0x1FF (511), setting this 
// number too high may result in the game running out of 
// memory, setting it too low results in poor variance
// and later generation species may not appear as often
#define BFG_TRAINER_CLASS_MON_LIMIT 0x1FF

// If this is set to TRUE, attack / special attack
// will be prioritised when one of the offensive 
// stats ties with one of the defensive stats for
// the best stat.
#define BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD FALSE

// If this is set to TRUE, either atk or special atk 
// will always be chosen as the nature-reduced stat.
// Otherwise, negative speed nature will be used in 
// the case where both atk and special atk are higher.
#define BFG_PRIORITISE_ATK_SPA_OVER_SPE FALSE

// If this is set to TRUE, higher base stats will
// be invested in as opposed to lower base stats.
// This system produces generally better results
// than always investing in lower stats, however
// it is technically suboptimal for EV spreads.
#define BFG_EV_INVEST_HIGHER_STATS TRUE

// If this is set to true, the teachable move 
// set will be used when selecting a Pokemon's 
// moves. Please note, this option can be 
// combined with BFG_ALLOW_LEVEL_UP_MOVES.
#define BFG_ALLOW_TEACHABLE_MOVES TRUE

// If this is set to true, the level up move 
// set will be used when selecting a Pokemon's 
// moves. Please note note, this option can be 
// combined with BFG_ALLOW_TEACHABLE_MOVES.
#define BFG_ALLOW_LEVEL_UP_MOVES TRUE

// If this value is set, this value will be 
// returned each time RANDOM_BOOL() is called.
#define BFG_RANDOM_BOOL_FIXED FALSE

// If this value is set, a random value between 
// 0 and BFG_RANDOM_OFFSET will be applied to all
// stat calculations (in ev/move/item/nature) calcs
// to introduce an element of randomness.
// #define BFG_RANDOM_OFFSET 10

// When comparing 'hp' to other stats, this number
// will be added to the value to account for the
// different method of calculating hp changes.
#define BFG_HP_OFFSET 30

// If this is set to any value above zero, it will
// be used to calculate if the Pokemon should be
// given a hidden ability or not. The calculation
// is as follows: 
// ((RANDOM() % BFG_HA_SELECTION_CHANCE) == 0)
// A higher number will result in a lower chance.
// e.g. 1 = 1/1 chance, 4 = 1/4 chance, etc.

#define BFG_HA_SELECTION_CHANCE 5 // 1/5 Chance

#define BFG_EV_SELECT_RANDOM FALSE
#define BFG_MOVE_SELECT_RANDOM TRUE
#define BFG_ITEM_SELECT_RANDOM FALSE
#define BFG_NATURE_SELECT_RANDOM FALSE

// If this is set to TRUE, opposing trainers will
// be allowed to mega-evolve their Pokemon. If a 
// species is parsed which has a mega evolution, 
// and the mega evolution falls within the allowed
// bst range, it will be added to the list.
#define BFG_ITEM_ALLOW_MEGA TRUE

// If this is set to TRUE, opposing trainers will
// be allowed to use z-moves, including ultra burst
// (for compatible Pokemon).
#define BFG_ITEM_ALLOW_ZMOVE TRUE

// If this is set to true, opposing trainers will
// be allowed to use gigantamax Pokemon.
#define BFG_ITEM_ALLOW_GMAX TRUE

// All of the options below use the following calculation:
// Please note, if the value is set to 0, there is no chance
// for it to be selected.

// ((RANDOM() % BFG_ITEM_GEM_SELECTION_CHANCE) == 0)
// A higher number will result in a lower chance.
// e.g. 1 = 1/1 chance, 4 = 1/4 chance, etc.

// If this is set to true, Pokemon will
// not be given any items, regardless of
// the values set below.
#define BFG_NO_ITEM_SELECTION_CHANCE 0

// If this is set to true, type-gems
// will be allowed to be used by Battle
// Frontier opponents.
#define BFG_ITEM_GEM_SELECTION_CHANCE 4

// If this is set to true, type-items
// will be allowed to be used by Battle
// Frontier opponents.
#define BFG_ITEM_TYPE_ITEM_SELECTION_CHANCE 4

// If this is set to true, choice items
// will be allowed to be used by Battle
// Frontier opponents.
#define BFG_ITEM_CHOICE_ITEM_SELECTION_CHANCE 4

// If this is set to true, berries such as
// Figy, Wiki, Mago, Aguav and Iapapa will
// be available for Battle Frontier Opponents.
#define BFG_ITEM_FIWAM_BERRY_SELECTION_CHANCE 4

// If this is set to true, type-resist berries
// such as Shuca, Wacan, Rindo, etc. will be
// available for Battle Frontier Opponents.
#define BFG_ITEM_RESIST_BERRY_SELECTION_CHANCE 4

// If this is set to true, stat-boosting berries
// such as Leichi, Ganlon, Salac, etc. will be 
// available for Battle Frontier Opponents. Please
// note that gimmick berries (e.g. Micle, Custap)
// are not included in this list.
#define BFG_ITEM_BOOST_BERRY_SELECTION_CHANCE 8

// If this is set to TRUE, Pokemon which have access
// to unique items (such as Rusted Sword/Shield, etc.)
// will be allowed to be used by Frontier opponents.
#define BFG_ITEM_UNIQUE_SELECTION_CHANCE TRUE

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
#define BFG_ITEM_OTHER_SELECTION_CHANCE 2

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
// ITEM_RED_CARD, \

#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
