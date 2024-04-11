Auto_EventScript_Sample_Teams_Controls::
	msgbox Auto_EventScript_Sample_Teams_Controls_Text_0
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Page1_4
	goto Auto_EventScript_Sample_Teams_End
	return

Auto_EventScript_Sample_Teams_Page1_2:
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Page1_3:
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Page1_4:
	goto Auto_EventScript_Sample_Teams_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_Page1_2
	case 1, Auto_EventScript_Sample_Teams_Doubles_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Page1_5
	goto Auto_EventScript_Sample_Teams_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_2:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_3:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_4:
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Page1_5:
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_4v4_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_4v4_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_4v4_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Page1_4
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Page1_2:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Page1_3:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Page1_4:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_4v4_Standard_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_2
	case 1, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_3
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_4
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_5
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_2:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_3:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_4:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1_5:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_4v4_Standard_Modern_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_2
	case 1, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_3
	case 2, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_4
	case 3, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_5
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_6
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_7
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_2:
	givemon SPECIES_CHARIZARD, 85, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	givemon SPECIES_FLUTTER_MANE, 85, ITEM_FAIRIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 140, 0, 188, 140, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	givemon SPECIES_IRON_HANDS, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_3:
	givemon SPECIES_GARDEVOIR, 85, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_STOMPING_TANTRUM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
	givemon SPECIES_HEATRAN, 85, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 228, 0, 4, 36, 236, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	givemon SPECIES_IRON_HANDS, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_4:
	givemon SPECIES_METAGROSS, 85, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
	givemon SPECIES_TAPU_FINI, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 52, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_CALM_MIND, MOVE_MUDDY_WATER, MOVE_MOONBLAST, FALSE, FALSE, FALSE
	givemon SPECIES_INCINEROAR, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 188, 36, 4, 28, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_5:
	givemon SPECIES_URSHIFU_RAPID_STRIKE_STYLE, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SURGING_STRIKES, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET, FALSE, FALSE, FALSE
	givemon SPECIES_SALAMENCE, 85, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, FALSE, FALSE, FALSE
	givemon SPECIES_INCINEROAR, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	givemon SPECIES_RILLABOOM, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_6:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1_7:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Modern_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_4v4_Standard_Weather_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1_4
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1_2:
	givemon SPECIES_LUDICOLO, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 52, 0, 124, 92, 236, 4, 31, 31, 31, 31, 31, 31, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	givemon SPECIES_PELIPPER, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 4, 0, 4, 252, 244, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HURRICANE, MOVE_SCALD, FALSE, FALSE, FALSE
	givemon SPECIES_KINGDRA, 85, ITEM_WATERIUM_Z, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 4, 52, 196, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_DRACO_METEOR, MOVE_MUDDY_WATER, MOVE_ICE_BEAM, FALSE, FALSE, FALSE
	givemon SPECIES_SCIZOR, 85, ITEM_SCIZORITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 76, 4, 44, 0, 132, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_BULLET_PUNCH, MOVE_BUG_BITE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1_3:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1_4:
	goto Auto_EventScript_Sample_Teams_Doubles_4v4_Standard_Weather_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_2
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_3
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_4
	goto Auto_EventScript_Sample_Teams_Doubles_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_2:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_3:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1_4:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_2
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_3
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_4
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_5
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_8
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_2:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_3:
	givemon SPECIES_SALAMENCE, 85, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 0, 0, 0, 252, 252, 6, 31, 0, 31, 31, 31, 31, MOVE_DRACO_METEOR, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_TYRANITAR, 85, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_ASSURANCE, MOVE_ICE_PUNCH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
	givemon SPECIES_EXCADRILL, 85, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 6, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AZUMARILL, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 0, 198, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 1, 252, 0, 252, 0, 0, 6, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AEGISLASH, 85, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 0, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_KINGS_SHIELD, MOVE_WIDE_GUARD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_4:
	givemon SPECIES_GARDEVOIR, 85, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 172, 0, 100, 28, 196, 12, 31, 0, 31, 31, 31, 31, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_THUNDURUS, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 228, 0, 28, 68, 12, 172, 31, 0, 31, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_TAUNT, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
	givemon SPECIES_HEATRAN, 85, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_HEAT_WAVE, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AZUMARILL, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 24, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_SASSY, 1, 0, 236, 0, 132, 0, 0, 140, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_5:
	givemon SPECIES_SALAMENCE, 85, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_DOUBLE_EDGE, MOVE_ROOST, MOVE_DRAGON_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_WEAVILE, 85, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ICICLE_CRASH, MOVE_LOW_KICK, FALSE, FALSE, FALSE
	givemon SPECIES_BRELOOM, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 1, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AZUMARILL, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 196, 252, 20, 28, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_ARCANINE, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 1, 244, 0, 4, 68, 4, 188, 31, 31, 31, 31, 31, 31, MOVE_SNARL, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_AEGISLASH, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 4, 28, 252, 20, 31, 31, 31, 31, 31, 31, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_6:
	givemon SPECIES_GARDEVOIR, 85, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 1, 1, 252, 0, 116, 20, 0, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_HYPER_VOICE, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	givemon SPECIES_TYRANITAR, 85, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 252, 252, 4, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_CRUNCH, FALSE, FALSE, FALSE
	givemon SPECIES_THUNDURUS, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 40, 28, 36, 156, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 244, 4, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_ROCK_TOMB, FALSE, FALSE, FALSE
	givemon SPECIES_HEATRAN, 85, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 196, 0, 56, 4, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_PROTECT, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 164, 0, 0, 92, 31, 0, 31, 6, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_GIGA_DRAIN, MOVE_SPORE, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_7:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1_8:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page2
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_2
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_3
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_4
	case 3, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_5
	case 4, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_6
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_7
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_8
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_2:
	givemon SPECIES_KANGASKHAN, 85, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 180, 252, 4, 60, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
	givemon SPECIES_THUNDURUS, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 0, 4, 0, 252, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWAGGER, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 0, 244, 0, 252, 0, 12, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	givemon SPECIES_HEATRAN, 85, ITEM_SHUCA_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 244, 0, 4, 4, 252, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, FALSE, FALSE, FALSE
	givemon SPECIES_CRESSELIA, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_QUIET, 0, 1, 244, 0, 4, 0, 252, 4, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_ICE_BEAM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_RELAXED, 1, 1, 252, 0, 252, 0, 0, 4, 31, 0, 31, 0, 31, 31, MOVE_SPORE, MOVE_SUNNY_DAY, MOVE_ENERGY_BALL, MOVE_RAGE_POWDER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_3:
	givemon SPECIES_GENGAR, 85, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_DISABLE, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_WHIMSICOTT, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 252, 0, 4, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_TERRAKION, 85, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_POLITOED, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 1, 244, 0, 76, 4, 4, 180, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_RAIN_DANCE, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_LUDICOLO, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 252, 0, 84, 20, 148, 4, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
	givemon SPECIES_GOTHITELLE, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 1, 232, 0, 60, 4, 0, 212, 31, 0, 31, 0, 31, 31, MOVE_PSYSHOCK, MOVE_TRICK_ROOM, MOVE_HEAL_PULSE, MOVE_PROTECT, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_4:
	givemon SPECIES_GENGAR, 85, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 44, 0, 20, 220, 220, 4, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DISABLE, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_CHARIZARD, 85, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 156, 0, 52, 188, 104, 8, 31, 1, 31, 31, 30, 30, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_HIDDEN_POWER, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_WHIMSICOTT, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 4, 252, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_BEAT_UP, MOVE_ENCORE, MOVE_TAILWIND, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_TERRAKION, 85, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_JOLLY, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_KICK, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_MILOTIC, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_5:
	givemon SPECIES_GENGAR, 85, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 44, 180, 4, 28, 31, 0, 31, 31, 31, 31, MOVE_PERISH_SONG, MOVE_PROTECT, MOVE_DISABLE, MOVE_SHADOW_BALL, FALSE, FALSE, FALSE
	givemon SPECIES_SCRAFTY, 85, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_POLITOED, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_CALM, 2, 0, 220, 0, 172, 20, 4, 92, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCALD, MOVE_PERISH_SONG, MOVE_ENCORE, FALSE, FALSE, FALSE
	givemon SPECIES_GOTHITELLE, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 0, 12, 0, 0, 244, 31, 0, 31, 0, 31, 31, MOVE_PROTECT, MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_HEAL_PULSE, FALSE, FALSE, FALSE
	givemon SPECIES_ARCANINE, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_CALM, 0, 0, 252, 0, 84, 68, 4, 100, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_OVERHEAT, FALSE, FALSE, FALSE
	givemon SPECIES_AMOONGUSS, 85, ITEM_EJECT_BUTTON, ITEM_SPORT_BALL, NATURE_SASSY, 1, 1, 140, 0, 180, 0, 0, 188, 31, 0, 31, 0, 31, 31, MOVE_RAGE_POWDER, MOVE_PROTECT, MOVE_SPORE, MOVE_GIGA_DRAIN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_6:
	givemon SPECIES_CHARIZARD, 85, ITEM_CHARIZARDITE_X, ITEM_SPORT_BALL, NATURE_CAREFUL, 0, 0, 124, 52, 220, 28, 0, 84, 31, 31, 31, 31, 31, 31, MOVE_WILL_O_WISP, MOVE_ROOST, MOVE_FLARE_BLITZ, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_ZAPDOS, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
	givemon SPECIES_SCRAFTY, 85, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_SASSY, 2, 0, 252, 160, 4, 0, 0, 92, 31, 31, 31, 0, 31, 31, MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_MILOTIC, 85, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 20, 212, 4, 252, 0, 20, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_U_TURN, FALSE, FALSE, FALSE
	givemon SPECIES_AEGISLASH, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 236, 0, 0, 20, 252, 0, 31, 0, 31, 31, 31, 31, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_SUBSTITUTE, MOVE_KINGS_SHIELD, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_7:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page2_8:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return


Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1::
	multichoice2 0, 0, Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1
	switch VAR_RESULT
	case 0, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_2
	case 1, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_3
	case 2, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_4
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_5
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_6
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_2:
	givemon SPECIES_AERODACTYL, 85, ITEM_AERODACTYLITE, ITEM_SPORT_BALL, NATURE_JOLLY, 2, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ROCK_SLIDE, MOVE_SMACK_DOWN, MOVE_SKY_DROP, MOVE_PROTECT, FALSE, FALSE, FALSE
	givemon SPECIES_SCRAFTY, 85, ITEM_LUM_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 2, 0, 244, 64, 0, 4, 0, 196, 31, 31, 31, 31, 31, 31, MOVE_FAKE_OUT, MOVE_DETECT, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, FALSE, FALSE, FALSE
	givemon SPECIES_MILOTIC, 85, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 252, 0, 172, 32, 52, 0, 31, 0, 31, 31, 31, 31, MOVE_ICY_WIND, MOVE_SCALD, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	givemon SPECIES_HIPPOWDON, 85, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_IMPISH, 0, 1, 252, 5, 252, 0, 0, 0, 31, 31, 31, 12, 31, 31, MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_SLACK_OFF, FALSE, FALSE, FALSE
	givemon SPECIES_FERROTHORN, 85, ITEM_LEFTOVERS, ITEM_SPORT_BALL, NATURE_RELAXED, 0, 0, 252, 60, 192, 0, 0, 4, 31, 31, 31, 0, 31, 31, MOVE_LEECH_SEED, MOVE_POWER_WHIP, MOVE_PROTECT, MOVE_GYRO_BALL, FALSE, FALSE, FALSE
	givemon SPECIES_CRADILY, 85, ITEM_WEAKNESS_POLICY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 1, 252, 0, 136, 0, 40, 80, 31, 0, 31, 31, 31, 31, MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_PROTECT, MOVE_RECOVER, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_3:
	givemon SPECIES_HERACROSS, 85, ITEM_HERACRONITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_CLOSE_COMBAT, FALSE, FALSE, FALSE
	givemon SPECIES_ZAPDOS, 85, ITEM_EXPERT_BELT, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 252, 0, 0, 116, 136, 4, 31, 0, 30, 31, 31, 31, MOVE_THUNDERBOLT, MOVE_TAILWIND, MOVE_HIDDEN_POWER, MOVE_ROOST, FALSE, FALSE, FALSE
	givemon SPECIES_SYLVEON, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_MODEST, 1, 0, 244, 0, 40, 20, 204, 0, 31, 1, 31, 31, 30, 30, MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	givemon SPECIES_MILOTIC, 85, ITEM_MARANGA_BERRY, ITEM_SPORT_BALL, NATURE_BOLD, 1, 0, 228, 0, 164, 4, 100, 12, 31, 0, 31, 31, 31, 31, MOVE_SCALD, MOVE_RECOVER, MOVE_PROTECT, MOVE_ICY_WIND, FALSE, FALSE, FALSE
	givemon SPECIES_BISHARP, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 4, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, FALSE, FALSE, FALSE
	givemon SPECIES_ARCANINE, 85, ITEM_SAFETY_GOGGLES, ITEM_SPORT_BALL, NATURE_BOLD, 0, 0, 252, 0, 100, 156, 0, 0, 31, 0, 31, 31, 31, 31, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_SNARL, MOVE_MORNING_SUN, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_4:
	givemon SPECIES_KANGASKHAN, 85, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_JOLLY, 1, 1, 0, 252, 0, 252, 0, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SUCKER_PUNCH, MOVE_RETURN, MOVE_POWER_UP_PUNCH, FALSE, FALSE, FALSE
	givemon SPECIES_TOGEKISS, 85, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 4, 0, 88, 164, 31, 0, 31, 31, 31, 31, MOVE_AIR_SLASH, MOVE_PROTECT, MOVE_TAILWIND, MOVE_FOLLOW_ME, FALSE, FALSE, FALSE
	givemon SPECIES_THUNDURUS, 85, ITEM_LIFE_ORB, ITEM_SPORT_BALL, NATURE_TIMID, 0, 0, 4, 0, 0, 252, 252, 0, 31, 0, 30, 31, 31, 31, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, FALSE, FALSE, FALSE
	givemon SPECIES_LANDORUS_THERIAN, 85, ITEM_CHOICE_SCARF, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 0, 252, 0, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, MOVE_U_TURN, FALSE, FALSE, FALSE
	givemon SPECIES_CONKELDURR, 85, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 252, 0, 0, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH, FALSE, FALSE, FALSE
	givemon SPECIES_BISHARP, 85, ITEM_FOCUS_SASH, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 1, 0, 252, 6, 252, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_KNOCK_OFF, FALSE, FALSE, FALSE
	goto Common_EventScript_Sample_Team_CheckPurchase
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_5:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1
	return

Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1_6:
	goto Auto_EventScript_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1
	return


