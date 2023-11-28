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
	pokemart LilycoveCity_Mart_Pokemart_Clerk2
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1


	.align 2
LilycoveCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_PEAT_BLOCK
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_HERACRONITE
	.2byte ITEM_GYARADOSITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
