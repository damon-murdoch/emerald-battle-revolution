#ifndef GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
#define GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H

// Maximum number of mons available for a given trainer class
#define BFG_TRAINER_CLASS_MON_LIMIT 0xFF

// If this is set to TRUE, either atk or special atk 
// will always be chosen as the nature-reduced stat.
// Otherwise, negative speed nature will be used in 
// the case where both atk and special atk are higher.
#define BFG_PRIORITISE_ATK_SPA_OVER_SPE TRUE

// If this is set to TRUE, special attack will 
// be chosen in the case where special attack 
// and attack match. Otherwise, attack will be chosen.
#define BFG_PRIORITISE_SPA_OVER_ATK FALSE

// If this is set to TRUE, attack / special attack
// will be prioritised when one of the offensive 
// stats ties with one of the defensive stats for
// the best stat.
#define BFG_PRIORITISE_ATK_SPA_OVER_DEF_SPD FALSE

// If this is set to TRUE, special defense will 
// be chosen in the case where special defense 
// and attack match. Otherwise, defense will be chosen.
#define BFG_PRIORITISE_SPD_OVER_DEF FALSE

#define BFG_EV_SELECT_RANDOM FALSE
#define BFG_MOVE_SELECT_RANDOM FALSE
#define BFG_ITEM_SELECT_RANDOM FALSE
#define BFG_NATURE_SELECT_RANDOM FALSE
#define BFG_ABILITY_SELECT_RANDOM FALSE

 // Flag to enable or disable random generator
#define BFG_FLAG_USE_FRONTIER_GENERATOR FLAG_UNUSED_0x020

#endif // GUARD_CONFIG_BATTLE_FRONTIER_GENERATOR_H
