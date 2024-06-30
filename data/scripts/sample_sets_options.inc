Auto_EventScript_Sample_Sets_Controls::
# 5 "data/scripts/sample_sets_options.pory"
	msgbox Auto_EventScript_Sample_Sets_Controls_Text_0
# 6 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Page1::
# 11 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page1
# 12 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page1_2
# 16 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page1_3
# 18 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page1_4
# 21 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page1_5
# 24 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Page1_6
# 27 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page1_7
# 29 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page1_8
# 32 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page1_2:
# 15 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return

Auto_EventScript_Sample_Sets_Page1_3:
# 17 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Page1_4:
# 19 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 20, 28, 236, 20, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 20 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page1_5:
# 22 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
# 23 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page1_6:
# 25 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
# 26 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page1_7:
# 28 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page5
	return

Auto_EventScript_Sample_Sets_Page1_8:
# 30 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return


Auto_EventScript_Sample_Sets_Page2::
# 38 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page2
# 39 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 41 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page2_2
# 44 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page2_3
# 47 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page2_4
# 50 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page2_5
# 53 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Page2_6
# 56 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page2_7
# 58 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page2_8
# 61 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page2_2:
# 42 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 1, 244, 0, 180, 20, 4, 60, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_LUNAR_BLESSING, MOVE_HELPING_HAND, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 43 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_3:
# 45 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 46 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_4:
# 48 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 49 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_5:
# 51 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, FALSE, FALSE, FALSE
# 52 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_6:
# 54 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INDEEDEE_FEMALE, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 212, 44, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, MOVE_EXPANDING_FORCE, FALSE, FALSE, FALSE
# 55 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page2_7:
# 57 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Page2_8:
# 59 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page3
	return


Auto_EventScript_Sample_Sets_Page3::
# 67 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page3
# 68 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 70 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page3_2
# 73 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page3_3
# 76 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page3_4
# 79 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page3_5
# 82 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Page3_6
# 85 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page3_7
# 87 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page3_8
# 90 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page3_2:
# 71 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 72 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_3:
# 74 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 75 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_4:
# 77 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, FALSE, FALSE, FALSE
# 78 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_5:
# 80 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
# 81 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_6:
# 83 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_HEARTHFLAME_MASK, 65, ITEM_HEARTHFLAME_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
# 84 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page3_7:
# 86 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Page3_8:
# 88 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page4
	return


Auto_EventScript_Sample_Sets_Page4::
# 96 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page4
# 97 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 99 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page4_2
# 102 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page4_3
# 105 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page4_4
# 108 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page4_5
# 111 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Page4_6
# 114 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page4_7
# 116 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page4_8
# 119 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page4_2:
# 100 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_OGERPON_WELLSPRING_MASK, 65, ITEM_WELLSPRING_MASK, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 228, 156, 84, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SPIKY_SHIELD, MOVE_FOLLOW_ME, MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, FALSE, FALSE, FALSE
# 101 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_3:
# 103 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 156, 28, 36, 36, 31, 0, 31, 31, 31, 31, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_TRI_ATTACK, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 104 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_4:
# 106 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 107 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_5:
# 109 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 110 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_6:
# 112 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
# 113 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page4_7:
# 115 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page3
	return

Auto_EventScript_Sample_Sets_Page4_8:
# 117 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page5
	return


Auto_EventScript_Sample_Sets_Page5::
# 125 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page5
# 126 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 128 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page5_2
# 131 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page5_3
# 134 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page5_4
# 137 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page5_5
# 140 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page5_6
# 142 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page5_7
# 145 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page5_2:
# 129 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 60, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_HAZE, FALSE, FALSE, FALSE
# 130 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_3:
# 132 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA, 65, ITEM_FLAME_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 236, 180, 0, 0, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 133 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_4:
# 135 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSALUNA_BLOODMOON, 65, ITEM_WHITE_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 52, 0, 4, 4, 196, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_EARTH_POWER, MOVE_BLOOD_MOON, FALSE, FALSE, FALSE
# 136 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_5:
# 138 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 65, ITEM_MYSTIC_WATER, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 44, 236, 4, 140, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
# 139 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Page5_6:
# 141 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page4
	return

