Auto_EventScript_Sample_Teams_Controls::
# 5 "data/scripts/sample_teams_options.pory"
	msgbox Auto_EventScript_Sample_Teams_Controls_Text_0
# 6 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Page1::
# 11 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Page1
# 12 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Page1_2
# 16 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Page1_3
# 18 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Page1_4
# 21 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_End
	return

Auto_EventScript_Sample_Teams_Page1_2:
# 15 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Page1_3:
# 17 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Page1_4:
# 19 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Page1::
# 27 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Page1
# 28 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 30 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Page1_2
# 32 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Page1_3
# 34 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Page1_4
# 36 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Page1_5
# 39 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_2:
# 31 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_3:
# 33 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_4:
# 35 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_5:
# 37 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1::
# 45 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Page1
# 46 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 48 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_2
# 50 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_3
# 52 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_4
# 54 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_5
# 56 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_6
# 58 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_7
# 60 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_8
# 63 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_2:
# 49 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_3:
# 51 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_4:
# 53 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_5:
# 55 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_6:
# 57 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_7:
# 59 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_8:
# 61 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1::
# 69 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2013_Page1
# 70 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 72 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_2
# 80 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_3
# 88 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_4
# 96 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_5
# 104 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_6
# 106 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_7
# 109 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_2:
# 73 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYING_GEM, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_ACROBATICS, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 74 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MAMOSWINE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 124, 44, 100, 196, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_ICICLE_SPEAR, MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 75 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LATIOS, 65, ITEM_DRAGON_GEM, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 248, 248, 4, 31, 2, 31, 30, 30, 31, MOVE_PROTECT, MOVE_SUNNY_DAY, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 76 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
# 77 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 212, 32, 12, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 78 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 108, 0, 0, 148, 31, 0, 31, 7, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 79 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_3:
# 81 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_IRON_BALL, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 196, 20, 0, 0, 36, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FLING, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
# 82 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 0, 52, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_TAUNT, FALSE, FALSE, FALSE
# 83 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, FALSE, FALSE, FALSE
# 84 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_FIRE_GEM, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 252, 0, 100, 0, 156, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, MOVE_ERUPTION, FALSE, FALSE, FALSE
# 85 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 1, 212, 0, 60, 0, 160, 76, 31, 0, 31, 0, 31, 31, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 86 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 68, 252, 124, 0, 0, 60, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_HAMMER_ARM, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 87 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_4:
# 89 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOPLE_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 124, 36, 4, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
# 90 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 52, 4, 204, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SWAGGER, MOVE_TAUNT, FALSE, FALSE, FALSE
# 91 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 92 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 212, 0, 4, 252, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_EARTH_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
# 93 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 212, 0, 60, 4, 156, 76, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 94 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 108, 0, 0, 148, 31, 0, 31, 7, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 95 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_5:
# 97 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 4, 212, 4, 44, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, FALSE, FALSE, FALSE
# 98 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_SUPERPOWER, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 99 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ROTOM_WASH, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 116, 140, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT, MOVE_HYDRO_PUMP, FALSE, FALSE, FALSE
# 100 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LATIOS, 65, ITEM_DRAGON_GEM, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 248, 248, 4, 31, 26, 31, 30, 30, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 101 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
# 102 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_CHESTO_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 1, 252, 0, 112, 0, 0, 144, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 103 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_6:
# 105 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1_7:
# 107 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2013_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1::
# 115 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
# 116 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 118 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_2
# 120 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_3
# 128 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_4
# 136 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_5
# 144 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_6
# 152 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_7
# 154 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_8
# 157 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_2:
# 119 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_3:
# 121 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 6, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 122 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_ICE_PUNCH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 123 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_EXCADRILL, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 124 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 198, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 125 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 252, 0, 252, 0, 0, 6, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_PROTECT, FALSE, FALSE, FALSE
# 126 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 127 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_4:
# 129 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 172, 0, 100, 28, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 130 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 131 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
# 132 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 133 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 24, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 134 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
# 135 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_5:
# 137 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_ROOST, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 138 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_WEAVILE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ICICLE_CRASH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 139 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRELOOM, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 140 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 141 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 4, 68, 4, 188, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 142 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 4, 28, 252, 20, 31, 31, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 143 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_6:
# 145 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 252, 0, 116, 20, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 146 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 252, 4, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
# 147 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 40, 28, 36, 156, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
# 148 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, FALSE, FALSE, FALSE
# 149 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 196, 0, 56, 4, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 150 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 164, 0, 0, 92, 31, 0, 31, 6, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
# 151 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_7:
# 153 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_8:
# 155 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2::
# 163 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page2
# 164 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 166 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_2
# 174 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_3
# 182 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_4
# 190 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_5
# 198 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_6
# 206 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_7
# 208 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_8
# 211 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_2:
# 167 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 180, 252, 4, 60, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 168 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 4, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
# 169 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 244, 0, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 170 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 4, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 171 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 1, 244, 0, 4, 0, 252, 4, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 172 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 1, 252, 0, 252, 0, 0, 4, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_SUNNY_DAY, MOVE_ENERGY_BALL, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 173 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_3:
# 175 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISABLE, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 176 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 177 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TERRAKION, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
# 178 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 76, 4, 4, 180, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_RAIN_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 179 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 84, 20, 148, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
# 180 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 232, 0, 60, 4, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 181 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_4:
# 183 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 44, 0, 20, 220, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 184 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 156, 0, 52, 188, 104, 8, 31, 1, 31, 31, 30, 30, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 185 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_WHIMSICOTT, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 186 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TERRAKION, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
# 187 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 188 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 189 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_5:
# 191 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 44, 180, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_DISABLE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
# 192 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
# 193 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 220, 0, 172, 20, 4, 92, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, FALSE, FALSE, FALSE
# 194 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 12, 0, 0, 244, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 195 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 84, 68, 4, 100, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 196 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 180, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_PROTECT, MOVE_SPORE, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
# 197 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_6:
# 199 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 124, 52, 220, 28, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_WILL_O_WISP, MOVE_ROOST, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 200 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
# 201 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
# 202 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 203 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 204 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 205 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_7:
# 207 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_8:
# 209 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1::
# 217 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
# 218 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 220 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_2
# 228 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_3
# 236 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_4
# 244 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_5
# 246 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_6
# 249 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_2:
# 221 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AERODACTYL, 65, ITEM_AERODACTYLITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_SMACK_DOWN, MOVE_SKY_DROP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 222 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 244, 64, 0, 4, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DETECT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
# 223 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 224 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HIPPOWDON, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 0, 1, 252, 5, 252, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_SLACK_OFF, FALSE, FALSE, FALSE
# 225 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 252, 60, 192, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_LEECH_SEED, MOVE_POWER_WHIP, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 226 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRADILY, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 136, 0, 40, 80, 31, 0, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
# 227 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_3:
# 229 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HERACROSS, 65, ITEM_HERACRONITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, FALSE, FALSE, FALSE
# 230 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
# 231 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SYLVEON, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 40, 20, 204, 0, 31, 1, 31, 31, 30, 30, MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 232 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 228, 0, 164, 4, 100, 12, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_RECOVER, MOVE_PROTECT, MOVE_ICY_WIND, FALSE, FALSE, FALSE
# 233 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BISHARP, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
# 234 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 0, 252, 0, 100, 156, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_MORNING_SUN, FALSE, FALSE, FALSE
# 235 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_4:
# 237 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_RETURN, MOVE_POWER_UP_PUNCH, FALSE, FALSE, FALSE
# 238 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOGEKISS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 4, 0, 88, 164, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND, MOVE_FOLLOW_ME, FALSE, FALSE, FALSE
# 239 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 240 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
# 241 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CONKELDURR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 242 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BISHARP, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 6, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 243 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_5:
# 245 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1_6:
# 247 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1::
# 255 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2016_Page1
# 256 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 258 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_2
# 266 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_3
# 274 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_4
# 282 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_5
# 290 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_6
# 298 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_7
# 300 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_8
# 303 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_2:
# 259 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 188, 0, 244, 0, 76, 0, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 260 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_DIALGA, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 76, 4, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_DRAGON_PULSE, MOVE_THUNDER, FALSE, FALSE, FALSE
# 261 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_SPORT_BALL, NATURE_BRAVE, 1, 0, 252, 252, 0, 0, 0, 4, 31, 31, 31, 11, 31, 31, MOVE_PROTECT, MOVE_FIRE_FANG, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, FALSE, FALSE, FALSE
# 262 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 16, 252, 232, 4, 31, 31, 31, 31, 31, 31, MOVE_TAUNT, MOVE_SKY_DROP, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 263 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_EXPLOSION, FALSE, FALSE, FALSE
# 264 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOURGEIST_SUPER, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 164, 92, 76, 0, 4, 172, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_BULLET_SEED, MOVE_DESTINY_BOND, FALSE, FALSE, FALSE
# 265 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_3:
# 267 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 116, 0, 140, 236, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_WATER_SPOUT, FALSE, FALSE, FALSE
# 268 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 252, 4, 0, 0, 0, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH, FALSE, FALSE, FALSE
# 269 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 6, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 270 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 271 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 272 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SAFEGUARD, MOVE_SKILL_SWAP, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 273 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_4:
# 275 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYUREM_WHITE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_DRAGON_PULSE, MOVE_BLIZZARD, MOVE_ICE_BEAM, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 276 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 277 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SUCKER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 278 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_HEX, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_PROTECT, FALSE, FALSE, FALSE
# 279 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SABLEYE, 65, ITEM_MENTAL_HERB, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 252, 0, 4, 0, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_TAUNT, MOVE_FOUL_PLAY, MOVE_GRAVITY, MOVE_QUASH, FALSE, FALSE, FALSE
# 280 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_SAFEGUARD, MOVE_SKILL_SWAP, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 281 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_5:
# 283 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_SWORDS_DANCE, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 284 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 204, 44, 52, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 285 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 92, 0, 20, 220, 172, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 286 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 36, 0, 204, 180, 20, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 287 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HITMONTOP, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 132, 76, 4, 0, 44, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_WIDE_GUARD, MOVE_CLOSE_COMBAT, MOVE_FEINT, FALSE, FALSE, FALSE
# 288 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_SAFEGUARD, FALSE, FALSE, FALSE
# 289 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_6:
# 291 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 292 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 293 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_DRACO_METEOR, MOVE_PROTECT, FALSE, FALSE, FALSE
# 294 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 295 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_RELAXED, 2, 0, 252, 0, 252, 0, 0, 4, 31, 0, 31, 29, 31, 31, MOVE_DARK_VOID, MOVE_FOLLOW_ME, MOVE_CRAFTY_SHIELD, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 296 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_MENTAL_HERB, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 140, 0, 0, 118, 31, 31, 31, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 297 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_7:
# 299 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1_8:
# 301 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2::
# 309 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2016_Page2
# 310 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 312 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_2
# 320 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_3
# 328 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_4
# 336 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_5
# 344 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_6
# 346 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_7
# 349 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_2:
# 313 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 314 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ERUPTION, FALSE, FALSE, FALSE
# 315 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 1, 0, 84, 0, 252, 172, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 316 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 317 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_TAILWIND, MOVE_QUICK_GUARD, FALSE, FALSE, FALSE
# 318 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_BOLD, 2, 0, 252, 0, 252, 0, 0, 4, 31, 0, 31, 8, 31, 31, MOVE_SPIKY_SHIELD, MOVE_CRAFTY_SHIELD, MOVE_FOLLOW_ME, MOVE_DARK_VOID, FALSE, FALSE, FALSE
# 319 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_3:
# 321 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 44, 164, 68, 28, 31, 0, 31, 31, 31, 31, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 322 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 204, 44, 52, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 323 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_HASTY, 0, 1, 36, 84, 0, 252, 116, 20, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 324 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INFERNAPE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_QUICK_GUARD, FALSE, FALSE, FALSE
# 325 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_SKILL_SWAP, MOVE_SAFEGUARD, FALSE, FALSE, FALSE
# 326 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_COBA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 116, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 327 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_4:
# 329 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 52, 252, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 330 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 28, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 331 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 84, 0, 172, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DARK_VOID, MOVE_FAKE_OUT, MOVE_TAUNT, MOVE_FINAL_GAMBIT, FALSE, FALSE, FALSE
# 332 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 212, 252, 4, 36, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_KNOCK_OFF, MOVE_SUPER_FANG, FALSE, FALSE, FALSE
# 333 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ARCANINE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_SAFEGUARD, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 334 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_COBA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 31, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GRASS_KNOT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 335 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_5:
# 337 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_DARK_PULSE, MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 338 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ERUPTION, MOVE_PROTECT, FALSE, FALSE, FALSE
# 339 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 340 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_POWER_UP_PUNCH, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, FALSE, FALSE, FALSE
# 341 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_THUNDURUS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_TAUNT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
# 342 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_JUMPLUFF, 65, ITEM_WIDE_LENS, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 252, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_RAGE_POWDER, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 343 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_6:
# 345 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page2_7:
# 347 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2016_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1::
# 355 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
# 356 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 358 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_2
# 360 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_3
# 362 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_4
# 364 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_5
# 367 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_2:
# 359 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_3:
# 361 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_4:
# 363 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1_5:
# 365 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1::
# 373 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
# 374 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 376 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_2
# 378 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_3
# 380 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_4
# 388 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_5
# 396 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_6
# 404 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_7
# 406 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_8
# 409 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_2:
# 377 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_3:
# 379 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_4:
# 381 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 44, 4, 220, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_FLARE_BLITZ, MOVE_WILL_O_WISP, MOVE_ROOST, FALSE, FALSE, FALSE
# 382 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
# 383 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WOOD_HAMMER, MOVE_HORN_LEECH, MOVE_SWORDS_DANCE, FALSE, FALSE, FALSE
# 384 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 92, 92, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_SCALD, MOVE_RECOVER, FALSE, FALSE, FALSE
# 385 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 30, 30, 31, 31, 31, MOVE_EARTH_POWER, MOVE_U_TURN, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
# 386 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 4, 100, 4, 148, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_TOXIC, FALSE, FALSE, FALSE
# 387 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_5:
# 389 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 220, 20, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 390 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 391 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 392 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
# 393 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 394 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 228, 0, 180, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_CLEAR_SMOG, MOVE_RAGE_POWDER, MOVE_SLUDGE_BOMB, FALSE, FALSE, FALSE
# 395 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_6:
# 397 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 50, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 220, 4, 20, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 398 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 60, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 399 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 60, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 400 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 60, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 401 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 60, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 68, 20, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 402 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRESSELIA, 60, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 52, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_SUNNY_DAY, MOVE_ICY_WIND, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 403 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_7:
# 405 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1_8:
# 407 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2::
# 415 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
# 416 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 418 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_2
# 426 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_3
# 434 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_4
# 442 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_5
# 450 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_6
# 458 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_7
# 460 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_8
# 463 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_2:
# 419 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LATIAS, 65, ITEM_LATIASITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 60, 108, 76, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_RECOVER, FALSE, FALSE, FALSE
# 420 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_KINGS_SHIELD, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, FALSE, FALSE, FALSE
# 421 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 100, 60, 52, 44, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 422 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 12, 84, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_U_TURN, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 423 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_TAILWIND, MOVE_DETECT, FALSE, FALSE, FALSE
# 424 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 244, 204, 44, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 425 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_3:
# 427 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LOPUNNY, 65, ITEM_LOPUNNITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_RETURN, MOVE_HIGH_JUMP_KICK, MOVE_ENCORE, FALSE, FALSE, FALSE
# 428 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 44, 60, 156, 4, 31, 0, 30, 31, 31, 31, MOVE_TAILWIND, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_ROAR, FALSE, FALSE, FALSE
# 429 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 430 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 244, 140, 60, 4, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 431 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 228, 4, 148, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 432 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BLACEPHALON, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 244, 252, 4, 31, 0, 30, 31, 31, 31, MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, MOVE_HEAT_WAVE, FALSE, FALSE, FALSE
# 433 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_4:
# 435 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 436 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 437 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 438 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
# 439 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_TAUNT, MOVE_RECYCLE, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 440 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 441 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_5:
# 443 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MAWILE, 65, ITEM_MAWILITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 252, 196, 0, 0, 0, 60, 31, 31, 31, 18, 31, 31, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 444 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 445 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 4, 252, 244, 4, 31, 31, 31, 31, 31, 31, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 446 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 252, 0, 148, 52, 28, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 447 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 448 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 156, 0, 0, 100, 31, 0, 31, 0, 31, 31, MOVE_TICKLE, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 449 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_6:
# 451 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 452 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 453 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 36, 20, 28, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 454 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 455 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 456 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 116, 0, 0, 252, 31, 0, 31, 4, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 457 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_7:
# 459 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2_8:
# 461 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3::
# 469 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3
# 470 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 472 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_2
# 480 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_3
# 482 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_4
# 485 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_2:
# 473 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_TYRANITARITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 44, 164, 20, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 474 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 60, 0, 252, 60, 4, 132, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_OVERHEAT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 475 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 476 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAICHU, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 0, 4, 116, 204, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, FALSE, FALSE, FALSE
# 477 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 478 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 180, 116, 36, 20, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_ACROBATICS, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 479 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_3:
# 481 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3_4:
# 483 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1::
# 491 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
# 492 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 494 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_2
# 502 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_3
# 510 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_4
# 512 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_5
# 515 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_2:
# 495 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 172, 0, 4, 252, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 496 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_RASH, 1, 1, 0, 4, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_POISON_JAB, MOVE_PROTECT, FALSE, FALSE, FALSE
# 497 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 252, 4, 4, 228, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_SNARL, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 498 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 499 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 124, 0, 0, 132, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_HEAL_PULSE, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 500 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_DEWGONG, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 148, 44, 4, 92, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_ICY_WIND, FALSE, FALSE, FALSE
# 501 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_3:
# 503 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 76, 0, 28, 180, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 504 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 505 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 108, 140, 4, 244, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_STONE_EDGE, FALSE, FALSE, FALSE
# 506 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 88, 4, 28, 0, 184, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 507 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CLEFAIRY, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 236, 0, 196, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_FOLLOW_ME, MOVE_ICY_WIND, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 508 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_FRUSTRATION, MOVE_PROTECT, FALSE, FALSE, FALSE
# 509 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_4:
# 511 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1_5:
# 513 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1::
# 521 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
# 522 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 524 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_2
# 532 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_3
# 540 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_4
# 548 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_5
# 550 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_6
# 553 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_2:
# 525 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 60, 0, 252, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 526 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
# 527 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 60, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 108, 76, 100, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 528 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 60, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 116, 20, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 529 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 530 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAICHU, 50, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 4, 116, 204, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_VOLT_TACKLE, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, FALSE, FALSE, FALSE
# 531 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_3:
# 533 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 534 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
# 535 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 536 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 537 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 36, 4, 76, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
# 538 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 539 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_4:
# 541 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 542 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM, MOVE_TAUNT, FALSE, FALSE, FALSE
# 543 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 52, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_ROOST, FALSE, FALSE, FALSE
# 544 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 545 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 546 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 204, 36, 4, 76, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
# 547 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_5:
# 549 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1_6:
# 551 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1::
# 559 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
# 560 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 562 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_2
# 564 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_3
# 566 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_4
# 574 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_5
# 582 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_6
# 590 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_7
# 592 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_8
# 595 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_2:
# 563 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_3:
# 565 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_4:
# 567 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CAMERUPT, 65, ITEM_CAMERUPTITE, ITEM_SPORT_BALL, NATURE_QUIET, 1, 1, 252, 0, 4, 0, 252, 0, 31, 0, 31, 0, 31, 31, MOVE_HEAT_WAVE, MOVE_NATURE_POWER, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 568 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_REUNICLUS, 65, ITEM_PSYCHIUM_Z, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 172, 0, 84, 0, 164, 84, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 569 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_BULU, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 92, 4, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_WOOD_HAMMER, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 570 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STARAPTOR, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 252, 0, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FINAL_GAMBIT, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 571 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 220, 252, 0, 0, 0, 36, 31, 31, 17, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 572 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MIMIKYU, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 573 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_5:
# 575 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 252, 0, 220, 20, 12, 4, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 576 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 577 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 578 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 180, 0, 116, 28, 180, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 579 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AZUMARILL, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
# 580 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 84, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_CLEAR_SMOG, MOVE_RAGE_POWDER, MOVE_ENERGY_BALL, FALSE, FALSE, FALSE
# 581 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_6:
# 583 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 60, 0, 68, 196, 132, 52, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_DISABLE, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 584 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 585 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SCRAFTY, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 2, 1, 252, 4, 92, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FOUL_PLAY, MOVE_DRAIN_PUNCH, MOVE_DETECT, FALSE, FALSE, FALSE
# 586 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_POLITOED, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 252, 0, 148, 52, 28, 28, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 587 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 588 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 589 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_7:
# 591 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1_8:
# 593 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2::
# 601 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2
# 602 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 604 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_2
# 612 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_3
# 614 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_4
# 617 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_2:
# 605 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 172, 0, 4, 252, 68, 12, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_SNARL, MOVE_PROTECT, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 606 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 607 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_MUDDY_WATER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 608 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_HIGH_HORSEPOWER, MOVE_RECYCLE, FALSE, FALSE, FALSE
# 609 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GOTHITELLE, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 610 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 60, 44, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_ACROBATICS, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 611 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_3:
# 613 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2_4:
# 615 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1::
# 623 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
# 624 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 626 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_2
# 634 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_3
# 642 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_4
# 650 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_5
# 652 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_6
# 655 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_2:
# 627 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 628 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 629 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TYRANITAR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 228, 4, 20, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 630 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_PORYGON2, 65, ITEM_EVIOLITE, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 244, 0, 188, 4, 4, 68, 31, 0, 31, 31, 31, 31, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 631 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 632 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_DETECT, FALSE, FALSE, FALSE
# 633 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_3:
# 635 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 50, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 124, 0, 188, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 636 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MIMIKYU, 50, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SHADOW_CLAW, MOVE_DESTINY_BOND, MOVE_TAUNT, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 637 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 68, 108, 4, 252, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 638 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 50, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 108, 0, 76, 228, 84, 12, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 639 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 50, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 148, 0, 244, 0, 0, 116, 31, 31, 31, 0, 31, 31, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_FRUSTRATION, MOVE_PROTECT, FALSE, FALSE, FALSE
# 640 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ACCELGOR, 50, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 2, 1, 252, 0, 0, 252, 4, 0, 31, 0, 31, 31, 31, 31, MOVE_ACID_SPRAY, MOVE_FINAL_GAMBIT, MOVE_ENCORE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 641 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_4:
# 643 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 4, 188, 84, 4, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 644 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 645 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 4, 108, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 646 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 647 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_PHEROMOSA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 0, 252, 0, 252, 4, 0, 31, 31, 31, 31, 31, 31, MOVE_ICE_BEAM, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_POISON_JAB, FALSE, FALSE, FALSE
# 648 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_DRIFBLIM, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 180, 92, 116, 116, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_TAILWIND, MOVE_HAZE, MOVE_WILL_O_WISP, FALSE, FALSE, FALSE
# 649 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_5:
# 651 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1_6:
# 653 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1::
# 661 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
# 662 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 664 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_2
# 672 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_3
# 680 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_4
# 688 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_5
# 696 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_6
# 698 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_7
# 701 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_2:
# 665 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 50, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 220, 4, 20, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
# 666 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 50, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 667 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 50, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 4, 132, 28, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 668 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 50, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 669 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 50, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 228, 0, 68, 20, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUBSTITUTE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 670 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRESSELIA, 50, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 4, 228, 20, 31, 0, 31, 31, 31, 31, MOVE_TRICK_ROOM, MOVE_SUNNY_DAY, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 671 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_3:
# 673 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 52, 244, 28, 116, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_ROAR, FALSE, FALSE, FALSE
# 674 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 124, 0, 188, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 675 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 676 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 677 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 52, 196, 28, 196, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 678 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CRESSELIA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 236, 0, 28, 4, 20, 220, 31, 0, 31, 31, 31, 31, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_ICY_WIND, MOVE_PSYSHOCK, FALSE, FALSE, FALSE
# 679 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_4:
# 681 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 1, 212, 228, 44, 20, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_ICE_PUNCH, MOVE_LOW_KICK, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 682 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAUNT, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, FALSE, FALSE, FALSE
# 683 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 220, 0, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 684 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 84, 0, 44, 124, 244, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
# 685 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SUICUNE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 4, 20, 180, 52, 31, 0, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SNARL, MOVE_SCALD, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 686 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_FERROTHORN, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 1, 252, 204, 0, 0, 0, 52, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_LEECH_SEED, MOVE_GYRO_BALL, MOVE_POWER_WHIP, FALSE, FALSE, FALSE
# 687 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_5:
# 689 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 52, 244, 28, 116, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
# 690 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 100, 0, 4, 188, 212, 4, 31, 0, 31, 31, 31, 31, MOVE_QUIVER_DANCE, MOVE_HEAT_WAVE, MOVE_BUG_BUZZ, MOVE_PROTECT, FALSE, FALSE, FALSE
# 691 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AEGISLASH, 65, ITEM_GHOSTIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 0, 116, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_WIDE_GUARD, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
# 692 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZAPDOS, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 36, 20, 108, 92, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_TAILWIND, MOVE_ROOST, FALSE, FALSE, FALSE
# 693 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 100, 20, 28, 116, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 694 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 164, 4, 252, 0, 68, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 695 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_6:
# 697 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1_7:
# 699 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1::
# 707 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
# 708 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 710 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_2
# 712 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_3
# 714 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_4
# 716 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_5
# 718 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_6
# 721 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_2:
# 711 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_3:
# 713 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_4:
# 715 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_5:
# 717 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1_6:
# 719 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1::
# 727 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
# 728 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 730 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_2
# 732 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_3
# 734 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_4
# 742 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_5
# 750 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_6
# 758 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_7
# 760 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_8
# 763 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_2:
# 731 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_3:
# 733 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_4:
# 735 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 196, 0, 12, 68, 4, 228, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_FOCUS_BLAST, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
# 736 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 148, 0, 4, 116, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, FALSE, FALSE, FALSE
# 737 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 68, 0, 12, 220, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, FALSE, FALSE, FALSE
# 738 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAICHU_ALOLAN, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 36, 4, 188, 252, 0, 28, 31, 31, 31, 31, 31, 31, MOVE_ALLY_SWITCH, MOVE_NUZZLE, MOVE_FLING, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 739 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 212, 28, 4, 84, 0, 180, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_ROAR, FALSE, FALSE, FALSE
# 740 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ACCELGOR, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 2, 0, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_STRUGGLE_BUG, MOVE_FINAL_GAMBIT, MOVE_ACID_SPRAY, MOVE_ENCORE, FALSE, FALSE, FALSE
# 741 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_5:
# 743 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 188, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 744 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FIRE_PUNCH, MOVE_STONE_EDGE, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, FALSE, FALSE, FALSE
# 745 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TALONFLAME, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_QUICK_GUARD, MOVE_OVERHEAT, FALSE, FALSE, FALSE
# 746 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 30, 30, 31, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, FALSE, FALSE, FALSE
# 747 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 36, 28, 4, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 748 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 204, 0, 0, 60, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_SNARL, FALSE, FALSE, FALSE
# 749 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_6:
# 751 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 4, 0, 36, 228, 60, 180, 31, 31, 31, 31, 31, 31, MOVE_OBLIVION_WING, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_SNARL, FALSE, FALSE, FALSE
# 752 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 12, 0, 102, 212, 140, 44, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 753 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 754 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 164, 0, 60, 244, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 755 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 204, 0, 0, 60, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_ROAR, FALSE, FALSE, FALSE
# 756 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 228, 0, 124, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_GRASS_KNOT, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 757 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_7:
# 759 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1_8:
# 761 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2::
# 769 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2
# 770 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 772 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_2
# 780 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_3
# 788 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_4
# 790 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_5
# 793 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_2:
# 773 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 220, 60, 4, 84, 0, 140, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 774 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 4, 20, 20, 228, 31, 0, 31, 31, 31, 31, MOVE_SNARL, MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_FOUL_PLAY, FALSE, FALSE, FALSE
# 775 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ELECTRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 776 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 777 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_LONELY, 0, 0, 196, 252, 0, 0, 0, 60, 31, 31, 16, 0, 31, 31, MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 778 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 779 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_3:
# 781 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SOLGALEO, 65, ITEM_SOLGANIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 180, 12, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_SUNSTEEL_STRIKE, MOVE_SUPERPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 782 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZYGARDE, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 52, 156, 4, 68, 0, 228, 31, 31, 31, 31, 31, 31, MOVE_THOUSAND_ARROWS, MOVE_EXTREME_SPEED, MOVE_COIL, MOVE_PROTECT, FALSE, FALSE, FALSE
# 783 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VOLCARONA, 65, ITEM_FIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_OVERHEAT, MOVE_TAILWIND, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 784 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 785 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 60, 156, 4, 44, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, MOVE_SWAGGER, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 786 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 787 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_4:
# 789 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2_5:
# 791 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1::
# 799 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
# 800 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 802 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_2
# 810 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_3
# 818 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_4
# 820 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_5
# 823 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_2:
# 803 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 804 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_SCALD, MOVE_THUNDER, FALSE, FALSE, FALSE
# 805 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT, MOVE_RAIN_DANCE, FALSE, FALSE, FALSE
# 806 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 807 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FOLLOW_ME, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 808 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 809 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_3:
# 811 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 812 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_THUNDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 813 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_TAUNT, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 814 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 52, 4, 252, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_SACRED_SWORD, FALSE, FALSE, FALSE
# 815 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 816 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 817 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_4:
# 819 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1_5:
# 821 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1::
# 829 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
# 830 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 832 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_2
# 840 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_3
# 848 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_4
# 856 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_5
# 858 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_6
# 861 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_2:
# 833 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 834 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
# 835 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KOMMO_O, 65, ITEM_KOMMONIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_CLANGING_SCALES, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_PROTECT, FALSE, FALSE, FALSE
# 836 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 12, 100, 28, 132, 31, 31, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 837 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 838 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 839 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_3:
# 841 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 842 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 843 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_FEINT, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 844 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 845 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 846 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CROBAT, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 36, 0, 188, 252, 0, 32, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_HAZE, FALSE, FALSE, FALSE
# 847 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_4:
# 849 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 850 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 188, 52, 31, 0, 31, 31, 31, 31, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 851 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TSAREENA, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 36, 28, 4, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_HELPING_HAND, FALSE, FALSE, FALSE
# 852 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 4, 0, 0, 0, 252, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 853 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 2, 1, 36, 0, 0, 252, 0, 220, 31, 0, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_LOVELY_KISS, MOVE_WIDE_GUARD, MOVE_CRAFTY_SHIELD, FALSE, FALSE, FALSE
# 854 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 212, 0, 0, 60, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 855 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_5:
# 857 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1_6:
# 859 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1::
# 867 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
# 868 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 870 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_2
# 878 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_3
# 886 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_4
# 894 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_5
# 902 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_6
# 910 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_7
# 912 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_8
# 915 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_2:
# 871 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SPECS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 156, 20, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_SCALD, FALSE, FALSE, FALSE
# 872 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_DIALGA, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 0, 252, 0, 76, 0, 12, 164, 31, 0, 31, 0, 31, 31, MOVE_FLASH_CANNON, MOVE_PROTECT, MOVE_THUNDER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 873 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_PSYCHIC_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_PROTECT, MOVE_TAUNT, FALSE, FALSE, FALSE
# 874 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 875 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 252, 4, 164, 28, 0, 60, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 876 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 100, 4, 36, 116, 31, 0, 31, 31, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 877 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_3:
# 879 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 244, 68, 92, 4, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_SUNSTEEL_STRIKE, MOVE_PHOTON_GEYSER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 880 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_THUNDER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 881 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDER, MOVE_DAZZLING_GLEAM, MOVE_VOLT_SWITCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 882 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 2, 1, 244, 4, 244, 4, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_BELLY_DRUM, MOVE_FRUSTRATION, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 883 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUDICOLO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 164, 0, 12, 252, 76, 4, 31, 31, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_ICY_WIND, MOVE_SCALD, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 884 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_U_TURN, FALSE, FALSE, FALSE
# 885 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_4:
# 887 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_ELECTRIC_SEED, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 116, 36, 100, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_WIDE_GUARD, MOVE_ROOST, FALSE, FALSE, FALSE
# 888 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 164, 0, 164, 100, 76, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 889 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_THUNDER, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 890 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 60, 92, 4, 180, 0, 172, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 891 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 892 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 244, 0, 44, 0, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 893 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_5:
# 895 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 896 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_CHOICE_BAND, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 100, 228, 4, 100, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
# 897 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SLEEP_POWDER, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_PROTECT, FALSE, FALSE, FALSE
# 898 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 12, 60, 4, 188, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 899 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 0, 20, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 900 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_ROAR, MOVE_PROTECT, FALSE, FALSE, FALSE
# 901 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_6:
# 903 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 904 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_SCALD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 905 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 28, 0, 4, 252, 164, 60, 31, 0, 31, 31, 31, 31, MOVE_HURRICANE, MOVE_PROTECT, MOVE_TAUNT, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 906 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KARTANA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 52, 4, 252, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_SACRED_SWORD, FALSE, FALSE, FALSE
# 907 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 52, 0, 220, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 908 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 236, 0, 76, 0, 0, 196, 31, 0, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 909 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_7:
# 911 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1_8:
# 913 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2::
# 921 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2
# 922 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 924 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_2
# 932 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_3
# 940 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_4
# 948 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_5
# 956 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_6
# 964 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_7
# 966 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_8
# 969 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_2:
# 925 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_SUBSTITUTE, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 926 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_SPELL_TAG, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_PSYCH_UP, MOVE_PROTECT, FALSE, FALSE, FALSE
# 927 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_FEINT, MOVE_LOW_KICK, FALSE, FALSE, FALSE
# 928 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SMEARGLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 252, 4, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_FOLLOW_ME, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_SPIKY_SHIELD, FALSE, FALSE, FALSE
# 929 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
# 930 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CROBAT, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 36, 0, 188, 252, 0, 32, 31, 31, 31, 31, 31, 31, MOVE_TAILWIND, MOVE_SUPER_FANG, MOVE_TAUNT, MOVE_HAZE, FALSE, FALSE, FALSE
# 931 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_3:
# 933 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_BLACK_GLASSES, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 124, 76, 116, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 934 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_GEOMANCY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 935 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 212, 0, 20, 252, 4, 20, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_NATURES_MADNESS, MOVE_HEAL_PULSE, MOVE_TAUNT, FALSE, FALSE, FALSE
# 936 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 937 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 938 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_PAYAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_GRASS_KNOT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 939 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_4:
# 941 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 172, 4, 4, 252, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_KNOCK_OFF, MOVE_PROTECT, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 942 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 68, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_SWORDS_DANCE, MOVE_FIRE_PUNCH, MOVE_PROTECT, FALSE, FALSE, FALSE
# 943 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 1, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 944 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WILD_CHARGE, MOVE_VOLT_SWITCH, MOVE_SKY_DROP, MOVE_BRAVE_BIRD, FALSE, FALSE, FALSE
# 945 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 108, 0, 0, 0, 148, 31, 31, 31, 0, 31, 31, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
# 946 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 60, 4, 76, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
# 947 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_5:
# 949 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_BLACK_GLASSES, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 12, 204, 4, 252, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, FALSE, FALSE, FALSE
# 950 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 100, 0, 4, 252, 140, 12, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_SCALD, FALSE, FALSE, FALSE
# 951 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_POISON_JAB, MOVE_LOW_KICK, MOVE_FEINT, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 952 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 4, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_TAUNT, FALSE, FALSE, FALSE
# 953 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 44, 0, 0, 0, 212, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 954 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_MAGO_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 955 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_6:
# 957 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_ZYGARDE, 65, ITEM_MISTY_SEED, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 76, 180, 0, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_THOUSAND_ARROWS, MOVE_COIL, MOVE_EXTREME_SPEED, MOVE_PROTECT, FALSE, FALSE, FALSE
# 958 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SOLGALEO, 65, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 228, 132, 52, 4, 0, 92, 31, 31, 31, 31, 0, 31, MOVE_SUNSTEEL_STRIKE, MOVE_SUPERPOWER, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 959 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_VENUSAUR, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SLUDGE_BOMB, MOVE_GRASS_KNOT, MOVE_SLEEP_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 960 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TOXICROAK, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 148, 108, 4, 4, 0, 244, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_LOW_KICK, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
# 961 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 60, 108, 4, 84, 31, 0, 31, 31, 31, 31, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_SWAGGER, MOVE_ICY_WIND, FALSE, FALSE, FALSE
# 962 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 0, 20, 0, 0, 252, 31, 31, 31, 31, 0, 31, MOVE_FAKE_OUT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_SNARL, FALSE, FALSE, FALSE
# 963 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_7:
# 965 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2_8:
# 967 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1::
# 975 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
# 976 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 978 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_2
# 980 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_3
# 982 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_4
# 990 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_5
# 998 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_6
# 1006 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_7
# 1008 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_8
# 1011 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_2:
# 979 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_3:
# 981 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_4:
# 983 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_NECROZMA_DAWN_WINGS, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PHOTON_GEYSER, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 984 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 84, 12, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 985 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_HASTY, 0, 1, 0, 132, 0, 252, 124, 0, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_HYPER_VOICE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 986 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
# 987 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 124, 60, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_HAZE, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 988 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 36, 0, 0, 236, 31, 31, 31, 0, 31, 31, MOVE_FLARE_BLITZ, MOVE_THROAT_CHOP, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 989 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_5:
# 991 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 84, 0, 4, 172, 236, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PHOTON_GEYSER, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 992 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 0, 0, 0, 180, 31, 31, 31, 27, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_DRAGON_CLAW, FALSE, FALSE, FALSE
# 993 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DOUBLE_EDGE, MOVE_HYPER_VOICE, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 994 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 140, 108, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_RETURN, MOVE_BITE, MOVE_ROAR, FALSE, FALSE, FALSE
# 995 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_UMBREON, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 252, 0, 204, 0, 0, 52, 31, 0, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SNARL, MOVE_HELPING_HAND, MOVE_MOONLIGHT, FALSE, FALSE, FALSE
# 996 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
# 997 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_6:
# 999 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_COLBUR_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 84, 0, 180, 0, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, FALSE, FALSE, FALSE
# 1000 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, FALSE, FALSE, FALSE
# 1001 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 100, 44, 4, 124, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 1002 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 4, 140, 124, 4, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_MOONBLAST, MOVE_SCALD, FALSE, FALSE, FALSE
# 1003 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 108, 4, 84, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_SNATCH, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 1004 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 20, 0, 0, 244, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
# 1005 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_7:
# 1007 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1_8:
# 1009 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2::
# 1017 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
# 1018 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 1020 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_2
# 1028 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_3
# 1036 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_4
# 1044 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_5
# 1052 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_6
# 1060 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_7
# 1062 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_8
# 1065 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_2:
# 1021 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_LUNALIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 28, 252, 196, 28, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TAILWIND, MOVE_ROAR, FALSE, FALSE, FALSE
# 1022 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 236, 0, 12, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1023 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MEDICHAM, 65, ITEM_MEDICHAMITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_HIGH_JUMP_KICK, MOVE_BULLET_PUNCH, FALSE, FALSE, FALSE
# 1024 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_LELE, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 76, 0, 20, 252, 156, 4, 31, 0, 31, 31, 31, 31, MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_MAGIC_ROOM, FALSE, FALSE, FALSE
# 1025 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 116, 4, 148, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_WILD_CHARGE, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 1026 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_NIHILEGO, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_POWER_GEM, MOVE_ACID_SPRAY, MOVE_ROLE_PLAY, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1027 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_3:
# 1029 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 132, 116, 4, 164, 0, 92, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_EXTREME_SPEED, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1030 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LUNALA, 65, ITEM_KASIB_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 148, 0, 84, 20, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_MOONGEIST_BEAM, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1031 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 20, 4, 220, 12, 31, 0, 31, 31, 31, 31, MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_HAZE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1032 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_BRAVE, 0, 0, 252, 252, 0, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_PROTECT, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 1033 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SNORLAX, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 2, 0, 196, 4, 252, 20, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_BELLY_DRUM, MOVE_RECYCLE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1034 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 0, 244, 4, 140, 0, 4, 116, 31, 31, 31, 9, 31, 31, MOVE_KNOCK_OFF, MOVE_SNARL, MOVE_U_TURN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1035 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_4:
# 1037 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_NECROZMA_DUSK_MANE, 65, ITEM_ULTRANECROZIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 92, 4, 4, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PHOTON_GEYSER, MOVE_SUNSTEEL_STRIKE, FALSE, FALSE, FALSE
# 1038 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 28, 36, 4, 252, 0, 188, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EXTREME_SPEED, MOVE_DRAGON_ASCENT, FALSE, FALSE, FALSE
# 1039 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 156, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, FALSE, FALSE, FALSE
# 1040 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_NATURES_MADNESS, MOVE_SCALD, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 1041 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 20, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1042 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 1043 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_5:
# 1045 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 68, 76, 0, 252, 4, 108, 31, 31, 31, 31, 31, 31, MOVE_DRAGON_ASCENT, MOVE_ICY_WIND, MOVE_EXTREME_SPEED, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 1046 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1047 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 0, 0, 0, 252, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1048 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 12, 0, 4, 252, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1049 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 252, 0, 20, 0, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DARKEST_LARIAT, MOVE_U_TURN, MOVE_ROAR, FALSE, FALSE, FALSE
# 1050 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CELESTEELA, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 124, 0, 0, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_HEAVY_SLAM, MOVE_LEECH_SEED, MOVE_WIDE_GUARD, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1051 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_6:
# 1053 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SOLGALEO, 65, ITEM_SOLGANIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 36, 220, 0, 0, 0, 252, 31, 31, 31, 15, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_SUPERPOWER, MOVE_SUNSTEEL_STRIKE, FALSE, FALSE, FALSE
# 1054 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RAYQUAZA, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 196, 44, 0, 252, 12, 4, 31, 31, 31, 31, 31, 31, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_EARTH_POWER, MOVE_DRAGON_ASCENT, FALSE, FALSE, FALSE
# 1055 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 244, 4, 4, 156, 0, 100, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_WILD_CHARGE, FALSE, FALSE, FALSE
# 1056 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 244, 0, 188, 0, 0, 76, 31, 0, 31, 0, 31, 31, MOVE_NATURES_MADNESS, MOVE_SCALD, MOVE_LIGHT_SCREEN, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 1057 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_AGUAV_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 0, 0, 20, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1058 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GASTRODON, 65, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_QUIET, 1, 0, 148, 0, 92, 0, 252, 12, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
# 1059 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_7:
# 1061 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2_8:
# 1063 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3::
# 1071 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3
# 1072 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 1074 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_2
# 1082 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_3
# 1084 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_4
# 1087 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_2:
# 1075 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1076 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KYOGRE, 65, ITEM_BLUE_ORB, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_WATER_SPOUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1077 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 156, 164, 4, 180, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_BULLET_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1078 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 236, 116, 4, 148, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_WILD_CHARGE, MOVE_ELECTROWEB, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 1079 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 1080 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 4, 0, 0, 252, 31, 0, 31, 0, 31, 31, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1081 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_3:
# 1083 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3_4:
# 1085 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1::
# 1093 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
# 1094 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 1096 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_2
# 1104 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_3
# 1112 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_4
# 1120 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_5
# 1122 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_6
# 1125 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_2:
# 1097 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1098 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_SWORDS_DANCE, FALSE, FALSE, FALSE
# 1099 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 244, 0, 4, 252, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
# 1100 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_HASTY, 0, 0, 188, 28, 0, 252, 20, 20, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 1101 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 244, 0, 76, 0, 0, 188, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_PROTECT, MOVE_ICY_WIND, MOVE_LIGHT_SCREEN, FALSE, FALSE, FALSE
# 1102 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_IAPAPA_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 236, 0, 36, 0, 0, 236, 31, 31, 31, 3, 31, 31, MOVE_PROTECT, MOVE_U_TURN, MOVE_SNARL, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1103 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_3:
# 1105 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, FALSE, FALSE, FALSE
# 1106 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 220, 156, 4, 12, 0, 116, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, FALSE, FALSE, FALSE
# 1107 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 100, 44, 4, 124, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 1108 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_INCINIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 108, 4, 84, 0, 76, 31, 31, 31, 31, 31, 31, MOVE_DARKEST_LARIAT, MOVE_SNATCH, MOVE_FAKE_OUT, MOVE_U_TURN, FALSE, FALSE, FALSE
# 1109 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 0, 84, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_NATURES_MADNESS, MOVE_ICY_WIND, MOVE_GRAVITY, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
# 1110 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 252, 0, 100, 0, 0, 156, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_CLEAR_SMOG, MOVE_SPORE, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
# 1111 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_4:
# 1113 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_XERNEAS, 65, ITEM_POWER_HERB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 252, 188, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_GEOMANCY, MOVE_DAZZLING_GLEAM, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1114 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROAR, MOVE_EARTH_POWER, MOVE_ERUPTION, FALSE, FALSE, FALSE
# 1115 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_LOW_KICK, MOVE_BITE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1116 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TORNADUS, 65, ITEM_FLYINIUM_Z, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 148, 0, 132, 188, 4, 36, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_TAUNT, FALSE, FALSE, FALSE
# 1117 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 236, 4, 4, 28, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_SNARL, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1118 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 76, 0, 0, 196, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_CLEAR_SMOG, MOVE_SPORE, FALSE, FALSE, FALSE
# 1119 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_5:
# 1121 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1_6:
# 1123 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1::
# 1131 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
# 1132 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 1134 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_2
# 1142 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_3
# 1150 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_4
# 1152 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_5
# 1155 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_2:
# 1135 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FOUL_PLAY, MOVE_SUCKER_PUNCH, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1136 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 60, 4, 36, 0, 156, 31, 31, 31, 31, 31, 31, MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_ROAR, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1137 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 204, 0, 4, 252, 44, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1138 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_WIKI_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 220, 0, 0, 84, 0, 204, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1139 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 1, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_PROTECT, FALSE, FALSE, FALSE
# 1140 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_BRONZONG, 65, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 0, 0, 252, 0, 68, 0, 0, 188, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_TRICK_ROOM, MOVE_GRAVITY, MOVE_HYPNOSIS, FALSE, FALSE, FALSE
# 1141 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_3:
# 1143 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_YVELTAL, 65, ITEM_DARKINIUM_Z, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_FOUL_PLAY, MOVE_TAILWIND, FALSE, FALSE, FALSE
# 1144 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GROUDON, 65, ITEM_RED_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 4, 244, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_ROAR, FALSE, FALSE, FALSE
# 1145 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 252, 4, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER, MOVE_SUBSTITUTE, FALSE, FALSE, FALSE
# 1146 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_KOKO, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 244, 0, 0, 156, 0, 108, 31, 0, 31, 31, 31, 31, MOVE_VOLT_SWITCH, MOVE_ELECTROWEB, MOVE_DAZZLING_GLEAM, MOVE_SKY_DROP, FALSE, FALSE, FALSE
# 1147 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_STAKATAKA, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 244, 0, 20, 0, 0, 244, 31, 31, 31, 0, 31, 31, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_WIDE_GUARD, MOVE_TRICK_ROOM, FALSE, FALSE, FALSE
# 1148 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_FIGY_BERRY, ITEM_SPORT_BALL, NATURE_CAREFUL, 1, 0, 188, 0, 0, 76, 0, 244, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1149 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_4:
# 1151 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1_5:
# 1153 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Sample_Page1::
# 1161 "data/scripts/sample_teams_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Sample_Page1
# 1162 "data/scripts/sample_teams_options.pory"
	switch VAR_RESULT
