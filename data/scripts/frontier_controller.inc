BattleFrontierController_EventScript_ControllerHill::
	msgbox BattleFrontierController_EventScript_ControllerHill_Text_0
	goto_if_set FLAG_IS_CHAMPION, BattleFrontierController_EventScript_ControllerHill_2
BattleFrontierController_EventScript_ControllerHill_1:
	msgbox BattleFrontierController_EventScript_ControllerHill_Text_1
	goto BattleFrontierController_EventScript_ControllerEnd
	return

BattleFrontierController_EventScript_ControllerHill_2:
	goto BattleFrontierController_EventScript_ControllerInfo
	goto BattleFrontierController_EventScript_ControllerHill_1


BattleFrontierController_EventScript_ControllerTent::
	msgbox BattleFrontierController_EventScript_ControllerTent_Text_0
	goto BattleFrontierController_EventScript_ControllerInfo
	return


BattleFrontierController_EventScript_ControllerFrontier::
	msgbox BattleFrontierController_EventScript_ControllerFrontier_Text_0
	goto BattleFrontierController_EventScript_ControllerInfo
	return


BattleFrontierController_EventScript_ControllerManiac::
	msgbox BattleFrontierController_EventScript_ControllerManiac_Text_0
	goto BattleFrontierController_EventScript_ControllerInfo
	return


BattleFrontierController_EventScript_ControllerInfo::
	msgbox BattleFrontierController_EventScript_ControllerInfo_Text_0
	msgbox BattleFrontierController_EventScript_ControllerInfo_Text_1
	goto BattleFrontierController_EventScript_ControllerOptions
	return


BattleFrontierController_EventScript_ControllerOptions::
	multichoice2 18, 0, BattleFrontierController_Text_ControllerOptionSelect
	switch VAR_RESULT
	case 0, BattleFrontierController_EventScript_ControllerOptions_2
	case 1, BattleFrontierController_EventScript_ControllerOptions_3
	case 2, BattleFrontierController_EventScript_ControllerOptions_4
	goto BattleFrontierController_EventScript_ControllerEnd
	return

BattleFrontierController_EventScript_ControllerOptions_2:
	goto BattleFrontierController_EventScript_ControllerChangeOpponents
	return

BattleFrontierController_EventScript_ControllerOptions_3:
	goto BattleFrontierController_EventScript_ControllerChangeBehavior
	return

BattleFrontierController_EventScript_ControllerOptions_4:
	goto BattleFrontierController_EventScript_ControllerChangeMusic
	return


BattleFrontierController_EventScript_ControllerChangeOpponents::
	goto_if_set FLAG_BATTLE_FRONTIER_GENERATOR, BattleFrontierController_EventScript_ControllerChangeOpponents_2
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_3
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_4
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1
BattleFrontierController_EventScript_ControllerChangeOpponents_1:
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerChangeOpponents_6
BattleFrontierController_EventScript_ControllerChangeOpponents_5:
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_7
	goto BattleFrontierController_EventScript_ControllerAsk
	return

BattleFrontierController_EventScript_ControllerChangeOpponents_2:
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_0
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_2
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_1

BattleFrontierController_EventScript_ControllerChangeOpponents_6:
	goto_if_set FLAG_BATTLE_FRONTIER_GENERATOR, BattleFrontierController_EventScript_ControllerChangeOpponents_8
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_6
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_5

BattleFrontierController_EventScript_ControllerChangeOpponents_8:
	clearflag FLAG_BATTLE_FRONTIER_GENERATOR
	msgbox BattleFrontierController_EventScript_ControllerChangeOpponents_Text_5
	goto BattleFrontierController_EventScript_ControllerChangeOpponents_5


BattleFrontierController_EventScript_ControllerChangeBehavior::
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_0
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_1
	multichoice2 18, 0, BattleFrontierController_Text_ControllerOptionSelectBehavior
	copyvar VAR_FRONTIER_METHOD, VAR_RESULT
	msgbox BattleFrontierController_EventScript_ControllerChangeBehavior_Text_2
	goto BattleFrontierController_EventScript_ControllerAsk
	return


