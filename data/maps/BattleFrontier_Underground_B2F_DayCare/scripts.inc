BattleFrontier_Underground_B2F_DayCare_MapScripts::
	.byte 0

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_0
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_1
	waitmessage
	pokemart BattleFrontier_Underground_B2F_DayCare_Mart_EvolutionMan
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_2
	release
	end


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_0
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_1
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice
	return


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice::
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_1
	multichoice2 0, 0, BattleFrontier_Underground_B2F_DayCare_Text_BreedingHelperOptions
	switch VAR_RESULT
	case 0, BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_3
	case 1, BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_4
	case 2, BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_5
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd
BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1:
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse
	return

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_3:
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_0
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_1
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_2
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_3
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_4
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_5
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_6
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_7
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_4:
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_8
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_9
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_10
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_11
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_12
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_13
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_5:
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_14
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_15
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_16
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_17
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_18
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_19
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_1


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse::
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_Text_0
	yesnobox 0, 8
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_2
BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_1:
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd
	return

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_2:
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice
	goto BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_1


BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd::
	msgbox BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd_Text_0
	release
	end


	.align 2
BattleFrontier_Underground_B2F_DayCare_Mart_EvolutionMan:
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_EVERSTONE
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_CHIPPED_POT
	.2byte ITEM_GALARICA_CUFF
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_UPGRADE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_SACHET
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_STRAWBERRY_SWEET
	.2byte ITEM_LOVE_SWEET
	.2byte ITEM_BERRY_SWEET
	.2byte ITEM_CLOVER_SWEET
	.2byte ITEM_FLOWER_SWEET
	.2byte ITEM_STAR_SWEET
	.2byte ITEM_RIBBON_SWEET
	.2byte ITEM_RED_NECTAR
	.2byte ITEM_YELLOW_NECTAR
	.2byte ITEM_PINK_NECTAR
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_BLACK_AUGURITE
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_PEAT_BLOCK
	.2byte ITEM_AUSPICIOUS_ARMOR
	.2byte ITEM_MALICIOUS_ARMOR
	.2byte ITEM_GIMMIGHOUL_COIN
	.2byte ITEM_LEADERS_CREST
	.2byte ITEM_SYRUPY_APPLE
	.2byte ITEM_UNREMARKABLE_TEACUP
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_NONE

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_0:
	.string "Hello there! I sell items for breeding\n"
	.string "and raising POKéMON!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_1:
	.string "What can I help you with?$"

BattleFrontier_Underground_B2F_DayCare_EventScript_EvolutionMan_Text_2:
	.string "Thanks for your business!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_0:
	.string "Hello, nice to meet you! I'm the POKéMON\n"
	.string "breeding helper.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelper_Text_1:
	.string "I can teach you how to breed POKéMON\n"
	.string "effectively.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_0:
	.string "Sure! To start with, you will need two\n"
	.string "compatible POKéMON - One male and one\l"
	.string "female.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_1:
	.string "These can either be two POKéMON of the\n"
	.string "same egg group, or of the same species.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_2:
	.string "Ditto can also be used to breed with\n"
	.string "almost any POKéMON of any gender!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_3:
	.string "Once you've placed both of your\n"
	.string "POKéMON in the care of the day care\l"
	.string "lady, go for a walk and check back with\l"
	.string "the day care man upstairs every now and\l"
	.string "then.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_4:
	.string "After a certain number of steps, the\n"
	.string "Day Care worker should have an Egg for\l"
	.string "you!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_5:
	.string "The frequency of eggs will increase\n"
	.string "with higher compatibility between the\l"
	.string "two POKéMON.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_6:
	.string "Be careful, though - if he says that\n"
	.string "they would rather play with other\l"
	.string "POKéMON than each other, you will never\l"
	.string "get any eggs from them!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_7:
	.string "Well, that's the basics. I hope that\n"
	.string "helps!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_8:
	.string "Sure! Once you have the learnt the\n"
	.string "basics, you might want to start\l"
	.string "breeding Pokemon with better stats.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_9:
	.string "Normally, the parents will randomly pass\n"
	.string "down one stat between them - the\l"
	.string "others will all be random.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_10:
	.string "However, when you give one of the\n"
	.string "parents a destiny knot, this will make\l"
	.string "the child inherit five stats instead!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_11:
	.string "This means that generally, breeding\n"
	.string "parents with high stats will result in\l"
	.string "children with strong stats as well.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_12:
	.string "You can also give an Everstone to the\n"
	.string "other parent to pass down its nature to\l"
	.string "all children as well!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_13:
	.string "Well, that's about all I can teach you\n"
	.string "about stats. I hope that helps!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_14:
	.string "Sure! Some POKéMON have moves called\n"
	.string "Egg Moves which they don't normally\l"
	.string "learn - They can be taught these moves\l"
	.string "by breeding with other POKéMON$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_15:
	.string "These moves can be passed down from\n"
	.string "either parent, as long as at least one\l"
	.string "of them knows the move being passed\l"
	.string "down.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_16:
	.string "You can also use this method to share\n"
	.string "moves between POKéMON without\l"
	.string "breeding!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_17:
	.string "By giving the mirror herb item to the\n"
	.string "Pokemon which has the move you want to\l"
	.string "share, and then putting it in the day\l"
	.string "care with a Pokemon which is able to\l"
	.string "learn it, the second Pokemon will learn\l"
	.string "the move instantly.$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_18:
	.string "The two Pokemon do not even need to\n"
	.string "share an egg group, and the mirror herb\l"
	.string "is not consumed!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperChoice_Text_19:
	.string "Well, that's about all I can teach you\n"
	.string "about sharing moves. I hope that helps!$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperAnythingElse_Text_0:
	.string "Can I help with anything else?$"

BattleFrontier_Underground_B2F_DayCare_EventScript_BreedingHelperEnd_Text_0:
	.string "Come back if you need anything!$"

BattleFrontier_Underground_B2F_DayCare_Text_BreedingHelperOptions::
	.string "BASICS$"
	.string "STATS$"
	.string "MOVES$"
	.string "NOTHING$"
	.string "$"
