FallarborTown_Mart_MapScripts::
	.byte 0

FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_Woman::
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM::
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_Text_DecidingSkittyEvolve:
	.string "I'm having a hard time deciding if I\n"
	.string "should make my SKITTY evolve or not.\p"
	.string "I only have to use this MOON STONE,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_Text_Skitty:
	.string "SKITTY: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound:
	.string "This NUGGET I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"

FallarborTown_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, FallarborTown_Mart_EventScript_Clerk2_2
	msgbox FallarborTown_Mart_EventScript_Clerk2_Text_0
FallarborTown_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart_Clerk2
	goto FallarborTown_Mart_EventScript_Clerk2_1


	.align 2
FallarborTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_SAFARI_BALL
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_SCROLL_OF_DARKNESS
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_SLOWBRONITE
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_PIKANIUM_Z
	.2byte ITEM_EEVIUM_Z
	.2byte ITEM_SNORLIUM_Z
	.2byte ITEM_MEWNIUM_Z
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
