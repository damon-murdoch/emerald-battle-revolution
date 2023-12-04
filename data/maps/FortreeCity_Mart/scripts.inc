FortreeCity_Mart_MapScripts::
	.byte 0

FortreeCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FortreeCity_Mart_EventScript_Woman::
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Girl::
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Boy::
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
	end

FortreeCity_Mart_Text_SuperRepelBetter:
	.string "SUPER REPEL lasts a long time,\n"
	.string "and it gets the job done.\p"
	.string "It's much better than an ordinary\n"
	.string "REPEL.$"

FortreeCity_Mart_Text_StockUpOnItems:
	.string "I always stock up on more items than\n"
	.string "I'm sure I'll need.\p"
	.string "You never know what might happen.\n"
	.string "Better to be safe than sorry!$"

FortreeCity_Mart_Text_RareCandyMakesMonGrow:
	.string "A RARE CANDY makes a POKéMON grow\n"
	.string "immediately by one level.$"

FortreeCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Mart_EventScript_Clerk2_2
	msgbox FortreeCity_Mart_EventScript_Clerk2_Text_0
FortreeCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FortreeCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart FortreeCity_Mart_Pokemart_Clerk2
	goto FortreeCity_Mart_EventScript_Clerk2_1


	.align 2
FortreeCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_POISON_TERA_SHARD
	.2byte ITEM_STEEL_TERA_SHARD
	.2byte ITEM_SCIZORITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_GENGARITE
	.2byte ITEM_POISONIUM_Z
	.2byte ITEM_STEELIUM_Z
	.2byte ITEM_POISON_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_POISON_BARB
	.2byte ITEM_METAL_COAT
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_PUNCHING_GLOVE
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
