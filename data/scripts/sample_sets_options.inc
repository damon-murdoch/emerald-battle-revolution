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
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Page1_3:
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Page1_4:
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page1_4
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_2:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_7
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_2:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_5:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_6:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Page1_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Mega_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_5
	case 4, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_8
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_2:
	givemon SPECIES_CHARIZARD, 85, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_3:
	givemon SPECIES_GARDEVOIR, 85, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_4:
	givemon SPECIES_GENGAR, 85, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_5:
	givemon SPECIES_KANGASKHAN, 85, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_6:
	givemon SPECIES_MANECTRIC, 85, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1_8:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Mega_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_6
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_2:
	givemon SPECIES_METAGROSS, 85, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_3:
	givemon SPECIES_SALAMENCE, 85, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_4:
	givemon SPECIES_SALAMENCE, 85, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_5:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page2_6:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Mega_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Offense_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_5
	case 4, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_8
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_2:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_3:
	givemon SPECIES_AEGISLASH, 85, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 20, 28, 236, 20, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_4:
	givemon SPECIES_ARCANINE_HISUIAN, 85, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 108, 196, 4, 196, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED, MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_5:
	givemon SPECIES_AZUMARILL, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_6:
	givemon SPECIES_FLUTTER_MANE, 85, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1_8:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Offense_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_5
	case 4, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_8
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_2:
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_3:
	givemon SPECIES_TALONFLAME, 85, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SLEEP_TALK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_4:
	givemon SPECIES_TALONFLAME, 85, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_NAUGHTY, 1, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_5:
	givemon SPECIES_TAPU_FINI, 85, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 60, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_HAZE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_6:
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 85, ITEM_MYSTIC_WATER, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 44, 236, 4, 140, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page2_8:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1_4
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1_2:
	givemon SPECIES_TORKOAL, 85, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_QUIET, 1, 1, 164, 0, 4, 0, 196, 140, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Support_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_5
	case 4, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_8
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_2:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_3:
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_4:
	givemon SPECIES_ARCANINE, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 68, 4, 188, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_5:
	givemon SPECIES_INCINEROAR, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_6:
	givemon SPECIES_IRON_HANDS, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1_8:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Support_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_7
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_2:
	givemon SPECIES_OGERPON_HEARTHFLAME_MASK, 85, ITEM_HEARTHFLAME_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_3:
	givemon SPECIES_OGERPON_WELLSPRING_MASK, 85, ITEM_WELLSPRING_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_4:
	givemon SPECIES_RILLABOOM, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_5:
	givemon SPECIES_THUNDURUS, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 40, 28, 36, 156, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_6:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page2_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_6
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_2:
	givemon SPECIES_CRESSELIA, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 1, 244, 0, 180, 20, 4, 60, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_LUNAR_BLESSING, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_3:
	givemon SPECIES_INDEEDEE_FEMALE, 85, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 212, 44, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_EXPANDING_FORCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_4:
	givemon SPECIES_PORYGON2, 85, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 156, 28, 36, 36, 31, 0, 31, 31, 31, 31, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_TRI_ATTACK, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_5:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1_6:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Weather_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_5
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_2:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1_5:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Weather_Rain_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_5
	case 4, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_8
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_2:
	givemon SPECIES_KINGDRA, 85, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_3:
	givemon SPECIES_LUDICOLO, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 52, 0, 124, 92, 236, 4, 31, 31, 31, 31, 31, 31, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_4:
	givemon SPECIES_POLITOED, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 212, 0, 132, 84, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_SCALD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_5:
	givemon SPECIES_TORNADUS, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 172, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_BLEAKWIND_STORM, MOVE_RAIN_DANCE, MOVE_TAILWIND, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_6:
	givemon SPECIES_TORNADUS, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 204, 0, 108, 28, 12, 156, 31, 0, 31, 31, 31, 31, MOVE_BLEAKWIND_STORM, MOVE_RAIN_DANCE, MOVE_TAILWIND, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_7:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1_8:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Rain_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Standard_Weather_Sun_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_5
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_2:
	givemon SPECIES_TORKOAL, 85, ITEM_CHARCOAL, ITEM_SPORT_BALL, NATURE_QUIET, 1, 0, 236, 0, 0, 0, 252, 20, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_3:
	givemon SPECIES_TORKOAL, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 76, 4, 4, 172, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_BURNING_JEALOUSY, MOVE_BODY_PRESS, MOVE_YAWN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1_5:
	goto Auto_EventScript_Sample_Sets_Doubles_Standard_Weather_Sun_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Sets_Page1::
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Page1::
	.string "MEGA$"
	.string "OFFENSE$"
	.string "SUPPORT$"
	.string "WEATHER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Mega_Page1::
	.string "CHARIZARD$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "KANGASKHAN$"
	.string "MANECTRIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Mega_Page2::
	.string "METAGROSS$"
	.string "SALAMENCE (MIXED)$"
	.string "SALAMENCE (PHYSICAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Offense_Page1::
	.string "TRICK ROOM$"
	.string "AEGISLASH$"
	.string "ARCANINE-H (BANDED)$"
	.string "AZUMARILL$"
	.string "FLUTTER MANE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Offense_Page2::
	.string "LANDO-T$"
	.string "TALONFLAME (BANDED)$"
	.string "TALONFLAME (MIXED)$"
	.string "TAPU FINI (SPECS)$"
	.string "URSHIFU-RS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Offense_Trick_Room_Page1::
	.string "TORKOAL (SPECS)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Support_Page1::
	.string "TRICK ROOM$"
	.string "AMOONGUSS$"
	.string "ARCANINE (SPECIAL)$"
	.string "INCINEROAR$"
	.string "IRON HANDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Support_Page2::
	.string "OGERPON-HF$"
	.string "OGERPON-WS$"
	.string "RILLABOOM$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Support_Trick_Room_Page1::
	.string "CRESSELIA$"
	.string "INDEEDEE-F$"
	.string "PORYGON2$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Weather_Page1::
	.string "RAIN$"
	.string "SUN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Weather_Rain_Page1::
	.string "KINGDRA$"
	.string "LUDICOLO$"
	.string "POLITOED$"
	.string "TORNADUS$"
	.string "TORNADUS (BULKY)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Standard_Weather_Sun_Page1::
	.string "TORKOAL$"
	.string "TORKOAL (BULKY)$"
	.string "Go Back$"
	.string "$"