BattleFrontierController_EventScript_ControllerChangeMusic::
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_0
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_1
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1
	return


BattleFrontierController_EventScript_ControllerAsk::
	msgbox BattleFrontierController_EventScript_ControllerAsk_Text_0
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontierController_EventScript_ControllerAsk_1
	goto BattleFrontierController_EventScript_ControllerEnd
	return

BattleFrontierController_EventScript_ControllerAsk_1:
	goto BattleFrontierController_EventScript_ControllerOptions
	return


BattleFrontierController_EventScript_ControllerEnd::
	msgbox BattleFrontierController_EventScript_ControllerEnd_Text_0
	release
	end


BattleFrontierController_EventScript_ControllerMusicSelect::
	msgbox BattleFrontierController_EventScript_ControllerMusicSelect_Text_0
	msgbox BattleFrontierController_EventScript_ControllerMusicSelect_Text_1
	msgbox BattleFrontierController_EventScript_ControllerChangeMusic_Text_1
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1
	return


BattleFrontierController_EventScript_ControllerMusicSelectPage1::
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage1
	switch VAR_RESULT
	case 0, BattleFrontierController_EventScript_ControllerMusicSelectPage1_3
	case 1, BattleFrontierController_EventScript_ControllerMusicSelectPage1_4
	case 2, BattleFrontierController_EventScript_ControllerMusicSelectPage1_5
	case 3, BattleFrontierController_EventScript_ControllerMusicSelectPage1_6
	case 4, BattleFrontierController_EventScript_ControllerMusicSelectPage1_7
	case 5, BattleFrontierController_EventScript_ControllerMusicSelectPage1_8
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage1_9
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage1_10
	goto BattleFrontierController_EventScript_ControllerMusicSelectEnd
BattleFrontierController_EventScript_ControllerMusicSelectPage1_1:
	goto BattleFrontierController_EventScript_ControllerMusicSelectSuccess
	return

BattleFrontierController_EventScript_ControllerMusicSelectPage1_3:
	setvar VAR_FRONTIER_BGM, 0
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_4:
	setvar VAR_FRONTIER_BGM, 1
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_5:
	setvar VAR_FRONTIER_BGM, 2
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_6:
	setvar VAR_FRONTIER_BGM, 3
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_7:
	setvar VAR_FRONTIER_BGM, 4
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_8:
	setvar VAR_FRONTIER_BGM, 5
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_9:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage4
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1

BattleFrontierController_EventScript_ControllerMusicSelectPage1_10:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1_1


BattleFrontierController_EventScript_ControllerMusicSelectPage2::
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage2
	switch VAR_RESULT
	case 0, BattleFrontierController_EventScript_ControllerMusicSelectPage2_3
	case 1, BattleFrontierController_EventScript_ControllerMusicSelectPage2_4
	case 2, BattleFrontierController_EventScript_ControllerMusicSelectPage2_5
	case 3, BattleFrontierController_EventScript_ControllerMusicSelectPage2_6
	case 4, BattleFrontierController_EventScript_ControllerMusicSelectPage2_7
	case 5, BattleFrontierController_EventScript_ControllerMusicSelectPage2_8
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage2_9
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage2_10
	goto BattleFrontierController_EventScript_ControllerMusicSelectEnd
BattleFrontierController_EventScript_ControllerMusicSelectPage2_1:
	goto BattleFrontierController_EventScript_ControllerMusicSelectSuccess
	return

BattleFrontierController_EventScript_ControllerMusicSelectPage2_3:
	setvar VAR_FRONTIER_BGM, 6
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_4:
	setvar VAR_FRONTIER_BGM, 7
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_5:
	setvar VAR_FRONTIER_BGM, 8
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_6:
	setvar VAR_FRONTIER_BGM, 9
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_7:
	setvar VAR_FRONTIER_BGM, 10
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_8:
	setvar VAR_FRONTIER_BGM, 11
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_9:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1

BattleFrontierController_EventScript_ControllerMusicSelectPage2_10:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2_1