# 1164 "data/scripts/sample_teams_options.pory"
	case 0, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_2
# 1170 "data/scripts/sample_teams_options.pory"
	case 1, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_3
# 1176 "data/scripts/sample_teams_options.pory"
	case 2, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_4
# 1182 "data/scripts/sample_teams_options.pory"
	case 3, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_5
# 1188 "data/scripts/sample_teams_options.pory"
	case 4, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_6
# 1194 "data/scripts/sample_teams_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_7
# 1196 "data/scripts/sample_teams_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_8
# 1199 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_2:
# 1165 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 4, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_HIDDEN_POWER, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 1166 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 76, 4, 28, 0, 148, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_WILL_O_WISP, MOVE_FLARE_BLITZ, FALSE, FALSE, FALSE
# 1167 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_MILOTIC, 65, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 196, 4, 20, 36, 31, 0, 31, 31, 31, 31, MOVE_MUDDY_WATER, MOVE_HYPNOSIS, MOVE_RECOVER, MOVE_COIL, FALSE, FALSE, FALSE
# 1168 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RILLABOOM, 50, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1169 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_3:
# 1171 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
# 1172 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 1173 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_FLUTTER_MANE, 65, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1174 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1175 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_4:
# 1177 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 1178 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 1179 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_HEATRAN, 65, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 36, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
# 1180 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1181 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_5:
# 1183 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
# 1184 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_TAPU_FINI, 65, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 52, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, FALSE, FALSE, FALSE
# 1185 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 188, 36, 4, 28, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1186 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
# 1187 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_6:
# 1189 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 65, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
# 1190 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, FALSE, FALSE, FALSE
# 1191 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1192 "data/scripts/sample_teams_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 1193 "data/scripts/sample_teams_options.pory"
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_7:
# 1195 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Sample_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Sample_Page1_8:
# 1197 "data/scripts/sample_teams_options.pory"
	goto Auto_EventScript_Sample_Teams_Doubles_Sample_Page1
	return


