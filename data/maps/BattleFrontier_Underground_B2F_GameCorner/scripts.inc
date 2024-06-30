BattleFrontier_Underground_B2F_GameCorner_MapScripts::
	.byte 0

BattleFrontier_Underground_B2F_GameCorner_EventScript_PokefanM::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
	msgbox BattleFrontier_Underground_B2F_GameCorner_EventScript_PokefanM_Text_0
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


BattleFrontier_Underground_B2F_GameCorner_EventScript_PokefanM_Text_0:
	.string "Hey kid, if you want to play here, you\n"
	.string "need a COIN CASE. You can get one from\l"
	.string "the greeter outside!$"