BattleFrontierController_EventScript_ControllerMusicSelectPage3::
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage3
	switch VAR_RESULT
	case 0, BattleFrontierController_EventScript_ControllerMusicSelectPage3_3
	case 1, BattleFrontierController_EventScript_ControllerMusicSelectPage3_4
	case 2, BattleFrontierController_EventScript_ControllerMusicSelectPage3_5
	case 3, BattleFrontierController_EventScript_ControllerMusicSelectPage3_6
	case 4, BattleFrontierController_EventScript_ControllerMusicSelectPage3_7
	case 5, BattleFrontierController_EventScript_ControllerMusicSelectPage3_8
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage3_9
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage3_10
	goto BattleFrontierController_EventScript_ControllerMusicSelectEnd
BattleFrontierController_EventScript_ControllerMusicSelectPage3_1:
	goto BattleFrontierController_EventScript_ControllerMusicSelectSuccess
	return

BattleFrontierController_EventScript_ControllerMusicSelectPage3_3:
	setvar VAR_FRONTIER_BGM, 12
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_4:
	setvar VAR_FRONTIER_BGM, 13
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_5:
	setvar VAR_FRONTIER_BGM, 14
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_6:
	setvar VAR_FRONTIER_BGM, 15
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_7:
	setvar VAR_FRONTIER_BGM, 16
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_8:
	setvar VAR_FRONTIER_BGM, 17
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_9:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage2
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1

BattleFrontierController_EventScript_ControllerMusicSelectPage3_10:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage4
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3_1


BattleFrontierController_EventScript_ControllerMusicSelectPage4::
	multichoice2 0, 0, BattleFrontierController_Text_ControllerMusicSelectPage4
	switch VAR_RESULT
	case 0, BattleFrontierController_EventScript_ControllerMusicSelectPage4_3
	case 1, BattleFrontierController_EventScript_ControllerMusicSelectPage4_4
	case MULTI_L_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage4_5
	case MULTI_R_PRESSED, BattleFrontierController_EventScript_ControllerMusicSelectPage4_6
	goto BattleFrontierController_EventScript_ControllerMusicSelectEnd
BattleFrontierController_EventScript_ControllerMusicSelectPage4_1:
	goto BattleFrontierController_EventScript_ControllerMusicSelectSuccess
	return

BattleFrontierController_EventScript_ControllerMusicSelectPage4_3:
	setvar VAR_FRONTIER_BGM, 18
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage4_1

BattleFrontierController_EventScript_ControllerMusicSelectPage4_4:
	setvar VAR_FRONTIER_BGM, 19
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage4_1

BattleFrontierController_EventScript_ControllerMusicSelectPage4_5:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage3
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage4_1

BattleFrontierController_EventScript_ControllerMusicSelectPage4_6:
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage1
	goto BattleFrontierController_EventScript_ControllerMusicSelectPage4_1


BattleFrontierController_EventScript_ControllerMusicSelectSuccess::
	playse SE_SUCCESS
	msgbox BattleFrontierController_EventScript_ControllerMusicSelectSuccess_Text_0
	waitse
	goto BattleFrontierController_EventScript_ControllerMusicSelectEnd
	return


BattleFrontierController_EventScript_ControllerMusicSelectEnd::
	msgbox BattleFrontierController_EventScript_ControllerMusicSelectEnd_Text_0
	release
	end


BattleFrontierController_EventScript_ControllerHill_Text_0:
	.string "Hello and welcome to the TRAINER HILL!$"

BattleFrontierController_EventScript_ControllerHill_Text_1:
	.string "We haven't finished getting everything\n"
	.string "ready yet.$"

BattleFrontierController_EventScript_ControllerTent_Text_0:
	.string "Hello and welcome to the BATTLE TENT!$"

BattleFrontierController_EventScript_ControllerFrontier_Text_0:
	.string "Hello and welcome to the BATTLE\n"
	.string "FRONTIER!$"

