.set LOCALID_CURATOR, 2
.set LOCALID_ARTIST_2, 8

LilycoveCity_LilycoveMuseum_1F_MapScripts::
	.byte 0

LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
	lockall
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	waitmessage
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
	goto_if_eq VAR_RESULT, 0, LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
	goto_if_eq VAR_RESULT, 1, LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
	goto_if_eq VAR_RESULT, YES, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
	releaseall
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
	waitmovement 0
	removeobject LOCALID_CURATOR
	switch VAR_FACING
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
	walk_left
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
	walk_right
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
	walk_up
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
	lock
	faceplayer
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARTIST_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
	.string "Welcome to LILYCOVE MUSEUM.\p"
	.string "Please take the time to enjoy our\n"
	.string "collection of fantastic artwork\l"
	.string "featuring POKéMON.$"

LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
	.string "I'm the CURATOR of this MUSEUM of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our MUSEUM.\p"
	.string "Have you viewed our collection of\n"
	.string "paintings already?$"

LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
	.string "Ah, then let me not disturb you.\n"
	.string "Please, do take your time.$"

LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
	.string "Oh? I do believe that you seem to\n"
	.string "be a POKéMON TRAINER.\p"
	.string "Have you an interest in paintings,\n"
	.string "too?$"

LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
	.string "I see…\p"
	.string "I'm honored that you would visit\n"
	.string "us in spite of that.$"

LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
	.string "Ah, excellent!\n"
	.string "You do like paintings!\p"
	.string "Then, may I ask you to come with me?$"

LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting:
	.string "It's a very old painting.\n"
	.string "The paint is peeling here and there.$"

LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
	.string "It's an odd landscape with bizarre\n"
	.string "and fantastic scenery.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
	.string "It's a painting of a beautiful, smiling\n"
	.string "woman with a POKéMON on her lap.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
	.string "It's a painting of a legendary POKéMON\n"
	.string "from long ago.\p"
	.string "The artist painted this from\n"
	.string "imagination.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
	.string "It's a painting of GRASS POKéMON\n"
	.string "swaying in a breeze.\p"
	.string "They appear to be enjoying the wind's\n"
	.string "gentle caress.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries:
	.string "It's a delicious-looking painting\n"
	.string "of BERRIES.\p"
	.string "This painting could make you hungry!$"

LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
	.string "It's a replica of a famous sculpture.\p"
	.string "It depicts an ancient BIRD POKéMON.$"

LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
	.string "It's a big POKé BALL carved from\n"
	.string "a black stone.\p"
	.string "It was apparently used in festivals\n"
	.string "in the olden days.$"

LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
	.string "It's a huge stone tablet inscribed\n"
	.string "with POKéMON and dense text in the\l"
	.string "small characters of an ancient,\l"
	.string "unreadable language.$"

LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence:
	.string "Hmmm…\n"
	.string "What works of great magnificence…$"

LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
	.string "Battling with POKéMON is fun,\n"
	.string "I'll grant you that.\p"
	.string "But one mustn't forget our love for\n"
	.string "the fine arts.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
	.string "This ART MUSEUM… Well, you could\n"
	.string "see many fantastic paintings.\p"
	.string "And the CURATOR is a wonderful person.\p"
	.string "Among artists like myself, this MUSEUM\n"
	.string "is an inspiration.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
	.string "This lady is pretty!\n"
	.string "She's like Mommy!$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
	.string "This POKéMON is adorable!\n"
	.string "Just like our little boy!$"

LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
	.string "I'd heard that this ART MUSEUM got\n"
	.string "in some new paintings.\p"
	.string "So, naturally I hurried over.\p"
	.string "Are the new paintings up on\n"
	.string "the second floor?$"

LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
	.string "Lately, the CURATOR has been\n"
	.string "unusually cheerful.\p"
	.string "I bet something good happened for him.\n"
	.string "Definitely.$"

LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
	.string "I aim to see many great paintings\n"
	.string "here and learn from them.\p"
	.string "I have this dream of one day having\n"
	.string "my artwork exhibited here.$"

LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination:
	.string "The ART MUSEUM has become a favorite\n"
	.string "tourist destination.\p"
	.string "It's great for LILYCOVE…\n"
	.string "No, great for the HOENN region!\p"
	.string "This is what I've heard--a lone TRAINER\n"
	.string "procured all the paintings upstairs.$"

LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop::
	lock
	faceplayer
	msgbox LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_Text_0
	msgbox LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_Text_1
	waitmessage
	goto_if_set FLAG_IS_CHAMPION, LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_2
	pokemart LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop
LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_2:
	pokemart LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop_Expanded
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_1


	.align 2
LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop:
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_OLD_GATEAU
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_LUMIOSE_GALETTE
	.2byte ITEM_SHALOUR_SABLE
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_SWEET_HEART
	.2byte ITEM_YELLOW_FLUTE
	.2byte ITEM_BLACK_FLUTE
	.2byte ITEM_WHITE_FLUTE
	.2byte ITEM_BLUE_FLUTE
	.2byte ITEM_RED_FLUTE
	.2byte ITEM_NONE

	.align 2
LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop_Expanded:
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_RAGE_CANDY_BAR
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_OLD_GATEAU
	.2byte ITEM_CASTELIACONE
	.2byte ITEM_LUMIOSE_GALETTE
	.2byte ITEM_SHALOUR_SABLE
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_SWEET_HEART
	.2byte ITEM_YELLOW_FLUTE
	.2byte ITEM_BLACK_FLUTE
	.2byte ITEM_WHITE_FLUTE
	.2byte ITEM_BLUE_FLUTE
	.2byte ITEM_RED_FLUTE
	.2byte ITEM_RED_SHARD
	.2byte ITEM_BLUE_SHARD
	.2byte ITEM_YELLOW_SHARD
	.2byte ITEM_GREEN_SHARD
	.2byte ITEM_HEART_SCALE
	.2byte ITEM_NONE

LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop2::
	lock
	faceplayer
	msgbox LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_Text_0
	msgbox LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_Text_1
	waitmessage
	goto_if_set FLAG_IS_CHAMPION, LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop2_2
	pokemart LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop2
LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop2_2:
	pokemart LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop2_Expanded
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop2_1


	.align 2
LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop2:
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_ROCK_INCENSE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_ODD_INCENSE
	.2byte ITEM_HELIX_FOSSIL
	.2byte ITEM_DOME_FOSSIL
	.2byte ITEM_OLD_AMBER
	.2byte ITEM_ROOT_FOSSIL
	.2byte ITEM_CLAW_FOSSIL
	.2byte ITEM_NONE

	.align 2
LilycoveCity_LilycoveMuseum_1F_Mart_SouvenirShop2_Expanded:
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_ROCK_INCENSE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_ODD_INCENSE
	.2byte ITEM_HELIX_FOSSIL
	.2byte ITEM_DOME_FOSSIL
	.2byte ITEM_OLD_AMBER
	.2byte ITEM_ROOT_FOSSIL
	.2byte ITEM_CLAW_FOSSIL
	.2byte ITEM_ARMOR_FOSSIL
	.2byte ITEM_SKULL_FOSSIL
	.2byte ITEM_COVER_FOSSIL
	.2byte ITEM_PLUME_FOSSIL
	.2byte ITEM_JAW_FOSSIL
	.2byte ITEM_SAIL_FOSSIL
	.2byte ITEM_FOSSILIZED_BIRD
	.2byte ITEM_FOSSILIZED_FISH
	.2byte ITEM_FOSSILIZED_DRAKE
	.2byte ITEM_FOSSILIZED_DINO
	.2byte ITEM_NONE

LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_Text_0:
	.string "Welcome to the Lilycove Museum\n"
	.string "Souvenir Shop!$"

LilycoveCity_LilycoveMuseum_1F_EventScript_SouvenirShop_Text_1:
	.string "You can find rare items from all around\n"
	.string "the world here.$"
