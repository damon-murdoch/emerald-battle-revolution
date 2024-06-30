PetalburgCity_Mart_MapScripts::
	.byte 0

PetalburgCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Mart_EventScript_Woman::
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
	end

PetalburgCity_Mart_EventScript_Boy::
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
	end

PetalburgCity_Mart_EventScript_Man::
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
	end

PetalburgCity_Mart_Text_WeakWillGrowStronger:
	.string "Even if a POKéMON is weak now,\n"
	.string "it will grow stronger.\p"
	.string "The most important thing is love!\n"
	.string "Love for your POKéMON!$"

PetalburgCity_Mart_Text_RepelIsUseful:
	.string "Do you use REPEL?\n"
	.string "It keeps POKéMON away, so it's\l"
	.string "useful when you're in a hurry.$"

PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
	.string "Do you have any ANTIDOTES with\n"
	.string "you?\p"
	.string "If you walk around with a poisoned\n"
	.string "POKéMON, it will lose HP until it faints.\l"
	.string "Take some ANTIDOTES with you.$"

PetalburgCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, PetalburgCity_Mart_EventScript_Clerk2_2
	msgbox PetalburgCity_Mart_EventScript_Clerk2_Text_0
PetalburgCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE04_GET, PetalburgCity_Mart_EventScript_Clerk2_5
	pokemart PetalburgCity_Mart_Pokemart_Clerk2
	goto PetalburgCity_Mart_EventScript_Clerk2_1

PetalburgCity_Mart_EventScript_Clerk2_5:
	pokemart PetalburgCity_Mart_Pokemart_Clerk2_Expanded
	goto PetalburgCity_Mart_EventScript_Clerk2_1


	.align 2
PetalburgCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_RED_CARD
	.2byte ITEM_NONE

	.align 2
PetalburgCity_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_ALORAICHIUM_Z
	.2byte ITEM_PIKASHUNIUM_Z
	.2byte ITEM_SNORLIUM_Z
	.2byte ITEM_PIKANIUM_Z
	.2byte ITEM_EEVIUM_Z
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_UPGRADE
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_LOADED_DICE
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_RED_CARD
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