Auto_EventScript_Sample_Teams_Controls_Text_0:
# 5 "data/scripts/sample_teams_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Teams_Page1::
# 1203 "data/scripts/sample_teams_options.pory"
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Page1::
# 1210 "data/scripts/sample_teams_options.pory"
	.string "LEGACY$"
	.string "SAMPLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Page1::
# 1218 "data/scripts/sample_teams_options.pory"
	.string "VGC2013$"
	.string "VGC2015$"
	.string "VGC2016$"
	.string "VGC2018$"
	.string "VGC2019$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2013_Page1::
# 1229 "data/scripts/sample_teams_options.pory"
	.string "ARASH WORLDS$"
	.string "GEBEBO WORLDS$"
	.string "GOODSTUFFS$"
	.string "STANDARD SAND$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page1::
# 1239 "data/scripts/sample_teams_options.pory"
	.string "ARAHPTHOS TEAMS$"
	.string "JAPAN SAND$"
	.string "M-GARDEVOIR$"
	.string "M-SALAMENCE$"
	.string "SCAR WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page2::
# 1250 "data/scripts/sample_teams_options.pory"
	.string "SHOMA WORLDS$"
	.string "TERRACOTT RAIN$"
	.string "TERRACOTT SUN$"
	.string "WOLFE PERISH$"
	.string "WOLFE WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Teams_Page1::