Auto_EventScript_Sample_Sets_Page5_7:
# 143 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Page1::
# 151 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Page1
# 152 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 154 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Page1_2
# 156 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Page1_3
# 158 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Page1_4
# 161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Page1_2:
# 155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Page1_3:
# 157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Page1_4:
# 159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1::
# 167 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Page1
# 168 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 170 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_2
# 172 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_3
# 174 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_4
# 176 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_5
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_2:
# 171 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_3:
# 173 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_4:
# 175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1_5:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1::
# 185 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Page1
# 186 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 188 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_2
# 190 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_3
# 192 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_4
# 194 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_5
# 196 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_6
# 198 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_7
# 200 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_8
# 203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_2:
# 189 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_3:
# 191 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_4:
# 193 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_5:
# 195 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_6:
# 197 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_7:
# 199 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1_8:
# 201 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1::
# 209 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
# 210 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 212 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_2
# 214 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_3
# 216 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_4
# 218 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_5
# 220 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_6
# 222 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_7
# 225 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_2:
# 213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_3:
# 215 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_4:
# 217 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_5:
# 219 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_6:
# 221 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1_7:
# 223 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1::
# 231 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
# 232 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 234 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_2
# 237 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_3
# 240 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_4
# 243 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_5
# 246 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_6
# 249 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_7
# 251 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_8
# 254 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_2:
# 235 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 108, 0, 0, 148, 31, 0, 31, 7, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 236 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_3:
# 238 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 212, 32, 12, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 239 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_4:
# 241 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
# 242 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_5:
# 244 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIOS, 65, ITEM_DRAGON_GEM, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 248, 248, 4, 31, 2, 31, 30, 30, 31, MOVE_PROTECT, MOVE_SUNNY_DAY, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 245 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_6:
# 247 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAMOSWINE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 124, 44, 100, 196, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 248 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_7:
# 250 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1_8:
# 252 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2::
# 260 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2
# 261 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 263 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_2
# 266 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_3
# 268 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_4
# 271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_2:
# 264 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYING_GEM, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_ACROBATICS, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 265 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_3:
# 267 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2_4:
# 269 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1::
# 277 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
# 278 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 280 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_2
# 283 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_3
# 286 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_4
# 289 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_5
# 292 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_6
# 295 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_7
# 297 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_8
# 300 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_2:
# 281 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 68, 252, 124, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_HAMMER_ARM, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 282 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_3:
# 284 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 1, 212, 0, 60, 0, 160, 76, 31, 0, 31, 0, 31, 31, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 285 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_4:
# 287 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_FIRE_GEM, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 252, 0, 100, 0, 156, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, MOVE_ERUPTION, FALSE, FALSE, FALSE
# 288 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_5:
# 290 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, FALSE, FALSE, FALSE
# 291 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_6:
# 293 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 0, 52, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_TAUNT, FALSE, FALSE, FALSE
# 294 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_7:
# 296 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1_8:
# 298 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2::
# 306 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2
# 307 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 309 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_2
# 312 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_3
# 314 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_4
# 317 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_2:
# 310 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_IRON_BALL, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 196, 20, 0, 0, 36, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FLING, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
# 311 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_3:
# 313 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2_4:
# 315 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1::
# 323 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
# 324 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 326 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_2
# 329 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_3
# 332 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_4
# 335 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_5
# 338 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_6
# 341 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_7
# 343 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_8
# 346 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_2:
# 327 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 108, 0, 0, 148, 31, 0, 31, 7, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 328 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_3:
# 330 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 212, 0, 60, 4, 156, 76, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 331 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_4:
# 333 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
# 334 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_5:
# 336 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 337 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_6:
# 339 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 52, 4, 204, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_TAUNT, FALSE, FALSE, FALSE
# 340 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_7:
# 342 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1_8:
# 344 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2::
# 352 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2
# 353 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 355 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_2
# 358 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_3
# 360 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_4
# 363 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_2:
# 356 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOPLE_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 124, 36, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
# 357 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_3:
# 359 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2_4:
# 361 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1::
# 369 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
# 370 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 372 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_2
# 375 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_3
# 378 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_4
# 381 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_5
# 384 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_6
# 387 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_7
# 389 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_8
# 392 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_2:
# 373 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_CHESTO_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 112, 0, 0, 144, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 374 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_3:
# 376 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
# 377 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_4:
# 379 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIOS, 65, ITEM_DRAGON_GEM, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 248, 248, 4, 31, 26, 31, 30, 30, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 380 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_5:
# 382 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 116, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, FALSE, FALSE, FALSE
# 383 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_6:
# 385 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_SUPERPOWER, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 386 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_7:
# 388 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1_8:
# 390 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2::
# 398 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2
# 399 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 401 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_2
# 404 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_3
# 406 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_4
# 409 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_2:
# 402 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 212, 4, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, FALSE, FALSE, FALSE
# 403 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_3:
# 405 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2_4:
# 407 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1::
# 415 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
# 416 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 418 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_2
# 420 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_3
# 422 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_4
# 424 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_5
# 426 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_6
# 428 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_7
# 430 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_8
# 433 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_2:
# 419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_3:
# 421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_4:
# 423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_5:
# 425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_6:
# 427 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_7:
# 429 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1_8:
# 431 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2::
# 439 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
# 440 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 442 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_2
# 444 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_3
# 446 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_4
# 448 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_5
# 450 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_6
# 452 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_7
# 454 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_8
# 457 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_2:
# 443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_3:
# 445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_4:
# 447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_5:
# 449 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_6:
# 451 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_7:
# 453 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2_8:
# 455 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1::
# 463 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
# 464 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 466 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_2
# 469 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_3
# 472 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_4
# 475 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_5
# 478 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_6
# 481 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_7
# 483 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_8
# 486 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_2:
# 467 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 1, 252, 0, 252, 0, 0, 4, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_SUNNY_DAY, MOVE_ENERGY_BALL, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 468 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_3:
# 470 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 1, 244, 0, 4, 0, 252, 4, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 471 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_4:
# 473 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 4, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 474 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_5:
# 476 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 180, 252, 4, 60, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 477 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_6:
# 479 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 244, 0, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 480 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_7:
# 482 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1_8:
# 484 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2::
# 492 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2
# 493 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 495 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_2
# 498 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_3
# 500 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_4
# 503 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_2:
# 496 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 4, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
# 497 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_3:
# 499 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2_4:
# 501 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1::
# 509 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
# 510 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 512 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_2
# 515 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_3
# 518 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_4
# 521 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_5
# 524 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_6
# 527 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_7
# 529 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_8
# 532 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_2:
# 513 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISABLE, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 514 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_3:
# 516 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 232, 0, 60, 4, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 517 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_4:
# 519 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 84, 20, 148, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
# 520 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_5:
# 522 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 76, 4, 4, 180, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_RAIN_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 523 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_6:
# 525 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TERRAKION, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
# 526 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_7:
# 528 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1_8:
# 530 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2::
# 538 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2
# 539 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 541 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_2
# 544 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_3
# 546 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_4
# 549 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_2:
# 542 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 543 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_3:
# 545 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2_4:
# 547 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1::
# 555 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
# 556 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 558 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_2
# 561 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_3
# 564 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_4
# 567 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_5
# 570 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_6
# 573 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_7
# 575 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_8
# 578 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_2:
# 559 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 156, 0, 52, 188, 104, 8, 31, 1, 31, 31, 30, 30, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 560 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_3:
# 562 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 44, 0, 20, 220, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 563 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_4:
# 565 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 566 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_5:
# 568 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 569 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_6:
# 571 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TERRAKION, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
# 572 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_7:
# 574 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1_8:
# 576 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2::
# 584 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2
# 585 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 587 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_2
# 590 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_3
# 592 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_4
# 595 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_2:
# 588 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 589 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_3:
# 591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2_4:
# 593 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1::
# 601 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
# 602 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 604 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_2
# 607 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_3
# 610 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_4
# 613 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_5
# 616 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_6
# 619 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_7
# 621 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_8
# 624 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_2:
# 605 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 180, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_PROTECT, MOVE_SPORE, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
# 606 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_3:
# 608 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 84, 68, 4, 100, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 609 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_4:
# 611 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 44, 180, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_DISABLE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
# 612 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_5:
# 614 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 12, 0, 0, 244, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 615 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_6:
# 617 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 220, 0, 172, 20, 4, 92, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, FALSE, FALSE, FALSE
# 618 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_7:
# 620 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1_8:
# 622 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2::
# 630 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2
# 631 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 633 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_2
# 636 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_3
# 638 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_4
# 641 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_2:
# 634 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
# 635 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_3:
# 637 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2_4:
# 639 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1::
# 647 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
# 648 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 650 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_2
# 653 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_3
# 656 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_4
# 659 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_5
# 662 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_6
# 665 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_7
# 667 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_8
# 670 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_2:
# 651 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 652 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_3:
# 654 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 124, 52, 220, 28, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_WILL_O_WISP, MOVE_ROOST, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 655 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_4:
# 657 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 658 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_5:
# 660 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 661 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_6:
# 663 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
# 664 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_7:
# 666 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1_8:
# 668 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2::
# 676 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2
# 677 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 679 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_2
# 682 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_3
# 684 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_4
# 687 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_2:
# 680 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
# 681 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_3:
# 683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2_4:
# 685 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1::
# 693 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
# 694 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 696 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_2
# 698 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_3
# 700 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_4
# 702 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_5
# 704 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_6
# 707 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_2:
# 697 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_3:
# 699 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_4:
# 701 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_5:
# 703 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_6:
# 705 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1::
# 713 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
# 714 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 716 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_2
# 719 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_3
# 722 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_4
# 725 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_5
# 728 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_6
# 731 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_7
# 733 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_8
# 736 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_2:
# 717 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AERODACTYL, 65, ITEM_AERODACTYLITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_SMACK_DOWN, MOVE_SKY_DROP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 718 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_3:
# 720 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRADILY, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 136, 0, 40, 80, 31, 0, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 721 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_4:
# 723 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 252, 60, 192, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_LEECH_SEED, MOVE_POWER_WHIP, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 724 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_5:
# 726 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HIPPOWDON, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 0, 1, 252, 5, 252, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_SLACK_OFF, FALSE, FALSE, FALSE
# 727 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_6:
# 729 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 730 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_7:
# 732 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1_8:
# 734 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2::
# 742 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2
# 743 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 745 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_2
# 748 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_3
# 750 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_4
# 753 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_2:
# 746 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 244, 64, 0, 4, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DETECT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
# 747 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_3:
# 749 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2_4:
# 751 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1::
# 759 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
# 760 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 762 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_2
# 765 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_3
# 768 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_4
# 771 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_5
# 774 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_6
# 777 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_7
# 779 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_8
# 782 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_2:
# 763 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 0, 252, 0, 100, 156, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_MORNING_SUN, FALSE, FALSE, FALSE
# 764 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_3:
# 766 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BISHARP, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
# 767 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_4:
# 769 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HERACROSS, 65, ITEM_HERACRONITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, FALSE, FALSE, FALSE
# 770 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_5:
# 772 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 228, 0, 164, 4, 100, 12, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_RECOVER, MOVE_PROTECT, MOVE_ICY_WIND, FALSE, FALSE, FALSE
# 773 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_6:
# 775 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 40, 20, 204, 0, 31, 1, 31, 31, 30, 30, MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 776 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_7:
# 778 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1_8:
# 780 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2::
# 788 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2
# 789 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 791 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_2
# 794 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_3
# 796 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_4
# 799 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_2:
# 792 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
# 793 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_3:
# 795 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2_4:
# 797 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1::
# 805 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
# 806 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 808 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_2
# 811 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_3
# 814 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_4
# 817 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_5
# 820 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_6
# 823 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_7
# 825 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_8
# 828 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_2:
# 809 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BISHARP, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 6, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 810 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_3:
# 812 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 813 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_4:
# 815 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_RETURN, MOVE_POWER_UP_PUNCH, FALSE, FALSE, FALSE
# 816 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_5:
# 818 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
# 819 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_6:
# 821 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 822 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_7:
# 824 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1_8:
# 826 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2::
# 834 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2
# 835 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 837 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_2
# 840 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_3
# 842 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_4
# 845 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_2:
# 838 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 4, 0, 88, 164, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND, MOVE_FOLLOW_ME, FALSE, FALSE, FALSE
# 839 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_3:
# 841 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2_4:
# 843 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1::
# 851 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
# 852 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 854 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_2
# 857 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_3
# 860 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_4
# 863 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_5
# 866 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_6
# 869 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_7
# 871 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_8
# 874 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_2:
# 855 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 856 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_3:
# 858 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 252, 0, 252, 0, 0, 6, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_PROTECT, FALSE, FALSE, FALSE
# 859 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_4:
# 861 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 198, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 862 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_5:
# 864 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 865 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_6:
# 867 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 6, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 868 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_7:
# 870 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1_8:
# 872 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2::
# 880 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2
# 881 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 883 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_2
# 886 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_3
# 888 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_4
# 891 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_2:
# 884 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_ICE_PUNCH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 885 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_3:
# 887 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2_4:
# 889 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1::
# 897 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
# 898 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 900 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_2
# 903 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_3
# 906 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_4
# 909 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_5
# 912 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_6
# 915 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_7
# 917 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_8
# 920 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_2:
# 901 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
# 902 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_3:
# 904 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 24, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 905 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_4:
# 907 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 172, 0, 100, 28, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 908 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_5:
# 910 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 911 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_6:
# 913 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
# 914 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_7:
# 916 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1_8:
# 918 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2::
# 926 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2
# 927 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 929 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_2
# 932 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_3
# 934 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_4
# 937 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_2:
# 930 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 931 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_3:
# 933 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2_4:
# 935 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1::
# 943 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
# 944 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 946 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_2
# 949 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_3
# 952 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_4
# 955 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_5
# 958 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_6
# 961 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_7
# 963 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_8
# 966 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_2:
# 947 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 4, 28, 252, 20, 31, 31, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 948 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_3:
# 950 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 68, 4, 188, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 951 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_4:
# 953 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 954 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_5:
# 956 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRELOOM, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 957 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_6:
# 959 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_ROOST, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 960 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_7:
# 962 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1_8:
# 964 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2::
# 972 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2
# 973 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 975 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_2
# 978 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_3
# 980 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_4
# 983 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_2:
# 976 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_WEAVILE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ICICLE_CRASH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 977 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_3:
# 979 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2_4:
# 981 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1::
# 989 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
# 990 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 992 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_2
# 995 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_3
# 998 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_4
# 1001 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_5
# 1004 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_6
# 1007 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_7
# 1009 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_8
# 1012 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_2:
# 993 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 164, 0, 0, 92, 31, 0, 31, 6, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 994 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_3:
# 996 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 252, 0, 116, 20, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 997 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_4:
# 999 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 196, 0, 56, 4, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 1000 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_5:
# 1002 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, FALSE, FALSE, FALSE
# 1003 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_6:
# 1005 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 40, 28, 36, 156, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
# 1006 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_7:
# 1008 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1_8:
# 1010 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2::
# 1018 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2
# 1019 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1021 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_2
# 1024 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_3
# 1026 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_4
# 1029 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_2:
# 1022 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 252, 4, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
# 1023 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_3:
# 1025 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2_4:
# 1027 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1::
# 1035 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
# 1036 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1038 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_2
# 1040 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_3
# 1042 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_4
# 1044 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_5
# 1046 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_6
# 1048 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_7
# 1050 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_8
# 1053 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_2:
# 1039 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_3:
# 1041 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_4:
# 1043 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_5:
# 1045 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_6:
# 1047 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_7:
# 1049 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1_8:
# 1051 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2::
# 1059 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
# 1060 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1062 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_2
# 1064 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_3
# 1066 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_4
# 1068 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_5
# 1070 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_6
# 1072 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_7
# 1075 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_2:
# 1063 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_3:
# 1065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_4:
# 1067 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_5:
# 1069 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_6:
# 1071 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2_7:
# 1073 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1::
# 1081 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
# 1082 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1084 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_2
# 1087 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_3
# 1090 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_4
# 1093 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_5
# 1096 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_6
# 1099 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_7
# 1101 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_8
# 1104 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_2:
# 1085 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ERUPTION, FALSE, FALSE, FALSE
# 1086 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_3:
# 1088 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1089 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_4:
# 1091 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 84, 0, 252, 172, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 1092 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_5:
# 1094 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_BOLD, 2, 0, 252, 0, 252, 0, 0, 4, 31, 0, 31, 8, 31, 31, MOVE_SPIKY_SHIELD, MOVE_CRAFTY_SHIELD, MOVE_FOLLOW_ME, MOVE_DARK_VOID, FALSE, FALSE, FALSE
# 1095 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_6:
# 1097 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_TAILWIND, MOVE_QUICK_GUARD, FALSE, FALSE, FALSE
# 1098 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_7:
# 1100 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1_8:
# 1102 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2::
# 1110 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2
# 1111 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1113 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_2
# 1116 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_3
# 1118 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_4
# 1121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_2:
# 1114 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1115 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_3:
# 1117 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2_4:
# 1119 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1::
# 1127 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
# 1128 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1130 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_2
# 1133 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_3
# 1136 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_4
# 1139 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_5
# 1142 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_6
# 1145 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_7
# 1147 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_8
# 1150 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_2:
# 1131 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_COBA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 116, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1132 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_3:
# 1134 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_SAFEGUARD, FALSE, FALSE, FALSE
# 1135 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_4:
# 1137 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INFERNAPE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_QUICK_GUARD, FALSE, FALSE, FALSE
# 1138 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_5:
# 1140 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 204, 44, 52, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1141 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_6:
# 1143 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_HASTY, 0, 1, 36, 84, 0, 252, 116, 20, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1144 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_7:
# 1146 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1_8:
# 1148 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2::
# 1156 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2
# 1157 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1159 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_2
# 1162 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_3
# 1164 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_4
# 1167 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_2:
# 1160 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 44, 164, 68, 28, 31, 0, 31, 31, 31, 31, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1161 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_3:
# 1163 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2_4:
# 1165 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1::
# 1173 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
# 1174 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1176 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_2
# 1179 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_3
# 1182 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_4
# 1185 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_5
# 1188 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_6
# 1191 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_7
# 1193 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_8
# 1196 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_2:
# 1177 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_COBA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 31, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GRASS_KNOT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1178 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_3:
# 1180 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_SAFEGUARD, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1181 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_4:
# 1183 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 28, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1184 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_5:
# 1186 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 212, 252, 4, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_SUPER_FANG, FALSE, FALSE, FALSE
# 1187 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_6:
# 1189 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 84, 0, 172, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DARK_VOID, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_FINAL_GAMBIT, FALSE, FALSE, FALSE
# 1190 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_7:
# 1192 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1_8:
# 1194 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2::
# 1202 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2
# 1203 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1205 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_2
# 1208 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_3
# 1210 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_4
# 1213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_2:
# 1206 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1207 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_3:
# 1209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2_4:
# 1211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1::
# 1219 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
# 1220 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1222 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_2
# 1225 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_3
# 1228 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_4
# 1231 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_5
# 1234 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_6
# 1237 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_7
# 1239 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_8
# 1242 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_2:
# 1223 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ERUPTION, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1224 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_3:
# 1226 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_JUMPLUFF, 65, ITEM_WIDE_LENS, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 252, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_RAGE_POWDER, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1227 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_4:
# 1229 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, FALSE, FALSE, FALSE
# 1230 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_5:
# 1232 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1233 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_6:
# 1235 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
# 1236 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_7:
# 1238 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1_8:
# 1240 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2::
# 1248 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2
# 1249 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1251 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_2
# 1254 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_3
# 1256 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_4
# 1259 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_2:
# 1252 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_DARK_PULSE, MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1253 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_3:
# 1255 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2_4:
# 1257 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1::
# 1265 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
# 1266 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1268 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_2
# 1271 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_3
# 1274 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_4
# 1277 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_5
# 1280 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_6
# 1283 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_7
# 1285 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_8
# 1288 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_2:
# 1269 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DIALGA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 76, 4, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_DRAGON_PULSE, MOVE_THUNDER, FALSE, FALSE, FALSE
# 1270 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_3:
# 1272 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOURGEIST_SUPER, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 164, 92, 76, 0, 4, 172, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_BULLET_SEED, MOVE_DESTINY_BOND, FALSE, FALSE, FALSE
# 1273 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_4:
# 1275 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 188, 0, 244, 0, 76, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 1276 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_5:
# 1278 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_EXPLOSION, FALSE, FALSE, FALSE
# 1279 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_6:
# 1281 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_SPORT_BALL, NATURE_BRAVE, 1, 0, 252, 252, 0, 0, 0, 4, 31, 31, 31, 11, 31, 31, MOVE_PROTECT, MOVE_FIRE_FANG, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, FALSE, FALSE, FALSE
# 1282 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_7:
# 1284 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1_8:
# 1286 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2::
# 1294 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2
# 1295 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1297 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_2
# 1300 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_3
# 1302 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_4
# 1305 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_2:
# 1298 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 16, 252, 232, 4, 31, 31, 31, 31, 31, 31, MOVE_TAUNT, MOVE_SKY_DROP, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 1299 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_3:
# 1301 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2_4:
# 1303 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1::
# 1311 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
# 1312 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1314 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_2
# 1317 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_3
# 1320 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_4
# 1323 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_5
# 1326 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_6
# 1329 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_7
# 1331 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_8
# 1334 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_2:
# 1315 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SAFEGUARD, MOVE_SKILL_SWAP, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 1316 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_3:
# 1318 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 252, 4, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH, FALSE, FALSE, FALSE
# 1319 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_4:
# 1321 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 1322 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_5:
# 1324 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 116, 0, 140, 236, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_WATER_SPOUT, FALSE, FALSE, FALSE
# 1325 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_6:
# 1327 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 6, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1328 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_7:
# 1330 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1_8:
# 1332 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2::
# 1340 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2
# 1341 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1343 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_2
# 1346 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_3
# 1348 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_4
# 1351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_2:
# 1344 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 1345 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_3:
# 1347 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2_4:
# 1349 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1::
# 1357 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
# 1358 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1360 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_2
# 1363 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_3
# 1366 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_4
# 1369 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_5
# 1372 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_6
# 1375 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_7
# 1377 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_8
# 1380 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_2:
# 1361 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SAFEGUARD, MOVE_SKILL_SWAP, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 1362 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_3:
# 1364 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_HEX, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1365 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_4:
# 1367 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1368 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_5:
# 1370 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SUCKER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1371 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_6:
# 1373 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYUREM_WHITE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_DRAGON_PULSE, MOVE_BLIZZARD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 1374 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_7:
# 1376 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1_8:
# 1378 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2::
# 1386 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2
# 1387 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1389 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_2
# 1392 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_3
# 1394 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_4
# 1397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_2:
# 1390 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_MENTAL_HERB, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 252, 0, 4, 0, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_GRAVITY, MOVE_QUASH, FALSE, FALSE, FALSE
# 1391 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_3:
# 1393 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2_4:
# 1395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1::
# 1403 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
# 1404 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1406 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_2
# 1409 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_3
# 1412 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_4
# 1415 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_5
# 1418 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_6
# 1421 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_7
# 1423 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_8
# 1426 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_2:
# 1407 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_SAFEGUARD, FALSE, FALSE, FALSE
# 1408 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_3:
# 1410 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 92, 0, 20, 220, 172, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1411 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_4:
# 1413 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HITMONTOP, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 132, 76, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_WIDE_GUARD, MOVE_CLOSE_COMBAT, MOVE_FEINT, FALSE, FALSE, FALSE
# 1414 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_5:
# 1416 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 204, 44, 52, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1417 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_6:
# 1419 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 36, 0, 204, 180, 20, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 1420 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_7:
# 1422 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1_8:
# 1424 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2::
# 1432 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2
# 1433 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1435 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_2
# 1438 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_3
# 1440 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_4
# 1443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_2:
# 1436 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1437 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_3:
# 1439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2_4:
# 1441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1::
# 1449 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
# 1450 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1452 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_2
# 1455 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_3
# 1458 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_4
# 1461 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_5
# 1464 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_6
# 1467 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_7
# 1469 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_8
# 1472 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_2:
# 1453 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 1454 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_3:
# 1456 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1457 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_4:
# 1459 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 1460 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_5:
# 1462 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_DRACO_METEOR, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1463 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_6:
# 1465 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_RELAXED, 2, 0, 252, 0, 252, 0, 0, 4, 31, 0, 31, 29, 31, 31, MOVE_DARK_VOID, MOVE_FOLLOW_ME, MOVE_CRAFTY_SHIELD, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 1466 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_7:
# 1468 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1_8:
# 1470 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2::
# 1478 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2
# 1479 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1481 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_2
# 1484 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_3
# 1486 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_4
# 1489 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_2:
# 1482 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1483 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_3:
# 1485 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2_4:
# 1487 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1::
# 1495 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
# 1496 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1498 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_2
# 1500 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_3
# 1502 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_4
# 1504 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_5
# 1507 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_2:
# 1499 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_3:
# 1501 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_4:
# 1503 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1_5:
# 1505 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1::
# 1513 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
# 1514 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1516 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_2
# 1518 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_3
# 1520 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_4
# 1522 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_5
# 1524 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_6
# 1526 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_7
# 1528 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_8
# 1531 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_2:
# 1517 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_3:
# 1519 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_4:
# 1521 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_5:
# 1523 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_6:
# 1525 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_7:
# 1527 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_8:
# 1529 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2::
# 1537 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
# 1538 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1540 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_2
# 1542 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_3
# 1544 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_4
# 1546 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_5
# 1548 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_6
# 1550 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_7
# 1552 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_8
# 1555 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_2:
# 1541 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_3:
# 1543 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_4:
# 1545 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_5:
# 1547 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_6:
# 1549 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_7:
# 1551 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_8:
# 1553 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3::
# 1561 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
# 1562 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1564 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_2
# 1566 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_3
# 1568 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_4
# 1571 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_2:
# 1565 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_3:
# 1567 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_4:
# 1569 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1::
# 1577 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
# 1578 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1580 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_2
# 1582 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_3
# 1584 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_4
# 1586 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_5
# 1588 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_6
# 1591 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_2:
# 1581 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_3:
# 1583 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_4:
# 1585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_5:
# 1587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_6:
# 1589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1::
# 1597 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
# 1598 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1600 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_2
# 1603 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_3
# 1606 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_4
# 1609 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_5
# 1612 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_6
# 1615 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_7
# 1617 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_8
# 1620 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_2:
# 1601 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 60, 0, 252, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1602 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_3:
# 1604 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 60, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1605 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_4:
# 1607 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
# 1608 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_5:
# 1610 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 50, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 116, 204, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, FALSE, FALSE, FALSE
# 1611 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_6:
# 1613 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1614 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_7:
# 1616 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1_8:
# 1618 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2::
# 1626 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2
# 1627 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1629 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_2
# 1632 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_3
# 1634 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_4
# 1637 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_2:
# 1630 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 60, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1631 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_3:
# 1633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2_4:
# 1635 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1::
# 1643 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
# 1644 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1646 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_2
# 1649 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_3
# 1652 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_4
# 1655 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_5
# 1658 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_6
# 1661 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_7
# 1663 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_8
# 1666 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_2:
# 1647 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1648 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_3:
# 1650 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 36, 4, 76, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
# 1651 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_4:
# 1653 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 1654 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_5:
# 1656 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
# 1657 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_6:
# 1659 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1660 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_7:
# 1662 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1_8:
# 1664 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2::
# 1672 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2
# 1673 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1675 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_2
# 1678 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_3
# 1680 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_4
# 1683 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_2:
# 1676 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1677 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_3:
# 1679 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2_4:
# 1681 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1::
# 1689 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
# 1690 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1692 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_2
# 1695 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_3
# 1698 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_4
# 1701 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_5
# 1704 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_6
# 1707 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_7
# 1709 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_8
# 1712 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_2:
# 1693 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 36, 4, 76, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
# 1694 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_3:
# 1696 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1697 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_4:
# 1699 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
# 1700 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_5:
# 1702 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1703 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_6:
# 1705 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1706 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_7:
# 1708 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1_8:
# 1710 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2::
# 1718 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2
# 1719 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1721 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_2
# 1724 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_3
# 1726 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_4
# 1729 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_2:
# 1722 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 52, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_ROOST, FALSE, FALSE, FALSE
# 1723 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_3:
# 1725 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2_4:
# 1727 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1::
# 1735 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
# 1736 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1738 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_2
# 1741 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_3
# 1744 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_4
# 1747 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_5
# 1750 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_6
# 1753 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_7
# 1755 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_8
# 1758 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_2:
# 1739 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BLACEPHALON, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 244, 252, 4, 31, 0, 30, 31, 31, 31, MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
# 1740 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_3:
# 1742 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 228, 4, 148, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1743 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_4:
# 1745 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 244, 140, 60, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 1746 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_5:
# 1748 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LOPUNNY, 65, ITEM_LOPUNNITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_RETURN, MOVE_HIGH_JUMP_KICK, MOVE_ENCORE, FALSE, FALSE, FALSE
# 1749 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_6:
# 1751 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1752 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_7:
# 1754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1_8:
# 1756 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2::
# 1764 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2
# 1765 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1767 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_2
# 1770 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_3
# 1772 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_4
# 1775 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_2:
# 1768 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 44, 60, 156, 4, 31, 0, 30, 31, 31, 31, MOVE_TAILWIND, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_ROAR, FALSE, FALSE, FALSE
# 1769 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_3:
# 1771 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2_4:
# 1773 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1::
# 1781 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
# 1782 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1784 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_2
# 1787 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_3
# 1790 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_4
# 1793 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_5
# 1796 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_6
# 1799 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_7
# 1801 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_8
# 1804 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_2:
# 1785 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1786 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_3:
# 1788 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_TAUNT, MOVE_RECYCLE, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1789 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_4:
# 1791 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1792 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_5:
# 1794 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 1795 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_6:
# 1797 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
# 1798 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_7:
# 1800 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1_8:
# 1802 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2::
# 1810 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2
# 1811 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1813 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_2
# 1816 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_3
# 1818 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_4
# 1821 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_2:
# 1814 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1815 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_3:
# 1817 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2_4:
# 1819 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1::
# 1827 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
# 1828 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1830 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_2
# 1833 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_3
# 1836 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_4
# 1839 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_5
# 1842 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_6
# 1845 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_7
# 1847 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_8
# 1850 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_2:
# 1831 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_TICKLE, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1832 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_3:
# 1834 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1835 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_4:
# 1837 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 31, 31, 31, 31, 31, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1838 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_5:
# 1840 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 252, 196, 0, 0, 0, 60, 31, 31, 31, 18, 31, 31, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1841 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_6:
# 1843 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 252, 0, 148, 52, 28, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1844 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_7:
# 1846 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1_8:
# 1848 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2::
# 1856 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2
# 1857 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1859 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_2
# 1862 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_3
# 1864 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_4
# 1867 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_2:
# 1860 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1861 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_3:
# 1863 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2_4:
# 1865 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1::
# 1873 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
# 1874 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1876 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_2
# 1879 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_3
# 1882 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_4
# 1885 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_5
# 1888 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_6
# 1891 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_7
# 1893 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_8
# 1896 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_2:
# 1877 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 116, 0, 0, 252, 31, 0, 31, 4, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1878 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_3:
# 1880 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1881 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_4:
# 1883 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1884 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_5:
# 1886 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1887 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_6:
# 1889 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1890 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_7:
# 1892 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1_8:
# 1894 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2::
# 1902 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2
# 1903 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1905 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_2
# 1908 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_3
# 1910 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_4
# 1913 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_2:
# 1906 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 36, 20, 28, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1907 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_3:
# 1909 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2_4:
# 1911 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1::
# 1919 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
# 1920 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1922 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_2
# 1925 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_3
# 1928 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_4
# 1931 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_5
# 1934 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_6
# 1937 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_7
# 1939 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_8
# 1942 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_2:
# 1923 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 180, 116, 36, 20, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_ACROBATICS, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1924 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_3:
# 1926 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 1927 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_4:
# 1929 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 0, 4, 116, 204, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, FALSE, FALSE, FALSE
# 1930 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_5:
# 1932 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1933 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_6:
# 1935 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1936 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_7:
# 1938 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1_8:
# 1940 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2::
# 1948 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2
# 1949 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1951 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_2
# 1954 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_3
# 1956 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_4
# 1959 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_2:
# 1952 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 60, 0, 252, 60, 4, 132, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_OVERHEAT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1953 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_3:
# 1955 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2_4:
# 1957 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1::
# 1965 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
# 1966 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1968 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_2
# 1970 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_3
# 1972 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_4
# 1974 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_5
# 1977 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_2:
# 1969 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_3:
# 1971 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_4:
# 1973 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_5:
# 1975 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1::
# 1983 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
# 1984 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 1986 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_2
# 1989 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_3
# 1992 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_4
# 1995 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_5
# 1998 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_6
# 2001 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_7
# 2003 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_8
# 2006 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_2:
# 1987 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DEWGONG, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 148, 44, 4, 92, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_ICY_WIND, FALSE, FALSE, FALSE
# 1988 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_3:
# 1990 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 172, 0, 4, 252, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1991 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_4:
# 1993 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 124, 0, 0, 132, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1994 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_5:
# 1996 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1997 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_6:
# 1999 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_RASH, 1, 1, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_POISON_JAB, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2000 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_7:
# 2002 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1_8:
# 2004 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2::
# 2012 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2
# 2013 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2015 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_2
# 2018 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_3
# 2020 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_4
# 2023 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_2:
# 2016 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 252, 4, 4, 228, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_SNARL, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2017 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_3:
# 2019 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2_4:
# 2021 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1::
# 2029 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
# 2030 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2032 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_2
# 2035 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_3
# 2038 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_4
# 2041 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_5
# 2044 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_6
# 2047 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_7
# 2049 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_8
# 2052 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_2:
# 2033 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_FRUSTRATION, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2034 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_3:
# 2036 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 236, 0, 196, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_FOLLOW_ME, MOVE_ICY_WIND, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2037 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_4:
# 2039 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2040 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_5:
# 2042 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2043 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_6:
# 2045 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2046 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_7:
# 2048 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1_8:
# 2050 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2::
# 2058 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2
# 2059 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2061 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_2
# 2064 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_3
# 2066 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_4
# 2069 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_2:
# 2062 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 108, 140, 4, 244, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_STONE_EDGE, FALSE, FALSE, FALSE
# 2063 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_3:
# 2065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2_4:
# 2067 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1::
# 2075 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
# 2076 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2078 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_2
# 2081 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_3
# 2084 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_4
# 2087 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_5
# 2090 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_6
# 2093 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_7
# 2095 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_8
# 2098 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_2:
# 2079 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 4, 100, 4, 148, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_TOXIC, FALSE, FALSE, FALSE
# 2080 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_3:
# 2082 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, FALSE, FALSE, FALSE
# 2083 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_4:
# 2085 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 30, 30, 31, 31, 31, MOVE_EARTH_POWER, MOVE_U_TURN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 2086 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_5:
# 2088 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 92, 92, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SCALD, MOVE_RECOVER, FALSE, FALSE, FALSE
# 2089 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_6:
# 2091 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SWORDS_DANCE, FALSE, FALSE, FALSE
# 2092 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_7:
# 2094 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1_8:
# 2096 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2::
# 2104 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2
# 2105 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2107 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_2
# 2110 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_3
# 2112 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_4
# 2115 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_2:
# 2108 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
# 2109 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_3:
# 2111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2_4:
# 2113 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1::
# 2121 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
# 2122 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2124 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_2
# 2127 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_3
# 2130 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_4
# 2133 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_5
# 2136 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_6
# 2139 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_7
# 2141 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_8
# 2144 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_2:
# 2125 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 228, 0, 180, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_CLEAR_SMOG, MOVE_RAGE_POWDER, MOVE_SLUDGE_BOMB, FALSE, FALSE, FALSE
# 2126 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_3:
# 2128 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 220, 20, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2129 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_4:
# 2131 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2132 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_5:
# 2134 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2135 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_6:
# 2137 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
# 2138 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_7:
# 2140 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1_8:
# 2142 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2::
# 2150 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2
# 2151 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2153 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_2
# 2156 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_3
# 2158 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_4
# 2161 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_2:
# 2154 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2155 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_3:
# 2157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2_4:
# 2159 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1::
# 2167 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
# 2168 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2170 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_2
# 2173 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_3
# 2176 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_4
# 2179 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_5
# 2182 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_6
# 2185 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_7
# 2187 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_8
# 2190 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_2:
# 2171 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 60, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 52, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_SUNNY_DAY, MOVE_ICY_WIND, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 2172 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_3:
# 2174 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 60, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 68, 20, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2175 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_4:
# 2177 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 50, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 220, 4, 20, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 2178 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_5:
# 2180 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 60, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 2181 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_6:
# 2183 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 60, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2184 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_7:
# 2186 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1_8:
# 2188 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2::
# 2196 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2
# 2197 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2199 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_2
# 2202 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_3
# 2204 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_4
# 2207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_2:
# 2200 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 60, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2201 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_3:
# 2203 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2_4:
# 2205 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1::
# 2213 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
# 2214 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2216 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_2
# 2219 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_3
# 2222 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_4
# 2225 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_5
# 2228 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_6
# 2231 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_7
# 2233 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_8
# 2236 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_2:
# 2217 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, FALSE, FALSE, FALSE
# 2218 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_3:
# 2220 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 244, 204, 44, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2221 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_4:
# 2223 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, FALSE, FALSE, FALSE
# 2224 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_5:
# 2226 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 12, 84, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 2227 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_6:
# 2229 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, FALSE, FALSE, FALSE
# 2230 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_7:
# 2232 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1_8:
# 2234 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2::
# 2242 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2
# 2243 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2245 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_2
# 2248 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_3
# 2250 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_4
# 2253 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_2:
# 2246 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 60, 52, 44, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2247 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_3:
# 2249 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2_4:
# 2251 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1::
# 2259 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
# 2260 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2262 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_2
# 2264 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_3
# 2266 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_4
# 2268 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_5
# 2270 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_6
# 2272 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_7
# 2274 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_8
# 2277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_2:
# 2263 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_3:
# 2265 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_4:
# 2267 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_5:
# 2269 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_6:
# 2271 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_7:
# 2273 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_8:
# 2275 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2::
# 2283 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
# 2284 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2286 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_2
# 2288 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_3
# 2290 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_4
# 2293 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_2:
# 2287 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_3:
# 2289 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_4:
# 2291 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1::
# 2299 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
# 2300 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2302 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_2
# 2305 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_3
# 2308 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_4
# 2311 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_5
# 2314 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_6
# 2317 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_7
# 2319 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_8
# 2322 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_2:
# 2303 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2304 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_3:
# 2306 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2307 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_4:
# 2309 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2310 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_5:
# 2312 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 2313 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_6:
# 2315 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
# 2316 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_7:
# 2318 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1_8:
# 2320 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2::
# 2328 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2
# 2329 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2331 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_2
# 2334 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_3
# 2336 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_4
# 2339 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_2:
# 2332 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2333 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_3:
# 2335 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2_4:
# 2337 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1::
# 2345 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
# 2346 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2348 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_2
# 2351 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_3
# 2354 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_4
# 2357 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_5
# 2360 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_6
# 2363 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_7
# 2365 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_8
# 2368 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_2:
# 2349 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CAMERUPT, 65, ITEM_CAMERUPTITE, ITEM_SPORT_BALL, NATURE_QUIET, 1, 1, 252, 0, 4, 0, 252, 0, 31, 0, 31, 0, 31, 31, MOVE_HEAT_WAVE, MOVE_NATURE_POWER, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2350 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_3:
# 2352 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 2353 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_4:
# 2355 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_REUNICLUS, 65, ITEM_PSYCHIUM_Z, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 172, 0, 84, 0, 164, 84, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2356 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_5:
# 2358 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 220, 252, 0, 0, 0, 36, 31, 31, 17, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2359 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_6:
# 2361 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STARAPTOR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 252, 0, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FINAL_GAMBIT, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 2362 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_7:
# 2364 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1_8:
# 2366 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2::
# 2374 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2
# 2375 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2377 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_2
# 2380 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_3
# 2382 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_4
# 2385 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_2:
# 2378 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 92, 4, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2379 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_3:
# 2381 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2_4:
# 2383 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1::
# 2391 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
# 2392 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2394 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_2
# 2396 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_3
# 2398 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_4
# 2400 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_5
# 2402 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_6
# 2405 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_2:
# 2395 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_3:
# 2397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_4:
# 2399 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_5:
# 2401 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_6:
# 2403 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1::
# 2411 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
# 2412 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2414 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_2
# 2417 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_3
# 2420 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_4
# 2423 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_5
# 2426 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_6
# 2429 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_7
# 2431 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_8
# 2434 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_2:
# 2415 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2416 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_3:
# 2418 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_DETECT, FALSE, FALSE, FALSE
# 2419 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_4:
# 2421 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 2422 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_5:
# 2424 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 2425 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_6:
# 2427 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2428 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_7:
# 2430 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1_8:
# 2432 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2::
# 2440 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2
# 2441 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2443 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_2
# 2446 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_3
# 2448 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_4
# 2451 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_2:
# 2444 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 228, 4, 20, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2445 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_3:
# 2447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2_4:
# 2449 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1::
# 2457 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
# 2458 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2460 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_2
# 2463 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_3
# 2466 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_4
# 2469 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_5
# 2472 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_6
# 2475 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_7
# 2477 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_8
# 2480 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_2:
# 2461 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ACCELGOR, 50, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 2, 1, 252, 0, 0, 252, 4, 0, 31, 0, 31, 31, 31, 31, MOVE_ACID_SPRAY, MOVE_FINAL_GAMBIT, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2462 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_3:
# 2464 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 124, 0, 188, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2465 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_4:
# 2467 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 68, 108, 4, 252, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2468 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_5:
# 2470 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MIMIKYU, 50, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TAUNT, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 2471 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_6:
# 2473 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 50, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_FRUSTRATION, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2474 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_7:
# 2476 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1_8:
# 2478 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2::
# 2486 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2
# 2487 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2489 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_2
# 2492 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_3
# 2494 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_4
# 2497 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_2:
# 2490 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 50, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 108, 0, 76, 228, 84, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 2491 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_3:
# 2493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2_4:
# 2495 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1::
# 2503 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
# 2504 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2506 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_2
# 2509 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_3
# 2512 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_4
# 2515 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_5
# 2518 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_6
# 2521 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_7
# 2523 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_8
# 2526 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_2:
# 2507 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 4, 108, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 2508 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_3:
# 2510 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 4, 188, 84, 4, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2511 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_4:
# 2513 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DRIFBLIM, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 180, 92, 116, 116, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_TAILWIND, MOVE_HAZE, MOVE_WILL_O_WISP, FALSE, FALSE, FALSE
# 2514 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_5:
# 2516 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2517 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_6:
# 2519 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_PHEROMOSA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_ICE_BEAM, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_POISON_JAB, FALSE, FALSE, FALSE
# 2520 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_7:
# 2522 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1_8:
# 2524 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2::
# 2532 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2
# 2533 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2535 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_2
# 2538 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_3
# 2540 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_4
# 2543 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_2:
# 2536 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2537 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_3:
# 2539 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2_4:
# 2541 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1::
# 2549 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
# 2550 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2552 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_2
# 2555 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_3
# 2558 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_4
# 2561 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_5
# 2564 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_6
# 2567 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_7
# 2569 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_8
# 2572 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_2:
# 2553 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 84, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_CLEAR_SMOG, MOVE_RAGE_POWDER, MOVE_ENERGY_BALL, FALSE, FALSE, FALSE
# 2554 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_3:
# 2556 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2557 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_4:
# 2559 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 252, 0, 220, 20, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2560 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_5:
# 2562 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 180, 0, 116, 28, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2563 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_6:
# 2565 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2566 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_7:
# 2568 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1_8:
# 2570 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2::
# 2578 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2
# 2579 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2581 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_2
# 2584 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_3
# 2586 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_4
# 2589 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_2:
# 2582 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2583 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_3:
# 2585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2_4:
# 2587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1::
# 2595 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
# 2596 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2598 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_2
# 2601 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_3
# 2604 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_4
# 2607 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_5
# 2610 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_6
# 2613 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_7
# 2615 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_8
# 2618 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_2:
# 2599 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2600 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_3:
# 2602 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 60, 0, 68, 196, 132, 52, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DISABLE, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2603 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_4:
# 2605 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2606 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_5:
# 2608 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 252, 0, 148, 52, 28, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2609 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_6:
# 2611 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 2, 1, 252, 4, 92, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_DRAIN_PUNCH, MOVE_DETECT, FALSE, FALSE, FALSE
# 2612 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_7:
# 2614 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1_8:
# 2616 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2::
# 2624 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2
# 2625 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2627 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_2
# 2630 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_3
# 2632 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_4
# 2635 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_2:
# 2628 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2629 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_3:
# 2631 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2_4:
# 2633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1::
# 2641 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
# 2642 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2644 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_2
# 2646 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_3
# 2648 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_4
# 2650 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_5
# 2652 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_6
# 2654 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_7
# 2657 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_2:
# 2645 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_3:
# 2647 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_4:
# 2649 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_5:
# 2651 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_6:
# 2653 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_7:
# 2655 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1::
# 2663 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
# 2664 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2666 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_2
# 2669 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_3
# 2672 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_4
# 2675 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_5
# 2678 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_6
# 2681 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_7
# 2683 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_8
# 2686 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_2:
# 2667 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 50, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 228, 20, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_SUNNY_DAY, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 2668 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_3:
# 2670 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 50, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 68, 20, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2671 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_4:
# 2673 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 50, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 220, 4, 20, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 2674 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_5:
# 2676 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 2677 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_6:
# 2679 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 50, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2680 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_7:
# 2682 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1_8:
# 2684 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2::
# 2692 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2
# 2693 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2695 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_2
# 2698 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_3
# 2700 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_4
# 2703 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_2:
# 2696 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 50, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2697 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_3:
# 2699 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2_4:
# 2701 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1::
# 2709 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
# 2710 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2712 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_2
# 2715 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_3
# 2718 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_4
# 2721 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_5
# 2724 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_6
# 2727 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_7
# 2729 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_8
# 2732 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_2:
# 2713 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 2714 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_3:
# 2716 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 124, 0, 188, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2717 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_4:
# 2719 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 236, 0, 28, 4, 20, 220, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_ICY_WIND, MOVE_PSYSHOCK, FALSE, FALSE, FALSE
# 2720 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_5:
# 2722 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 52, 244, 28, 116, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ROAR, FALSE, FALSE, FALSE
# 2723 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_6:
# 2725 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 28, 196, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 2726 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_7:
# 2728 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1_8:
# 2730 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2::
# 2738 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2
# 2739 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2741 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_2
# 2744 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_3
# 2746 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_4
# 2749 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_2:
# 2742 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2743 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_3:
# 2745 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2_4:
# 2747 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1::
# 2755 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
# 2756 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2758 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_2
# 2761 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_3
# 2764 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_4
# 2767 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_5
# 2770 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_6
# 2773 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_7
# 2775 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_8
# 2778 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_2:
# 2759 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 1, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, FALSE, FALSE, FALSE
# 2760 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_3:
# 2762 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 212, 228, 44, 20, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_ICE_PUNCH, MOVE_LOW_KICK, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 2763 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_4:
# 2765 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 220, 0, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 2766 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_5:
# 2768 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SUICUNE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 4, 20, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SNARL, MOVE_SCALD, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 2769 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_6:
# 2771 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, FALSE, FALSE, FALSE
# 2772 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_7:
# 2774 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1_8:
# 2776 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2::
# 2784 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2
# 2785 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2787 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_2
# 2790 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_3
# 2792 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_4
# 2795 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_2:
# 2788 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 84, 0, 44, 124, 244, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
# 2789 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_3:
# 2791 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2_4:
# 2793 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1::
# 2801 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
# 2802 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2804 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_2
# 2807 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_3
# 2810 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_4
# 2813 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_5
# 2816 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_6
# 2819 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_7
# 2821 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_8
# 2824 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_2:
# 2805 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 2806 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_3:
# 2808 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 52, 244, 28, 116, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2809 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_4:
# 2811 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 2812 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_5:
# 2814 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 20, 28, 116, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2815 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_6:
# 2817 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 100, 0, 4, 188, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2818 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_7:
# 2820 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1_8:
# 2822 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2::
# 2830 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2
# 2831 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2833 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_2
# 2836 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_3
# 2838 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_4
# 2841 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_2:
# 2834 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 36, 20, 108, 92, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_TAILWIND, MOVE_ROOST, FALSE, FALSE, FALSE
# 2835 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_3:
# 2837 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2_4:
# 2839 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1::
# 2847 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
# 2848 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2850 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_2
# 2852 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_3
# 2854 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_4
# 2856 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_5
# 2858 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_6
# 2861 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_2:
# 2851 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_3:
# 2853 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_4:
# 2855 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_5:
# 2857 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1_6:
# 2859 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1::
# 2867 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
# 2868 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2870 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_2
# 2872 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_3
# 2874 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_4
# 2876 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_5
# 2878 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_6
# 2880 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_7
# 2882 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_8
# 2885 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_2:
# 2871 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_3:
# 2873 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_4:
# 2875 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_5:
# 2877 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_6:
# 2879 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_7:
# 2881 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_8:
# 2883 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2::
# 2891 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
# 2892 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2894 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_2
# 2896 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_3
# 2898 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_4
# 2900 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_5
# 2903 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_2:
# 2895 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_3:
# 2897 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_4:
# 2899 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_5:
# 2901 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1::
# 2909 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
# 2910 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2912 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_2
# 2915 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_3
# 2918 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_4
# 2921 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_5
# 2924 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_6
# 2927 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_7
# 2929 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_8
# 2932 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_2:
# 2913 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 220, 60, 4, 84, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2914 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_3:
# 2916 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 2917 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_4:
# 2919 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 196, 252, 0, 0, 0, 60, 31, 31, 16, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 2920 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_5:
# 2922 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2923 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_6:
# 2925 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2926 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_7:
# 2928 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1_8:
# 2930 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2::
# 2938 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2
# 2939 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2941 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_2
# 2944 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_3
# 2946 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_4
# 2949 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_2:
# 2942 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 4, 20, 20, 228, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_FOUL_PLAY, FALSE, FALSE, FALSE
# 2943 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_3:
# 2945 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2_4:
# 2947 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1::
# 2955 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
# 2956 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2958 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_2
# 2961 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_3
# 2964 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_4
# 2967 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_5
# 2970 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_6
# 2973 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_7
# 2975 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_8
# 2978 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_2:
# 2959 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 2960 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_3:
# 2962 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SOLGALEO, 65, ITEM_SOLGANIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 180, 12, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_SUNSTEEL_STRIKE, MOVE_SUPERPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2963 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_4:
# 2965 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 60, 156, 4, 44, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, MOVE_SWAGGER, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 2966 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_5:
# 2968 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 2969 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_6:
# 2971 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2972 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_7:
# 2974 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1_8:
# 2976 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2::
# 2984 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2
# 2985 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 2987 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_2
# 2990 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_3
# 2992 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_4
# 2995 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_2:
# 2988 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZYGARDE, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 52, 156, 4, 68, 0, 228, 31, 31, 31, 31, 31, 31, MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_COIL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 2989 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_3:
# 2991 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2_4:
# 2993 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1::
# 3001 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
# 3002 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3004 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_2
# 3007 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_3
# 3010 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_4
# 3013 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_5
# 3016 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_6
# 3019 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_7
# 3021 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_8
# 3024 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_2:
# 3005 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ACCELGOR, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 2, 0, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_STRUGGLE_BUG, MOVE_FINAL_GAMBIT, MOVE_ACID_SPRAY, MOVE_ENCORE, FALSE, FALSE, FALSE
# 3006 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_3:
# 3008 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 212, 28, 4, 84, 0, 180, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_ROAR, FALSE, FALSE, FALSE
# 3009 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_4:
# 3011 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 148, 0, 4, 116, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, FALSE, FALSE, FALSE
# 3012 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_5:
# 3014 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 196, 0, 12, 68, 4, 228, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_FOCUS_BLAST, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
# 3015 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_6:
# 3017 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAICHU_ALOLAN, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 36, 4, 188, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ALLY_SWITCH, MOVE_NUZZLE, MOVE_FLING, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3018 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_7:
# 3020 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1_8:
# 3022 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2::
# 3030 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2
# 3031 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3033 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_2
# 3036 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_3
# 3038 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_4
# 3041 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_2:
# 3034 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 68, 0, 12, 220, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, FALSE, FALSE, FALSE
# 3035 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_3:
# 3037 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2_4:
# 3039 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1::
# 3047 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
# 3048 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3050 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_2
# 3053 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_3
# 3056 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_4
# 3059 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_5
# 3062 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_6
# 3065 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_7
# 3067 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_8
# 3070 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_2:
# 3051 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FIRE_PUNCH, MOVE_STONE_EDGE, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, FALSE, FALSE, FALSE
# 3052 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_3:
# 3054 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 204, 0, 0, 60, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_SNARL, FALSE, FALSE, FALSE
# 3055 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_4:
# 3057 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_QUICK_GUARD, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 3058 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_5:
# 3060 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 36, 28, 4, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 3061 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_6:
# 3063 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 30, 30, 31, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, FALSE, FALSE, FALSE
# 3064 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_7:
# 3066 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1_8:
# 3068 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2::
# 3076 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2
# 3077 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3079 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_2
# 3082 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_3
# 3084 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_4
# 3087 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_2:
# 3080 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 188, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3081 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_3:
# 3083 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2_4:
# 3085 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1::
# 3093 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
# 3094 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3096 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_2
# 3098 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_3
# 3100 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_4
# 3102 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_5
# 3105 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_2:
# 3097 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_3:
# 3099 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_4:
# 3101 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_5:
# 3103 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1::
# 3111 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
# 3112 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3114 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_2
# 3117 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_3
# 3120 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_4
# 3123 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_5
# 3126 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_6
# 3129 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_7
# 3131 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_8
# 3134 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_2:
# 3115 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3116 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_3:
# 3118 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, FALSE, FALSE, FALSE
# 3119 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_4:
# 3121 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FOLLOW_ME, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 3122 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_5:
# 3124 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT, MOVE_RAIN_DANCE, FALSE, FALSE, FALSE
# 3125 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_6:
# 3127 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3128 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_7:
# 3130 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1_8:
# 3132 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2::
# 3140 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2
# 3141 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3143 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_2
# 3146 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_3
# 3148 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_4
# 3151 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_2:
# 3144 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3145 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_3:
# 3147 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2_4:
# 3149 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1::
# 3157 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
# 3158 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3160 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_2
# 3163 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_3
# 3166 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_4
# 3169 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_5
# 3172 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_6
# 3175 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_7
# 3177 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_8
# 3180 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_2:
# 3161 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 3162 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_3:
# 3164 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3165 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_4:
# 3167 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 52, 4, 252, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_SACRED_SWORD, FALSE, FALSE, FALSE
# 3168 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_5:
# 3170 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_THUNDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3171 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_6:
# 3173 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_TAUNT, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3174 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_7:
# 3176 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1_8:
# 3178 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2::
# 3186 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2
# 3187 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3189 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_2
# 3192 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_3
# 3194 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_4
# 3197 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_2:
# 3190 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3191 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_3:
# 3193 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2_4:
# 3195 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1::
# 3203 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
# 3204 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3206 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_2
# 3208 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_3
# 3210 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_4
# 3212 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_5
# 3214 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_6
# 3217 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_2:
# 3207 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_3:
# 3209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_4:
# 3211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_5:
# 3213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_6:
# 3215 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1::
# 3223 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
# 3224 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3226 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_2
# 3229 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_3
# 3232 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_4
# 3235 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_5
# 3238 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_6
# 3241 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_7
# 3243 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_8
# 3246 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_2:
# 3227 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 3228 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_3:
# 3230 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3231 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_4:
# 3233 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3234 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_5:
# 3236 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
# 3237 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_6:
# 3239 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 12, 100, 28, 132, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 3240 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_7:
# 3242 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1_8:
# 3244 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2::
# 3252 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2
# 3253 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3255 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_2
# 3258 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_3
# 3260 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_4
# 3263 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_2:
# 3256 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3257 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_3:
# 3259 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2_4:
# 3261 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1::
# 3269 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
# 3270 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3272 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_2
# 3275 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_3
# 3278 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_4
# 3281 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_5
# 3284 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_6
# 3287 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_7
# 3289 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_8
# 3292 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_2:
# 3273 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CROBAT, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 36, 0, 188, 252, 0, 32, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_HAZE, FALSE, FALSE, FALSE
# 3274 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_3:
# 3276 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3277 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_4:
# 3279 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3280 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_5:
# 3282 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 3283 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_6:
# 3285 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_FEINT, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 3286 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_7:
# 3288 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1_8:
# 3290 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2::
# 3298 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2
# 3299 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3301 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_2
# 3304 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_3
# 3306 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_4
# 3309 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_2:
# 3302 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3303 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_3:
# 3305 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2_4:
# 3307 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1::
# 3315 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
# 3316 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3318 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_2
# 3321 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_3
# 3324 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_4
# 3327 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_5
# 3330 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_6
# 3333 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_7
# 3335 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_8
# 3338 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_2:
# 3319 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 212, 0, 0, 60, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3320 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_3:
# 3322 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3323 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_4:
# 3325 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 2, 1, 36, 0, 0, 252, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_LOVELY_KISS, MOVE_WIDE_GUARD, MOVE_CRAFTY_SHIELD, FALSE, FALSE, FALSE
# 3326 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_5:
# 3328 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 4, 0, 0, 0, 252, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3329 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_6:
# 3331 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 36, 28, 4, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 3332 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_7:
# 3334 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1_8:
# 3336 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2::
# 3344 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2
# 3345 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3347 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_2
# 3350 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_3
# 3352 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_4
# 3355 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_2:
# 3348 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 188, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3349 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_3:
# 3351 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2_4:
# 3353 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1::
# 3361 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
# 3362 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3364 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_2
# 3367 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_3
# 3370 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_4
# 3373 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_5
# 3376 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_6
# 3379 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_7
# 3381 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_8
# 3384 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_2:
# 3365 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_GRASS_KNOT, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 3366 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_3:
# 3368 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 204, 0, 0, 60, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_ROAR, FALSE, FALSE, FALSE
# 3369 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_4:
# 3371 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 164, 0, 60, 244, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 3372 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_5:
# 3374 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3375 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_6:
# 3377 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 12, 0, 102, 212, 140, 44, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3378 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_7:
# 3380 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1_8:
# 3382 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2::
# 3390 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2
# 3391 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3393 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_2
# 3396 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_3
# 3398 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_4
# 3401 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_2:
# 3394 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 4, 0, 36, 228, 60, 180, 31, 31, 31, 31, 31, 31, MOVE_OBLIVION_WING, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_SNARL, FALSE, FALSE, FALSE
# 3395 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_3:
# 3397 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2_4:
# 3399 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1::
# 3407 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
# 3408 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3410 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_2
# 3412 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_3
# 3414 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_4
# 3416 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_5
# 3418 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_6
# 3420 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_7
# 3422 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_8
# 3425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_2:
# 3411 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_3:
# 3413 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_4:
# 3415 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_5:
# 3417 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_6:
# 3419 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_7:
# 3421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_8:
# 3423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2::
# 3431 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
# 3432 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3434 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_2
# 3436 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_3
# 3438 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_4
# 3440 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_5
# 3442 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_6
# 3444 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_7
# 3446 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_8
# 3449 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_2:
# 3435 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_3:
# 3437 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_4:
# 3439 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_5:
# 3441 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_6:
# 3443 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_7:
# 3445 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_8:
# 3447 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1::
# 3455 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
# 3456 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3458 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_2
# 3461 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_3
# 3464 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_4
# 3467 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_5
# 3470 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_6
# 3473 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_7
# 3475 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_8
# 3478 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_2:
# 3459 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CROBAT, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 36, 0, 188, 252, 0, 32, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_HAZE, FALSE, FALSE, FALSE
# 3460 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_3:
# 3462 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3463 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_4:
# 3465 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_SPELL_TAG, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3466 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_5:
# 3468 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 3469 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_6:
# 3471 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_FEINT, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 3472 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_7:
# 3474 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1_8:
# 3476 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2::
# 3484 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2
# 3485 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3487 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_2
# 3490 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_3
# 3492 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_4
# 3495 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_2:
# 3488 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3489 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_3:
# 3491 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2_4:
# 3493 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1::
# 3501 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
# 3502 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3504 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_2
# 3507 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_3
# 3510 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_4
# 3513 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_5
# 3516 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_6
# 3519 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_7
# 3521 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_8
# 3524 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_2:
# 3505 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 3506 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_3:
# 3508 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3509 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_4:
# 3511 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 3512 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_5:
# 3514 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 212, 0, 20, 252, 4, 20, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, MOVE_TAUNT, FALSE, FALSE, FALSE
# 3515 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_6:
# 3517 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3518 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_7:
# 3520 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1_8:
# 3522 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2::
# 3530 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2
# 3531 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3533 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_2
# 3536 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_3
# 3538 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_4
# 3541 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_2:
# 3534 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_BLACK_GLASSES, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 124, 76, 116, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3535 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_3:
# 3537 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2_4:
# 3539 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1::
# 3547 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
# 3548 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3550 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_2
# 3553 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_3
# 3556 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_4
# 3559 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_5
# 3562 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_6
# 3565 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_7
# 3567 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_8
# 3570 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_2:
# 3551 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 68, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3552 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_3:
# 3554 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 60, 4, 76, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 3555 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_4:
# 3557 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 3558 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_5:
# 3560 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_VOLT_SWITCH, MOVE_SKY_DROP, MOVE_BRAVE_BIRD, FALSE, FALSE, FALSE
# 3561 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_6:
# 3563 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3564 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_7:
# 3566 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1_8:
# 3568 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2::
# 3576 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2
# 3577 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3579 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_2
# 3582 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_3
# 3584 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_4
# 3587 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_2:
# 3580 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 172, 4, 4, 252, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 3581 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_3:
# 3583 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2_4:
# 3585 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1::
# 3593 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
# 3594 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3596 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_2
# 3599 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_3
# 3602 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_4
# 3605 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_5
# 3608 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_6
# 3611 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_7
# 3613 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_8
# 3616 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_2:
# 3597 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3598 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_3:
# 3600 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 100, 0, 4, 252, 140, 12, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_SCALD, FALSE, FALSE, FALSE
# 3601 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_4:
# 3603 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 44, 0, 0, 0, 212, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 3604 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_5:
# 3606 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_TAUNT, FALSE, FALSE, FALSE
# 3607 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_6:
# 3609 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_LOW_KICK, MOVE_FEINT, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3610 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_7:
# 3612 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1_8:
# 3614 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2::
# 3622 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2
# 3623 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3625 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_2
# 3628 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_3
# 3630 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_4
# 3633 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_2:
# 3626 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_BLACK_GLASSES, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 12, 204, 4, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, FALSE, FALSE, FALSE
# 3627 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_3:
# 3629 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2_4:
# 3631 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1::
# 3639 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
# 3640 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3642 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_2
# 3645 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_3
# 3648 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_4
# 3651 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_5
# 3654 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_6
# 3657 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_7
# 3659 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_8
# 3662 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_2:
# 3643 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 0, 20, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_SNARL, FALSE, FALSE, FALSE
# 3644 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_3:
# 3646 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SOLGALEO, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 132, 52, 4, 0, 92, 31, 31, 31, 31, 0, 31, MOVE_SUNSTEEL_STRIKE, MOVE_SUPERPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3647 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_4:
# 3649 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 60, 108, 4, 84, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_SWAGGER, MOVE_ICY_WIND, FALSE, FALSE, FALSE
# 3650 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_5:
# 3652 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_LOW_KICK, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
# 3653 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_6:
# 3655 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3656 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_7:
# 3658 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1_8:
# 3660 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2::
# 3668 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2
# 3669 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3671 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_2
# 3674 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_3
# 3676 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_4
# 3679 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_2:
# 3672 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_ZYGARDE, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 76, 180, 0, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_THOUSAND_ARROWS, MOVE_COIL, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3673 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_3:
# 3675 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2_4:
# 3677 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1::
# 3685 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
# 3686 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3688 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_2
# 3691 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_3
# 3694 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_4
# 3697 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_5
# 3700 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_6
# 3703 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_7
# 3705 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_8
# 3708 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_2:
# 3689 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 100, 4, 36, 116, 31, 0, 31, 31, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3690 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_3:
# 3692 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_DIALGA, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 252, 0, 76, 0, 12, 164, 31, 0, 31, 0, 31, 31, MOVE_FLASH_CANNON, MOVE_PROTECT, MOVE_THUNDER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 3693 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_4:
# 3695 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 4, 164, 28, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3696 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_5:
# 3698 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3699 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_6:
# 3701 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 156, 20, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_SCALD, FALSE, FALSE, FALSE
# 3702 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_7:
# 3704 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1_8:
# 3706 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2::
# 3714 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2
# 3715 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3717 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_2
# 3720 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_3
# 3722 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_4
# 3725 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_2:
# 3718 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_TAUNT, FALSE, FALSE, FALSE
# 3719 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_3:
# 3721 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2_4:
# 3723 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1::
# 3731 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
# 3732 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3734 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_2
# 3737 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_3
# 3740 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_4
# 3743 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_5
# 3746 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_6
# 3749 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_7
# 3751 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_8
# 3754 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_2:
# 3735 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3736 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_3:
# 3738 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_THUNDER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 3739 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_4:
# 3741 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 164, 0, 12, 252, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_ICY_WIND, MOVE_SCALD, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3742 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_5:
# 3744 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 244, 68, 92, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_SUNSTEEL_STRIKE, MOVE_PHOTON_GEYSER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3745 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_6:
# 3747 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3748 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_7:
# 3750 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1_8:
# 3752 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2::
# 3760 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2
# 3761 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3763 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_2
# 3766 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_3
# 3768 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_4
# 3771 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_2:
# 3764 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3765 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_3:
# 3767 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2_4:
# 3769 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1::
# 3777 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
# 3778 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3780 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_2
# 3783 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_3
# 3786 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_4
# 3789 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_5
# 3792 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_6
# 3795 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_7
# 3797 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_8
# 3800 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_2:
# 3781 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 244, 0, 44, 0, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3782 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_3:
# 3784 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3785 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_4:
# 3787 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 60, 92, 4, 180, 0, 172, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 3788 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_5:
# 3790 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 164, 0, 164, 100, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3791 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_6:
# 3793 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 116, 36, 100, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_WIDE_GUARD, MOVE_ROOST, FALSE, FALSE, FALSE
# 3794 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_7:
# 3796 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1_8:
# 3798 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2::
# 3806 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2
# 3807 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3809 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_2
# 3812 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_3
# 3814 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_4
# 3817 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_2:
# 3810 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_THUNDER, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3811 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_3:
# 3813 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2_4:
# 3815 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1::
# 3823 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
# 3824 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3826 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_2
# 3829 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_3
# 3832 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_4
# 3835 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_5
# 3838 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_6
# 3841 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_7
# 3843 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_8
# 3846 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_2:
# 3827 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 100, 228, 4, 100, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
# 3828 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_3:
# 3830 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_ROAR, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3831 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_4:
# 3833 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 0, 20, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3834 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_5:
# 3836 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 12, 60, 4, 188, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 3837 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_6:
# 3839 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3840 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_7:
# 3842 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1_8:
# 3844 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2::
# 3852 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2
# 3853 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3855 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_2
# 3858 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_3
# 3860 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_4
# 3863 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_2:
# 3856 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3857 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_3:
# 3859 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2_4:
# 3861 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1::
# 3869 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
# 3870 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3872 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_2
# 3875 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_3
# 3878 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_4
# 3881 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_5
# 3884 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_6
# 3887 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_7
# 3889 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_8
# 3892 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_2:
# 3873 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 236, 0, 76, 0, 0, 196, 31, 0, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 3874 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_3:
# 3876 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 52, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 3877 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_4:
# 3879 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 52, 4, 252, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_SACRED_SWORD, FALSE, FALSE, FALSE
# 3880 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_5:
# 3882 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3883 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_6:
# 3885 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 164, 60, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_PROTECT, MOVE_TAUNT, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 3886 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_7:
# 3888 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1_8:
# 3890 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2::
# 3898 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2
# 3899 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3901 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_2
# 3904 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_3
# 3906 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_4
# 3909 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_2:
# 3902 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3903 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_3:
# 3905 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2_4:
# 3907 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1::
# 3915 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
# 3916 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3918 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_2
# 3920 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_3
# 3922 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_4
# 3924 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_5
# 3926 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_6
# 3928 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_7
# 3930 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_8
# 3933 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_2:
# 3919 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_3:
# 3921 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_4:
# 3923 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_5:
# 3925 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_6:
# 3927 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_7:
# 3929 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_8:
# 3931 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2::
# 3939 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
# 3940 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3942 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_2
# 3944 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_3
# 3946 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_4
# 3948 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_5
# 3950 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_6
# 3952 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_7
# 3954 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_8
# 3957 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_2:
# 3943 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_3:
# 3945 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_4:
# 3947 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_5:
# 3949 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_6:
# 3951 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_7:
# 3953 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_8:
# 3955 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3::
# 3963 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
# 3964 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3966 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_2
# 3968 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_3
# 3970 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_4
# 3973 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_2:
# 3967 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_3:
# 3969 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_4:
# 3971 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1::
# 3979 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
# 3980 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 3982 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_2
# 3985 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_3
# 3988 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_4
# 3991 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_5
# 3994 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_6
# 3997 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_7
# 3999 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_8
# 4002 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_2:
# 3983 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 4, 0, 0, 252, 31, 0, 31, 0, 31, 31, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3984 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_3:
# 3986 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 3987 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_4:
# 3989 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3990 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_5:
# 3992 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 156, 164, 4, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_BULLET_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 3993 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_6:
# 3995 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 116, 4, 148, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_WILD_CHARGE, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 3996 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_7:
# 3998 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1_8:
# 4000 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2::
# 4008 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2
# 4009 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4011 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_2
# 4014 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_3
# 4016 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_4
# 4019 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_2:
# 4012 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4013 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_3:
# 4015 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2_4:
# 4017 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1::
# 4025 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
# 4026 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4028 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_2
# 4031 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_3
# 4034 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_4
# 4037 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_5
# 4040 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_6
# 4043 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_7
# 4045 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_8
# 4048 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_2:
# 4029 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 4030 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_3:
# 4032 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 20, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4033 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_4:
# 4035 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 92, 4, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PHOTON_GEYSER, MOVE_SUNSTEEL_STRIKE, FALSE, FALSE, FALSE
# 4036 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_5:
# 4038 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 28, 36, 4, 252, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EXTREME_SPEED, MOVE_DRAGON_ASCENT, FALSE, FALSE, FALSE
# 4039 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_6:
# 4041 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_NATURES_MADNESS, MOVE_SCALD, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 4042 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_7:
# 4044 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1_8:
# 4046 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2::
# 4054 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2
# 4055 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4057 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_2
# 4060 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_3
# 4062 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_4
# 4065 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_2:
# 4058 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 156, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, FALSE, FALSE, FALSE
# 4059 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_3:
# 4061 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2_4:
# 4063 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1::
# 4071 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
# 4072 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4074 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_2
# 4077 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_3
# 4080 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_4
# 4083 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_5
# 4086 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_6
# 4089 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_7
# 4091 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_8
# 4094 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_2:
# 4075 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 124, 0, 0, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_WIDE_GUARD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4076 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_3:
# 4078 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4079 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_4:
# 4081 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DARKEST_LARIAT, MOVE_U_TURN, MOVE_ROAR, FALSE, FALSE, FALSE
# 4082 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_5:
# 4084 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4085 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_6:
# 4087 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 68, 76, 0, 252, 4, 108, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_ICY_WIND, MOVE_EXTREME_SPEED, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 4088 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_7:
# 4090 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1_8:
# 4092 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2::
# 4100 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2
# 4101 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4103 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_2
# 4106 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_3
# 4108 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_4
# 4111 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_2:
# 4104 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4105 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_3:
# 4107 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2_4:
# 4109 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1::
# 4117 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
# 4118 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4120 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_2
# 4123 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_3
# 4126 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_4
# 4129 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_5
# 4132 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_6
# 4135 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_7
# 4137 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_8
# 4140 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_2:
# 4121 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_QUIET, 1, 0, 148, 0, 92, 0, 252, 12, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 4122 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_3:
# 4124 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 20, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4125 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_4:
# 4127 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 196, 44, 0, 252, 12, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_EARTH_POWER, MOVE_DRAGON_ASCENT, FALSE, FALSE, FALSE
# 4128 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_5:
# 4130 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SOLGALEO, 65, ITEM_SOLGANIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 36, 220, 0, 0, 0, 252, 31, 31, 31, 15, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SUPERPOWER, MOVE_SUNSTEEL_STRIKE, FALSE, FALSE, FALSE
# 4131 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_6:
# 4133 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_NATURES_MADNESS, MOVE_SCALD, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 4134 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_7:
# 4136 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1_8:
# 4138 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2::
# 4146 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2
# 4147 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4149 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_2
# 4152 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_3
# 4154 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_4
# 4157 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_2:
# 4150 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 156, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, FALSE, FALSE, FALSE
# 4151 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_3:
# 4153 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2_4:
# 4155 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1::
# 4163 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
# 4164 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4166 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_2
# 4168 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_3
# 4170 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_4
# 4172 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_5
# 4174 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_6
# 4177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_2:
# 4167 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_3:
# 4169 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_4:
# 4171 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_5:
# 4173 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_6:
# 4175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1::
# 4183 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
# 4184 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4186 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_2
# 4189 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_3
# 4192 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_4
# 4195 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_5
# 4198 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_6
# 4201 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_7
# 4203 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_8
# 4206 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_2:
# 4187 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
# 4188 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_3:
# 4190 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, FALSE, FALSE, FALSE
# 4191 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_4:
# 4193 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 36, 0, 0, 236, 31, 31, 31, 3, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4194 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_5:
# 4196 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 188, 28, 0, 252, 20, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 4197 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_6:
# 4199 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 76, 0, 0, 188, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, FALSE, FALSE, FALSE
# 4200 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_7:
# 4202 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1_8:
# 4204 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2::
# 4212 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2
# 4213 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4215 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_2
# 4218 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_3
# 4220 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_4
# 4223 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_2:
# 4216 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 4217 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_3:
# 4219 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2_4:
# 4221 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1::
# 4229 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
# 4230 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4232 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_2
# 4235 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_3
# 4238 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_4
# 4241 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_5
# 4244 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_6
# 4247 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_7
# 4249 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_8
# 4252 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_2:
# 4233 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 4234 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_3:
# 4236 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, FALSE, FALSE, FALSE
# 4237 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_4:
# 4239 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 108, 4, 84, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_SNATCH, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 4240 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_5:
# 4242 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 100, 44, 4, 124, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 4243 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_6:
# 4245 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 0, 84, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_GRAVITY, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 4246 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_7:
# 4248 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1_8:
# 4250 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2::
# 4258 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2
# 4259 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4261 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_2
# 4264 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_3
# 4266 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_4
# 4269 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_2:
# 4262 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, FALSE, FALSE, FALSE
# 4263 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_3:
# 4265 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2_4:
# 4267 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1::
# 4275 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
# 4276 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4278 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_2
# 4281 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_3
# 4284 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_4
# 4287 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_5
# 4290 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_6
# 4293 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_7
# 4295 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_8
# 4298 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_2:
# 4279 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_SPORE, FALSE, FALSE, FALSE
# 4280 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_3:
# 4282 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROAR, MOVE_EARTH_POWER, MOVE_ERUPTION, FALSE, FALSE, FALSE
# 4283 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_4:
# 4285 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4286 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_5:
# 4288 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_BITE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4289 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_6:
# 4291 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 148, 0, 132, 188, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT, FALSE, FALSE, FALSE
# 4292 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_7:
# 4294 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1_8:
# 4296 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2::
# 4304 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2
# 4305 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4307 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_2
# 4310 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_3
# 4312 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_4
# 4315 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_2:
# 4308 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 4309 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_3:
# 4311 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2_4:
# 4313 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1::
# 4321 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
# 4322 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4324 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_2
# 4326 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_3
# 4328 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_4
# 4330 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_5
# 4333 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_2:
# 4325 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_3:
# 4327 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_4:
# 4329 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_5:
# 4331 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1::
# 4339 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
# 4340 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4342 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_2
# 4345 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_3
# 4348 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_4
# 4351 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_5
# 4354 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_6
# 4357 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_7
# 4359 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_8
# 4362 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_2:
# 4343 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, FALSE, FALSE, FALSE
# 4344 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_3:
# 4346 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 204, 0, 4, 252, 44, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4347 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_4:
# 4349 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 60, 4, 36, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4350 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_5:
# 4352 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4353 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_6:
# 4355 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 0, 84, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4356 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_7:
# 4358 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1_8:
# 4360 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2::
# 4368 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2
# 4369 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4371 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_2
# 4374 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_3
# 4376 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_4
# 4379 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_2:
# 4372 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4373 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_3:
# 4375 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2_4:
# 4377 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1::
# 4385 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
# 4386 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4388 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_2
# 4391 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_3
# 4394 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_4
# 4397 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_5
# 4400 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_6
# 4403 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_7
# 4405 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_8
# 4408 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_2:
# 4389 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 252, 4, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_SUBSTITUTE, FALSE, FALSE, FALSE
# 4390 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_3:
# 4392 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 244, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, FALSE, FALSE, FALSE
# 4393 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_4:
# 4395 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4396 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_5:
# 4398 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 244, 0, 20, 0, 0, 244, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 4399 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_6:
# 4401 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 244, 0, 0, 156, 0, 108, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 4402 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_7:
# 4404 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1_8:
# 4406 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2::
# 4414 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2
# 4415 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4417 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_2
# 4420 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_3
# 4422 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_4
# 4425 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_2:
# 4418 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 4419 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_3:
# 4421 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2_4:
# 4423 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1::
# 4431 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
# 4432 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4434 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_2
# 4437 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_3
# 4440 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_4
# 4443 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_5
# 4446 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_6
# 4449 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_7
# 4451 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_8
# 4454 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_2:
# 4435 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 84, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4436 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_3:
# 4438 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 36, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_FLARE_BLITZ, MOVE_THROAT_CHOP, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 4439 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_4:
# 4441 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DAWN_WINGS, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PHOTON_GEYSER, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4442 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_5:
# 4444 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_HASTY, 0, 1, 0, 132, 0, 252, 124, 0, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_HYPER_VOICE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4445 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_6:
# 4447 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 124, 60, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_HAZE, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 4448 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_7:
# 4450 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1_8:
# 4452 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2::
# 4460 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2
# 4461 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4463 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_2
# 4466 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_3
# 4468 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_4
# 4471 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_2:
# 4464 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
# 4465 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_3:
# 4467 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2_4:
# 4469 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1::
# 4477 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
# 4478 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4480 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_2
# 4483 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_3
# 4486 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_4
# 4489 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_5
# 4492 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_6
# 4495 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_7
# 4497 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_8
# 4500 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_2:
# 4481 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 0, 0, 0, 180, 31, 31, 31, 27, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_DRAGON_CLAW, FALSE, FALSE, FALSE
# 4482 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_3:
# 4484 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 140, 108, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_RETURN, MOVE_BITE, MOVE_ROAR, FALSE, FALSE, FALSE
# 4485 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_4:
# 4487 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 84, 0, 4, 172, 236, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PHOTON_GEYSER, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 4488 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_5:
# 4490 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DOUBLE_EDGE, MOVE_HYPER_VOICE, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 4491 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_6:
# 4493 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
# 4494 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_7:
# 4496 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1_8:
# 4498 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2::
# 4506 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2
# 4507 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4509 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_2
# 4512 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_3
# 4514 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_4
# 4517 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_2:
# 4510 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_UMBREON, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 252, 0, 204, 0, 0, 52, 31, 0, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_HELPING_HAND, MOVE_MOONLIGHT, FALSE, FALSE, FALSE
# 4511 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_3:
# 4513 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2_4:
# 4515 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1::
# 4523 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
# 4524 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4526 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_2
# 4529 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_3
# 4532 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_4
# 4535 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_5
# 4538 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_6
# 4541 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_7
# 4543 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_8
# 4546 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_2:
# 4527 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, FALSE, FALSE, FALSE
# 4528 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_3:
# 4530 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 108, 4, 84, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_SNATCH, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 4531 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_4:
# 4533 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_COLBUR_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 0, 180, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, FALSE, FALSE, FALSE
# 4534 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_5:
# 4536 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 100, 44, 4, 124, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 4537 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_6:
# 4539 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 20, 0, 0, 244, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 4540 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_7:
# 4542 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1_8:
# 4544 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2::
# 4552 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2
# 4553 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4555 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_2
# 4558 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_3
# 4560 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_4
# 4563 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_2:
# 4556 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 4, 140, 124, 4, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_SCALD, FALSE, FALSE, FALSE
# 4557 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_3:
# 4559 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2_4:
# 4561 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1::
# 4569 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
# 4570 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4572 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_2
# 4575 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_3
# 4578 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_4
# 4581 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_5
# 4584 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_6
# 4587 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_7
# 4589 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_8
# 4592 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_2:
# 4573 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 12, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4574 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_3:
# 4576 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 28, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
# 4577 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_4:
# 4579 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MEDICHAM, 65, ITEM_MEDICHAMITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, FALSE, FALSE, FALSE
# 4580 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_5:
# 4582 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_POWER_GEM, MOVE_ACID_SPRAY, MOVE_ROLE_PLAY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4583 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_6:
# 4585 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 116, 4, 148, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_WILD_CHARGE, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 4586 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_7:
# 4588 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1_8:
# 4590 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2::
# 4598 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2
# 4599 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4601 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_2
# 4604 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_3
# 4606 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_4
# 4609 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_2:
# 4602 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 76, 0, 20, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
# 4603 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_3:
# 4605 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2_4:
# 4607 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1::
# 4615 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
# 4616 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4618 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_2
# 4621 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_3
# 4624 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_4
# 4627 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_5
# 4630 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_6
# 4633 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_7
# 4635 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_8
# 4638 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_2:
# 4619 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 244, 4, 140, 0, 4, 116, 31, 31, 31, 9, 31, 31, MOVE_KNOCK_OFF, MOVE_SNARL, MOVE_U_TURN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4620 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_3:
# 4622 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_KASIB_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 148, 0, 84, 20, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4623 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_4:
# 4625 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 132, 116, 4, 164, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4626 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_5:
# 4628 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 2, 0, 196, 4, 252, 20, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4629 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_6:
# 4631 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 252, 0, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 4632 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_7:
# 4634 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1_8:
# 4636 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2::
# 4644 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2
# 4645 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4647 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_2
# 4650 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_3
# 4652 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_4
# 4655 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_2:
# 4648 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 220, 12, 31, 0, 31, 31, 31, 31, MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_HAZE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 4649 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_3:
# 4651 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2_4:
# 4653 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1::
# 4661 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_Page1
# 4662 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4664 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_2
# 4666 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_3
# 4668 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_4
# 4670 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_5
# 4672 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_6
# 4674 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_7
# 4676 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_8
# 4679 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_2:
# 4665 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_3:
# 4667 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_4:
# 4669 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_5:
# 4671 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_6:
# 4673 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_7:
# 4675 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1_8:
# 4677 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1::
# 4685 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
# 4686 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4688 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_2
# 4691 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_3
# 4694 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_4
# 4697 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_5
# 4700 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_6
# 4702 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_7
# 4705 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_2:
# 4689 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 76, 4, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
# 4690 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_3:
# 4692 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 4, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_HIDDEN_POWER, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 4693 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_4:
# 4695 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 196, 4, 20, 36, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_HYPNOSIS, MOVE_RECOVER, MOVE_COIL, FALSE, FALSE, FALSE
# 4696 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_5:
# 4698 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 50, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4699 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_6:
# 4701 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1_7:
# 4703 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1::
# 4711 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
# 4712 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4714 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_2
# 4717 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_3
# 4720 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_4
# 4723 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_5
# 4726 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_6
# 4728 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_7
# 4731 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_2:
# 4715 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
# 4716 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_3:
# 4718 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 4719 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_4:
# 4721 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4722 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_5:
# 4724 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 4725 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_6:
# 4727 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1_7:
# 4729 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1::
# 4737 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
# 4738 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4740 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_2
# 4743 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_3
# 4746 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_4
# 4749 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_5
# 4752 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_6
# 4754 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_7
# 4757 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_2:
# 4741 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 4742 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_3:
# 4744 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 36, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 4745 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_4:
# 4747 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4748 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_5:
# 4750 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 4751 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_6:
# 4753 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1_7:
# 4755 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1::
# 4763 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
# 4764 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4766 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_2
# 4769 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_3
# 4772 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_4
# 4775 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_5
# 4778 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_6
# 4780 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_7
# 4783 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_2:
# 4767 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
# 4768 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_3:
# 4770 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 188, 36, 4, 28, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4771 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_4:
# 4773 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
# 4774 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_5:
# 4776 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 52, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 4777 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_6:
# 4779 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1_7:
# 4781 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1::
# 4789 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
# 4790 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4792 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_2
# 4795 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_3
# 4798 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_4
# 4801 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_5
# 4804 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_6
# 4806 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_7
# 4809 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_2:
# 4793 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4794 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_3:
# 4796 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4797 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_4:
# 4799 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, FALSE, FALSE, FALSE
# 4800 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_5:
# 4802 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
# 4803 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_6:
# 4805 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1_7:
# 4807 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Page1::
# 4815 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Page1
# 4816 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4818 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Page1_2
# 4820 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page1_3
# 4822 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Page1_4
# 4825 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_2:
# 4819 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_3:
# 4821 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Page1_4:
# 4823 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Page1::
# 4831 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Page1
# 4832 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4834 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_2
# 4836 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_3
# 4838 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_4
# 4840 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_5
# 4842 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_6
# 4845 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_2:
# 4835 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_3:
# 4837 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_4:
# 4839 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_5:
# 4841 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Page1_6:
# 4843 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1::
# 4851 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Common_Page1
# 4852 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4854 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_2
# 4857 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_3
# 4859 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_4
# 4862 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_2:
# 4855 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4856 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_3:
# 4858 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1_4:
# 4860 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Common_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1::
# 4868 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Megas_Page1
# 4869 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4871 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_2
# 4874 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_3
# 4876 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_4
# 4879 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_2:
# 4872 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 4873 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_3:
# 4875 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1_4:
# 4877 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Megas_Page1
	return


Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1::
# 4885 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Doubles_Sample_Trick_Room_Page1
# 4886 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 4888 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_2
# 4891 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_3
# 4893 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_4
# 4896 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_2:
# 4889 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_TORKOAL, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_QUIET, 1, 0, 164, 0, 4, 0, 196, 140, 31, 0, 31, 0, 31, 31, MOVE_ERUPTION, MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 4890 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_3:
# 4892 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	return

Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1_4:
# 4894 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Doubles_Sample_Trick_Room_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 4900 "data/scripts/sample_sets_options.pory"
	.string "FROM TEAMS$"
	.string "DOUBLES$"
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "CHARIZARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page2::
# 4911 "data/scripts/sample_sets_options.pory"
	.string "CRESSELIA$"
	.string "FLUTTER MANE$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "INDEEDEE-F$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page3::
