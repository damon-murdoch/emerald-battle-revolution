Common_Eventscript_Sample_Sets_Shop::
	lock
	faceplayer
	msgbox Common_Eventscript_Sample_Sets_Shop_Text_0
	goto Common_Eventscript_Sample_Sets_ShopCheckMoney
	return


Common_Eventscript_Sample_Sets_ShopCheckMoney::
	showmoneybox 18, 0
	checkmoney 15000
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Eventscript_Sample_Sets_ShopCheckMoney_1
	msgbox Common_Eventscript_Sample_Sets_ShopCheckMoney_Text_0
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_Eventscript_Sample_Sets_ShopCheckMoney_1:
	goto Common_EventScript_Sample_Sets_Shop_Controls
	return


Common_EventScript_Sample_Sets_Shop_Controls::
	msgbox Common_EventScript_Sample_Sets_Shop_Controls_Text_0
	goto Common_EventScript_Sample_Sets_Shop_Page1
	return


Common_Eventscript_Sample_Sets_ShopCheckPurchase::
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_0
	switch VAR_RESULT
	case MON_GIVEN_TO_PARTY, Common_Eventscript_Sample_Sets_ShopCheckPurchase_3
	case MON_GIVEN_TO_PC, Common_Eventscript_Sample_Sets_ShopCheckPurchase_4
	case MON_CANT_GIVE, Common_Eventscript_Sample_Sets_ShopCheckPurchase_5
Common_Eventscript_Sample_Sets_ShopCheckPurchase_1:
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_6
	removemoney 15000
	updatemoneybox
	playse SE_SHOP
	waitse
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_7
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_8
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq Common_Eventscript_Sample_Sets_ShopCheckPurchase_7
Common_Eventscript_Sample_Sets_ShopCheckPurchase_6:
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_Eventscript_Sample_Sets_ShopCheckPurchase_3:
	playse SE_SUCCESS
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_1
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_2
	waitse
	goto Common_Eventscript_Sample_Sets_ShopCheckPurchase_1

Common_Eventscript_Sample_Sets_ShopCheckPurchase_4:
	playse SE_SUCCESS
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_3
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_4
	waitse
	goto Common_Eventscript_Sample_Sets_ShopCheckPurchase_1

Common_Eventscript_Sample_Sets_ShopCheckPurchase_5:
	playse SE_FAILURE
	msgbox Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_5
	waitse
	goto Common_EventScript_Sample_Sets_Shop_End
	goto Common_Eventscript_Sample_Sets_ShopCheckPurchase_1

Common_Eventscript_Sample_Sets_ShopCheckPurchase_7:
	goto Common_Eventscript_Sample_Sets_ShopCheckMoney
	goto Common_Eventscript_Sample_Sets_ShopCheckPurchase_6


Common_EventScript_Sample_Sets_Shop_End::
	msgbox Common_EventScript_Sample_Sets_Shop_End_Text_0
	hidemoneybox
	releaseall
	end


Common_EventScript_Sample_Sets_Shop_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Page1
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Page1_2
	case 1, Common_EventScript_Sample_Sets_Shop_Page1_3
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Page1_4
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Page1_5
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_EventScript_Sample_Sets_Shop_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Page1_4:
	goto Common_EventScript_Sample_Sets_Shop_Page1
	return

Common_EventScript_Sample_Sets_Shop_Page1_5:
	goto Common_EventScript_Sample_Sets_Shop_Page1
	return


