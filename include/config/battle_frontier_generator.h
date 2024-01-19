#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// Maximum number of mons available for a given trainer class
#define BFG_TRAINER_CLASS_MON_LIMIT 0x1FF

// If this is set to TRUE, opposing trainers will
// be allowed to mega-evolve their Pokemon. If a 
// species is parsed which has a mega evolution, 
// and the mega evolution falls within the allowed
// bst range, it will be added to the list.
#define BFG_TRAINER_ALLOW_MEGA TRUE

// If this is set to TRUE, opposing trainers will
// be allowed to use z-moves, including ultra burst
// (for compatible Pokemon).
#define BFG_TRAINER_ALLOW_ZMOVE TRUE

// If this is set to true, opposing trainers will
// be allowed to use gigantamax Pokemon.
#define BFG_TRAINER_ALLOW_GMAX TRUE

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
// ((RANDOM() % BFG_HA_CHANCE) == 0)
// A higher number will result in a lower chance.
#define BFG_HA_SELECTION_CHANCE 5 // 1/5 Chance

#define BFG_EV_SELECT_RANDOM FALSE
#define BFG_MOVE_SELECT_RANDOM TRUE
#define BFG_ITEM_SELECT_RANDOM FALSE
#define BFG_NATURE_SELECT_RANDOM FALSE

 // Flag to enable or disable random generator
#define BFG_FLAG_USE_FRONTIER_GENERATOR FLAG_UNUSED_0x020

#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