# 4922 "data/scripts/sample_sets_options.pory"
	.string "IRON HANDS$"
	.string "LANDO-T$"
	.string "MANECTRIC$"
	.string "METAGROSS$"
	.string "OGERPON-HF$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page4::
# 4933 "data/scripts/sample_sets_options.pory"
	.string "OGERPON-WS$"
	.string "PORYGON2$"
	.string "RILLABOOM$"
	.string "SALAMENCE (MIXED)$"
	.string "SALAMENCE (PHYSICAL)$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page5::
# 4944 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI (SPECS)$"
	.string "URSALUNA$"
	.string "URSALUNA-BLOODMOON$"
	.string "URSHIFU-RS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Page1::
# 4954 "data/scripts/sample_sets_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Page1::
# 4961 "data/scripts/sample_sets_options.pory"
	.string "LEGACY$"
	.string "SAMPLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Page1::
# 4969 "data/scripts/sample_sets_options.pory"
	.string "VGC2013$"
	.string "VGC2015$"
	.string "VGC2016$"
	.string "VGC2018$"
	.string "VGC2019$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Page1::
# 4980 "data/scripts/sample_sets_options.pory"
	.string "ARASH WORLDS$"
	.string "GEBEBO WORLDS$"
	.string "GOODSTUFFS$"
	.string "STANDARD SAND$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page1::
