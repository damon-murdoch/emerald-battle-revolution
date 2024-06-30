FallarborTown_Mart_MapScripts::
	.byte 0

FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_Woman::
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM::
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_Text_DecidingSkittyEvolve:
	.string "I'm having a hard time deciding if I\n"
	.string "should make my SKITTY evolve or not.\p"
	.string "I only have to use this MOON STONE,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_Text_Skitty:
	.string "SKITTY: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound:
	.string "This NUGGET I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"

FallarborTown_Mart_EventScript_Clerk2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, FallarborTown_Mart_EventScript_Clerk2_2
	msgbox FallarborTown_Mart_EventScript_Clerk2_Text_0
FallarborTown_Mart_EventScript_Clerk2_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_Clerk2_2:
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE04_GET, FallarborTown_Mart_EventScript_Clerk2_5
	pokemart FallarborTown_Mart_Pokemart_Clerk2
	goto FallarborTown_Mart_EventScript_Clerk2_1

FallarborTown_Mart_EventScript_Clerk2_5:
	goto_if_set FLAG_BADGE06_GET, FallarborTown_Mart_EventScript_Clerk2_8
	pokemart FallarborTown_Mart_Pokemart_Clerk2_Expanded
	goto FallarborTown_Mart_EventScript_Clerk2_1

FallarborTown_Mart_EventScript_Clerk2_8:
	pokemart FallarborTown_Mart_Pokemart_Clerk2_Expanded2
	goto FallarborTown_Mart_EventScript_Clerk2_1


	.align 2
FallarborTown_Mart_Pokemart_Clerk2:
	.2byte ITEM_ICIUM_Z
	.2byte ITEM_DARKINIUM_Z
	.2byte ITEM_ICE_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_UNREMARKABLE_TEACUP
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_CHIPPED_POT
	.2byte ITEM_PROTECTOR
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_BERSERK_GENE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_SACHET
	.2byte ITEM_NONE

	.align 2
FallarborTown_Mart_Pokemart_Clerk2_Expanded:
	.2byte ITEM_SHARPEDONITE
	.2byte ITEM_GYARADOSITE
	.2byte ITEM_GLALITITE
	.2byte ITEM_ABOMASITE
	.2byte ITEM_ICIUM_Z
	.2byte ITEM_DARKINIUM_Z
	.2byte ITEM_ICE_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_UNREMARKABLE_TEACUP
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_CHIPPED_POT
	.2byte ITEM_PROTECTOR
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_BERSERK_GENE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_SACHET
	.2byte ITEM_NONE

	.align 2
FallarborTown_Mart_Pokemart_Clerk2_Expanded2:
	.2byte ITEM_ICE_TERA_SHARD
	.2byte ITEM_DARK_TERA_SHARD
	.2byte ITEM_SHARPEDONITE
	.2byte ITEM_GYARADOSITE
	.2byte ITEM_GLALITITE
	.2byte ITEM_ABOMASITE
	.2byte ITEM_ICIUM_Z
	.2byte ITEM_DARKINIUM_Z
	.2byte ITEM_ICE_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_UNREMARKABLE_TEACUP
	.2byte ITEM_MASTERPIECE_TEACUP
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_CHIPPED_POT
	.2byte ITEM_PROTECTOR
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_BERSERK_GENE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_SACHET
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_Clerk2_Text_0:
	.string "I'm afraid we are all out of stock at the\n"
	.string "moment, sorry!$"
