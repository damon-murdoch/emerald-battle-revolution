Auto_EventScript_Legendary_Shop_Controls::
	msgbox Auto_EventScript_Legendary_Shop_Controls_Text_0
	goto Auto_EventScript_Legendary_Shop_Page1
	return


Auto_EventScript_Legendary_Shop_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page1_8
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page1_2:
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_3:
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_4:
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Page2
	return


Auto_EventScript_Legendary_Shop_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Page2_3
	case 2, Auto_EventScript_Legendary_Shop_Page2_4
	case 3, Auto_EventScript_Legendary_Shop_Page2_5
	case 4, Auto_EventScript_Legendary_Shop_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page2_8
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page2_2:
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_3:
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_4:
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_5:
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_6:
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_7:
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_8:
	goto Auto_EventScript_Legendary_Shop_Page3
	return


Auto_EventScript_Legendary_Shop_Page3::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page3
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Page3_2
	case 1, Auto_EventScript_Legendary_Shop_Page3_3
	case 2, Auto_EventScript_Legendary_Shop_Page3_4
	case 3, Auto_EventScript_Legendary_Shop_Page3_5
	case 4, Auto_EventScript_Legendary_Shop_Page3_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page3_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page3_8
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page3_2:
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_3:
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_4:
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_5:
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_6:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_7:
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Page3_8:
	goto Auto_EventScript_Legendary_Shop_Page4
	return


Auto_EventScript_Legendary_Shop_Page4::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page4
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Page4_2
	case 1, Auto_EventScript_Legendary_Shop_Page4_3
	case 2, Auto_EventScript_Legendary_Shop_Page4_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page4_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page4_6
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page4_2:
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_3:
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_4:
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_5:
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Page4_6:
	goto Auto_EventScript_Legendary_Shop_Page1
	return


Auto_EventScript_Legendary_Shop_Rock_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Rock_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Rock_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Rock_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Rock_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Rock_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Rock_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Rock_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Rock_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_2:
	givemon SPECIES_DIANCIE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_3:
	givemon SPECIES_NIHILEGO, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_4:
	givemon SPECIES_REGIROCK, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_5:
	givemon SPECIES_STAKATAKA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_6:
	givemon SPECIES_TERRAKION, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return


Auto_EventScript_Legendary_Shop_Steel_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Steel_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Steel_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Steel_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Steel_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_2:
	givemon SPECIES_CELESTEELA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_3:
	givemon SPECIES_COBALION, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_4:
	givemon SPECIES_DIALGA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_5:
	givemon SPECIES_JIRACHI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_6:
	givemon SPECIES_MAGEARNA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Steel_Page2
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Steel_Page2
	return


Auto_EventScript_Legendary_Shop_Steel_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Steel_Page2_3
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page2_4
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page2_5
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_2:
	givemon SPECIES_MELMETAL, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_3:
	givemon SPECIES_REGISTEEL, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_4:
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_5:
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return


Auto_EventScript_Legendary_Shop_Water_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Water_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Water_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Water_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Water_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Water_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Water_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Water_Page1_2:
	givemon SPECIES_KELDEO, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_3:
	givemon SPECIES_KYOGRE, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_4:
	givemon SPECIES_MANAPHY, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_5:
	givemon SPECIES_PALKIA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_6:
	givemon SPECIES_PHIONE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Water_Page2
	return

Auto_EventScript_Legendary_Shop_Water_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Water_Page2
	return


Auto_EventScript_Legendary_Shop_Water_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Water_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Water_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Water_Page2_3
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page2_4
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page2_5
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Water_Page2_2:
	givemon SPECIES_SUICUNE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_3:
	givemon SPECIES_TAPU_FINI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_4:
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return

Auto_EventScript_Legendary_Shop_Water_Page2_5:
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return


Auto_EventScript_Legendary_Shop_Ground_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ground_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Ground_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Ground_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ground_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ground_Page1_5
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_2:
	givemon SPECIES_GROUDON, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_3:
	givemon SPECIES_LANDORUS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_4:
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return


Auto_EventScript_Legendary_Shop_Ice_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ice_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Ice_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Ice_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Ice_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ice_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ice_Page1_6
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_2:
	givemon SPECIES_ARTICUNO, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_3:
	givemon SPECIES_GLASTRIER, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_4:
	givemon SPECIES_REGICE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return


Auto_EventScript_Legendary_Shop_Normal_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Normal_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Normal_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Normal_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Normal_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Normal_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Normal_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Normal_Page1_7
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_2:
	givemon SPECIES_ARCEUS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_3:
	givemon SPECIES_MELOETTA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_4:
	givemon SPECIES_REGIGIGAS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_5:
	givemon SPECIES_TYPE_NULL, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return


Auto_EventScript_Legendary_Shop_Poison_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Poison_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Poison_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Poison_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Poison_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Poison_Page1_5
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_2:
	givemon SPECIES_ETERNATUS, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_3:
	givemon SPECIES_POIPOLE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_4:
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return


Auto_EventScript_Legendary_Shop_Psychic_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_2:
	givemon SPECIES_AZELF, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_3:
	givemon SPECIES_CALYREX, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_4:
	givemon SPECIES_CELEBI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_5:
	givemon SPECIES_CRESSELIA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_6:
	givemon SPECIES_DEOXYS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page2
	return


