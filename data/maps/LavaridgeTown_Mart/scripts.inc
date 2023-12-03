LavaridgeTown_Mart_MapScripts::
	.byte 0

LavaridgeTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Mart_EventScript_ExpertM::
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
	end

LavaridgeTown_Mart_EventScript_OldWoman::
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
	end

LavaridgeTown_Mart_Text_XSpeedFirstStrike:
	.string "Use X SPEED to add to a POKéMON's\n"
	.string "SPEED in battle.\p"
	.string "That will help it get in the first\n"
	.string "strike--a decided advantage!$"

LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
	.string "On MT. CHIMNEY's peak, there's a local\n"
	.string "specialty that you can buy only there.\p"
	.string "Give it to a POKéMON--it will be elated.$"

LavaridgeTown_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Mart_EventScript_Clerk2_2
	msgbox LavaridgeTown_Mart_EventScript_Clerk2_Text_0
LavaridgeTown_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE06_GET, LavaridgeTown_Mart_EventScript_Clerk2_5
	pokemart LavaridgeTown_Mart_Pokemart_Clerk2
	goto LavaridgeTown_Mart_EventScript_Clerk2_1

LavaridgeTown_Mart_EventScript_Clerk2_5:
	pokemart LavaridgeTown_Mart_Pokemart_Clerk2_Expanded
	goto LavaridgeTown_Mart_EventScript_Clerk2_1


	.align 2
LavaridgeTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_CAMERUPTITE
	.2byte ITEM_ALTARIANITE
	.2byte ITEM_GARCHOMPITE
	.2byte ITEM_STEELIXITE
	.2byte ITEM_GROUNDIUM_Z
	.2byte ITEM_ROCKIUM_Z
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_DAMP_ROCK
	.2byte ITEM_HEAT_ROCK
	.2byte ITEM_SMOOTH_ROCK
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_QUICK_POWDER
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_RING_TARGET
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_NONE

	.align 2
LavaridgeTown_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_GROUND_TERA_SHARD
	.2byte ITEM_ROCK_TERA_SHARD
	.2byte ITEM_CAMERUPTITE
	.2byte ITEM_ALTARIANITE
	.2byte ITEM_GARCHOMPITE
	.2byte ITEM_STEELIXITE
	.2byte ITEM_GROUNDIUM_Z
	.2byte ITEM_ROCKIUM_Z
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_DAMP_ROCK
	.2byte ITEM_HEAT_ROCK
	.2byte ITEM_SMOOTH_ROCK
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_QUICK_POWDER
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_RING_TARGET
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
