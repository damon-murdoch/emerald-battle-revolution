BattleFrontier_Underground_B1F_MapScripts::
	.byte 0

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_0
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_1
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_2
BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_1:
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_3
	release
	end

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_2:
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_2
	giveitem ITEM_COIN_CASE
	goto BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_1


BattleFrontier_Underground_B1F_EventScript_BerryShopIVTrainingClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BerryShopIVTrainingClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BerryShopEVTrainingClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BerryShopEVTrainingClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopVitaminClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopVitaminClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopMintClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopMintClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopOtherClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopOtherClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopTeraClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopTeraClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopMegaClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopMegaClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopZCrystalClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopZCrystalClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopBerryClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopBerryClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopResistClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopResistClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopCommonClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopCommonClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopUncommonClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopUncommonClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopTypeItemClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopTypeItemClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopGemstoneClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopGemstoneClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_TMHMClerk1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_TMHMClerk1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_TMHMClerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_TMHMClerk2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_PokeballClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_PokeballClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_GeneralClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_OldKeyItemClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_OldKeyItemClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_NewKeyItemClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BattleFrontier_Underground_B1F_Mart_NewKeyItemClerk
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff::
	lock
	faceplayer
	msgbox BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff_Text_0
	release
	end


	.align 2
