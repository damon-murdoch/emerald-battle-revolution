Auto_EventScript_Sample_Sets_Controls::
	msgbox Auto_EventScript_Sample_Sets_Controls_Text_0
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page1_4
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page1_2:
	goto Auto_EventScript_Sample_Sets_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Page1_3:
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Page1_4:
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Standard_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Standard_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Standard_Page1_4
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Standard_Page1_2:
	goto Auto_EventScript_Sample_Sets_Standard_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Standard_Page1_3:
	goto Auto_EventScript_Sample_Sets_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Standard_Page1_4:
	goto Auto_EventScript_Sample_Sets_Standard_Page1
	return


Auto_EventScript_Sample_Sets_Standard_Mega_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Standard_Mega_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Standard_Mega_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Standard_Mega_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Standard_Mega_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Standard_Mega_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Standard_Mega_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Standard_Mega_Page1_7
	goto Auto_EventScript_Sample_Sets_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Standard_Mega_Page1_2:
	givemon SPECIES_GARDEVOIR, 50, ITEM_GARDEVOIRITE, ITEM_PARK_BALL, NATURE_MODEST, 0, 1, 244, 0, 196, 36, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Standard_Mega_Page1_3:
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_GROUNDIUM_Z, ITEM_PARK_BALL, NATURE_ADAMANT, 0, 0, 44, 196, 4, 0, 68, 196, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Standard_Mega_Page1_4:
	givemon SPECIES_AMOONGUSS, 50, ITEM_ROCKY_HELMET, ITEM_PARK_BALL, NATURE_CALM, 1, 0, 172, 0, 252, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_POLLEN_PUFF, MOVE_RAGE_POWDER, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Standard_Mega_Page1_5:
	givemon SPECIES_INCINEROAR, 50, ITEM_SITRUS_BERRY, ITEM_PARK_BALL, NATURE_ADAMANT, 1, 0, 236, 36, 4, 0, 204, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Standard_Mega_Page1_6:
	goto Auto_EventScript_Sample_Sets_Standard_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Standard_Mega_Page1_7:
	goto Auto_EventScript_Sample_Sets_Standard_Mega_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Sets_Page1::
	.string "standard$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Standard_Page1::
	.string "mega$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Standard_Mega_Page1::
	.string "gardevoir-mega$"
	.string "landorus-therian$"
	.string "amoonguss$"
	.string "incineroar$"
	.string "Go Back$"
	.string "$"