# 1261 "data/scripts/sample_teams_options.pory"
	.string "M-AERODACTYL$"
	.string "M-HERACROSS$"
	.string "M-KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2016_Page1::
# 1270 "data/scripts/sample_teams_options.pory"
	.string "DIALGA KYOGRE$"
	.string "DUAL PRIMALS$"
	.string "GRAVITY$"
	.string "RAYQUAZA KYOGRE$"
	.string "XERN DON BRONZONG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2016_Page2::
# 1281 "data/scripts/sample_teams_options.pory"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE$"
	.string "XERNEAS RAYQUAZA$"
	.string "YVELTAL GROUDON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Page1::
# 1291 "data/scripts/sample_teams_options.pory"
	.string "POST-BANK$"
	.string "PRE-BANK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page1::
# 1299 "data/scripts/sample_teams_options.pory"
	.string "KOMMO-O TEAMS$"
	.string "MIMI LAX TEAMS$"
	.string "M-CHARIZARD-X$"
	.string "M-GARDEVOIR$"
	.string "M-KANGASKHAN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page2::
# 1310 "data/scripts/sample_teams_options.pory"
	.string "M-LATIAS$"
	.string "M-LOPUNNY$"
	.string "M-MANECTRIC$"
	.string "M-MAWILE$"
	.string "M-METAGROSS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Page3::