BattleFrontierController_EventScript_ControllerManiac_Text_0:
	.string "Hello, I'm the BATTLE FRONTIER MANIAC!$"

BattleFrontierController_EventScript_ControllerInfo_Text_0:
	.string "I can help you customise your Battle\n"
	.string "Frontier experience.$"

BattleFrontierController_EventScript_ControllerInfo_Text_1:
	.string "What would you like to do?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_0:
	.string "You are currently playing against\n"
	.string "modern Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_1:
	.string "Keep in mind, you may experience bugs or\n"
	.string "crashes using this mode during\l"
	.string "development.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_2:
	.string "Would you like to switch to legacy\n"
	.string "Battle Frontier opponents?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_3:
	.string "You are currently playing against\n"
	.string "legacy Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_4:
	.string "Would you like to switch to modern\n"
	.string "Battle Frontier opponents?$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_5:
	.string "Done! You'll now play against legacy\n"
	.string "Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_6:
	.string "Done! You'll now play against modern\n"
	.string "Battle Frontier opponents.$"

BattleFrontierController_EventScript_ControllerChangeOpponents_Text_7:
	.string "Feel free to ask me again if you change\n"
	.string "your mind!$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_0:
	.string "I can change how modern Battle\n"
	.string "Frontier teams are built.$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_1:
	.string "Which option would you like to use?$"

BattleFrontierController_EventScript_ControllerChangeBehavior_Text_2:
	.string "Modern teams have been updated\n"
	.string "successfully!$"

BattleFrontierController_EventScript_ControllerChangeMusic_Text_0:
	.string "What would like to listen to?$"

BattleFrontierController_EventScript_ControllerChangeMusic_Text_1:
	.string "L: Previous Page                    R: Next Page\nB: Go Back$"

BattleFrontierController_EventScript_ControllerAsk_Text_0:
	.string "Do you need me for anything else?$"

BattleFrontierController_EventScript_ControllerEnd_Text_0:
	.string "I hope you have some good battles!$"

BattleFrontierController_EventScript_ControllerMusicSelect_Text_0:
	.string "Welcome to the BATTLE FRONTIER!$"

BattleFrontierController_EventScript_ControllerMusicSelect_Text_1:
	.string "I can help you change the battle music.\n"
	.string "What would like to listen to?$"

BattleFrontierController_EventScript_ControllerMusicSelectSuccess_Text_0:
	.string "All done! Your music selection has been\n"
	.string "changed.$"

BattleFrontierController_EventScript_ControllerMusicSelectEnd_Text_0:
	.string "Come back again soon!$"

BattleFrontierController_Text_ControllerOptionSelect::
	.string "CHANGE OPPONENTS$"
	.string "CHANGE BEHAVIOR$"
	.string "CHANGE MUSIC$"
	.string "NOTHING$"
	.string "$"

BattleFrontierController_Text_ControllerOptionSelectBehavior::
	.string "DEFAULT$"
	.string "RANDOM$"
	.string "FILTERED$"
	.string "FILTERED ATTACKS$"
	.string "RANKED$"
	.string "RANKED ATTACKS$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage1::
	.string "DEFAULT$"
	.string "VS.Frontier Brain$"
	.string "VS.Mew$"
	.string "VS.Wild Pokemon$"
	.string "VS.Team Aqua & Magma$"
	.string "VS.Trainer$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage2::
	.string "VS.Gym Leader$"
	.string "VS.Champion$"
	.string "VS.Regi$"
	.string "VS.Kyogre & Groudon$"
	.string "VS.Rival$"
	.string "VS.Elite Four$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage3::
	.string "VS.Aqua & Magma Leader$"
	.string "VS.Gym Leader (FRLG)$"
	.string "VS.Trainer (FRLG)$"
	.string "VS.Wild Pokemon (FRLG)$"
	.string "VS.Champion (FRLG)$"
	.string "VS.Deoxys (FRLG)$"
	.string "$"

BattleFrontierController_Text_ControllerMusicSelectPage4::
	.string "VS.Mewtwo (FRLG)$"
	.string "VS.Legend (FRLG)$"
	.string "$"