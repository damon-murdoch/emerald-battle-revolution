VerdanturfTown_Mart_MapScripts::
	.byte 0

VerdanturfTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_Mart_EventScript_Boy::
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_ExpertF::
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_Lass::
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end

VerdanturfTown_Mart_Text_XSpecialIsCrucial:
	.string "For any POKéMON match, X SPECIAL\n"
	.string "is crucial.\p"
	.string "It jacks up the power of some moves\n"
	.string "even though it's only for one battle.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
	.string "They don't seem to sell any winning\n"
	.string "strategy guides for the BATTLE TENT…\p"
	.string "It seems one must rely on one's\n"
	.string "own wits after all…$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
	.string "The NEST BALL works better on\n"
	.string "weakened POKéMON.\p"
	.string "VERDANTURF is the only place you can\n"
	.string "buy it.$"

VerdanturfTown_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, VerdanturfTown_Mart_EventScript_Clerk2_2
	msgbox VerdanturfTown_Mart_EventScript_Clerk2_Text_0
VerdanturfTown_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE04_GET, VerdanturfTown_Mart_EventScript_Clerk2_5
	pokemart VerdanturfTown_Mart_Pokemart_Clerk2
	goto VerdanturfTown_Mart_EventScript_Clerk2_1

VerdanturfTown_Mart_EventScript_Clerk2_5:
	pokemart VerdanturfTown_Mart_Pokemart_Clerk2_Expanded
	goto VerdanturfTown_Mart_EventScript_Clerk2_1


	.align 2
VerdanturfTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_NONE

	.align 2
VerdanturfTown_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_POISONIUM_Z
	.2byte ITEM_GROUNDIUM_Z
	.2byte ITEM_ROCKIUM_Z
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
