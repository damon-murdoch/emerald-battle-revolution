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
	goto_if_set FLAG_BADGE04_GET, SlateportCity_Mart_EventScript_Clerk2_5
	pokemart SlateportCity_Mart_Pokemart_Clerk2
	goto SlateportCity_Mart_EventScript_Clerk2_1

SlateportCity_Mart_EventScript_Clerk2_5:
	goto_if_set FLAG_BADGE06_GET, SlateportCity_Mart_EventScript_Clerk2_8
	pokemart SlateportCity_Mart_Pokemart_Clerk2_Expanded
	goto SlateportCity_Mart_EventScript_Clerk2_1

SlateportCity_Mart_EventScript_Clerk2_8:
	pokemart SlateportCity_Mart_Pokemart_Clerk2_Expanded2
	goto SlateportCity_Mart_EventScript_Clerk2_1


	.align 2
SlateportCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_FIGHTINIUM_Z
	.2byte ITEM_PSYCHIUM_Z
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
SlateportCity_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_LUCARIONITE
	.2byte ITEM_SLOWBRONITE
	.2byte ITEM_LOPUNNITE
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_FIGHTINIUM_Z
	.2byte ITEM_PSYCHIUM_Z
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

	.align 2
SlateportCity_Mart_Pokemart_Clerk2_Expanded2:
	.2byte ITEM_FIGHTING_TERA_SHARD
	.2byte ITEM_PSYCHIC_TERA_SHARD
	.2byte ITEM_LUCARIONITE
	.2byte ITEM_SLOWBRONITE
	.2byte ITEM_LOPUNNITE
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_FIGHTINIUM_Z
	.2byte ITEM_PSYCHIUM_Z
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
