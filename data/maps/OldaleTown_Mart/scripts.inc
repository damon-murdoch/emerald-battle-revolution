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
	goto_if_set FLAG_BADGE02_GET, OldaleTown_Mart_EventScript_Clerk2_5
	pokemart OldaleTown_Mart_Pokemart_Clerk2
	goto OldaleTown_Mart_EventScript_Clerk2_1

OldaleTown_Mart_EventScript_Clerk2_5:
	goto_if_set FLAG_BADGE04_GET, OldaleTown_Mart_EventScript_Clerk2_8
	pokemart OldaleTown_Mart_Pokemart_Clerk2_Expanded
	goto OldaleTown_Mart_EventScript_Clerk2_1

OldaleTown_Mart_EventScript_Clerk2_8:
	goto_if_set FLAG_BADGE06_GET, OldaleTown_Mart_EventScript_Clerk2_11
	pokemart OldaleTown_Mart_Pokemart_Clerk2_Expanded2
	goto OldaleTown_Mart_EventScript_Clerk2_1

OldaleTown_Mart_EventScript_Clerk2_11:
	pokemart OldaleTown_Mart_Pokemart_Clerk2_Expanded3
	goto OldaleTown_Mart_EventScript_Clerk2_1


	.align 2
OldaleTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_NONE

	.align 2
OldaleTown_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_FIRIUM_Z
	.2byte ITEM_WATERIUM_Z
	.2byte ITEM_GRASSIUM_Z
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_NONE

	.align 2
OldaleTown_Mart_Pokemart_Clerk2_Expanded2:
	.2byte ITEM_SCEPTILITE
	.2byte ITEM_BLAZIKENITE
	.2byte ITEM_SWAMPERTITE
	.2byte ITEM_FIRIUM_Z
	.2byte ITEM_WATERIUM_Z
	.2byte ITEM_GRASSIUM_Z
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_NONE

	.align 2
OldaleTown_Mart_Pokemart_Clerk2_Expanded3:
	.2byte ITEM_FIRE_TERA_SHARD
	.2byte ITEM_WATER_TERA_SHARD
	.2byte ITEM_GRASS_TERA_SHARD
	.2byte ITEM_SCEPTILITE
	.2byte ITEM_BLAZIKENITE
	.2byte ITEM_SWAMPERTITE
	.2byte ITEM_FIRIUM_Z
	.2byte ITEM_WATERIUM_Z
	.2byte ITEM_GRASSIUM_Z
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_Man_Text_0:
	.string "Each POKéMART has two counters - The\n"
	.string "standard counter up the front, and the\l"
	.string "special counter in the back.$"

OldaleTown_Mart_EventScript_Man_Text_1:
	.string "The standard counter is the same\n"
	.string "everywhere, but the special counter\l"
	.string "has unique items you won't find\l"
	.string "elsewhere.$"

OldaleTown_Mart_EventScript_Man_Text_2:
	.string "More items will be made available at\n"
	.string "both as you earn more badges.$"

OldaleTown_Mart_EventScript_Man_Text_3:
	.string "I'm always excited to check the\n"
	.string "POKéMART when I reach a new town!$"

OldaleTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
