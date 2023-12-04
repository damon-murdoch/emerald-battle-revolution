MauvilleCity_Mart_MapScripts::
	.byte 0

MauvilleCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Mart_EventScript_ExpertM::
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
	end

MauvilleCity_Mart_EventScript_Man::
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
	end

MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
	.string "There are items that temporarily\n"
	.string "elevate the stats of POKéMON.\p"
	.string "The ones I know you use in battle\n"
	.string "are X ATTACK and X DEFEND…\p"
	.string "I do believe that there are others\n"
	.string "like them.$"

MauvilleCity_Mart_Text_DecisionsDetermineBattle:
	.string "Use a certain move, or use an item\n"
	.string "instead…\p"
	.string "The TRAINER's decisions determine how\n"
	.string "battles turn out, I think.$"

MauvilleCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Mart_EventScript_Clerk2_2
	msgbox MauvilleCity_Mart_EventScript_Clerk2_Text_0
MauvilleCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE04_GET, MauvilleCity_Mart_EventScript_Clerk2_5
	pokemart MauvilleCity_Mart_Pokemart_Clerk2
	goto MauvilleCity_Mart_EventScript_Clerk2_1

MauvilleCity_Mart_EventScript_Clerk2_5:
	goto_if_set FLAG_BADGE06_GET, MauvilleCity_Mart_EventScript_Clerk2_8
	pokemart MauvilleCity_Mart_Pokemart_Clerk2_Expanded
	goto MauvilleCity_Mart_EventScript_Clerk2_1

MauvilleCity_Mart_EventScript_Clerk2_8:
	pokemart MauvilleCity_Mart_Pokemart_Clerk2_Expanded2
	goto MauvilleCity_Mart_EventScript_Clerk2_1


	.align 2
MauvilleCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_AMPHAROSITE
	.2byte ITEM_MANECTITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_MAGNET
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_ABILITY_SHIELD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_EVERSTONE
	.2byte ITEM_NONE

	.align 2
MauvilleCity_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_MANECTITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_MAWILITE
	.2byte ITEM_ELECTRIUM_Z
	.2byte ITEM_GHOSTIUM_Z
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_MAGNET
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_ABILITY_SHIELD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_EVERSTONE
	.2byte ITEM_NONE

	.align 2
MauvilleCity_Mart_Pokemart_Clerk2_Expanded2:
	.2byte ITEM_ELECTRIC_TERA_SHARD
	.2byte ITEM_GHOST_TERA_SHARD
	.2byte ITEM_MANECTITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_MAWILITE
	.2byte ITEM_ELECTRIUM_Z
	.2byte ITEM_GHOSTIUM_Z
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_MAGNET
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_ABILITY_SHIELD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_EVERSTONE
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
