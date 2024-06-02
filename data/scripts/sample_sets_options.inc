Auto_EventScript_Sample_Sets_Controls::
	msgbox Auto_EventScript_Sample_Sets_Controls_Text_0
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Page1_4
	case 3, Auto_EventScript_Sample_Sets_Page1_5
	case 4, Auto_EventScript_Sample_Sets_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page1_8
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return

Auto_EventScript_Sample_Sets_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Page1_4:
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 20, 28, 236, 20, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page1_5:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page1_6:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page1_7:
	goto Auto_EventScript_Sample_Sets_Page5
	return

Auto_EventScript_Sample_Sets_Page1_8:
	goto Auto_EventScript_Sample_Sets_Page2
	return


Auto_EventScript_Sample_Sets_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Page2_2
	case 1, Auto_EventScript_Sample_Sets_Page2_3
	case 2, Auto_EventScript_Sample_Sets_Page2_4
	case 3, Auto_EventScript_Sample_Sets_Page2_5
	case 4, Auto_EventScript_Sample_Sets_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page2_8
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page2_2:
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 1, 244, 0, 180, 20, 4, 60, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_LUNAR_BLESSING, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_3:
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_4:
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_5:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_6:
	givemon SPECIES_INDEEDEE_FEMALE, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 212, 44, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_EXPANDING_FORCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_7:
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Page2_8:
	goto Auto_EventScript_Sample_Sets_Page3
	return


Auto_EventScript_Sample_Sets_Page3::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page3
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Page3_2
	case 1, Auto_EventScript_Sample_Sets_Page3_3
	case 2, Auto_EventScript_Sample_Sets_Page3_4
	case 3, Auto_EventScript_Sample_Sets_Page3_5
	case 4, Auto_EventScript_Sample_Sets_Page3_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page3_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page3_8
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page3_2:
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_3:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_4:
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_5:
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_6:
	givemon SPECIES_OGERPON_HEARTHFLAME_MASK, 65, ITEM_HEARTHFLAME_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_7:
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Page3_8:
	goto Auto_EventScript_Sample_Sets_Page4
	return


Auto_EventScript_Sample_Sets_Page4::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page4
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Page4_2
	case 1, Auto_EventScript_Sample_Sets_Page4_3
	case 2, Auto_EventScript_Sample_Sets_Page4_4
	case 3, Auto_EventScript_Sample_Sets_Page4_5
	case 4, Auto_EventScript_Sample_Sets_Page4_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page4_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page4_8
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page4_2:
	givemon SPECIES_OGERPON_WELLSPRING_MASK, 65, ITEM_WELLSPRING_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_3:
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 156, 28, 36, 36, 31, 0, 31, 31, 31, 31, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_TRI_ATTACK, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_4:
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_6:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_7:
	goto Auto_EventScript_Sample_Sets_Page3
	return

Auto_EventScript_Sample_Sets_Page4_8:
	goto Auto_EventScript_Sample_Sets_Page5
	return


Auto_EventScript_Sample_Sets_Page5::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page5
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Page5_2
	case 1, Auto_EventScript_Sample_Sets_Page5_3
	case 2, Auto_EventScript_Sample_Sets_Page5_4
	case 3, Auto_EventScript_Sample_Sets_Page5_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page5_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page5_7
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page5_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 60, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_HAZE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_3:
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 236, 180, 0, 0, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_4:
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_WHITE_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 4, 196, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EARTH_POWER, MOVE_BLOOD_MOON, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_5:
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 65, ITEM_MYSTIC_WATER, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 44, 236, 4, 140, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_6:
	goto Auto_EventScript_Sample_Sets_Page4
	return

