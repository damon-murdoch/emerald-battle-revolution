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
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Mart_EventScript_Clerk2_2
	msgbox PetalburgCity_Mart_EventScript_Clerk2_Text_0
PetalburgCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Mart_EventScript_Clerk2_2:
	pokemart PetalburgCity_Mart_Pokemart_Clerk2
	message gText_HowMayIServeYou
	waitmessage
	goto PetalburgCity_Mart_EventScript_Clerk2_1


	.align 2
PetalburgCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_PARK_BALL
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_EVERSTONE
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_KANGASKHANITE
	.2byte ITEM_AUDINITE
	.2byte ITEM_LOPUNNITE
	.2byte ITEM_SKY_PLATE
	.2byte ITEM_MIND_PLATE
	.2byte ITEM_INSECT_PLATE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_ABILITY_SHIELD
	.2byte ITEM_METRONOME
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_ROCKIUM_Z
	.2byte ITEM_GHOSTIUM_Z
	.2byte ITEM_DARKINIUM_Z
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
