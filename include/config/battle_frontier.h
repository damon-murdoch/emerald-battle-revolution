#ifndef GUARD_CONFIG_FRONTIER_H
#define GUARD_CONFIG_FRONTIER_H

#define BF_ALLOW_DUPLICATE_ITEMS FALSE // Allow duplicate held items
#define BF_ALLOW_DUPLICATE_SPECIES FALSE // Allow duplicate species
#define BF_ALLOW_BANNED_SPECIES FALSE // Allow banned species

// If this is set to true, lvl. 50 facilities will be level-scaled 
// down if above lvl. 50, instead of banning the Pokemon. If this
// is set to true, the below values will be referenced for if 
// Pokemon below that level should be scaled up, or left as-is.s
#define BF_ENABLE_LEVEL_SCALING TRUE

#define BF_BATTLE_FRONTIER_LEVEL_TENT_SCALE_UP // Scale pokemon below 'BF_BATTLE_FRONTIER_LEVEL_TENT_SCALE_LEVEL' to that level in Battle Tent Facilities 
#define BF_BATTLE_FRONTIER_LEVEL_TENT_SCALE_LEVEL 30 // Scale Pokemon above (or below if set) this level to this level

#define BF_BATTLE_FRONTIER_LEVEL_50_SCALE_UP TRUE // Scale pokemon below 'BATTLE_FRONTIER_LEVEL_50_SCALE_LEVEL' to that level in Level 50 Battle Frontier Facilities 
#define BF_BATTLE_FRONTIER_LEVEL_50_SCALE_LEVEL 50 // Scale Pokemon above (or below if set) this level to this level

#define BF_BATTLE_FRONTIER_LEVEL_OPEN_SCALE_UP TRUE // Scale pokemon below 'BATTLE_FRONTIER_LEVEL_OPEN_SCALE_LEVEL' to that level in Open Level Battle Frontier Facilities 
#define BF_BATTLE_FRONTIER_LEVEL_OPEN_SCALE_LEVEL 100 // Scale Pokemon above (or below if set) this level to this level

#endif // GUARD_CONFIG_FRONTIER_H