Auto_EventScript_Sample_Sets_Page5_7:
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Page1_4
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_5
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 108, 0, 0, 148, 31, 0, 31, 7, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_3:
	givemon SPECIES_CONKELDURR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 212, 32, 12, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_4:
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_5:
	givemon SPECIES_LATIOS, 65, ITEM_DRAGON_GEM, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 248, 248, 4, 31, 2, 31, 30, 30, 31, MOVE_PROTECT, MOVE_SUNNY_DAY, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_6:
	givemon SPECIES_MAMOSWINE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 124, 44, 100, 196, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_2:
	givemon SPECIES_TORNADUS, 65, ITEM_FLYING_GEM, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_ACROBATICS, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_2:
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 68, 252, 124, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_HAMMER_ARM, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_3:
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 1, 212, 0, 60, 0, 160, 76, 31, 0, 31, 0, 31, 31, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_4:
	givemon SPECIES_HEATRAN, 65, ITEM_FIRE_GEM, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 252, 0, 100, 0, 156, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, MOVE_ERUPTION, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_6:
	givemon SPECIES_THUNDURUS, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 0, 52, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_2:
	givemon SPECIES_TYRANITAR, 65, ITEM_IRON_BALL, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 196, 20, 0, 0, 36, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FLING, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 108, 0, 0, 148, 31, 0, 31, 7, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_3:
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 212, 0, 60, 4, 156, 76, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_4:
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_6:
	givemon SPECIES_THUNDURUS, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 52, 4, 204, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_2:
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOPLE_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 124, 36, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_CHESTO_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 112, 0, 0, 144, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_3:
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_4:
	givemon SPECIES_LATIOS, 65, ITEM_DRAGON_GEM, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 248, 248, 4, 31, 26, 31, 30, 30, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_5:
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 116, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_6:
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_SUPERPOWER, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_2:
	givemon SPECIES_VOLCARONA, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 212, 4, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 1, 252, 0, 252, 0, 0, 4, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_SUNNY_DAY, MOVE_ENERGY_BALL, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_3:
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 1, 244, 0, 4, 0, 252, 4, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_4:
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 4, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_5:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 180, 252, 4, 60, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_6:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 244, 0, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_2:
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 4, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_2:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISABLE, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_3:
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 232, 0, 60, 4, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_4:
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 84, 20, 148, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_5:
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 76, 4, 4, 180, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_RAIN_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_6:
	givemon SPECIES_TERRAKION, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_2:
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_2:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 156, 0, 52, 188, 104, 8, 31, 1, 31, 31, 30, 30, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 44, 0, 20, 220, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_5:
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_6:
	givemon SPECIES_TERRAKION, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_2:
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 180, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_PROTECT, MOVE_SPORE, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_3:
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 84, 68, 4, 100, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_4:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 44, 180, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_DISABLE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_5:
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 12, 0, 0, 244, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_6:
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 220, 0, 172, 20, 4, 92, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_2:
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_3:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 124, 52, 220, 28, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_WILL_O_WISP, MOVE_ROOST, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_5:
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_6:
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_2:
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_6
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_2:
	givemon SPECIES_AERODACTYL, 65, ITEM_AERODACTYLITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_SMACK_DOWN, MOVE_SKY_DROP, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_3:
	givemon SPECIES_CRADILY, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 136, 0, 40, 80, 31, 0, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_4:
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 252, 60, 192, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_LEECH_SEED, MOVE_POWER_WHIP, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_5:
	givemon SPECIES_HIPPOWDON, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 0, 1, 252, 5, 252, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_SLACK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_6:
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_2:
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 244, 64, 0, 4, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DETECT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_2:
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 0, 252, 0, 100, 156, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_MORNING_SUN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_3:
	givemon SPECIES_BISHARP, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_4:
	givemon SPECIES_HERACROSS, 65, ITEM_HERACRONITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_5:
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 228, 0, 164, 4, 100, 12, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_RECOVER, MOVE_PROTECT, MOVE_ICY_WIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_6:
	givemon SPECIES_SYLVEON, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 40, 20, 204, 0, 31, 1, 31, 31, 30, 30, MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_2:
	givemon SPECIES_ZAPDOS, 65, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_2:
	givemon SPECIES_BISHARP, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 6, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_3:
	givemon SPECIES_CONKELDURR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_4:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_RETURN, MOVE_POWER_UP_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_6:
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_2:
	givemon SPECIES_TOGEKISS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 4, 0, 88, 164, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND, MOVE_FOLLOW_ME, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_3:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 252, 0, 252, 0, 0, 6, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_4:
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 198, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_5:
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_6:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 6, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_2:
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_ICE_PUNCH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_3:
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 24, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_4:
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 172, 0, 100, 28, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_5:
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_6:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_2:
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 4, 28, 252, 20, 31, 31, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_3:
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 68, 4, 188, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_4:
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_5:
	givemon SPECIES_BRELOOM, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_6:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_ROOST, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_2:
	givemon SPECIES_WEAVILE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ICICLE_CRASH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 164, 0, 0, 92, 31, 0, 31, 6, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_3:
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 252, 0, 116, 20, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_4:
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 196, 0, 56, 4, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_6:
	givemon SPECIES_THUNDURUS, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 40, 28, 36, 156, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_2:
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 252, 4, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ERUPTION, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_3:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_4:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 84, 0, 252, 172, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_5:
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_BOLD, 2, 0, 252, 0, 252, 0, 0, 4, 31, 0, 31, 8, 31, 31, MOVE_SPIKY_SHIELD, MOVE_CRAFTY_SHIELD, MOVE_FOLLOW_ME, MOVE_DARK_VOID, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_6:
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_TAILWIND, MOVE_QUICK_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_COBA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 116, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_3:
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_SAFEGUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_4:
	givemon SPECIES_INFERNAPE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_QUICK_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 204, 44, 52, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_6:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_HASTY, 0, 1, 36, 84, 0, 252, 116, 20, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 44, 164, 68, 28, 31, 0, 31, 31, 31, 31, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_COBA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 31, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GRASS_KNOT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_3:
	givemon SPECIES_ARCANINE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_SAFEGUARD, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_4:
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 28, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_5:
	givemon SPECIES_SCRAFTY, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 212, 252, 4, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_SUPER_FANG, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_6:
	givemon SPECIES_SMEARGLE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 84, 0, 172, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DARK_VOID, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_FINAL_GAMBIT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ERUPTION, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_3:
	givemon SPECIES_JUMPLUFF, 65, ITEM_WIDE_LENS, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 252, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_RAGE_POWDER, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_4:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_6:
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_DARK_PULSE, MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_2:
	givemon SPECIES_DIALGA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 76, 4, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_DRAGON_PULSE, MOVE_THUNDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_3:
	givemon SPECIES_GOURGEIST_SUPER, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 164, 92, 76, 0, 4, 172, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_BULLET_SEED, MOVE_DESTINY_BOND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_4:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 188, 0, 244, 0, 76, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_EXPLOSION, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_6:
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_SPORT_BALL, NATURE_BRAVE, 1, 0, 252, 252, 0, 0, 0, 4, 31, 31, 31, 11, 31, 31, MOVE_PROTECT, MOVE_FIRE_FANG, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_2:
	givemon SPECIES_THUNDURUS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 16, 252, 232, 4, 31, 31, 31, 31, 31, 31, MOVE_TAUNT, MOVE_SKY_DROP, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_2:
	givemon SPECIES_BRONZONG, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SAFEGUARD, MOVE_SKILL_SWAP, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_3:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 252, 4, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_4:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 116, 0, 140, 236, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_WATER_SPOUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_6:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 6, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_2:
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_2:
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SAFEGUARD, MOVE_SKILL_SWAP, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_HEX, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_4:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_5:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SUCKER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_6:
	givemon SPECIES_KYUREM_WHITE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_DRAGON_PULSE, MOVE_BLIZZARD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_2:
	givemon SPECIES_SABLEYE, 65, ITEM_MENTAL_HERB, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 252, 0, 4, 0, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_GRAVITY, MOVE_QUASH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_2:
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_SAFEGUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 92, 0, 20, 220, 172, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_4:
	givemon SPECIES_HITMONTOP, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 132, 76, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_WIDE_GUARD, MOVE_CLOSE_COMBAT, MOVE_FEINT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 204, 44, 52, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_6:
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 36, 0, 204, 180, 20, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_2:
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_2:
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_3:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_4:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_DRACO_METEOR, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_6:
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_RELAXED, 2, 0, 252, 0, 252, 0, 0, 4, 31, 0, 31, 29, 31, 31, MOVE_DARK_VOID, MOVE_FOLLOW_ME, MOVE_CRAFTY_SHIELD, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_5
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_6
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_2:
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 60, 0, 252, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_3:
	givemon SPECIES_LANDORUS_THERIAN, 60, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_4:
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_5:
	givemon SPECIES_RAICHU, 50, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 116, 204, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_6:
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_2:
	givemon SPECIES_TAPU_FINI, 60, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_2:
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 36, 4, 76, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_4:
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_5:
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_6:
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 36, 4, 76, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_3:
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_4:
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_5:
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_2:
	givemon SPECIES_ZAPDOS, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 52, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_ROOST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_2:
	givemon SPECIES_BLACEPHALON, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 244, 252, 4, 31, 0, 30, 31, 31, 31, MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_3:
	givemon SPECIES_CELESTEELA, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 228, 4, 148, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 244, 140, 60, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_5:
	givemon SPECIES_LOPUNNY, 65, ITEM_LOPUNNITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_RETURN, MOVE_HIGH_JUMP_KICK, MOVE_ENCORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_6:
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_2:
	givemon SPECIES_ZAPDOS, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 44, 60, 156, 4, 31, 0, 30, 31, 31, 31, MOVE_TAILWIND, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_2:
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_3:
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_TAUNT, MOVE_RECYCLE, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_5:
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_6:
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_2:
	givemon SPECIES_GOTHITELLE, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_TICKLE, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_4:
	givemon SPECIES_LUDICOLO, 65, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 31, 31, 31, 31, 31, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_5:
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 252, 196, 0, 0, 0, 60, 31, 31, 31, 18, 31, 31, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_6:
	givemon SPECIES_POLITOED, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 252, 0, 148, 52, 28, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 116, 0, 0, 252, 31, 0, 31, 4, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_5:
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_2:
	givemon SPECIES_ZAPDOS, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 36, 20, 28, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_2:
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 180, 116, 36, 20, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_ACROBATICS, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_3:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_4:
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 0, 4, 116, 204, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_5:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_6:
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_2:
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 60, 0, 252, 60, 4, 132, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_OVERHEAT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_5
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_2:
	givemon SPECIES_DEWGONG, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 148, 44, 4, 92, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_ICY_WIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 172, 0, 4, 252, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_4:
	givemon SPECIES_GOTHITELLE, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 124, 0, 0, 132, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_5:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_6:
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_RASH, 1, 1, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_POISON_JAB, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_2:
	givemon SPECIES_TAPU_BULU, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 252, 4, 4, 228, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_SNARL, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_2:
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_FRUSTRATION, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_3:
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 236, 0, 196, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_FOLLOW_ME, MOVE_ICY_WIND, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_4:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_5:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_6:
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_2:
	givemon SPECIES_TAPU_BULU, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 108, 140, 4, 244, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_STONE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 4, 100, 4, 148, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_TOXIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_3:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 30, 30, 31, 31, 31, MOVE_EARTH_POWER, MOVE_U_TURN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_5:
	givemon SPECIES_MILOTIC, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 92, 92, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SCALD, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_6:
	givemon SPECIES_TAPU_BULU, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SWORDS_DANCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_2:
	givemon SPECIES_TYRANITAR, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 228, 0, 180, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_CLEAR_SMOG, MOVE_RAGE_POWDER, MOVE_SLUDGE_BOMB, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_3:
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 220, 20, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_6:
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_2:
	givemon SPECIES_CRESSELIA, 60, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 52, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_SUNNY_DAY, MOVE_ICY_WIND, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_3:
	givemon SPECIES_HEATRAN, 60, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 68, 20, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_4:
	givemon SPECIES_KANGASKHAN, 50, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 220, 4, 20, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 60, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_6:
	givemon SPECIES_TAPU_FINI, 60, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_2:
	givemon SPECIES_TAPU_KOKO, 60, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 244, 204, 44, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_4:
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 12, 84, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_6:
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 60, 52, 44, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_2:
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_3:
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_5:
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_6:
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_2:
	givemon SPECIES_CAMERUPT, 65, ITEM_CAMERUPTITE, ITEM_SPORT_BALL, NATURE_QUIET, 1, 1, 252, 0, 4, 0, 252, 0, 31, 0, 31, 0, 31, 31, MOVE_HEAT_WAVE, MOVE_NATURE_POWER, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_3:
	givemon SPECIES_MIMIKYU, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_4:
	givemon SPECIES_REUNICLUS, 65, ITEM_PSYCHIUM_Z, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 172, 0, 84, 0, 164, 84, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_5:
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 220, 252, 0, 0, 0, 36, 31, 31, 17, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_6:
	givemon SPECIES_STARAPTOR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 252, 0, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FINAL_GAMBIT, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_2:
	givemon SPECIES_TAPU_BULU, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 92, 4, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_6
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_2:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_3:
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_DETECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_5:
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_6:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_2:
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 228, 4, 20, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_2:
	givemon SPECIES_ACCELGOR, 50, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 2, 1, 252, 0, 0, 252, 4, 0, 31, 0, 31, 31, 31, 31, MOVE_ACID_SPRAY, MOVE_FINAL_GAMBIT, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_3:
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 124, 0, 188, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 68, 108, 4, 252, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_5:
	givemon SPECIES_MIMIKYU, 50, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TAUNT, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_6:
	givemon SPECIES_SNORLAX, 50, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_FRUSTRATION, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_2:
	givemon SPECIES_TAPU_LELE, 50, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 108, 0, 76, 228, 84, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 4, 108, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_3:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 4, 188, 84, 4, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_4:
	givemon SPECIES_DRIFBLIM, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 180, 92, 116, 116, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_TAILWIND, MOVE_HAZE, MOVE_WILL_O_WISP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_6:
	givemon SPECIES_PHEROMOSA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_ICE_BEAM, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_POISON_JAB, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_2:
	givemon SPECIES_TAPU_LELE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 84, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_CLEAR_SMOG, MOVE_RAGE_POWDER, MOVE_ENERGY_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_3:
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_4:
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 252, 0, 220, 20, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_5:
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 180, 0, 116, 28, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_6:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 60, 0, 68, 196, 132, 52, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DISABLE, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_4:
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_5:
	givemon SPECIES_POLITOED, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 252, 0, 148, 52, 28, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_6:
	givemon SPECIES_SCRAFTY, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 2, 1, 252, 4, 92, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_DRAIN_PUNCH, MOVE_DETECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_2:
	givemon SPECIES_CRESSELIA, 50, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 228, 20, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_SUNNY_DAY, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_3:
	givemon SPECIES_HEATRAN, 50, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 68, 20, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_4:
	givemon SPECIES_KANGASKHAN, 50, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 220, 4, 20, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_6:
	givemon SPECIES_TAPU_FINI, 50, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_2:
	givemon SPECIES_TAPU_KOKO, 50, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_3:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 124, 0, 188, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_4:
	givemon SPECIES_CRESSELIA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 236, 0, 28, 4, 20, 220, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_ICY_WIND, MOVE_PSYSHOCK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_5:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 52, 244, 28, 116, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_6:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 28, 196, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_2:
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 1, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_3:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 212, 228, 44, 20, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_ICE_PUNCH, MOVE_LOW_KICK, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 220, 0, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_5:
	givemon SPECIES_SUICUNE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 4, 20, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SNARL, MOVE_SCALD, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_6:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_2:
	givemon SPECIES_VOLCARONA, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 84, 0, 44, 124, 244, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_2:
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_3:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 52, 244, 28, 116, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_4:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_5:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 20, 28, 116, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_6:
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 100, 0, 4, 188, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_2:
	givemon SPECIES_ZAPDOS, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 36, 20, 108, 92, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_TAILWIND, MOVE_ROOST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_6
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_5
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 220, 60, 4, 84, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_4:
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 196, 252, 0, 0, 0, 60, 31, 31, 16, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_5:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_6:
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 4, 20, 20, 228, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_FOUL_PLAY, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_3:
	givemon SPECIES_SOLGALEO, 65, ITEM_SOLGANIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 180, 12, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_SUNSTEEL_STRIKE, MOVE_SUPERPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_4:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 60, 156, 4, 44, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, MOVE_SWAGGER, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_5:
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_6:
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_2:
	givemon SPECIES_ZYGARDE, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 52, 156, 4, 68, 0, 228, 31, 31, 31, 31, 31, 31, MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_COIL, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_2:
	givemon SPECIES_ACCELGOR, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 2, 0, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_STRUGGLE_BUG, MOVE_FINAL_GAMBIT, MOVE_ACID_SPRAY, MOVE_ENCORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 212, 28, 4, 84, 0, 180, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_4:
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 148, 0, 4, 116, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_5:
	givemon SPECIES_LUNALA, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 196, 0, 12, 68, 4, 228, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_FOCUS_BLAST, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_6:
	givemon SPECIES_RAICHU_ALOLAN, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 36, 4, 188, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ALLY_SWITCH, MOVE_NUZZLE, MOVE_FLING, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_2:
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 68, 0, 12, 220, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FIRE_PUNCH, MOVE_STONE_EDGE, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 204, 0, 0, 60, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_SNARL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_4:
	givemon SPECIES_TALONFLAME, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_QUICK_GUARD, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_5:
	givemon SPECIES_TSAREENA, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 36, 28, 4, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_6:
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 30, 30, 31, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 188, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_5
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_3:
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_4:
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FOLLOW_ME, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_5:
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT, MOVE_RAIN_DANCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_6:
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_4:
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 52, 4, 252, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_SACRED_SWORD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_THUNDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_6:
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_TAUNT, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_6
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_4:
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_5:
	givemon SPECIES_LUNALA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_6:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 12, 100, 28, 132, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_2:
	givemon SPECIES_CROBAT, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 36, 0, 188, 252, 0, 32, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_HAZE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_4:
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_5:
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_6:
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_FEINT, MOVE_LOW_KICK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 212, 0, 0, 60, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_3:
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_4:
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 2, 1, 36, 0, 0, 252, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_LOVELY_KISS, MOVE_WIDE_GUARD, MOVE_CRAFTY_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_5:
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 4, 0, 0, 0, 252, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_6:
	givemon SPECIES_TSAREENA, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 36, 28, 4, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 188, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_GRASS_KNOT, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 204, 0, 0, 60, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_4:
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 164, 0, 60, 244, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_5:
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_6:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 12, 0, 102, 212, 140, 44, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 4, 0, 36, 228, 60, 180, 31, 31, 31, 31, 31, 31, MOVE_OBLIVION_WING, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_SNARL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_2:
	givemon SPECIES_CROBAT, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 36, 0, 188, 252, 0, 32, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_HAZE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_4:
	givemon SPECIES_LUNALA, 65, ITEM_SPELL_TAG, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_5:
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_6:
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_FEINT, MOVE_LOW_KICK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_4:
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_5:
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 212, 0, 20, 252, 4, 20, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_6:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_BLACK_GLASSES, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 124, 76, 116, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 68, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 60, 4, 76, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_4:
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_5:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_VOLT_SWITCH, MOVE_SKY_DROP, MOVE_BRAVE_BIRD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_6:
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 172, 4, 4, 252, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_TAILWIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_3:
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 100, 0, 4, 252, 140, 12, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_SCALD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_4:
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 44, 0, 0, 0, 212, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_5:
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_6:
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_LOW_KICK, MOVE_FEINT, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_BLACK_GLASSES, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 12, 204, 4, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 0, 20, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_SNARL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_3:
	givemon SPECIES_SOLGALEO, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 132, 52, 4, 0, 92, 31, 31, 31, 31, 0, 31, MOVE_SUNSTEEL_STRIKE, MOVE_SUPERPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_4:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 60, 108, 4, 84, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_SWAGGER, MOVE_ICY_WIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_5:
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_LOW_KICK, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_6:
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_2:
	givemon SPECIES_ZYGARDE, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 76, 180, 0, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_THOUSAND_ARROWS, MOVE_COIL, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 100, 4, 36, 116, 31, 0, 31, 31, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_3:
	givemon SPECIES_DIALGA, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 252, 0, 76, 0, 12, 164, 31, 0, 31, 0, 31, 31, MOVE_FLASH_CANNON, MOVE_PROTECT, MOVE_THUNDER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 4, 164, 28, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_5:
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_6:
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 156, 20, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_SCALD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_2:
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_3:
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_THUNDER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_4:
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 164, 0, 12, 252, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_ICY_WIND, MOVE_SCALD, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_5:
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 244, 68, 92, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_SUNSTEEL_STRIKE, MOVE_PHOTON_GEYSER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_6:
	givemon SPECIES_SNORLAX, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 244, 0, 44, 0, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_4:
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 60, 92, 4, 180, 0, 172, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 164, 0, 164, 100, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_6:
	givemon SPECIES_LUNALA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 116, 36, 100, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_WIDE_GUARD, MOVE_ROOST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_THUNDER, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 100, 228, 4, 100, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_3:
	givemon SPECIES_HEATRAN, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_ROAR, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 0, 20, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_5:
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 12, 60, 4, 188, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_6:
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 236, 0, 76, 0, 0, 196, 31, 0, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 52, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_4:
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 52, 4, 252, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_SACRED_SWORD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_6:
	givemon SPECIES_TORNADUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 164, 60, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_PROTECT, MOVE_TAUNT, MOVE_TAILWIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 4, 0, 0, 252, 31, 0, 31, 0, 31, 31, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_4:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_5:
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 156, 164, 4, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_BULLET_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_6:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 116, 4, 148, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_WILD_CHARGE, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 20, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_4:
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 92, 4, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PHOTON_GEYSER, MOVE_SUNSTEEL_STRIKE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_5:
	givemon SPECIES_RAYQUAZA, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 28, 36, 4, 252, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EXTREME_SPEED, MOVE_DRAGON_ASCENT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_NATURES_MADNESS, MOVE_SCALD, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 156, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_2:
	givemon SPECIES_CELESTEELA, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 124, 0, 0, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_WIDE_GUARD, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DARKEST_LARIAT, MOVE_U_TURN, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_5:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_6:
	givemon SPECIES_RAYQUAZA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 68, 76, 0, 252, 4, 108, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_ICY_WIND, MOVE_EXTREME_SPEED, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_2:
	givemon SPECIES_GASTRODON, 65, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_QUIET, 1, 0, 148, 0, 92, 0, 252, 12, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 20, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_4:
	givemon SPECIES_RAYQUAZA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 196, 44, 0, 252, 12, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_EARTH_POWER, MOVE_DRAGON_ASCENT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_5:
	givemon SPECIES_SOLGALEO, 65, ITEM_SOLGANIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 36, 220, 0, 0, 0, 252, 31, 31, 31, 15, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SUPERPOWER, MOVE_SUNSTEEL_STRIKE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_NATURES_MADNESS, MOVE_SCALD, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_2:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 156, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_6
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_2:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_3:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 36, 0, 0, 236, 31, 31, 31, 3, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 188, 28, 0, 252, 20, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 76, 0, 0, 188, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_3:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 108, 4, 84, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_SNATCH, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 100, 44, 4, 124, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 0, 84, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_GRAVITY, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_3:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROAR, MOVE_EARTH_POWER, MOVE_ERUPTION, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_5:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_BITE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_6:
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 148, 0, 132, 188, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_2:
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_5
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_2:
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_3:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 204, 0, 4, 252, 44, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_4:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 60, 4, 36, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_5:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 0, 84, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_2:
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 252, 4, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_SUBSTITUTE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_3:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 244, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_4:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_5:
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 244, 0, 20, 0, 0, 244, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_6:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 244, 0, 0, 156, 0, 108, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_2:
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_TAILWIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 84, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 36, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_FLARE_BLITZ, MOVE_THROAT_CHOP, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_4:
	givemon SPECIES_NECROZMA_DAWN_WINGS, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PHOTON_GEYSER, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_HASTY, 0, 1, 0, 132, 0, 252, 124, 0, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_HYPER_VOICE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_6:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 124, 60, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_HAZE, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_2:
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 0, 0, 0, 180, 31, 31, 31, 27, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_DRAGON_CLAW, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_3:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 140, 108, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_RETURN, MOVE_BITE, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_4:
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 84, 0, 4, 172, 236, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PHOTON_GEYSER, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DOUBLE_EDGE, MOVE_HYPER_VOICE, MOVE_TAILWIND, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_6:
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_2:
	givemon SPECIES_UMBREON, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 252, 0, 204, 0, 0, 52, 31, 0, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_HELPING_HAND, MOVE_MOONLIGHT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_2:
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 108, 4, 84, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_SNATCH, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_4:
	givemon SPECIES_LUNALA, 65, ITEM_COLBUR_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 0, 180, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_5:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 100, 44, 4, 124, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_6:
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 20, 0, 0, 244, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 4, 140, 124, 4, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_SCALD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_2:
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 12, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_3:
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 28, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_4:
	givemon SPECIES_MEDICHAM, 65, ITEM_MEDICHAMITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_5:
	givemon SPECIES_NIHILEGO, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_POWER_GEM, MOVE_ACID_SPRAY, MOVE_ROLE_PLAY, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_6:
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 116, 4, 148, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_WILD_CHARGE, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_2:
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 76, 0, 20, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 244, 4, 140, 0, 4, 116, 31, 31, 31, 9, 31, 31, MOVE_KNOCK_OFF, MOVE_SNARL, MOVE_U_TURN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_3:
	givemon SPECIES_LUNALA, 65, ITEM_KASIB_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 148, 0, 84, 20, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_4:
	givemon SPECIES_RAYQUAZA, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 132, 116, 4, 164, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_5:
	givemon SPECIES_SNORLAX, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 2, 0, 196, 4, 252, 20, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_6:
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 252, 0, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_4
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_2:
	givemon SPECIES_TAPU_FINI, 65, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 220, 12, 31, 0, 31, 31, 31, 31, MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_HAZE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_5
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_8
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_2:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_3:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_4:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_5:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_8:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_2:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 76, 4, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_3:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 4, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_HIDDEN_POWER, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_4:
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 196, 4, 20, 36, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_HYPNOSIS, MOVE_RECOVER, MOVE_COIL, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_5:
	givemon SPECIES_RILLABOOM, 50, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_2:
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_3:
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_4:
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_2:
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_3:
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 36, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_4:
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_5:
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_2:
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_3:
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 188, 36, 4, 28, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_4:
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_5:
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 52, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_2
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_3
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_4
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_7
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_3:
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_4:
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_5:
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_6:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_7:
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
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
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_2
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_3
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_6
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_2:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_5:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_6:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Common_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_4
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_2:
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Megas_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_4
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_2:
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_4
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_2:
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_QUIET, 1, 0, 164, 0, 4, 0, 196, 140, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_3:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_4:
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Sets_Page1::
	.string "FROM TEAMS$"
	.string "DOUBLES$"
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "CHARIZARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page2::
	.string "CRESSELIA$"
	.string "FLUTTER MANE$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "INDEEDEE-F$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page3::
	.string "IRON HANDS$"
	.string "LANDO-T$"
	.string "MANECTRIC$"
	.string "METAGROSS$"
	.string "OGERPON-HF$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page4::
	.string "OGERPON-WS$"
	.string "PORYGON2$"
	.string "RILLABOOM$"
	.string "SALAMENCE (MIXED)$"
	.string "SALAMENCE (PHYSICAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page5::
	.string "TAPU FINI (SPECS)$"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "URSHIFU-RS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Page1::
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Page1::
	.string "LEGACY$"
	.string "SAMPLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Page1::
	.string "VGC2013$"
	.string "VGC2015$"
	.string "VGC2016$"
	.string "VGC2018$"
	.string "VGC2019$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1::
	.string "ARASH WORLDS$"
	.string "GEBEBO WORLDS$"
	.string "GOODSTUFFS$"
	.string "STANDARD SAND$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1::
	.string "AMOONGUSS$"
	.string "CONKELDURR$"
	.string "HEATRAN$"
	.string "LATIOS$"
	.string "MAMOSWINE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2::
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1::
	.string "CONKELDURR$"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2::
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1::
	.string "AMOONGUSS$"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2::
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1::
	.string "AMOONGUSS$"
	.string "EXCADRILL$"
	.string "LATIOS$"
	.string "ROTOM-WASH$"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2::
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1::
	.string "ARAHPTHOS TEAMS$"
	.string "JAPAN SAND$"
	.string "M-GARDEVOIR$"
	.string "M-SALAMENCE$"
	.string "SCAR WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2::
	.string "SHOMA WORLDS$"
	.string "TERRACOTT RAIN$"
	.string "TERRACOTT SUN$"
	.string "WOLFE PERISH$"
	.string "WOLFE WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1::
	.string "AMOONGUSS$"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2::
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1::
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "LUDICOLO$"
	.string "POLITOED$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2::
	.string "WHIMSICOTT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1::
	.string "CHARIZARD$"
	.string "GENGAR$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2::
	.string "WHIMSICOTT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1::
	.string "AMOONGUSS$"
	.string "ARCANINE$"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "POLITOED$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2::
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1::
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2::
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1::
	.string "M-AERODACTYL$"
	.string "M-HERACROSS$"
	.string "M-KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1::
	.string "AERODACTYL$"
	.string "CRADILY$"
	.string "FERROTHORN$"
	.string "HIPPOWDON$"
	.string "MILOTIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2::
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1::
	.string "ARCANINE$"
	.string "BISHARP$"
	.string "HERACROSS$"
	.string "MILOTIC$"
	.string "SYLVEON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2::
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1::
	.string "BISHARP$"
	.string "CONKELDURR$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2::
	.string "TOGEKISS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1::
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "AZUMARILL$"
	.string "EXCADRILL$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2::
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1::
	.string "AMOONGUSS$"
	.string "AZUMARILL$"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2::
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1::
	.string "AEGISLASH$"
	.string "ARCANINE$"
	.string "AZUMARILL$"
	.string "BRELOOM$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2::
	.string "WEAVILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1::
	.string "AMOONGUSS$"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2::
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1::
	.string "DIALGA KYOGRE$"
	.string "DUAL PRIMALS$"
	.string "GRAVITY$"
	.string "RAYQUAZA KYOGRE$"
	.string "XERN DON BRONZONG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2::
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE$"
	.string "XERNEAS RAYQUAZA$"
	.string "YVELTAL GROUDON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1::
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "SALAMENCE$"
	.string "SMEARGLE$"
	.string "TALONFLAME$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1::
	.string "AMOONGUSS$"
	.string "BRONZONG$"
	.string "INFERNAPE$"
	.string "KYOGRE$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1::
	.string "AMOONGUSS$"
	.string "ARCANINE$"
	.string "RAYQUAZA$"
	.string "SCRAFTY$"
	.string "SMEARGLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1::
	.string "GROUDON$"
	.string "JUMPLUFF$"
	.string "KANGASKHAN$"
	.string "SALAMENCE$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1::
	.string "DIALGA$"
	.string "GOURGEIST-SUPER$"
	.string "KYOGRE$"
	.string "LANDORUS-THERIAN$"
	.string "MAWILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2::
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1::
	.string "BRONZONG$"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "KYOGRE$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2::
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1::
	.string "BRONZONG$"
	.string "GENGAR$"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "KYUREM-WHITE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2::
	.string "SABLEYE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1::
	.string "BRONZONG$"
	.string "GENGAR$"
	.string "HITMONTOP$"
	.string "KYOGRE$"
	.string "RAICHU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2::
	.string "RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1::
	.string "BRONZONG$"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "SALAMENCE$"
	.string "SMEARGLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1::
	.string "POST-BANK$"
	.string "PRE-BANK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1::
	.string "KOMMO-O TEAMS$"
	.string "M-CHARIZARD-X$"
	.string "M-GARDEVOIR$"
	.string "M-KANGASKHAN$"
	.string "M-LATIAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2::
	.string "M-LOPUNNY$"
	.string "M-MANECTRIC$"
	.string "M-MAWILE$"
	.string "M-METAGROSS$"
	.string "M-TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3::
	.string "MIMI LAX TEAMS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1::
	.string "M-CHARIZARD Y$"
	.string "M-MANECTRIC$"
	.string "M-METAGROSS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1::
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MIMIKYU$"
	.string "RAICHU$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1::
	.string "CELESTEELA$"
	.string "INCINEROAR$"
	.string "MANECTRIC$"
	.string "MIMIKYU$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1::
	.string "INCINEROAR$"
	.string "METAGROSS$"
	.string "MIMIKYU$"
	.string "SNORLAX$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2::
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1::
	.string "BLACEPHALON$"
	.string "CELESTEELA$"
	.string "INCINEROAR$"
	.string "LOPUNNY$"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2::
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1::
	.string "CELESTEELA$"
	.string "GOTHITELLE$"
	.string "INCINEROAR$"
	.string "MANECTRIC$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1::
	.string "GOTHITELLE$"
	.string "INCINEROAR$"
	.string "LUDICOLO$"
	.string "MAWILE$"
	.string "POLITOED$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "LANDORUS-THERIAN$"
	.string "METAGROSS$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2::
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1::
	.string "CELESTEELA$"
	.string "LANDORUS-THERIAN$"
	.string "RAICHU$"
	.string "TAPU FINI$"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2::
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1::
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1::
	.string "DEWGONG$"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "INCINEROAR$"
	.string "KOMMO-O$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2::
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1::
	.string "AZUMARILL$"
	.string "CLEFAIRY$"
	.string "GENGAR$"
	.string "INCINEROAR$"
	.string "KOMMO-O$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2::
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1::
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2::
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1::
	.string "AMOONGUSS$"
	.string "GARDEVOIR$"
	.string "INCINEROAR$"
	.string "LANDORUS-THERIAN$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1::
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1::
	.string "AEGISLASH$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "LANDORUS-THERIAN$"
	.string "LATIAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1::
	.string "M-CAMERUPT$"
	.string "M-CHARIZARD-Y TEAMS$"
	.string "M-GARDEVOIR$"
	.string "M-GENGAR$"
	.string "M-KANGASKHAN TEAMS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2::
	.string "M-MANECTRIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1::
	.string "CELESTEELA$"
	.string "GOTHITELLE$"
	.string "LANDORUS-THERIAN$"
	.string "MANECTRIC$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1::
	.string "CAMERUPT$"
	.string "MIMIKYU$"
	.string "REUNICLUS$"
	.string "STAKATAKA$"
	.string "STARAPTOR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2::
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1::
	.string "BALANCE$"
	.string "LELE ACCELGOR$"
	.string "LELE DRIFBLIM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1::
	.string "CHARIZARD$"
	.string "KARTANA$"
	.string "LANDORUS-THERIAN$"
	.string "PORYGON2$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2::
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1::
	.string "ACCELGOR$"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MIMIKYU$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2::
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1::
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "DRIFBLIM$"
	.string "LANDORUS-THERIAN$"
	.string "PHEROMOSA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2::
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1::
	.string "AMOONGUSS$"
	.string "AZUMARILL$"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1::
	.string "AMOONGUSS$"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "POLITOED$"
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1::
	.string "BALANCE$"
	.string "CRESSELIA$"
	.string "SUICUNE$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1::
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1::
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "CRESSELIA$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1::
	.string "FERROTHORN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "SUICUNE$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2::
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1::
	.string "AEGISLASH$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2::
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1::
	.string "MOON SERIES$"
	.string "SUN SERIES$"
	.string "ULTRA SERIES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1::
	.string "LUNALA KYOGRE$"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE TEAMS$"
	.string "XERNEAS LUNALA TEAMS$"
	.string "XERNEAS YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2::
	.string "YVELTAL GROUDON$"
	.string "ZYGARDE SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1::
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU KOKO$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1::
	.string "INCINEROAR$"
	.string "SOLGALEO$"
	.string "TAPU FINI$"
	.string "TOXICROAK$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2::
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1::
	.string "ACCELGOR$"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "RAICHU-ALOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2::
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1::
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "TALONFLAME$"
	.string "TSAREENA$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1::
	.string "OFFENSIVE$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1::
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "SMEARGLE$"
	.string "TORNADUS$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1::
	.string "KOMMO-O$"
	.string "OFFENSIVE$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KOMMO-O$"
	.string "LUNALA$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1::
	.string "CROBAT$"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SMEARGLE$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1::
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SMEARGLE$"
	.string "STAKATAKA$"
	.string "TSAREENA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "TAPU FINI$"
	.string "VOLCARONA$"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1::
	.string "DIALGA KYOGRE$"
	.string "DUSK MANE KYOGRE$"
	.string "LUNALA KYOGRE$"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2::
	.string "XERNEAS LUNALA$"
	.string "XERNEAS YVELTAL$"
	.string "YVELTAL GROUDON$"
	.string "YVELTAL KYOGRE$"
	.string "ZYGARDE SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1::
	.string "CROBAT$"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SMEARGLE$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU FINI$"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1::
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU KOKO$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1::
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "STAKATAKA$"
	.string "TAPU LELE$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1::
	.string "INCINEROAR$"
	.string "SOLGALEO$"
	.string "TAPU FINI$"
	.string "TOXICROAK$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2::
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1::
	.string "AMOONGUSS$"
	.string "DIALGA$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2::
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1::
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "LUDICOLO$"
	.string "NECROZMA-DUSK-MANE$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1::
	.string "GROUDON$"
	.string "HEATRAN$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1::
	.string "DAWN WINGS GROUDON$"
	.string "DUSK MANE GROUDON$"
	.string "LUNALA GROUDON$"
	.string "LUNALA KYOGRE$"
	.string "LUNALA RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2::
	.string "RAYQUAZA DUSK MANE$"
	.string "RAYQUAZA KYOGRE$"
	.string "RAYQUAZA SOLGALEO$"
	.string "XERNEAS GROUDON TEAMS$"
	.string "YVELTAL GROUDON TEAMS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3::
	.string "YVELTAL KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "METAGROSS$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "NECROZMA-DUSK-MANE$"
	.string "RAYQUAZA$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1::
	.string "CELESTEELA$"
	.string "GENGAR$"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1::
	.string "GASTRODON$"
	.string "INCINEROAR$"
	.string "RAYQUAZA$"
	.string "SOLGALEO$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2::
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1::
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "TORN KANG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1::
	.string "GENGAR$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1::
	.string "AMOONGUSS$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "SALAMENCE$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1::
	.string "AMOONGUSS$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "KANGASKHAN$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2::
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1::
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1::
	.string "BRONZONG$"
	.string "GENGAR$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1::
	.string "GENGAR$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2::
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1::
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "NECROZMA-DAWN-WINGS$"
	.string "SALAMENCE$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2::
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1::
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "NECROZMA-DUSK-MANE$"
	.string "SALAMENCE$"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2::
	.string "UMBREON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1::
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SALAMENCE$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1::
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "MEDICHAM$"
	.string "NIHILEGO$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2::
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1::
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "RAYQUAZA$"
	.string "SNORLAX$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2::
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_Page1::
	.string "M-CHARIZARD X$"
	.string "M-CHARIZARD Y$"
	.string "M-GARDEVOIR$"
	.string "M-METAGROSS$"
	.string "M-SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1::
	.string "CHARIZARD-MEGA-X$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "RILLABOOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1::
	.string "CHARIZARD$"
	.string "FLUTTER MANE$"
	.string "IRON HANDS$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1::
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "IRON HANDS$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1::
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "METAGROSS-MEGA$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1::
	.string "INCINEROAR$"
	.string "RILLABOOM$"
	.string "SALAMENCE$"
	.string "URSHIFU-RAPID-STRIKE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
	.string "SAMPLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Page1::
	.string "COMMON$"
	.string "MEGAS$"
	.string "TRICK ROOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Common_Page1::
	.string "INCINEROAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Megas_Page1::
	.string "KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Trick_Room_Page1::
	.string "TORKOAL (SPECS)$"
	.string "Go Back$"
	.string "$"
