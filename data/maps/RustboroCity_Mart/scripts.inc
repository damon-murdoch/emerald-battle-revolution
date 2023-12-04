RustboroCity_Mart_MapScripts::
	.byte 0

RustboroCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

RustboroCity_Mart_EventScript_PokefanF::
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_Boy::
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
	end

RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
	.string "I'm buying some PARLYZ HEALS and\n"
	.string "ANTIDOTES.\p"
	.string "Just in case I run into SHROOMISH\n"
	.string "in PETALBURG WOODS.$"

RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
	.string "My POKéMON evolved.\n"
	.string "It has a lot of HP now.\p"
	.string "I should buy SUPER POTIONS for it\n"
	.string "instead of ordinary POTIONS.$"

RustboroCity_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Mart_EventScript_Clerk2_2
	msgbox RustboroCity_Mart_EventScript_Clerk2_Text_0
RustboroCity_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

RustboroCity_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE02_GET, RustboroCity_Mart_EventScript_Clerk2_5
	pokemart RustboroCity_Mart_Pokemart_Clerk2
	goto RustboroCity_Mart_EventScript_Clerk2_1

RustboroCity_Mart_EventScript_Clerk2_5:
	goto_if_set FLAG_BADGE04_GET, RustboroCity_Mart_EventScript_Clerk2_8
	pokemart RustboroCity_Mart_Pokemart_Clerk2_Expanded
	goto RustboroCity_Mart_EventScript_Clerk2_1

RustboroCity_Mart_EventScript_Clerk2_8:
	goto_if_set FLAG_BADGE06_GET, RustboroCity_Mart_EventScript_Clerk2_11
	pokemart RustboroCity_Mart_Pokemart_Clerk2_Expanded2
	goto RustboroCity_Mart_EventScript_Clerk2_1

RustboroCity_Mart_EventScript_Clerk2_11:
	pokemart RustboroCity_Mart_Pokemart_Clerk2_Expanded3
	goto RustboroCity_Mart_EventScript_Clerk2_1


	.align 2
RustboroCity_Mart_Pokemart_Clerk2:
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_IRON_BALL
	.2byte ITEM_EVIOLITE
	.2byte ITEM_LEEK
	.2byte ITEM_NONE

	.align 2
RustboroCity_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_NORMALIUM_Z
	.2byte ITEM_FLYINIUM_Z
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_IRON_BALL
	.2byte ITEM_EVIOLITE
	.2byte ITEM_LEEK
	.2byte ITEM_NONE

	.align 2
RustboroCity_Mart_Pokemart_Clerk2_Expanded2:
	.2byte ITEM_KANGASKHANITE
	.2byte ITEM_PIDGEOTITE
	.2byte ITEM_PINSIRITE
	.2byte ITEM_AUDINITE
	.2byte ITEM_NORMALIUM_Z
	.2byte ITEM_FLYINIUM_Z
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_IRON_BALL
	.2byte ITEM_EVIOLITE
	.2byte ITEM_LEEK
	.2byte ITEM_NONE

	.align 2
RustboroCity_Mart_Pokemart_Clerk2_Expanded3:
	.2byte ITEM_NORMAL_TERA_SHARD
	.2byte ITEM_FLYING_TERA_SHARD
	.2byte ITEM_KANGASKHANITE
	.2byte ITEM_PIDGEOTITE
	.2byte ITEM_PINSIRITE
	.2byte ITEM_AUDINITE
	.2byte ITEM_NORMALIUM_Z
	.2byte ITEM_FLYINIUM_Z
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_IRON_BALL
	.2byte ITEM_EVIOLITE
	.2byte ITEM_LEEK
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