# 4990 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "CONKELDURR$"
	.string "HEATRAN$"
	.string "LATIOS$"
	.string "MAMOSWINE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Arash_Worlds_Page2::
# 5001 "data/scripts/sample_sets_options.pory"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page1::
# 5008 "data/scripts/sample_sets_options.pory"
	.string "CONKELDURR$"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Gebebo_Worlds_Page2::
# 5019 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page1::
# 5026 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Goodstuffs_Page2::
# 5037 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page1::
# 5044 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "EXCADRILL$"
	.string "LATIOS$"
	.string "ROTOM-WASH$"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2013_Standard_Sand_Page2::
# 5055 "data/scripts/sample_sets_options.pory"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page1::
# 5062 "data/scripts/sample_sets_options.pory"
	.string "ARAHPTHOS TEAMS$"
	.string "JAPAN SAND$"
	.string "M-GARDEVOIR$"
	.string "M-SALAMENCE$"
	.string "SCAR WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Page2::
# 5073 "data/scripts/sample_sets_options.pory"
	.string "SHOMA WORLDS$"
	.string "TERRACOTT RAIN$"
	.string "TERRACOTT SUN$"
	.string "WOLFE PERISH$"
	.string "WOLFE WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page1::
# 5084 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Shoma_Worlds_Page2::
# 5095 "data/scripts/sample_sets_options.pory"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page1::
# 5102 "data/scripts/sample_sets_options.pory"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "LUDICOLO$"
	.string "POLITOED$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Rain_Page2::