Auto_EventScript_Sample_Teams_Controls_Text_0:
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Teams_Page1::
	.string "DOUBLES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Page1::
	.string "4V4$"
	.string "LEGACY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_4v4_Page1::
	.string "STANDARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_4v4_Standard_Page1::
	.string "MODERN$"
	.string "WEATHER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_4v4_Standard_Modern_Page1::
	.string "M-CHARIZARD Y$"
	.string "M-GARDEVOIR$"
	.string "M-METAGROSS$"
	.string "M-SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_4v4_Standard_Weather_Page1::
	.string "M-SCIZOR RAIN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Page1::
	.string "VGC2015$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page1::
	.string "ARAHPTHOS$"
	.string "JAPAN SAND$"
	.string "M-GARDEVOIR$"
	.string "M-SALAMENCE$"
	.string "SCAR WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Page2::
	.string "SHOMA WORLDS$"
	.string "TERRACOTT RAIN$"
	.string "TERRACOTT SUN$"
	.string "WOLFE PERISH$"
	.string "WOLFE WORLDS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Teams_Doubles_Legacy_Vgc2015_Arahpthos_Page1::
	.string "M-AERODACTYL$"
	.string "M-HERACROSS$"
	.string "M-KANGASKHAN$"
	.string "Go Back$"
	.string "$"
