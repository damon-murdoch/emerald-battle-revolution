# 1 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"

# 2 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
BattleFrontier_Underground_B2F_DayCare_MapScripts::
# 3 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.byte 0

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan::
# 9 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	lock
# 10 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_0
# 12 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_1
# 13 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	waitmessage
# 14 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	pokemart BattleFrontier_Underground_B2F_DayCare_Mart_EvolutionMan
# 15 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_2
# 16 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	release
	end


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper::
# 21 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	lock
# 22 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	faceplayer
# 23 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_0
# 24 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_1
# 25 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice
	return


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice::
# 29 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_1
# 30 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	multichoice2 0, 0, BattleFrontier_Underground_B2F_DayCare_Text_BreedingHelperOptions
# 31 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	case 0, BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_3
# 41 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	case 1, BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_4
# 48 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	case 2, BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_5
# 56 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd
BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1:
# 58 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse
	return

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_3:
# 33 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_0
# 34 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_1
# 35 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_2
# 36 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_3
# 37 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_4
# 38 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_5
# 39 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_6
# 40 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_7
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_4:
# 42 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_8
# 43 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_9
# 44 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_10
# 45 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_11
# 46 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_12
# 47 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_13
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_5:
# 49 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_14
# 50 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_15
# 51 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_16
# 52 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_17
# 53 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_18
# 54 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_19
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse::
# 62 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_Text_0
# 63 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	yesnobox 0, 8
# 64 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_2
BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_1:
# 67 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd
	return

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_2:
# 65 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_1


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd::
# 71 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd_Text_0
# 72 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	release
	end


	.align 2
# 88 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
BattleFrontier_Underground_B2F_DayCare_Mart_EvolutionMan:
# 89 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 90 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 91 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_EVERSTONE
# 92 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 93 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_WATER_STONE
# 94 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 95 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 96 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_ICE_STONE
# 97 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_SUN_STONE
# 98 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_MOON_STONE
# 99 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 100 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 101 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 102 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 103 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_TART_APPLE
# 104 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 105 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 106 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 107 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 108 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 109 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 110 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 111 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 112 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 113 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 114 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_UPGRADE
# 115 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_PROTECTOR
# 116 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 117 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 118 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 119 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 120 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 121 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 122 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_SACHET
# 123 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 124 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 125 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 126 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 127 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 128 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 129 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 130 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 131 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 132 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 133 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 134 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 135 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 136 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 137 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 138 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 139 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 140 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_GIMMIGHOUL_COIN
# 141 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 142 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 143 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 144 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_0:
# 11 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Hello there! I sell items for breeding\l"
	.string "and raising POKéMON!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_1:
# 12 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "What can I help you with?$"

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_2:
# 15 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Thanks for your business!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_0:
# 23 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Hello, nice to meet you! I'm the POKéMON\l"
	.string "breeding helper.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_1:
# 24 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "I can teach you how to breed POKéMON\l"
	.string "effectively.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_0:
# 33 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Sure! To start with, you will need two\l"
	.string "compatible POKéMON - One male and one\l"
	.string "female.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_1:
# 34 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "These can either be two POKéMON of the\l"
	.string "same egg group, or of the same species.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_2:
# 35 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Ditto can also be used to breed with\l"
	.string "almost any POKéMON of any gender!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_3:
# 36 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Once you've placed both of your\l"
	.string "POKéMON in the care of the day care\l"
	.string "lady, go for a walk and check back with\l"
	.string "the day care man upstairs every now and\l"
	.string "then.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_4:
# 37 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "After a certain number of steps, the\l"
	.string "Day Care worker should have an Egg for\l"
	.string "you!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_5:
# 38 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "The frequency of eggs will increase\l"
	.string "with higher compatibility between the\l"
	.string "two POKéMON.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_6:
# 39 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Be careful, though - if he says that\l"
	.string "they would rather play with other\l"
	.string "POKéMON than each other, you will never\l"
	.string "get any eggs from them!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_7:
# 40 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Well, that's the basics. I hope that\l"
	.string "helps!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_8:
# 42 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Sure! Once you have the learnt the\l"
	.string "basics, you might want to start\l"
	.string "breeding Pokemon with better stats.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_9:
# 43 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Normally, the parents will randomly pass\l"
	.string "down one stat between them - the\l"
	.string "others will all be random.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_10:
# 44 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "However, when you give one of the\l"
	.string "parents a destiny knot, this will make\l"
	.string "the child inherit five stats instead!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_11:
# 45 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "This means that generally, breeding\l"
	.string "parents with high stats will result in\l"
	.string "children with strong stats as well.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_12:
# 46 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "You can also give an Everstone to the\l"
	.string "other parent to pass down its nature to\l"
	.string "all children as well!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_13:
# 47 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Well, that's about all I can teach you\l"
	.string "about stats. I hope that helps!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_14:
# 49 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Sure! Some POKéMON have moves called\l"
	.string "Egg Moves which they don't normally\l"
	.string "learn - They can be taught these moves\l"
	.string "by breeding with other POKéMON$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_15:
# 50 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "These moves can be passed down from\l"
	.string "either parent, as long as at least one\l"
	.string "of them knows the move being passed\l"
	.string "down.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_16:
# 51 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "You can also use this method to share\l"
	.string "moves between POKéMON without\l"
	.string "breeding!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_17:
# 52 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "By giving the mirror herb item to the\l"
	.string "Pokemon which has the move you want to\l"
	.string "share, and then putting it in the day\l"
	.string "care with a Pokemon which is able to\l"
	.string "learn it, the second Pokemon will learn\l"
	.string "the move instantly.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_18:
# 53 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "The two Pokemon do not even need to\l"
	.string "share an egg group, and the mirror herb\l"
	.string "is not consumed!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_19:
# 54 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Well, that's about all I can teach you\l"
	.string "about sharing moves. I hope that helps!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_Text_0:
# 62 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Can I help with anything else?$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd_Text_0:
# 71 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "Come back if you need anything!$"

BattleFrontier_Underground_B2F_DayCare_Text_BreedingHelperOptions::
# 78 "data/maps/BattleFrontier_Underground_B2F_DayCare/scripts.pory"
	.string "BASICS$"
	.string "STATS$"
	.string "MOVES$"
	.string "NOTHING$"
	.string "$"
