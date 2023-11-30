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
	pokemart VerdanturfTown_Mart_Pokemart_Clerk2
	goto VerdanturfTown_Mart_EventScript_Clerk2_1


	.align 2
VerdanturfTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_NEST_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_TROPIC_MAIL
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_AUSPICIOUS_ARMOR
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_SCIZORITE
	.2byte ITEM_RUSTED_SWORD
	.2byte ITEM_RUSTED_SWORD
	.2byte ITEM_BEEDRILLITE
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_SNOWBALL
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_METAL_COAT
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
