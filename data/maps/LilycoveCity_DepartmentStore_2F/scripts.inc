LilycoveCity_DepartmentStore_2F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_2F_EventScript_Cook::
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
	.string "Learn to use items properly.\n"
	.string "That's basic, really.$"

LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
	.string "My husband is waiting at home.\n"
	.string "What would make a good gift for him?$"

LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
	.string "I'm leaving on a long journey soon.\n"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
	lock
	faceplayer
	goto_if_set FLAG_BADGE06_GET, LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_2
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_0
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_IS_CHAMPION, LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_5
	pokemart LilycoveCity_Mart_Pokemart_Clerk2
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_5:
	pokemart LilycoveCity_Mart_Pokemart_Clerk2_Expanded
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1


	.align 2
LilycoveCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_MOON_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_FAB_MAIL
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_RETRO_MAIL
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_TROPIC_MAIL
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_BEAD_MAIL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_GLITTER_MAIL
	.2byte ITEM_NONE

	.align 2
LilycoveCity_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_SPORT_BALL
	.2byte ITEM_SAFARI_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_PARK_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_FAB_MAIL
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_RETRO_MAIL
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_TROPIC_MAIL
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_BEAD_MAIL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_GLITTER_MAIL
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
