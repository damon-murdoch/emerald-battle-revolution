.set LOCALID_OLD_WOMAN, 2

BattleFrontier_Mart_MapScripts::
	.byte 0

BattleFrontier_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Mart_EventScript_OldMan::
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
	end

BattleFrontier_Mart_EventScript_OldWoman::
	lock
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
	waitmovement 0
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Mart_EventScript_Boy::
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
	end

BattleFrontier_Mart_Text_ChaperonGrandson:
	.string "We came here to chaperon our\n"
	.string "grandson.\p"
	.string "But since we're here, we thought\n"
	.string "we should get some souvenirs.$"

BattleFrontier_Mart_Text_ProteinMakeNiceGift:
	.string "Dear, what do you think of this?\n"
	.string "Wouldn't this make a nice gift?\p"
	.string "It's…PRO…TE…IN?\n"
	.string "It sounds delicious, doesn't it?$"

BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
	.string "A lot of the BATTLE FRONTIER's\n"
	.string "facilities don't allow the use of items\l"
	.string "during battles.\p"
	.string "That rule makes things tougher than\n"
	.string "they already are!$"

BattleFrontier_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE08_GET, BattleFrontier_Mart_EventScript_Clerk2_2
	msgbox BattleFrontier_Mart_EventScript_Clerk2_Text_0
BattleFrontier_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Mart_Pokemart_Clerk2
	goto BattleFrontier_Mart_EventScript_Clerk2_1


	.align 2
BattleFrontier_Mart_Pokemart_Clerk2:
	.2byte ITEM_CHERISH_BALL
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_BEAST_BALL
	.2byte ITEM_SHOCK_DRIVE
	.2byte ITEM_BURN_DRIVE
	.2byte ITEM_CHILL_DRIVE
	.2byte ITEM_DOUSE_DRIVE
	.2byte ITEM_ADAMANT_CRYSTAL
	.2byte ITEM_GRISEOUS_CORE
	.2byte ITEM_LUSTROUS_GLOBE
	.2byte ITEM_ADAMANT_ORB
	.2byte ITEM_LUSTROUS_ORB
	.2byte ITEM_GRISEOUS_ORB
	.2byte ITEM_FIRE_MEMORY
	.2byte ITEM_WATER_MEMORY
	.2byte ITEM_ELECTRIC_MEMORY
	.2byte ITEM_GRASS_MEMORY
	.2byte ITEM_ICE_MEMORY
	.2byte ITEM_FIGHTING_MEMORY
	.2byte ITEM_POISON_MEMORY
	.2byte ITEM_GROUND_MEMORY
	.2byte ITEM_FLYING_MEMORY
	.2byte ITEM_PSYCHIC_MEMORY
	.2byte ITEM_BUG_MEMORY
	.2byte ITEM_ROCK_MEMORY
	.2byte ITEM_GHOST_MEMORY
	.2byte ITEM_DRAGON_MEMORY
	.2byte ITEM_DARK_MEMORY
	.2byte ITEM_STEEL_MEMORY
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_MEWTWONITE_X
	.2byte ITEM_MEWTWONITE_Y
	.2byte ITEM_LATIASITE
	.2byte ITEM_LATIOSITE
	.2byte ITEM_SOUL_DEW
	.2byte ITEM_SOLGANIUM_Z
	.2byte ITEM_LUNALIUM_Z
	.2byte ITEM_TAPUNIUM_Z
	.2byte ITEM_ULTRANECROZIUM_Z
	.2byte ITEM_MARSHADIUM_Z
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