# 1321 "data/scripts/sample_teams_options.pory"
	.string "M-TYRANITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Kommo_O_Teams_Page1::
# 1328 "data/scripts/sample_teams_options.pory"
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Post_Bank_Mimi_Lax_Teams_Page1::
# 1336 "data/scripts/sample_teams_options.pory"
	.string "M-CHARIZARD Y$"
	.string "M-MANECTRIC$"
	.string "M-METAGROSS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page1::
# 1345 "data/scripts/sample_teams_options.pory"
	.string "M-CHARIZARD-Y TEAMS$"
	.string "M-KANGASKHAN TEAMS$"
	.string "M-CAMERUPT$"
	.string "M-GARDEVOIR$"
	.string "M-GENGAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_Page2::
# 1356 "data/scripts/sample_teams_options.pory"
	.string "M-MANECTRIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Charizard_Y_Teams_Page1::
# 1363 "data/scripts/sample_teams_options.pory"
	.string "BALANCE$"
	.string "LELE ACCELGOR$"
	.string "LELE DRIFBLIM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2018_Pre_Bank_M_Kangaskhan_Teams_Page1::
# 1372 "data/scripts/sample_teams_options.pory"
	.string "BALANCE$"
	.string "CRESSELIA$"
	.string "SUICUNE$"
	.string "VOLCARONA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Page1::