Auto_EventScript_Legendary_Shop_Psychic_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page2_3
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page2_4
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page2_5
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page2_8
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_2:
	givemon SPECIES_HOOPA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_3:
	givemon SPECIES_LUGIA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_4:
	givemon SPECIES_MESPRIT, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_5:
	givemon SPECIES_MEW, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_6:
	givemon SPECIES_MEWTWO, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_7:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_8:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page3
	return


Auto_EventScript_Legendary_Shop_Psychic_Page3::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page3
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page3_2
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page3_3
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page3_4
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page3_5
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page3_6
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page3_7
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_2:
	givemon SPECIES_NECROZMA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_3:
	givemon SPECIES_TAPU_LELE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_4:
	givemon SPECIES_UXIE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_5:
	givemon SPECIES_VICTINI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_6:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page2
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_7:
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return


Auto_EventScript_Legendary_Shop_Fighting_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fighting_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Fighting_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Fighting_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Fighting_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Fighting_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page1_7
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_2:
	givemon SPECIES_KORAIDON, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_3:
	givemon SPECIES_KUBFU, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_4:
	givemon SPECIES_MARSHADOW, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_5:
	givemon SPECIES_ZAMAZENTA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return


Auto_EventScript_Legendary_Shop_Fire_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fire_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Fire_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Fire_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Fire_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Fire_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Fire_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_2:
	givemon SPECIES_BLACEPHALON, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_3:
	givemon SPECIES_ENTEI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_4:
	givemon SPECIES_HEATRAN, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_5:
	givemon SPECIES_HO_OH, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_6:
	givemon SPECIES_MOLTRES, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Fire_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Fire_Page2
	return


Auto_EventScript_Legendary_Shop_Fire_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fire_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Fire_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page2_4
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_2:
	givemon SPECIES_VOLCANION, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_3:
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_4:
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return


Auto_EventScript_Legendary_Shop_Flying_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page1_4
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_2:
	givemon SPECIES_TORNADUS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_3:
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_4:
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return


Auto_EventScript_Legendary_Shop_Ghost_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ghost_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Ghost_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Ghost_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page1_5
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_2:
	givemon SPECIES_GIRATINA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_3:
	givemon SPECIES_SPECTRIER, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_4:
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return


Auto_EventScript_Legendary_Shop_Grass_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Grass_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Grass_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Grass_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Grass_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Grass_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page1_7
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_2:
	givemon SPECIES_KARTANA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_3:
	givemon SPECIES_SHAYMIN, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_4:
	givemon SPECIES_TAPU_BULU, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_5:
	givemon SPECIES_VIRIZION, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return


Auto_EventScript_Legendary_Shop_Bug_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Bug_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Bug_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Bug_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Bug_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Bug_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Bug_Page1_6
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_2:
	givemon SPECIES_BUZZWOLE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_3:
	givemon SPECIES_GENESECT, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_4:
	givemon SPECIES_PHEROMOSA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return


Auto_EventScript_Legendary_Shop_Dark_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dark_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Dark_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Dark_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Dark_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Dark_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Dark_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_2:
	givemon SPECIES_CHI_YU, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_3:
	givemon SPECIES_CHIEN_PAO, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_4:
	givemon SPECIES_DARKRAI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_5:
	givemon SPECIES_GUZZLORD, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_6:
	givemon SPECIES_TING_LU, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Dark_Page2
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Dark_Page2
	return


Auto_EventScript_Legendary_Shop_Dark_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dark_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Dark_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Dark_Page2_3
	case 2, Auto_EventScript_Legendary_Shop_Dark_Page2_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page2_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page2_6
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_2:
	givemon SPECIES_WO_CHIEN, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_3:
	givemon SPECIES_YVELTAL, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_4:
	givemon SPECIES_ZARUDE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_5:
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_6:
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return


Auto_EventScript_Legendary_Shop_Dragon_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Dragon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_2:
	givemon SPECIES_KYUREM, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_3:
	givemon SPECIES_LATIAS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_4:
	givemon SPECIES_LATIOS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_5:
	givemon SPECIES_RAYQUAZA, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_6:
	givemon SPECIES_REGIDRAGO, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Dragon_Page2
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Dragon_Page2
	return


Auto_EventScript_Legendary_Shop_Dragon_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page2_3
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page2_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page2_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page2_6
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_2:
	givemon SPECIES_RESHIRAM, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_3:
	givemon SPECIES_ZEKROM, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_4:
	givemon SPECIES_ZYGARDE, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_5:
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_6:
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return


Auto_EventScript_Legendary_Shop_Electric_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Electric_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Electric_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Electric_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Electric_Page1_4
	case 3, Auto_EventScript_Legendary_Shop_Electric_Page1_5
	case 4, Auto_EventScript_Legendary_Shop_Electric_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page1_8
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_2:
	givemon SPECIES_MIRAIDON, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_3:
	givemon SPECIES_RAIKOU, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_4:
	givemon SPECIES_REGIELEKI, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_5:
	givemon SPECIES_TAPU_KOKO, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_6:
	givemon SPECIES_THUNDURUS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_7:
	goto Auto_EventScript_Legendary_Shop_Electric_Page2
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_8:
	goto Auto_EventScript_Legendary_Shop_Electric_Page2
	return


