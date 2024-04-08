Auto_EventScript_Sample_Teams_Controls::
	msgbox Auto_EventScript_Sample_Teams_Controls_Text_0
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Page1_4
	goto Auto_EventScript_Sample_Teams_End
	return

Auto_EventScript_Sample_Teams_Page1_2:
	goto Auto_EventScript_Sample_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Page1_3:
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Page1_4:
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Standard_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Standard_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Standard_Page1_4
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Standard_Page1_2:
	goto Auto_EventScript_Sample_Teams_Standard_Mega_Page1
	return

Auto_EventScript_Sample_Teams_Standard_Page1_3:
	goto Auto_EventScript_Sample_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Standard_Page1_4:
	goto Auto_EventScript_Sample_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Teams_Standard_Mega_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Standard_Mega_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Standard_Mega_Page1_2
	case 1, Auto_EventScript_Sample_Teams_Standard_Mega_Page1_3
	case 2, Auto_EventScript_Sample_Teams_Standard_Mega_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Standard_Mega_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Standard_Mega_Page1_6
	goto Auto_EventScript_Sample_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Standard_Mega_Page1_2:
	givemon SPECIES_GARDEVOIR, 50, ITEM_GARDEVOIRITE, ITEM_PARK_BALL, NATURE_MODEST, 0, 1, 244, 0, 196, 36, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_GROUNDIUM_Z, ITEM_PARK_BALL, NATURE_ADAMANT, 0, 0, 44, 196, 4, 0, 68, 196, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 50, ITEM_ROCKY_HELMET, ITEM_PARK_BALL, NATURE_CALM, 1, 1, 172, 0, 252, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, FALSE, FALSE, FALSE
	givemon SPECIES_INCINEROAR, 50, ITEM_SITRUS_BERRY, ITEM_PARK_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 0, 204, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Standard_Mega_Page1_3:
	givemon SPECIES_METAGROSS, 50, ITEM_METAGROSSITE, ITEM_PARK_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 0, 4, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	givemon SPECIES_ZAPDOS, 50, ITEM_ELECTRIUM_Z, ITEM_PARK_BALL, NATURE_MODEST, 0, 0, 164, 0, 76, 196, 44, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, FALSE, FALSE, FALSE
	givemon SPECIES_TAPU_FINI, 50, ITEM_CHOICE_SPECS, ITEM_PARK_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 196, 4, 60, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_DAZZLING_GLEAM, MOVE_HAZE, FALSE, FALSE, FALSE
	givemon SPECIES_INCINEROAR, 50, ITEM_SITRUS_BERRY, ITEM_PARK_BALL, NATURE_ADAMANT, 1, 0, 236, 36, 4, 0, 204, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Standard_Mega_Page1_4:
	givemon SPECIES_SALAMENCE, 100, ITEM_SALAMENCITE, ITEM_PARK_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 244, 4, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DRACO_METEOR, FALSE, FALSE, FALSE
	givemon SPECIES_URSHIFU_RAPID_STRIKE_FORME, 100, ITEM_FOCUS_SASH, ITEM_PARK_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 0, 4, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
	givemon SPECIES_RILLABOOM, 50, ITEM_ASSAULT_VEST, ITEM_PARK_BALL, NATURE_ADAMANT, 1, 0, 172, 36, 4, 0, 228, 68, 31, 31, 31, 31, 31, 31, MOVE_UTURN, MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	givemon SPECIES_INCINEROAR, 50, ITEM_SITRUS_BERRY, ITEM_PARK_BALL, NATURE_ADAMANT, 1, 0, 236, 36, 4, 0, 204, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Standard_Mega_Page1_5:
	goto Auto_EventScript_Sample_Teams_Standard_Mega_Page1
	return

Auto_EventScript_Sample_Teams_Standard_Mega_Page1_6:
	goto Auto_EventScript_Sample_Teams_Standard_Mega_Page1
	return


Auto_EventScript_Sample_Teams_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Teams_Page1::
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Standard_Page1::
	.string "MEGA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Standard_Mega_Page1::
	.string "GARDEVOIR$"
	.string "METAGROSS$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"
