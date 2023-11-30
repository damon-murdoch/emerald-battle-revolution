SootopolisCity_Mart_MapScripts::
	.byte 0

SootopolisCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_FatMan::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_FatManNoLegendaries::
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_Text_PPUpIsGreat:
	.string "PP UP is great!\p"
	.string "It raises the POWER POINTS, the PP,\n"
	.string "of a POKéMON move.$"

SootopolisCity_Mart_Text_TooScaryOutside:
	.string "What…\n"
	.string "What is happening?\p"
	.string "I really want to know, but it's too\n"
	.string "scary to go outside.$"

SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
	.string "Do you know FULL RESTORE?\p"
	.string "Full restoration of HP!\n"
	.string "Eradication of all status problems!\p"
	.string "It's truly an item of your dreams!$"

SootopolisCity_Mart_Text_DidSomethingAwaken:
	.string "This weather…\n"
	.string "Did something awaken?$"

SootopolisCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Mart_EventScript_Clerk2_2
	msgbox SootopolisCity_Mart_EventScript_Clerk2_Text_0
SootopolisCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart SootopolisCity_Mart_Pokemart_Clerk2
	goto SootopolisCity_Mart_EventScript_Clerk2_1


	.align 2
SootopolisCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_GENGARITE
	.2byte ITEM_MEDICHAMITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_STONE_PLATE
	.2byte ITEM_SPOOKY_PLATE
	.2byte ITEM_DREAD_PLATE
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_MAGNET
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_QUICK_POWDER
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_DRAGONIUM_Z
	.2byte ITEM_STEELIUM_Z
	.2byte ITEM_FAIRIUM_Z
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