Common_EventScript_Sample_Sets_Shop_Singles_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Singles_Page1
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Singles_Page1_2
	case 1, Common_EventScript_Sample_Sets_Shop_Singles_Page1_3
	case 2, Common_EventScript_Sample_Sets_Shop_Singles_Page1_4
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Page1_5
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Page1_6
	goto Common_EventScript_Sample_Sets_Shop_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Page1_4:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Page1_5:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Page1_6:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Page1
	return


Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Singles_Mega_Page1
	switch VAR_RESULT
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1_2
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1_3
	goto Common_EventScript_Sample_Sets_Shop_Singles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Mega_Page1
	return


Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Singles_Standard_Page1
	switch VAR_RESULT
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1_2
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1_3
	goto Common_EventScript_Sample_Sets_Shop_Singles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Standard_Page1
	return


Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Singles_Restricted_Page1
	switch VAR_RESULT
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1_2
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1_3
	goto Common_EventScript_Sample_Sets_Shop_Singles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1
	return

Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Singles_Restricted_Page1
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Page1
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Page1_2
	case 1, Common_EventScript_Sample_Sets_Shop_Doubles_Page1_3
	case 2, Common_EventScript_Sample_Sets_Shop_Doubles_Page1_4
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Page1_5
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Page1_6
	goto Common_EventScript_Sample_Sets_Shop_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Page1_4:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Page1_5:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Page1_6:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Page1
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Mega_Page1
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_2
	case 1, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_3
	case 2, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_4
	case 3, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_5
	case 4, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_6
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_7
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_8
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_2:
	givemon SPECIES_KANGASKHAN, 85, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 36, 196, 20, 0, 236, 20, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_3:
	givemon SPECIES_METAGROSS, 85, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 0, 36, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_4:
	givemon SPECIES_GARDEVOIR, 85, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 196, 36, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_5:
	givemon SPECIES_CHARIZARD, 85, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 4, 4, 188, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_6:
	givemon SPECIES_SALAMENCE, 85, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 244, 4, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_7:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1_8:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Mega_Page2
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_2
	case 1, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_3
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_4
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_5
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_2:
	givemon SPECIES_MANECTRIC, 85, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 0, 44, 0, 220, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_OVERHEAT, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_3:
	givemon SPECIES_GENGAR, 85, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 68, 4, 4, 180, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_4:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page2_5:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Mega_Page1
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Standard_Page1
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_2
	case 1, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_3
	case 2, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_4
	case 3, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_5
	case 4, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_6
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_7
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_8
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_2:
	givemon SPECIES_INCINEROAR, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 0, 204, 28, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_3:
	givemon SPECIES_RILLABOOM, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 132, 36, 60, 0, 212, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_4:
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 172, 4, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_5:
	givemon SPECIES_IRON_HANDS, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 0, 252, 4, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_6:
	givemon SPECIES_POLITOED, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 212, 0, 132, 4, 76, 84, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_SCALD, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_7:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1_8:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Standard_Page2
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_2
	case 1, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_3
	case 2, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_4
	case 3, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_5
	case 4, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_6
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_7
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_8
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_2:
	givemon SPECIES_TORNADUS, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 244, 4, 252, 31, 0, 31, 31, 31, 31, MOVE_BLEAKWIND_STORM, MOVE_RAIN_DANCE, MOVE_TAILWIND, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_3:
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 85, ITEM_MYSTIC_WATER, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 44, 236, 4, 0, 84, 140, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_4:
	givemon SPECIES_HEATRAN, 85, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 4, 236, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_5:
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 196, 4, 0, 52, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_6:
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 0, 108, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_7:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2_8:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Standard_Page3
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_2
	case 1, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_3
	case 2, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_4
	case 3, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_5
	case 4, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_6
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_7
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_8
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_2:
	givemon SPECIES_FLUTTER_MANE, 85, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 36, 4, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_3:
	givemon SPECIES_TAPU_FINI, 85, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 196, 4, 60, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_HAZE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_4:
	givemon SPECIES_AEGISLASH, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 20, 236, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_5:
	givemon SPECIES_OGERPON_HEARTHFLAME_MASK, 85, ITEM_HEARTHFLAME_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 0, 4, 36, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_6:
	givemon SPECIES_CRESSELIA, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 1, 244, 0, 180, 4, 60, 20, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_LUNAR_BLESSING, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_7:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page2
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3_8:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Standard_Page4
	switch VAR_RESULT
	case 0, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4_2
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4_3
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4_4
	goto Common_EventScript_Sample_Sets_Shop_End
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4_2:
	givemon SPECIES_TING_LU, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 68, 156, 4, 0, 252, 28, 31, 31, 31, 31, 31, 31, MOVE_STOMPING_TANTRUM, MOVE_HEAVY_SLAM, MOVE_RUINATION, MOVE_STONE_EDGE, FALSE, FALSE, FALSE
	goto Common_Eventscript_Sample_Team_ShopCheckPurchase
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4_3:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page3
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page4_4:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Standard_Page1
	return


Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1::
	multichoice2 0, 0, Common_Text_Sample_Sets_Shop_Doubles_Restricted_Page1
	switch VAR_RESULT
	case MULTI_L_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1_2
	case MULTI_R_PRESSED, Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1_3
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1_2:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1
	return

Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1_3:
	goto Common_EventScript_Sample_Sets_Shop_Doubles_Restricted_Page1
	return


Common_Eventscript_Sample_Sets_Shop_Text_0:
	.string "Hello and welcome to the Sample Sets\n"
	.string "Shop!$"

Common_Eventscript_Sample_Sets_ShopCheckMoney_Text_0:
	.string "Oh, sorry! You need at least ¥15000 to\n"
	.string "buy anything here!$"

Common_EventScript_Sample_Sets_Shop_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nB: Go Back$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_0:
	.string "Sure! Let's see if I can handle that for\n"
	.string "you ...$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_1:
	.string "Here you go!$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_2:
	.string "The POKéMON have been added to your\n"
	.string "party.$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_3:
	.string "All done!$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_4:
	.string "The POKéMON have been sent to your PC\n"
	.string "boxes.$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_5:
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_6:
	.string "I'll take your payment now, please.$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_7:
	.string "Thanks for your business!$"

Common_Eventscript_Sample_Sets_ShopCheckPurchase_Text_8:
	.string "Can we help you with anything else?$"

Common_EventScript_Sample_Sets_Shop_End_Text_0:
	.string "Come back again soon!$"

Common_Text_Sample_Sets_Shop_Page1::
	.string "Singles$"
	.string "Doubles$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Singles_Page1::
	.string "Mega$"
	.string "Standard$"
	.string "Restricted$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Singles_Mega_Page1::
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Singles_Standard_Page1::
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Singles_Restricted_Page1::
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Page1::
	.string "Mega$"
	.string "Standard$"
	.string "Restricted$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Mega_Page1::
	.string "M Kangaskhan$"
	.string "M Metagross$"
	.string "M Gardevoir$"
	.string "M Charizard-Y$"
	.string "M Salamence (S)$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Mega_Page2::
	.string "M Manectric$"
	.string "M Gengar$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Standard_Page1::
	.string "Incineroar$"
	.string "Rillaboom$"
	.string "Amoonguss$"
	.string "Iron Hands$"
	.string "Politoed$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Standard_Page2::
	.string "Tornadus$"
	.string "Urshifu-RS$"
	.string "Heatran$"
	.string "Landorus-T$"
	.string "Landorus-T (B)$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Standard_Page3::
	.string "Flutter Mane$"
	.string "Tapu Fini$"
	.string "Aegislash$"
	.string "Ogerpon-HF$"
	.string "Cresselia$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Standard_Page4::
	.string "Ting-Lu$"
	.string "Go Back$"
	.string "$"

Common_Text_Sample_Sets_Shop_Doubles_Restricted_Page1::
	.string "Go Back$"
	.string "$"