Auto_EventScript_Legendary_Shop_Electric_Page2::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Electric_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Electric_Page2_2
	case 1, Auto_EventScript_Legendary_Shop_Electric_Page2_3
	case 2, Auto_EventScript_Legendary_Shop_Electric_Page2_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page2_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page2_6
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_2:
	givemon SPECIES_XURKITREE, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_3:
	givemon SPECIES_ZAPDOS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_4:
	givemon SPECIES_ZERAORA, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_5:
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_6:
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return


Auto_EventScript_Legendary_Shop_Fairy_Page1::
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fairy_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Legendary_Shop_Fairy_Page1_2
	case 1, Auto_EventScript_Legendary_Shop_Fairy_Page1_3
	case 2, Auto_EventScript_Legendary_Shop_Fairy_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page1_6
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_2:
	givemon SPECIES_ENAMORUS, 50
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_3:
	givemon SPECIES_XERNEAS, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_4:
	givemon SPECIES_ZACIAN, 70
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_5:
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_6:
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return


Auto_EventScript_Legendary_Shop_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Legendary_Shop_Page1::
	.string "BUG$"
	.string "DARK$"
	.string "DRAGON$"
	.string "ELECTRIC$"
	.string "FAIRY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page2::
	.string "FIGHTING$"
	.string "FIRE$"
	.string "FLYING$"
	.string "GHOST$"
	.string "GRASS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page3::
	.string "GROUND$"
	.string "ICE$"
	.string "NORMAL$"
	.string "POISON$"
	.string "PSYCHIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page4::
	.string "ROCK$"
	.string "STEEL$"
	.string "WATER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Rock_Page1::
	.string "DIANCIE$"
	.string "NIHILEGO$"
	.string "REGIROCK$"
	.string "STAKATAKA$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page1::
	.string "CELESTEELA$"
	.string "COBALION$"
	.string "DIALGA$"
	.string "JIRACHI$"
	.string "MAGEARNA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page2::
	.string "MELMETAL$"
	.string "REGISTEEL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Water_Page1::
	.string "KELDEO$"
	.string "KYOGRE$"
	.string "MANAPHY$"
	.string "PALKIA$"
	.string "PHIONE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Water_Page2::
	.string "SUICUNE$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ground_Page1::
	.string "GROUDON$"
	.string "LANDORUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ice_Page1::
	.string "ARTICUNO$"
	.string "GLASTRIER$"
	.string "REGICE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Normal_Page1::
	.string "ARCEUS$"
	.string "MELOETTA$"
	.string "REGIGIGAS$"
	.string "TYPE: NULL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Poison_Page1::
	.string "ETERNATUS$"
	.string "POIPOLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page1::
	.string "AZELF$"
	.string "CALYREX$"
	.string "CELEBI$"
	.string "CRESSELIA$"
	.string "DEOXYS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page2::
	.string "HOOPA$"
	.string "LUGIA$"
	.string "MESPRIT$"
	.string "MEW$"
	.string "MEWTWO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page3::
	.string "NECROZMA$"
	.string "TAPU LELE$"
	.string "UXIE$"
	.string "VICTINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fighting_Page1::
	.string "KORAIDON$"
	.string "KUBFU$"
	.string "MARSHADOW$"
	.string "ZAMAZENTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fire_Page1::
	.string "BLACEPHALON$"
	.string "ENTEI$"
	.string "HEATRAN$"
	.string "HO-OH$"
	.string "MOLTRES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fire_Page2::
	.string "VOLCANION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page1::
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ghost_Page1::
	.string "GIRATINA$"
	.string "SPECTRIER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Grass_Page1::
	.string "KARTANA$"
	.string "SHAYMIN$"
	.string "TAPU BULU$"
	.string "VIRIZION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Bug_Page1::
	.string "BUZZWOLE$"
	.string "GENESECT$"
	.string "PHEROMOSA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dark_Page1::
	.string "CHI-YU$"
	.string "CHIEN-PAO$"
	.string "DARKRAI$"
	.string "GUZZLORD$"
	.string "TING-LU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dark_Page2::
	.string "WO-CHIEN$"
	.string "YVELTAL$"
	.string "ZARUDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page1::
	.string "KYUREM$"
	.string "LATIAS$"
	.string "LATIOS$"
	.string "RAYQUAZA$"
	.string "REGIDRAGO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page2::
	.string "RESHIRAM$"
	.string "ZEKROM$"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Electric_Page1::
	.string "MIRAIDON$"
	.string "RAIKOU$"
	.string "REGIELEKI$"
	.string "TAPU KOKO$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Electric_Page2::
	.string "XURKITREE$"
	.string "ZAPDOS$"
	.string "ZERAORA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fairy_Page1::
	.string "ENAMORUS$"
	.string "XERNEAS$"
	.string "ZACIAN$"
	.string "Go Back$"
	.string "$"