BattleFrontier_Underground_B1F_Mart_PokemonShopItemClerk:
	.2byte ITEM_FLAME_PLATE
	.2byte ITEM_SPLASH_PLATE
	.2byte ITEM_ZAP_PLATE
	.2byte ITEM_MEADOW_PLATE
	.2byte ITEM_ICICLE_PLATE
	.2byte ITEM_FIST_PLATE
	.2byte ITEM_TOXIC_PLATE
	.2byte ITEM_EARTH_PLATE
	.2byte ITEM_SKY_PLATE
	.2byte ITEM_MIND_PLATE
	.2byte ITEM_INSECT_PLATE
	.2byte ITEM_STONE_PLATE
	.2byte ITEM_SPOOKY_PLATE
	.2byte ITEM_DRACO_PLATE
	.2byte ITEM_DREAD_PLATE
	.2byte ITEM_IRON_PLATE
	.2byte ITEM_PIXIE_PLATE
	.2byte ITEM_DOUSE_DRIVE
	.2byte ITEM_SHOCK_DRIVE
	.2byte ITEM_BURN_DRIVE
	.2byte ITEM_CHILL_DRIVE
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
	.2byte ITEM_RUSTED_SWORD
	.2byte ITEM_RUSTED_SHIELD
	.2byte ITEM_SOUL_DEW
	.2byte ITEM_ADAMANT_ORB
	.2byte ITEM_LUSTROUS_ORB
	.2byte ITEM_GRISEOUS_ORB
	.2byte ITEM_ADAMANT_CRYSTAL
	.2byte ITEM_GRISEOUS_CORE
	.2byte ITEM_LUSTROUS_GLOBE
	.2byte ITEM_SCROLL_OF_DARKNESS
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_CORNERSTONE_MASK
	.2byte ITEM_WELLSPRING_MASK
	.2byte ITEM_HEARTHFLAME_MASK
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BerryShopIVTrainingClerk:
	.2byte ITEM_DURIN_BERRY
	.2byte ITEM_BELUE_BERRY
	.2byte ITEM_RAZZ_BERRY
	.2byte ITEM_BLUK_BERRY
	.2byte ITEM_NANAB_BERRY
	.2byte ITEM_WEPEAR_BERRY
	.2byte ITEM_PINAP_BERRY
	.2byte ITEM_CORNN_BERRY
	.2byte ITEM_MAGOST_BERRY
	.2byte ITEM_RABUTA_BERRY
	.2byte ITEM_NOMEL_BERRY
	.2byte ITEM_SPELON_BERRY
	.2byte ITEM_PAMTRE_BERRY
	.2byte ITEM_WATMEL_BERRY
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BerryShopEVTrainingClerk:
	.2byte ITEM_HEALTH_MOCHI
	.2byte ITEM_MUSCLE_MOCHI
	.2byte ITEM_RESIST_MOCHI
	.2byte ITEM_GENIUS_MOCHI
	.2byte ITEM_CLEVER_MOCHI
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_TrainingShopVitaminClerk:
	.2byte ITEM_HP_UP
	.2byte ITEM_HEALTH_FEATHER
	.2byte ITEM_PROTEIN
	.2byte ITEM_MUSCLE_FEATHER
	.2byte ITEM_IRON
	.2byte ITEM_RESIST_FEATHER
	.2byte ITEM_CALCIUM
	.2byte ITEM_GENIUS_FEATHER
	.2byte ITEM_ZINC
	.2byte ITEM_CLEVER_FEATHER
	.2byte ITEM_CARBOS
	.2byte ITEM_SWIFT_FEATHER
	.2byte ITEM_PP_UP
	.2byte ITEM_PP_MAX
	.2byte ITEM_BOTTLE_CAP
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_TrainingShopMintClerk:
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
BattleFrontier_Underground_B1F_Mart_TrainingShopOtherClerk:
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_DYNAMAX_CANDY
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_AMULET_COIN
	.2byte ITEM_LUCKY_EGG
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_TrainingShopTeraClerk:
	.2byte ITEM_BUG_TERA_SHARD
	.2byte ITEM_DARK_TERA_SHARD
	.2byte ITEM_DRAGON_TERA_SHARD
	.2byte ITEM_ELECTRIC_TERA_SHARD
	.2byte ITEM_FAIRY_TERA_SHARD
	.2byte ITEM_FIGHTING_TERA_SHARD
	.2byte ITEM_FIRE_TERA_SHARD
	.2byte ITEM_FLYING_TERA_SHARD
	.2byte ITEM_GHOST_TERA_SHARD
	.2byte ITEM_GRASS_TERA_SHARD
	.2byte ITEM_GROUND_TERA_SHARD
	.2byte ITEM_ICE_TERA_SHARD
	.2byte ITEM_NORMAL_TERA_SHARD
	.2byte ITEM_POISON_TERA_SHARD
	.2byte ITEM_PSYCHIC_TERA_SHARD
	.2byte ITEM_ROCK_TERA_SHARD
	.2byte ITEM_STEEL_TERA_SHARD
	.2byte ITEM_WATER_TERA_SHARD
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopMegaClerk:
	.2byte ITEM_VENUSAURITE
	.2byte ITEM_CHARIZARDITE_X
	.2byte ITEM_CHARIZARDITE_Y
	.2byte ITEM_BLASTOISINITE
	.2byte ITEM_BEEDRILLITE
	.2byte ITEM_PIDGEOTITE
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_SLOWBRONITE
	.2byte ITEM_GENGARITE
	.2byte ITEM_KANGASKHANITE
	.2byte ITEM_PINSIRITE
	.2byte ITEM_GYARADOSITE
	.2byte ITEM_AERODACTYLITE
	.2byte ITEM_MEWTWONITE_X
	.2byte ITEM_MEWTWONITE_Y
	.2byte ITEM_AMPHAROSITE
	.2byte ITEM_STEELIXITE
	.2byte ITEM_SCIZORITE
	.2byte ITEM_HERACRONITE
	.2byte ITEM_HOUNDOOMINITE
	.2byte ITEM_TYRANITARITE
	.2byte ITEM_SCEPTILITE
	.2byte ITEM_BLAZIKENITE
	.2byte ITEM_SWAMPERTITE
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_MAWILITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_MEDICHAMITE
	.2byte ITEM_MANECTITE
	.2byte ITEM_SHARPEDONITE
	.2byte ITEM_CAMERUPTITE
	.2byte ITEM_ALTARIANITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_ABSOLITE
	.2byte ITEM_GLALITITE
	.2byte ITEM_SALAMENCITE
	.2byte ITEM_METAGROSSITE
	.2byte ITEM_LATIASITE
	.2byte ITEM_LATIOSITE
	.2byte ITEM_LOPUNNITE
	.2byte ITEM_GARCHOMPITE
	.2byte ITEM_LUCARIONITE
	.2byte ITEM_ABOMASITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_AUDINITE
	.2byte ITEM_DIANCITE
	.2byte ITEM_RED_ORB
	.2byte ITEM_BLUE_ORB
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopZCrystalClerk:
	.2byte ITEM_NORMALIUM_Z
	.2byte ITEM_FIRIUM_Z
	.2byte ITEM_WATERIUM_Z
	.2byte ITEM_ELECTRIUM_Z
	.2byte ITEM_GRASSIUM_Z
	.2byte ITEM_ICIUM_Z
	.2byte ITEM_FIGHTINIUM_Z
	.2byte ITEM_POISONIUM_Z
	.2byte ITEM_GROUNDIUM_Z
	.2byte ITEM_FLYINIUM_Z
	.2byte ITEM_PSYCHIUM_Z
	.2byte ITEM_BUGINIUM_Z
	.2byte ITEM_ROCKIUM_Z
	.2byte ITEM_GHOSTIUM_Z
	.2byte ITEM_DRAGONIUM_Z
	.2byte ITEM_DARKINIUM_Z
	.2byte ITEM_STEELIUM_Z
	.2byte ITEM_FAIRIUM_Z
	.2byte ITEM_PIKANIUM_Z
	.2byte ITEM_EEVIUM_Z
	.2byte ITEM_SNORLIUM_Z
	.2byte ITEM_MEWNIUM_Z
	.2byte ITEM_DECIDIUM_Z
	.2byte ITEM_INCINIUM_Z
	.2byte ITEM_PRIMARIUM_Z
	.2byte ITEM_LYCANIUM_Z
	.2byte ITEM_MIMIKIUM_Z
	.2byte ITEM_KOMMONIUM_Z
	.2byte ITEM_TAPUNIUM_Z
	.2byte ITEM_SOLGANIUM_Z
	.2byte ITEM_LUNALIUM_Z
	.2byte ITEM_MARSHADIUM_Z
	.2byte ITEM_ALORAICHIUM_Z
	.2byte ITEM_PIKASHUNIUM_Z
	.2byte ITEM_ULTRANECROZIUM_Z
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopCommonClerk:
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_ELECTRIC_SEED
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_MISTY_SEED
	.2byte ITEM_GRASSY_SEED
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_IRON_BALL
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_EVIOLITE
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_RED_CARD
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_ADRENALINE_ORB
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_ABILITY_SHIELD
	.2byte ITEM_CLEAR_AMULET
	.2byte ITEM_PUNCHING_GLOVE
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_LOADED_DICE
	.2byte ITEM_BOOSTER_ENERGY
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopUncommonClerk:
	.2byte ITEM_DAMP_ROCK
	.2byte ITEM_HEAT_ROCK
	.2byte ITEM_SMOOTH_ROCK
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_SNOWBALL
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_AMULET_COIN
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_LUCKY_EGG
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_RING_TARGET
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LEEK
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_BERSERK_GENE
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_QUICK_POWDER
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_ODD_INCENSE
	.2byte ITEM_ROCK_INCENSE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopTypeItemClerk:
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_MAGNET
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_POISON_BARB
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_HARD_STONE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_METAL_COAT
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopGemstoneClerk:
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopBerryClerk:
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
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_SALAC_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_LANSAT_BERRY
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_MICLE_BERRY
	.2byte ITEM_CUSTAP_BERRY
	.2byte ITEM_JABOCA_BERRY
	.2byte ITEM_ROWAP_BERRY
	.2byte ITEM_KEE_BERRY
	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_BattleShopResistClerk:
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
	.2byte ITEM_HABAN_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_TMHMClerk1:
	.2byte ITEM_TM01
	.2byte ITEM_TM02
	.2byte ITEM_TM03
	.2byte ITEM_TM04
	.2byte ITEM_TM05
	.2byte ITEM_TM06
	.2byte ITEM_TM07
	.2byte ITEM_TM08
	.2byte ITEM_TM09
	.2byte ITEM_TM10
	.2byte ITEM_TM11
	.2byte ITEM_TM12
	.2byte ITEM_TM13
	.2byte ITEM_TM14
	.2byte ITEM_TM15
	.2byte ITEM_TM16
	.2byte ITEM_TM17
	.2byte ITEM_TM18
	.2byte ITEM_TM19
	.2byte ITEM_TM20
	.2byte ITEM_TM21
	.2byte ITEM_TM22
	.2byte ITEM_TM23
	.2byte ITEM_TM24
	.2byte ITEM_TM25
	.2byte ITEM_HM01
	.2byte ITEM_HM02
	.2byte ITEM_HM03
	.2byte ITEM_HM04
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_TMHMClerk2:
	.2byte ITEM_TM26
	.2byte ITEM_TM27
	.2byte ITEM_TM28
	.2byte ITEM_TM29
	.2byte ITEM_TM30
	.2byte ITEM_TM31
	.2byte ITEM_TM32
	.2byte ITEM_TM33
	.2byte ITEM_TM34
	.2byte ITEM_TM35
	.2byte ITEM_TM36
	.2byte ITEM_TM37
	.2byte ITEM_TM38
	.2byte ITEM_TM39
	.2byte ITEM_TM40
	.2byte ITEM_TM41
	.2byte ITEM_TM42
	.2byte ITEM_TM43
	.2byte ITEM_TM44
	.2byte ITEM_TM45
	.2byte ITEM_TM46
	.2byte ITEM_TM47
	.2byte ITEM_TM48
	.2byte ITEM_TM49
	.2byte ITEM_TM50
	.2byte ITEM_HM05
	.2byte ITEM_HM06
	.2byte ITEM_HM07
	.2byte ITEM_HM08
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_OldKeyItemClerk:
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_ACRO_BIKE
	.2byte ITEM_SOOT_SACK
	.2byte ITEM_OLD_ROD
	.2byte ITEM_GOOD_ROD
	.2byte ITEM_SUPER_ROD
	.2byte ITEM_POWDER_JAR
	.2byte ITEM_WAILMER_PAIL
	.2byte ITEM_POKEBLOCK_CASE
	.2byte ITEM_DOWSING_MACHINE
	.2byte ITEM_SS_TICKET
	.2byte ITEM_EON_TICKET
	.2byte ITEM_MYSTIC_TICKET
	.2byte ITEM_AURORA_TICKET
	.2byte ITEM_OLD_SEA_MAP
	.2byte ITEM_GO_GOGGLES
	.2byte ITEM_DEVON_SCOPE
	.2byte ITEM_METEORITE
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_NewKeyItemClerk:
	.2byte ITEM_MEGA_RING
	.2byte ITEM_Z_POWER_RING
	.2byte ITEM_DYNAMAX_BAND
	.2byte ITEM_TERA_ORB
	.2byte ITEM_ROTOM_CATALOG
	.2byte ITEM_GRACIDEA
	.2byte ITEM_REVEAL_GLASS
	.2byte ITEM_DNA_SPLICERS
	.2byte ITEM_ZYGARDE_CUBE
	.2byte ITEM_PRISON_BOTTLE
	.2byte ITEM_N_SOLARIZER
	.2byte ITEM_N_LUNARIZER
	.2byte ITEM_REINS_OF_UNITY
	.2byte ITEM_NONE

	.align 2
BattleFrontier_Underground_B1F_Mart_PokeballClerk:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_PREMIER_BALL
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_LEVEL_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_MOON_BALL
	.2byte ITEM_FRIEND_BALL
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_FAST_BALL
	.2byte ITEM_HEAVY_BALL
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_SAFARI_BALL
	.2byte ITEM_SPORT_BALL
	.2byte ITEM_PARK_BALL
	.2byte ITEM_BEAST_BALL
	.2byte ITEM_NONE

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_0:
	.string "Welcome to the Battle Frontier\n"
	.string "Underground!$"

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_1:
	.string "This is the entrance to the Battle\n"
	.string "Frontier Games Corner.$"

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_2:
	.string "You will need a coin case to play here.\n"
	.string "Here you go!$"

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_3:
	.string "I hope you enjoy your stay!$"

BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff_Text_0:
	.string "This area isn't available right now,\n"
	.string "sorry! Please come back soon!$"
