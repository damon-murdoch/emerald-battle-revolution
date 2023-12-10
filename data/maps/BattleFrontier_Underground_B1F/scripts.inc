BattleFrontier_Underground_B1F_MapScripts::
	.byte 0

BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_1
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_2
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_3
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_4
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattlePikeGreeter::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_1
	msgbox BattleFrontier_Underground_B1F_EventScript_BattlePikeGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_3
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_4
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleTowerGreeter::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_1
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleTowerGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_3
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_4
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattlePalaceGreeter::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_1
	msgbox BattleFrontier_Underground_B1F_EventScript_BattlePalaceGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_3
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_4
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattlePyramidGreeter::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_1
	msgbox BattleFrontier_Underground_B1F_EventScript_BattlePyramidGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_3
	msgbox BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_4
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_0:
	.string "Welcome to the Battle Frontier\n"
	.string "Underground!$"

BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_1:
	.string "You can find anything you need for\n"
	.string "battling here.$"

BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_2:
	.string "This is the closest entrance for the\n"
	.string "Battle Dome facility.$"

BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_3:
	.string "You can also get from place to place\n"
	.string "quickly down here.$"

BattleFrontier_Underground_B1F_EventScript_BattleDomeGreeter_Text_4:
	.string "Feel free to use your bike!$"

BattleFrontier_Underground_B1F_EventScript_BattlePikeGreeter_Text_0:
	.string "This is the closest entrance for the\n"
	.string "Battle Factory and Battle Pike\l"
	.string "facilities.$"

BattleFrontier_Underground_B1F_EventScript_BattleTowerGreeter_Text_0:
	.string "This is the closest entrance for the\n"
	.string "Battle Tower, Ranking Hall and BP\l"
	.string "Exchange Service facilities.$"

BattleFrontier_Underground_B1F_EventScript_BattlePalaceGreeter_Text_0:
	.string "This is the closest entrance for the\n"
	.string "Battle Palace, POKéMON Center and\l"
	.string "POKéMART facilities.$"

BattleFrontier_Underground_B1F_EventScript_BattlePyramidGreeter_Text_0:
	.string "This is the best entrance for the\n"
	.string "Battle Pyramid and Battle Arena\l"
	.string "facilities.$"
