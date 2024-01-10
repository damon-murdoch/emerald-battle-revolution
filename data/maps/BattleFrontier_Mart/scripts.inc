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
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Mart_Pokemart_Clerk2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
BattleFrontier_Mart_Pokemart_Clerk2:
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_BEAST_BALL
	.2byte ITEM_SOUL_DEW
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
	.2byte ITEM_RUSTED_SWORD
	.2byte ITEM_RUSTED_SWORD
	.2byte ITEM_BOOSTER_ENERGY
	.2byte ITEM_CORNERSTONE_MASK
	.2byte ITEM_WELLSPRING_MASK
	.2byte ITEM_HEARTHFLAME_MASK
	.2byte ITEM_MEWTWONITE_X
	.2byte ITEM_MEWTWONITE_Y
	.2byte ITEM_LATIASITE
	.2byte ITEM_LATIOSITE
	.2byte ITEM_DIANCITE
	.2byte ITEM_RED_ORB
	.2byte ITEM_BLUE_ORB
	.2byte ITEM_SOLGANIUM_Z
	.2byte ITEM_LUNALIUM_Z
	.2byte ITEM_TAPUNIUM_Z
	.2byte ITEM_ULTRANECROZIUM_Z
	.2byte ITEM_MARSHADIUM_Z
	.2byte ITEM_MEWNIUM_Z
	.2byte ITEM_ROTOM_CATALOG
	.2byte ITEM_GRACIDEA
	.2byte ITEM_REVEAL_GLASS
	.2byte ITEM_DNA_SPLICERS
	.2byte ITEM_ZYGARDE_CUBE
	.2byte ITEM_PRISON_BOTTLE
	.2byte ITEM_N_SOLARIZER
	.2byte ITEM_N_LUNARIZER
	.2byte ITEM_REINS_OF_UNITY
	.2byte ITEM_FLAME_PLATE
	.2byte ITEM_SPLASH_PLATE
	.2byte ITEM_MEADOW_PLATE
	.2byte ITEM_ZAP_PLATE
	.2byte ITEM_ICICLE_PLATE
	.2byte ITEM_FIST_PLATE
	.2byte ITEM_TOXIC_PLATE
	.2byte ITEM_EARTH_PLATE
	.2byte ITEM_SKY_PLATE
	.2byte ITEM_MIND_PLATE
	.2byte ITEM_INSECT_PLATE
	.2byte ITEM_STONE_PLATE
	.2byte ITEM_SPOOKY_PLATE
	.2byte ITEM_DREAD_PLATE
	.2byte ITEM_DRACO_PLATE
	.2byte ITEM_IRON_PLATE
	.2byte ITEM_PIXIE_PLATE
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
	.2byte ITEM_MEGA_RING
	.2byte ITEM_Z_POWER_RING
	.2byte ITEM_DYNAMAX_BAND
	.2byte ITEM_TERA_ORB
	.2byte ITEM_NONE