# 5113 "data/scripts/sample_sets_options.pory"
	.string "WHIMSICOTT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page1::
# 5120 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "GENGAR$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Terracott_Sun_Page2::
# 5131 "data/scripts/sample_sets_options.pory"
	.string "WHIMSICOTT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page1::
# 5138 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "ARCANINE$"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "POLITOED$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Perish_Page2::
# 5149 "data/scripts/sample_sets_options.pory"
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page1::
# 5156 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Wolfe_Worlds_Page2::
# 5167 "data/scripts/sample_sets_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1::
# 5174 "data/scripts/sample_sets_options.pory"
	.string "M-AERODACTYL$"
	.string "M-HERACROSS$"
	.string "M-KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page1::
# 5183 "data/scripts/sample_sets_options.pory"
	.string "AERODACTYL$"
	.string "CRADILY$"
	.string "FERROTHORN$"
	.string "HIPPOWDON$"
	.string "MILOTIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Aerodactyl_Page2::
# 5194 "data/scripts/sample_sets_options.pory"
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page1::
# 5201 "data/scripts/sample_sets_options.pory"
	.string "ARCANINE$"
	.string "BISHARP$"
	.string "HERACROSS$"
	.string "MILOTIC$"
	.string "SYLVEON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Heracross_Page2::
