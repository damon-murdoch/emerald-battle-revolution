Common_EventScript_Sample_Team_Shop::
	lock
	faceplayer
	msgbox Common_EventScript_Sample_Team_Shop_Text_0
	msgbox Common_EventScript_Sample_Team_Shop_Text_1
	goto Common_EventScript_Sample_Team_CheckMoney
	return


Common_EventScript_Sample_Team_CheckMoney::
	showmoneybox 18, 0
	checkmoney 60000
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Sample_Team_CheckMoney_1
	msgbox Common_EventScript_Sample_Team_CheckMoney_Text_1
	goto Auto_EventScript_Sample_Teams_End
	return

Common_EventScript_Sample_Team_CheckMoney_1:
	msgbox Common_EventScript_Sample_Team_CheckMoney_Text_0
	goto Auto_EventScript_Sample_Teams_Controls
	return


Common_EventScript_Sample_Team_CheckPurchase::
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_0
	switch VAR_RESULT
	case MON_GIVEN_TO_PARTY, Common_EventScript_Sample_Team_CheckPurchase_3
	case MON_GIVEN_TO_PC, Common_EventScript_Sample_Team_CheckPurchase_4
	case MON_CANT_GIVE, Common_EventScript_Sample_Team_CheckPurchase_5
Common_EventScript_Sample_Team_CheckPurchase_1:
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_6
	removemoney 60000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_7
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_8
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_Sample_Team_CheckPurchase_7
Common_EventScript_Sample_Team_CheckPurchase_6:
	goto Auto_EventScript_Sample_Teams_End
	return

Common_EventScript_Sample_Team_CheckPurchase_3:
	playse SE_SUCCESS
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_1
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_2
	waitse
	goto Common_EventScript_Sample_Team_CheckPurchase_1

Common_EventScript_Sample_Team_CheckPurchase_4:
	playse SE_SUCCESS
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_3
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_4
	waitse
	goto Common_EventScript_Sample_Team_CheckPurchase_1

Common_EventScript_Sample_Team_CheckPurchase_5:
	playse SE_FAILURE
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_5
	waitse
	goto Auto_EventScript_Sample_Teams_End
	goto Common_EventScript_Sample_Team_CheckPurchase_1

Common_EventScript_Sample_Team_CheckPurchase_7:
	goto Common_EventScript_Sample_Team_CheckMoney
	goto Common_EventScript_Sample_Team_CheckPurchase_6


Auto_EventScript_Sample_Teams_End::
	msgbox Auto_EventScript_Sample_Teams_End_Text_0
	hidemoneybox
	releaseall
	end


Common_EventScript_Sample_Team_Shop_Text_0:
	.string "Hello and welcome to the Battle Team\n"
	.string "Shop!$"

Common_EventScript_Sample_Team_Shop_Text_1:
	.string "You can buy pre-made teams here for\n"
	.string "many different formats and playstyles!$"

Common_EventScript_Sample_Team_CheckMoney_Text_0:
	.string "All teams cost a mere ¥60000. What\n"
	.string "would you like?$"

Common_EventScript_Sample_Team_CheckMoney_Text_1:
	.string "Oh, sorry! You need at least ¥60000 to\n"
	.string "buy anything here!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_0:
	.string "Sure! Let's see if I can handle that for\n"
	.string "you ...$"

Common_EventScript_Sample_Team_CheckPurchase_Text_1:
	.string "Here you go!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_2:
	.string "The POKéMON have been added to your\n"
	.string "party.$"

Common_EventScript_Sample_Team_CheckPurchase_Text_3:
	.string "All done!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_4:
	.string "The POKéMON have been sent to your PC\n"
	.string "boxes.$"

Common_EventScript_Sample_Team_CheckPurchase_Text_5:
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_6:
	.string "I'll take your payment now, please.$"

Common_EventScript_Sample_Team_CheckPurchase_Text_7:
	.string "Thanks for your business!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_8:
	.string "Can we help you with anything else?$"

Auto_EventScript_Sample_Teams_End_Text_0:
	.string "Come back again soon!$"
