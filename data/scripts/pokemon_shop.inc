Common_EventScript_Pokemon_Shop::
	lock
	faceplayer
	msgbox Common_EventScript_Pokemon_Shop_Text_0
	goto Common_EventScript_Pokemon_Shop_CheckMoney
	return


Common_EventScript_Pokemon_Shop_CheckMoney::
	showmoneybox 18, 0
	checkmoney 4000
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckMoney_1
	msgbox Common_EventScript_Pokemon_Shop_CheckMoney_Text_1
	goto Auto_EventScript_Pokemon_Shop_End
	return

Common_EventScript_Pokemon_Shop_CheckMoney_1:
	msgbox Common_EventScript_Pokemon_Shop_CheckMoney_Text_0
	goto Common_EventScript_Pokemon_Shop_CheckGoldBottleCap
	return


Common_EventScript_Pokemon_Shop_CheckGoldBottleCap::
	checkitem ITEM_GOLD_BOTTLE_CAP
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_2
	setflag P_FLAG_FORCE_NO_SHINY
	clearflag P_FLAG_FORCE_SHINY
Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_1:
	msgbox Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_1
	goto Auto_EventScript_Pokemon_Shop_Controls
	return

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_2:
	msgbox Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_0
	yesnobox 0, 8
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_5
	setflag P_FLAG_FORCE_NO_SHINY
	clearflag P_FLAG_FORCE_SHINY
	goto Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_1

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_5:
	clearflag P_FLAG_FORCE_NO_SHINY
	setflag P_FLAG_FORCE_SHINY
	goto Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_1


Common_EventScript_Pokemon_Shop_CheckPurchase::
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_0
	switch VAR_RESULT
	case MON_GIVEN_TO_PARTY, Common_EventScript_Pokemon_Shop_CheckPurchase_3
	case MON_GIVEN_TO_PC, Common_EventScript_Pokemon_Shop_CheckPurchase_4
	case MON_CANT_GIVE, Common_EventScript_Pokemon_Shop_CheckPurchase_5
Common_EventScript_Pokemon_Shop_CheckPurchase_1:
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_6
	removemoney 4000
	updatemoneybox
	playse SE_SHOP
	waitse
	goto_if_set P_FLAG_FORCE_SHINY, Common_EventScript_Pokemon_Shop_CheckPurchase_7
Common_EventScript_Pokemon_Shop_CheckPurchase_6:
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_8
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_9
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckPurchase_10
Common_EventScript_Pokemon_Shop_CheckPurchase_9:
	goto Auto_EventScript_Pokemon_Shop_End
	return

Common_EventScript_Pokemon_Shop_CheckPurchase_3:
	playse SE_SUCCESS
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_1
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_2
	waitse
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_1

Common_EventScript_Pokemon_Shop_CheckPurchase_4:
	playse SE_SUCCESS
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_3
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_4
	waitse
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_1

Common_EventScript_Pokemon_Shop_CheckPurchase_5:
	playse SE_FAILURE
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_5
	waitse
	goto Auto_EventScript_Pokemon_Shop_End
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_1

Common_EventScript_Pokemon_Shop_CheckPurchase_7:
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_7
	removeitem ITEM_GOLD_BOTTLE_CAP, 1
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_6

Common_EventScript_Pokemon_Shop_CheckPurchase_10:
	goto Common_EventScript_Pokemon_Shop_CheckMoney
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_9


Auto_EventScript_Pokemon_Shop_End::
	msgbox Auto_EventScript_Pokemon_Shop_End_Text_0
	clearflag P_FLAG_FORCE_NO_SHINY
	clearflag P_FLAG_FORCE_SHINY
	hidemoneybox
	releaseall
	end


Common_EventScript_Pokemon_Shop_Text_0:
	.string "Hello there! I'm the POKéMON breeder!$"

Common_EventScript_Pokemon_Shop_CheckMoney_Text_0:
	.string "All Pokemon cost a mere ¥4000.$"

Common_EventScript_Pokemon_Shop_CheckMoney_Text_1:
	.string "Oh, sorry! You need at least ¥4000 to\n"
	.string "buy anything here!$"

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_0:
	.string "Oh, you have a gold bottle cap! Would\n"
	.string "you redeem it for a shiny Pokemon?$"

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_1:
	.string "What are you looking for today?$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_0:
	.string "Sure! Let's see if I can get one of\n"
	.string "those for you ...$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_1:
	.string "Here you go!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_2:
	.string "The POKéMON has been added to your\n"
	.string "party.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_3:
	.string "All done!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_4:
	.string "The POKéMON has been sent to your PC\n"
	.string "boxes.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_5:
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_6:
	.string "I'll take your payment now, please.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_7:
	.string "You also gave a Gold Bottle Cap in\n"
	.string "exchange.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_8:
	.string "Thanks for your business!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_9:
	.string "Can we help you with anything else?$"

Auto_EventScript_Pokemon_Shop_End_Text_0:
	.string "Come back again soon!$"
