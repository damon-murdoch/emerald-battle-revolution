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
	.2byte ITEM_MAX_MUSHROOMS
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_MAX_HONEY
	.2byte ITEM_HONEY
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
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

LavaridgeTown_HerbShop_EventScript_Clerk3::
	lock
	faceplayer
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_0
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_1
	waitmessage
	multichoice2 1, 1, LavaridgeTown_HerbShop_Text_Clerk3Options
	switch VAR_RESULT
	case 0, LavaridgeTown_HerbShop_EventScript_Clerk3_3
	case 1, LavaridgeTown_HerbShop_EventScript_Clerk3_4
	case 2, LavaridgeTown_HerbShop_EventScript_Clerk3_5
	case 3, LavaridgeTown_HerbShop_EventScript_Clerk3_6
LavaridgeTown_HerbShop_EventScript_Clerk3_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_HerbShop_EventScript_Clerk3_3:
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_2
	pokemart LavaridgeTown_HerbShop_Pokemart_Clerk3Medicine
	goto LavaridgeTown_HerbShop_EventScript_Clerk3_1

LavaridgeTown_HerbShop_EventScript_Clerk3_4:
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_3
	pokemart LavaridgeTown_HerbShop_Pokemart_Clerk3Berries
	goto LavaridgeTown_HerbShop_EventScript_Clerk3_1

LavaridgeTown_HerbShop_EventScript_Clerk3_5:
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_4
	pokemart LavaridgeTown_HerbShop_Pokemart_Clerk3Mints
	goto LavaridgeTown_HerbShop_EventScript_Clerk3_1

LavaridgeTown_HerbShop_EventScript_Clerk3_6:
	msgbox LavaridgeTown_HerbShop_EventScript_Clerk3_Text_5
	pokemart LavaridgeTown_HerbShop_Pokemart_Clerk3Other
	goto LavaridgeTown_HerbShop_EventScript_Clerk3_1


	.align 2
LavaridgeTown_HerbShop_Pokemart_Clerk3Medicine:
	.2byte ITEM_HEALTH_MOCHI
	.2byte ITEM_MUSCLE_MOCHI
	.2byte ITEM_RESIST_MOCHI
	.2byte ITEM_GENIUS_MOCHI
	.2byte ITEM_CLEVER_MOCHI
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_HEALTH_FEATHER
	.2byte ITEM_MUSCLE_FEATHER
	.2byte ITEM_RESIST_FEATHER
	.2byte ITEM_GENIUS_FEATHER
	.2byte ITEM_CLEVER_FEATHER
	.2byte ITEM_SWIFT_FEATHER
	.2byte ITEM_PROTEIN
	.2byte ITEM_CALCIUM
	.2byte ITEM_IRON
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_HP_UP
	.2byte ITEM_PP_UP
	.2byte ITEM_PP_MAX
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
LavaridgeTown_HerbShop_Pokemart_Clerk3Berries:
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

	.align 2
LavaridgeTown_HerbShop_Pokemart_Clerk3Mints:
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
LavaridgeTown_HerbShop_Pokemart_Clerk3Other:
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_NONE

LavaridgeTown_HerbShop_EventScript_Clerk2_Text_0:
	.string "Welcome to the battle berries counter!$"

LavaridgeTown_HerbShop_EventScript_Clerk2_Text_1:
	.string "Here you'll find berries for your\n"
	.string "POKéMON to use in battle!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_0:
	.string "Welcome to the training items counter!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_1:
	.string "Here you'll find berries and other items\n"
	.string "to use when training your Pokemon!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_2:
	.string "This medicine will make your POKéMON\n"
	.string "stronger!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_3:
	.string "These berries will help you train your\n"
	.string "POKéMON!$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_4:
	.string "These mints will change the nature of a\n"
	.string "POKéMON$"

LavaridgeTown_HerbShop_EventScript_Clerk3_Text_5:
	.string "These items will help you train POKéMON\n"
	.string "in battle!$"

LavaridgeTown_HerbShop_Text_Clerk3Options::
	.string "Medicine$"
	.string "Berries$"
	.string "Mints$"
	.string "Other$"
	.string "Cancel$"
	.string "$"