# 1382 "data/scripts/sample_teams_options.pory"
	.string "MOON SERIES$"
	.string "SUN SERIES$"
	.string "ULTRA SERIES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page1::
# 1391 "data/scripts/sample_teams_options.pory"
	.string "XERNEAS KYOGRE TEAMS$"
	.string "XERNEAS LUNALA TEAMS$"
	.string "LUNALA KYOGRE$"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Page2::
# 1402 "data/scripts/sample_teams_options.pory"
	.string "YVELTAL GROUDON$"
	.string "ZYGARDE SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Kyogre_Teams_Page1::
# 1410 "data/scripts/sample_teams_options.pory"
	.string "OFFENSIVE$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Moon_Series_Xerneas_Lunala_Teams_Page1::
# 1418 "data/scripts/sample_teams_options.pory"
	.string "KOMMO-O$"
	.string "OFFENSIVE$"
	.string "STAKATAKA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page1::
# 1427 "data/scripts/sample_teams_options.pory"
	.string "DIALGA KYOGRE$"
	.string "DUSK MANE KYOGRE$"
	.string "LUNALA KYOGRE$"
	.string "XERNEAS GROUDON$"
	.string "XERNEAS KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Sun_Series_Page2::
# 1438 "data/scripts/sample_teams_options.pory"
	.string "XERNEAS LUNALA$"
	.string "XERNEAS YVELTAL$"
	.string "YVELTAL GROUDON$"
	.string "YVELTAL KYOGRE$"
	.string "ZYGARDE SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page1::