# 5212 "data/scripts/sample_sets_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page1::
# 5219 "data/scripts/sample_sets_options.pory"
	.string "BISHARP$"
	.string "CONKELDURR$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_M_Kangaskhan_Page2::
# 5230 "data/scripts/sample_sets_options.pory"
	.string "TOGEKISS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page1::
# 5237 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "AMOONGUSS$"
	.string "AZUMARILL$"
	.string "EXCADRILL$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Japan_Sand_Page2::
# 5248 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page1::
# 5255 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "AZUMARILL$"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Gardevoir_Page2::
# 5266 "data/scripts/sample_sets_options.pory"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page1::
# 5273 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "ARCANINE$"
	.string "AZUMARILL$"
	.string "BRELOOM$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_M_Salamence_Page2::
# 5284 "data/scripts/sample_sets_options.pory"
	.string "WEAVILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page1::
# 5291 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2015_Scar_Worlds_Page2::
# 5302 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page1::
# 5309 "data/scripts/sample_sets_options.pory"
	.string "DIALGA KYOGRE$"
	.string "DUAL PRIMALS$"
	.string "GRAVITY$"
	.string "RAYQUAZA KYOGRE$"
	.string "XERN DON BRONZONG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Page2::
# 5320 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE$"
	.string "XERNEAS RAYQUAZA$"
	.string "YVELTAL GROUDON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page1::
