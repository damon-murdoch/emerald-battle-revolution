TeamShopCommon_EventScript_TeamShop::
	lock
	faceplayer
	msgbox TeamShopCommon_EventScript_TeamShop_Text_0
	goto TeamShopCommon_EventScript_TeamShopCheckMoney
	return


TeamShopCommon_EventScript_TeamShopCheckMoney::
	showmoneybox 18, 0
	checkmoney 30000
	compare VAR_RESULT, TRUE
	goto_if_eq TeamShopCommon_EventScript_TeamShopCheckMoney_1
	msgbox TeamShopCommon_EventScript_TeamShopCheckMoney_Text_0
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopCheckMoney_1:
	goto TeamShopCommon_EventScript_TeamShopShowControls
	return


TeamShopCommon_EventScript_TeamShopShowControls::
	msgbox TeamShopCommon_EventScript_TeamShopShowControls_Text_0
	msgbox TeamShopCommon_EventScript_TeamShopShowControls_Text_1
	goto TeamShopCommon_EventScript_TeamShopFormatsPage1
	return


TeamShopCommon_EventScript_TeamShopFormatsPage1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopFormatsPage1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopFormatsPage1_2
	case 1, TeamShopCommon_EventScript_TeamShopFormatsPage1_3
	case 2, TeamShopCommon_EventScript_TeamShopFormatsPage1_4
	case 3, TeamShopCommon_EventScript_TeamShopFormatsPage1_5
	case 4, TeamShopCommon_EventScript_TeamShopFormatsPage1_6
	case 5, TeamShopCommon_EventScript_TeamShopFormatsPage1_7
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopFormatsPage1_8
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopFormatsPage1_9
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_3:
	goto TeamShopCommon_EventScript_TeamShopDoubles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_4:
	goto TeamShopCommon_EventScript_TeamShopDoubles4v4Page1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_5:
	goto TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_6:
	goto TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_7:
	goto TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_8:
	goto TeamShopCommon_EventScript_TeamShopFormatsPage1
	return

TeamShopCommon_EventScript_TeamShopFormatsPage1_9:
	goto TeamShopCommon_EventScript_TeamShopFormatsPage1
	return


TeamShopCommon_EventScript_TeamShopSingles3v3Page1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopSingles3v3Page1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopSingles3v3Page1_2
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopSingles3v3Page1_3
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopSingles3v3Page1_4
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopSingles3v3Page1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopSingles3v3Page1_3:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopSingles3v3Page1_4:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return


TeamShopCommon_EventScript_TeamShopDoubles3v3Page1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopSingles3v3Page1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopDoubles3v3Page1_2
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopDoubles3v3Page1_3
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopDoubles3v3Page1_4
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopDoubles3v3Page1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopDoubles3v3Page1_3:
	goto TeamShopCommon_EventScript_TeamShopDoubles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopDoubles3v3Page1_4:
	goto TeamShopCommon_EventScript_TeamShopDoubles3v3Page1
	return


TeamShopCommon_EventScript_TeamShopDoubles4v4Page1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopDoubles4v4Page1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopDoubles4v4Page1_2
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopDoubles4v4Page1_3
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopDoubles4v4Page1_4
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopDoubles4v4Page1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopDoubles4v4Page1_3:
	goto TeamShopCommon_EventScript_TeamShopDoubles4v4Page1
	return

TeamShopCommon_EventScript_TeamShopDoubles4v4Page1_4:
	goto TeamShopCommon_EventScript_TeamShopDoubles4v4Page1
	return


TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopSinglesOpen3v3Page1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1_2
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1_3
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1_4
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1_3:
	goto TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1
	return

TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1_4:
	goto TeamShopCommon_EventScript_TeamShopSinglesOpen3v3Page1
	return


TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopDoublesOpen3v3Page1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1_2
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1_3
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1_4
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1_3:
	goto TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1
	return

TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1_4:
	goto TeamShopCommon_EventScript_TeamShopDoublesOpen3v3Page1
	return


TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1::
	multichoice2 0, 0, TeamShopCommon_Text_TeamShopDoublesOpen4v4Page1
	switch VAR_RESULT
	case 0, TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1_2
	case MULTI_L_PRESSED, TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1_3
	case MULTI_R_PRESSED, TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1_4
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1_2:
	goto TeamShopCommon_EventScript_TeamShopSingles3v3Page1
	return

TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1_3:
	goto TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1
	return

TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1_4:
	goto TeamShopCommon_EventScript_TeamShopDoublesOpen4v4Page1
	return


TeamShopCommon_EventScript_TeamShopCheckPurchase::
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_0
	switch VAR_RESULT
	case MON_GIVEN_TO_PARTY, TeamShopCommon_EventScript_TeamShopCheckPurchase_3
	case MON_GIVEN_TO_PC, TeamShopCommon_EventScript_TeamShopCheckPurchase_4
	case MON_CANT_GIVE, TeamShopCommon_EventScript_TeamShopCheckPurchase_5
TeamShopCommon_EventScript_TeamShopCheckPurchase_1:
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_6
	removemoney 30000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_7
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_8
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq TeamShopCommon_EventScript_TeamShopCheckPurchase_7
TeamShopCommon_EventScript_TeamShopCheckPurchase_6:
	goto TeamShopCommon_EventScript_TeamShopEnd
	return

TeamShopCommon_EventScript_TeamShopCheckPurchase_3:
	playse SE_SUCCESS
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_1
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_2
	waitse
	goto TeamShopCommon_EventScript_TeamShopCheckPurchase_1

TeamShopCommon_EventScript_TeamShopCheckPurchase_4:
	playse SE_SUCCESS
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_3
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_4
	waitse
	goto TeamShopCommon_EventScript_TeamShopCheckPurchase_1

TeamShopCommon_EventScript_TeamShopCheckPurchase_5:
	playse SE_FAILURE
	msgbox TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_5
	waitse
	goto TeamShopCommon_EventScript_TeamShopEnd
	goto TeamShopCommon_EventScript_TeamShopCheckPurchase_1

TeamShopCommon_EventScript_TeamShopCheckPurchase_7:
	goto TeamShopCommon_EventScript_TeamShopCheckMoney
	goto TeamShopCommon_EventScript_TeamShopCheckPurchase_6


TeamShopCommon_EventScript_TeamShopEnd::
	msgbox TeamShopCommon_EventScript_TeamShopEnd_Text_0
	hidemoneybox
	releaseall
	end


TeamShopCommon_EventScript_TeamShop_Text_0:
	.string "Hello and welcome to the Sample Team\n"
	.string "Shop!$"

TeamShopCommon_EventScript_TeamShopCheckMoney_Text_0:
	.string "Oh, sorry! You need at least ¥30000 to\n"
	.string "buy anything here!$"

TeamShopCommon_EventScript_TeamShopShowControls_Text_0:
	.string "What are you looking for today?$"

TeamShopCommon_EventScript_TeamShopShowControls_Text_1:
	.string "L: Previous Page                    R: Next Page\nB: Go Back$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_0:
	.string "Sure! Let's see if I can handle that for\n"
	.string "you ...$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_1:
	.string "Here you go!$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_2:
	.string "The POKéMON have been added to your\n"
	.string "party.$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_3:
	.string "All done!$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_4:
	.string "The POKéMON have been sent to your PC\n"
	.string "boxes.$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_5:
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_6:
	.string "I'll take your payment now, please.$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_7:
	.string "Thanks for your business!$"

TeamShopCommon_EventScript_TeamShopCheckPurchase_Text_8:
	.string "Can we help you with anything else?$"

TeamShopCommon_EventScript_TeamShopEnd_Text_0:
	.string "Come back again soon!$"

TeamShopCommon_Text_TeamShopFormatsPage1::
	.string "SINGLES (3v3)$"
	.string "DOUBLES (3v3)$"
	.string "DOUBLES (4v4)$"
	.string "SINGLES (OPEN) (3v3)$"
	.string "DOUBLES (OPEN) (3v3)$"
	.string "DOUBLES (OPEN) (4v4)$"
	.string "$"

TeamShopCommon_Text_TeamShopSingles3v3Page1::
	.string "None Available$"
	.string "$"

TeamShopCommon_Text_TeamShopDoubles3v3Page1::
	.string "None Available$"
	.string "$"

TeamShopCommon_Text_TeamShopDoubles4v4Page1::
	.string "None Available$"
	.string "$"

TeamShopCommon_Text_TeamShopSinglesOpen3v3Page1::
	.string "None Available$"
	.string "$"

TeamShopCommon_Text_TeamShopDoublesOpen3v3Page1::
	.string "None Available$"
	.string "$"

TeamShopCommon_Text_TeamShopDoublesOpen4v4Page1::
	.string "None Available$"
	.string "$"