# 1449 "data/scripts/sample_teams_options.pory"
	.string "XERNEAS GROUDON TEAMS$"
	.string "YVELTAL GROUDON TEAMS$"
	.string "DAWN WINGS GROUDON$"
	.string "DUSK MANE GROUDON$"
	.string "LUNALA GROUDON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page2::
# 1460 "data/scripts/sample_teams_options.pory"
	.string "LUNALA KYOGRE$"
	.string "LUNALA RAYQUAZA$"
	.string "RAYQUAZA DUSK MANE$"
	.string "RAYQUAZA KYOGRE$"
	.string "RAYQUAZA SOLGALEO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Page3::
# 1471 "data/scripts/sample_teams_options.pory"
	.string "YVELTAL KYOGRE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Xerneas_Groudon_Teams_Page1::
# 1478 "data/scripts/sample_teams_options.pory"
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "TORN KANG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2019_Ultra_Series_Yveltal_Groudon_Teams_Page1::
# 1487 "data/scripts/sample_teams_options.pory"
	.string "PERISH TRAP$"
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Sample_Page1::
# 1495 "data/scripts/sample_teams_options.pory"
	.string "M-CHARIZARD X$"
	.string "M-CHARIZARD Y$"
	.string "M-GARDEVOIR$"
	.string "M-METAGROSS$"
	.string "M-SALAMENCE$"
	.string "Go Back$"
	.string "$"