# 5330 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "SALAMENCE$"
	.string "SMEARGLE$"
	.string "TALONFLAME$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Groudon_Page2::
# 5341 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page1::
# 5348 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "BRONZONG$"
	.string "INFERNAPE$"
	.string "KYOGRE$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Kyogre_Page2::
# 5359 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page1::
# 5366 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "ARCANINE$"
	.string "RAYQUAZA$"
	.string "SCRAFTY$"
	.string "SMEARGLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xerneas_Rayquaza_Page2::
# 5377 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page1::
# 5384 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "JUMPLUFF$"
	.string "KANGASKHAN$"
	.string "SALAMENCE$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Yveltal_Groudon_Page2::
# 5395 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page1::
# 5402 "data/scripts/sample_sets_options.pory"
	.string "DIALGA$"
	.string "GOURGEIST-SUPER$"
	.string "KYOGRE$"
	.string "LANDORUS-THERIAN$"
	.string "MAWILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dialga_Kyogre_Page2::
# 5413 "data/scripts/sample_sets_options.pory"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page1::
# 5420 "data/scripts/sample_sets_options.pory"
	.string "BRONZONG$"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "KYOGRE$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Dual_Primals_Page2::
# 5431 "data/scripts/sample_sets_options.pory"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page1::
# 5438 "data/scripts/sample_sets_options.pory"
	.string "BRONZONG$"
	.string "GENGAR$"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "KYUREM-WHITE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Gravity_Page2::
# 5449 "data/scripts/sample_sets_options.pory"
	.string "SABLEYE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page1::
# 5456 "data/scripts/sample_sets_options.pory"
	.string "BRONZONG$"
	.string "GENGAR$"
	.string "HITMONTOP$"
	.string "KYOGRE$"
	.string "RAICHU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Rayquaza_Kyogre_Page2::
# 5467 "data/scripts/sample_sets_options.pory"
	.string "RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page1::
# 5474 "data/scripts/sample_sets_options.pory"
	.string "BRONZONG$"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "SALAMENCE$"
	.string "SMEARGLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2016_Xern_Don_Bronzong_Page2::
# 5485 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Page1::
# 5492 "data/scripts/sample_sets_options.pory"
	.string "POST-BANK$"
	.string "PRE-BANK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1::
# 5500 "data/scripts/sample_sets_options.pory"
	.string "KOMMO-O TEAMS$"
	.string "M-CHARIZARD-X$"
	.string "M-GARDEVOIR$"
	.string "M-KANGASKHAN$"
	.string "M-LATIAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2::
# 5511 "data/scripts/sample_sets_options.pory"
	.string "M-LOPUNNY$"
	.string "M-MANECTRIC$"
	.string "M-MAWILE$"
	.string "M-METAGROSS$"
	.string "M-TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3::
# 5522 "data/scripts/sample_sets_options.pory"
	.string "MIMI LAX TEAMS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1::
# 5529 "data/scripts/sample_sets_options.pory"
	.string "M-CHARIZARD Y$"
	.string "M-MANECTRIC$"
	.string "M-METAGROSS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page1::
# 5538 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MIMIKYU$"
	.string "RAICHU$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Charizard_Y_Page2::
# 5549 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page1::
# 5556 "data/scripts/sample_sets_options.pory"
	.string "CELESTEELA$"
	.string "INCINEROAR$"
	.string "MANECTRIC$"
	.string "MIMIKYU$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Manectric_Page2::
# 5567 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page1::
# 5574 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "METAGROSS$"
	.string "MIMIKYU$"
	.string "SNORLAX$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_M_Metagross_Page2::
# 5585 "data/scripts/sample_sets_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page1::
# 5592 "data/scripts/sample_sets_options.pory"
	.string "BLACEPHALON$"
	.string "CELESTEELA$"
	.string "INCINEROAR$"
	.string "LOPUNNY$"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Lopunny_Page2::
