SlateportCity_Mart_MapScripts::
	.byte 0

SlateportCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_Mart_EventScript_BlackBelt::
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end

SlateportCity_Mart_EventScript_Man::
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end

SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
	.string "The MARKET does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a POKéMON MART.$"

SlateportCity_Mart_Text_GreatBallIsBetter:
	.string "A GREAT BALL is better than a POKé BALL\n"
	.string "at catching POKéMON.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive POKéMON…$"

SlateportCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE02_GET, SlateportCity_Mart_EventScript_Clerk2_2
	msgbox SlateportCity_Mart_EventScript_Clerk2_Text_0
SlateportCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Mart_Pokemart_Clerk2
	goto SlateportCity_Mart_EventScript_Clerk2_1


	.align 2
SlateportCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_LURE_BALL
	.2byte ITEM_SPORT_BALL
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_UPGRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_MANECTITE
	.2byte ITEM_PINSIRITE
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_BERSERK_GENE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_FLYINIUM_Z
	.2byte ITEM_PSYCHIUM_Z
	.2byte ITEM_BUGINIUM_Z
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
