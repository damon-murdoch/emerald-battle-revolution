OldaleTown_Mart_MapScripts::
	.byte 0

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy any POKé BALLS.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "I'm going to buy a bunch of POKé BALLS\n"
	.string "and catch a bunch of POKéMON!$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "If a POKéMON gets hurt and loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your POKéMON from fainting,\n"
	.string "restore its HP with a POTION.$"

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk_2
	pokemart OldaleTown_Mart_Pokemart_Basic
OldaleTown_Mart_EventScript_Clerk_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Clerk_2:
	pokemart 0
	goto OldaleTown_Mart_EventScript_Clerk_1


OldaleTown_Mart_EventScript_Man::
	lock
	faceplayer
	msgbox OldaleTown_Mart_EventScript_Man_Text_0
	msgbox OldaleTown_Mart_EventScript_Man_Text_1
	msgbox OldaleTown_Mart_EventScript_Man_Text_2
	msgbox OldaleTown_Mart_EventScript_Man_Text_3
	waitmessage
	release
	end


OldaleTown_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk2_2
	msgbox OldaleTown_Mart_EventScript_Clerk2_Text_0
OldaleTown_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart OldaleTown_Mart_Pokemart_Clerk2
	goto OldaleTown_Mart_EventScript_Clerk2_1


	.align 2
OldaleTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_NET_BALL
	.2byte ITEM_BEAD_MAIL
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_DIANCITE
	.2byte ITEM_GLALITITE
	.2byte ITEM_ALTARIANITE
	.2byte ITEM_FIST_PLATE
	.2byte ITEM_TOXIC_PLATE
	.2byte ITEM_EARTH_PLATE
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_FIRIUM_Z
	.2byte ITEM_WATERIUM_Z
	.2byte ITEM_GRASSIUM_Z
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_Man_Text_0:
	.string "Each POKéMART has two counters - The\n"
	.string "standard counter up the front, and the\l"
	.string "special counter in the back.$"

OldaleTown_Mart_EventScript_Man_Text_1:
	.string "The standard counter is the same\n"
	.string "everywhere, but new items will become\l"
	.string "available as you earn more badges.$"

OldaleTown_Mart_EventScript_Man_Text_2:
	.string "The special counter is the same no\n"
	.string "matter how many badges you have, but\l"
	.string "will have different items at each\l"
	.string "location!$"

OldaleTown_Mart_EventScript_Man_Text_3:
	.string "I'm always excited to check the\n"
	.string "POKéMART when I reach a new town!$"

OldaleTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
