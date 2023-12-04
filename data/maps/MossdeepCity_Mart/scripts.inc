MossdeepCity_Mart_MapScripts::
	.byte 0

MossdeepCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Mart_EventScript_Woman::
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Boy::
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Sailor::
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
	end

MossdeepCity_Mart_Text_ReviveIsFantastic:
	.string "REVIVE is fantastic!\p"
	.string "Give it to a fainted POKéMON,\n"
	.string "and the POKéMON will arise.\p"
	.string "But be careful, REVIVE doesn't restore\n"
	.string "the used-up PP of moves.$"

MossdeepCity_Mart_Text_MaxRepelLastsLongest:
	.string "MAX REPEL keeps all weak POKéMON away.\p"
	.string "Out of all the REPEL sprays, it lasts\n"
	.string "the longest.$"

MossdeepCity_Mart_Text_NetAndDiveBallsRare:
	.string "The NET and DIVE BALLS are rare POKé\n"
	.string "BALLS that are only made in MOSSDEEP.\p"
	.string "A NET BALL is effective against\n"
	.string "BUG-type and WATER-type POKéMON.\p"
	.string "A DIVE BALL works best on POKéMON\n"
	.string "at the bottom of the sea.$"

MossdeepCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE06_GET, MossdeepCity_Mart_EventScript_Clerk2_2
	msgbox MossdeepCity_Mart_EventScript_Clerk2_Text_0
MossdeepCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart MossdeepCity_Mart_Pokemart_Clerk2
	goto MossdeepCity_Mart_EventScript_Clerk2_1


	.align 2
MossdeepCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_DECIDIUM_Z
	.2byte ITEM_INCINIUM_Z
	.2byte ITEM_PRIMARIUM_Z
	.2byte ITEM_AERODACTYLITE
	.2byte ITEM_HOUNDOOMINITE
	.2byte ITEM_MEDICHAMITE
	.2byte ITEM_ABSOLITE
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_ADRENALINE_ORB
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_PEAT_BLOCK
	.2byte ITEM_METRONOME
	.2byte ITEM_ELECTRIC_SEED
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_GRASSY_SEED
	.2byte ITEM_MISTY_SEED
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_SNOWBALL
	.2byte ITEM_NONE

MossdeepCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