# 5603 "data/scripts/sample_sets_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page1::
# 5610 "data/scripts/sample_sets_options.pory"
	.string "CELESTEELA$"
	.string "GOTHITELLE$"
	.string "INCINEROAR$"
	.string "MANECTRIC$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Manectric_Page2::
# 5621 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page1::
# 5628 "data/scripts/sample_sets_options.pory"
	.string "GOTHITELLE$"
	.string "INCINEROAR$"
	.string "LUDICOLO$"
	.string "MAWILE$"
	.string "POLITOED$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Mawile_Page2::
# 5639 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page1::
# 5646 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "LANDORUS-THERIAN$"
	.string "METAGROSS$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Metagross_Page2::
# 5657 "data/scripts/sample_sets_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page1::
# 5664 "data/scripts/sample_sets_options.pory"
	.string "CELESTEELA$"
	.string "LANDORUS-THERIAN$"
	.string "RAICHU$"
	.string "TAPU FINI$"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Tyranitar_Page2::
# 5675 "data/scripts/sample_sets_options.pory"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1::
# 5682 "data/scripts/sample_sets_options.pory"
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page1::
# 5690 "data/scripts/sample_sets_options.pory"
	.string "DEWGONG$"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "INCINEROAR$"
	.string "KOMMO-O$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Perish_Trap_Page2::
# 5701 "data/scripts/sample_sets_options.pory"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page1::
# 5708 "data/scripts/sample_sets_options.pory"
	.string "AZUMARILL$"
	.string "CLEFAIRY$"
	.string "GENGAR$"
	.string "INCINEROAR$"
	.string "KOMMO-O$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Standard_Page2::
# 5719 "data/scripts/sample_sets_options.pory"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page1::
# 5726 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Charizard_X_Page2::
# 5737 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page1::
# 5744 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "GARDEVOIR$"
	.string "INCINEROAR$"
	.string "LANDORUS-THERIAN$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Gardevoir_Page2::
# 5755 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page1::
# 5762 "data/scripts/sample_sets_options.pory"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Kangaskhan_Page2::
# 5773 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page1::
# 5780 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "LANDORUS-THERIAN$"
	.string "LATIAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Post_Bank_M_Latias_Page2::
# 5791 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1::
# 5798 "data/scripts/sample_sets_options.pory"
	.string "M-CAMERUPT$"
	.string "M-CHARIZARD-Y TEAMS$"
	.string "M-GARDEVOIR$"
	.string "M-GENGAR$"
	.string "M-KANGASKHAN TEAMS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2::
# 5809 "data/scripts/sample_sets_options.pory"
	.string "M-MANECTRIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page1::
# 5816 "data/scripts/sample_sets_options.pory"
	.string "CELESTEELA$"
	.string "GOTHITELLE$"
	.string "LANDORUS-THERIAN$"
	.string "MANECTRIC$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Manectric_Page2::
# 5827 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page1::
# 5834 "data/scripts/sample_sets_options.pory"
	.string "CAMERUPT$"
	.string "MIMIKYU$"
	.string "REUNICLUS$"
	.string "STAKATAKA$"
	.string "STARAPTOR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Camerupt_Page2::
# 5845 "data/scripts/sample_sets_options.pory"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1::
# 5852 "data/scripts/sample_sets_options.pory"
	.string "BALANCE$"
	.string "LELE ACCELGOR$"
	.string "LELE DRIFBLIM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page1::
# 5861 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "KARTANA$"
	.string "LANDORUS-THERIAN$"
	.string "PORYGON2$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Balance_Page2::
# 5872 "data/scripts/sample_sets_options.pory"
	.string "TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page1::
# 5879 "data/scripts/sample_sets_options.pory"
	.string "ACCELGOR$"
	.string "CHARIZARD$"
	.string "LANDORUS-THERIAN$"
	.string "MIMIKYU$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Accelgor_Page2::
# 5890 "data/scripts/sample_sets_options.pory"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page1::
# 5897 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "DRIFBLIM$"
	.string "LANDORUS-THERIAN$"
	.string "PHEROMOSA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Lele_Drifblim_Page2::
# 5908 "data/scripts/sample_sets_options.pory"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page1::
# 5915 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "AZUMARILL$"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gardevoir_Page2::
# 5926 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page1::
# 5933 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "GENGAR$"
	.string "GOTHITELLE$"
	.string "POLITOED$"
	.string "SCRAFTY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Gengar_Page2::
# 5944 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1::
# 5951 "data/scripts/sample_sets_options.pory"
	.string "BALANCE$"
	.string "CRESSELIA$"
	.string "SUICUNE$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page1::
# 5961 "data/scripts/sample_sets_options.pory"
	.string "CRESSELIA$"
	.string "HEATRAN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Balance_Page2::
# 5972 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page1::
# 5979 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "CHARIZARD$"
	.string "CRESSELIA$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Cresselia_Page2::
# 5990 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page1::
# 5997 "data/scripts/sample_sets_options.pory"
	.string "FERROTHORN$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "SUICUNE$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Suicune_Page2::
# 6008 "data/scripts/sample_sets_options.pory"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page1::
# 6015 "data/scripts/sample_sets_options.pory"
	.string "AEGISLASH$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Volcarona_Page2::
# 6026 "data/scripts/sample_sets_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Page1::
# 6033 "data/scripts/sample_sets_options.pory"
	.string "MOON SERIES$"
	.string "SUN SERIES$"
	.string "ULTRA SERIES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1::
# 6042 "data/scripts/sample_sets_options.pory"
	.string "LUNALA KYOGRE$"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE TEAMS$"
	.string "XERNEAS LUNALA TEAMS$"
	.string "XERNEAS YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2::
# 6053 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL GROUDON$"
	.string "ZYGARDE SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page1::
# 6061 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU KOKO$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Yveltal_Groudon_Page2::
# 6072 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page1::
# 6079 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "SOLGALEO$"
	.string "TAPU FINI$"
	.string "TOXICROAK$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Zygarde_Solgaleo_Page2::
# 6090 "data/scripts/sample_sets_options.pory"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page1::
# 6097 "data/scripts/sample_sets_options.pory"
	.string "ACCELGOR$"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "RAICHU-ALOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Lunala_Kyogre_Page2::
# 6108 "data/scripts/sample_sets_options.pory"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page1::
# 6115 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "TALONFLAME$"
	.string "TSAREENA$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Groudon_Page2::
# 6126 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1::
# 6133 "data/scripts/sample_sets_options.pory"
	.string "OFFENSIVE$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page1::
# 6141 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "SMEARGLE$"
	.string "TORNADUS$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Offensive_Page2::
# 6152 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page1::
# 6159 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Standard_Page2::
# 6170 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1::
# 6177 "data/scripts/sample_sets_options.pory"
	.string "KOMMO-O$"
	.string "OFFENSIVE$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page1::
# 6186 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KOMMO-O$"
	.string "LUNALA$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Kommo_O_Page2::
# 6197 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page1::
# 6204 "data/scripts/sample_sets_options.pory"
	.string "CROBAT$"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SMEARGLE$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Offensive_Page2::
# 6215 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page1::
# 6222 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SMEARGLE$"
	.string "STAKATAKA$"
	.string "TSAREENA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Stakataka_Page2::
# 6233 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page1::
# 6240 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "TAPU FINI$"
	.string "VOLCARONA$"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Yveltal_Page2::
# 6251 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1::
# 6258 "data/scripts/sample_sets_options.pory"
	.string "DIALGA KYOGRE$"
	.string "DUSK MANE KYOGRE$"
	.string "LUNALA KYOGRE$"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2::
# 6269 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS LUNALA$"
	.string "XERNEAS YVELTAL$"
	.string "YVELTAL GROUDON$"
	.string "YVELTAL KYOGRE$"
	.string "ZYGARDE SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page1::
# 6280 "data/scripts/sample_sets_options.pory"
	.string "CROBAT$"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SMEARGLE$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Lunala_Page2::
# 6291 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page1::
# 6298 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU FINI$"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Yveltal_Page2::
# 6309 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page1::
# 6316 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU KOKO$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Groudon_Page2::
# 6327 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page1::
# 6334 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "STAKATAKA$"
	.string "TAPU LELE$"
	.string "TOXICROAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Yveltal_Kyogre_Page2::
# 6345 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page1::
# 6352 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "SOLGALEO$"
	.string "TAPU FINI$"
	.string "TOXICROAK$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Zygarde_Solgaleo_Page2::
# 6363 "data/scripts/sample_sets_options.pory"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page1::
# 6370 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "DIALGA$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dialga_Kyogre_Page2::
# 6381 "data/scripts/sample_sets_options.pory"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page1::
# 6388 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "LUDICOLO$"
	.string "NECROZMA-DUSK-MANE$"
	.string "SNORLAX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Dusk_Mane_Kyogre_Page2::
# 6399 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page1::
# 6406 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Lunala_Kyogre_Page2::
# 6417 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page1::
# 6424 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "HEATRAN$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "VENUSAUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Groudon_Page2::
# 6435 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page1::
# 6442 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KARTANA$"
	.string "KYOGRE$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Xerneas_Kyogre_Page2::
# 6453 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1::
# 6460 "data/scripts/sample_sets_options.pory"
	.string "DAWN WINGS GROUDON$"
	.string "DUSK MANE GROUDON$"
	.string "LUNALA GROUDON$"
	.string "LUNALA KYOGRE$"
	.string "LUNALA RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2::
# 6471 "data/scripts/sample_sets_options.pory"
	.string "RAYQUAZA DUSK MANE$"
	.string "RAYQUAZA KYOGRE$"
	.string "RAYQUAZA SOLGALEO$"
	.string "XERNEAS GROUDON TEAMS$"
	.string "YVELTAL GROUDON TEAMS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3::
# 6482 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page1::
# 6489 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "METAGROSS$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Kyogre_Page2::
# 6500 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page1::
# 6507 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "NECROZMA-DUSK-MANE$"
	.string "RAYQUAZA$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Dusk_Mane_Page2::
# 6518 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page1::
# 6525 "data/scripts/sample_sets_options.pory"
	.string "CELESTEELA$"
	.string "GENGAR$"
	.string "INCINEROAR$"
	.string "KYOGRE$"
	.string "RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Kyogre_Page2::
# 6536 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page1::
# 6543 "data/scripts/sample_sets_options.pory"
	.string "GASTRODON$"
	.string "INCINEROAR$"
	.string "RAYQUAZA$"
	.string "SOLGALEO$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Rayquaza_Solgaleo_Page2::
# 6554 "data/scripts/sample_sets_options.pory"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1::
# 6561 "data/scripts/sample_sets_options.pory"
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "TORN KANG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page1::
# 6570 "data/scripts/sample_sets_options.pory"
	.string "GENGAR$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "LANDORUS-THERIAN$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Perish_Trap_Page2::
# 6581 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page1::
# 6588 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "SALAMENCE$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Standard_Page2::
# 6599 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page1::
# 6606 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "KANGASKHAN$"
	.string "TORNADUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Torn_Kang_Page2::
# 6617 "data/scripts/sample_sets_options.pory"
	.string "XERNEAS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1::
# 6624 "data/scripts/sample_sets_options.pory"
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page1::
# 6632 "data/scripts/sample_sets_options.pory"
	.string "BRONZONG$"
	.string "GENGAR$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Perish_Trap_Page2::
# 6643 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page1::
# 6650 "data/scripts/sample_sets_options.pory"
	.string "GENGAR$"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "STAKATAKA$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Standard_Page2::
# 6661 "data/scripts/sample_sets_options.pory"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page1::
# 6668 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "NECROZMA-DAWN-WINGS$"
	.string "SALAMENCE$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dawn_Wings_Groudon_Page2::
# 6679 "data/scripts/sample_sets_options.pory"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page1::
# 6686 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "KANGASKHAN$"
	.string "NECROZMA-DUSK-MANE$"
	.string "SALAMENCE$"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Dusk_Mane_Groudon_Page2::
# 6697 "data/scripts/sample_sets_options.pory"
	.string "UMBREON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page1::
# 6704 "data/scripts/sample_sets_options.pory"
	.string "GROUDON$"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "SALAMENCE$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Groudon_Page2::
# 6715 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page1::
# 6722 "data/scripts/sample_sets_options.pory"
	.string "KYOGRE$"
	.string "LUNALA$"
	.string "MEDICHAM$"
	.string "NIHILEGO$"
	.string "TAPU KOKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Kyogre_Page2::
# 6733 "data/scripts/sample_sets_options.pory"
	.string "TAPU LELE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page1::
# 6740 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "LUNALA$"
	.string "RAYQUAZA$"
	.string "SNORLAX$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Lunala_Rayquaza_Page2::
# 6751 "data/scripts/sample_sets_options.pory"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_Page1::
# 6758 "data/scripts/sample_sets_options.pory"
	.string "M-CHARIZARD X$"
	.string "M-CHARIZARD Y$"
	.string "M-GARDEVOIR$"
	.string "M-METAGROSS$"
	.string "M-SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_X_Page1::
# 6769 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD-MEGA-X$"
	.string "LANDORUS-THERIAN$"
	.string "MILOTIC$"
	.string "RILLABOOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Charizard_Y_Page1::
# 6779 "data/scripts/sample_sets_options.pory"
	.string "CHARIZARD$"
	.string "FLUTTER MANE$"
	.string "IRON HANDS$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Gardevoir_Page1::
# 6789 "data/scripts/sample_sets_options.pory"
	.string "GARDEVOIR$"
	.string "HEATRAN$"
	.string "IRON HANDS$"
	.string "LANDORUS-THERIAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Metagross_Page1::
# 6799 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "INCINEROAR$"
	.string "METAGROSS-MEGA$"
	.string "TAPU FINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_From_Teams_Doubles_Sample_M_Salamence_Page1::
# 6809 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "RILLABOOM$"
	.string "SALAMENCE$"
	.string "URSHIFU-RAPID-STRIKE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Page1::
# 6819 "data/scripts/sample_sets_options.pory"
	.string "SAMPLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Page1::
# 6826 "data/scripts/sample_sets_options.pory"
	.string "COMMON$"
	.string "MEGAS$"
	.string "TRICK ROOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Common_Page1::
# 6835 "data/scripts/sample_sets_options.pory"
	.string "INCINEROAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Megas_Page1::
# 6842 "data/scripts/sample_sets_options.pory"
	.string "KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Doubles_Sample_Trick_Room_Page1::
# 6849 "data/scripts/sample_sets_options.pory"
	.string "TORKOAL (SPECS)$"
	.string "Go Back$"
	.string "$"
