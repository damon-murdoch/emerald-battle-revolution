LavaridgeTown_HerbShop_MapScripts::
	.byte 0

LavaridgeTown_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_FIGY_BERRY
	.2byte ITEM_WIKI_BERRY
	.2byte ITEM_MAGO_BERRY
	.2byte ITEM_AGUAV_BERRY
	.2byte ITEM_IAPAPA_BERRY
	.2byte ITEM_NONE
	release
	end

LavaridgeTown_HerbShop_EventScript_ExpertM::
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end

LavaridgeTown_HerbShop_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CHARCOAL
	release
	end

LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
	.string "Welcome to the HERB SHOP, home of\n"
	.string "effective and inexpensive medicine!\n"
	.string "we also sell many different berries\n"
	.string "for you to feed your Pokemon.\n$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
	.string "You've come to look at herbal medicine\n"
	.string "in LAVARIDGE?\p"
	.string "That's rather commendable.\p"
	.string "I like you! Take this!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal:
	.string "That CHARCOAL I gave you, it's used\n"
	.string "for making herbal medicine.\p"
	.string "It also does wonders when held by\n"
	.string "a POKéMON.\p"
	.string "It intensifies the power of FIRE-type\n"
	.string "moves.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
	.string "Herbal medicine works impressively well.\n"
	.string "But your POKéMON will dislike you for it.\l"
	.string "It must be horribly bitter!$"

LavaridgeTown_HerbShop_EventScript_Clerk2::
	lock
	faceplayer
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk2_Text_0
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk2_Text_1
	waitmessage
	pokemart LavaridgeTown_HerbShop_Mart_Clerk2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
LavaridgeTown_HerbShop_Mart_Clerk2:
	.2byte ITEM_CHILAN_BERRY
	.2byte ITEM_OCCA_BERRY
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_RINDO_BERRY
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_COBA_BERRY
	.2byte ITEM_PAYAPA_BERRY
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_KASIB_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_SALAC_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_LANSAT_BERRY
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_MICLE_BERRY
	.2byte ITEM_CUSTAP_BERRY
	.2byte ITEM_JABOCA_BERRY
	.2byte ITEM_ROWAP_BERRY
	.2byte ITEM_KEE_BERRY
	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE

LavaridgeTown_HerbShop_EventScript_Clerk3::
	lock
	faceplayer
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_0
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_1
	waitmessage
	pokemart LavaridgeTown_HerbShop_Mart_Clerk3
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
LavaridgeTown_HerbShop_Mart_Clerk3:
	.2byte ITEM_RAZZ_BERRY
	.2byte ITEM_BLUK_BERRY
	.2byte ITEM_NANAB_BERRY
	.2byte ITEM_WEPEAR_BERRY
	.2byte ITEM_PINAP_BERRY
	.2byte ITEM_CORNN_BERRY
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_MAGOST_BERRY
	.2byte ITEM_RABUTA_BERRY
	.2byte ITEM_NOMEL_BERRY
	.2byte ITEM_SPELON_BERRY
	.2byte ITEM_PAMTRE_BERRY
	.2byte ITEM_WATMEL_BERRY
	.2byte ITEM_NONE

LavaridgeTown_HerbShop_EventScript_Clerk2_Text_0:
	.string "Welcome to the battle berries counter!$"

LavaridgeTown_HerbShop_EventScript_Clerk2_Text_1:
	.string "Here you'll find berries for your\n"
	.string "POKéMON to use in battle!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_0:
	.string "Welcome to the training berries\n"
	.string "counter!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_1:
	.string "Here you'll find berries to use when\n"
	.string "training your Pokemon!$"
