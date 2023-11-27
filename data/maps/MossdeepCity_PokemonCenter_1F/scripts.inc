.set LOCALID_NURSE, 1

MossdeepCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MossdeepCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
	end

MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MossdeepCity_PokemonCenter_1F_EventScript_Woman::
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
	end

MossdeepCity_PokemonCenter_1F_EventScript_Girl::
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
	end

MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable:
	.string "The GYM LEADERS in this town are\n"
	.string "a formidable duo.\p"
	.string "Their combination attacks are, like,\n"
	.string "excellent and wow!$"

MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves:
	.string "Depending on the special abilities of\n"
	.string "POKéMON, some moves might change\l"
	.string "or not work at all.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist::
	lock
	faceplayer
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_0
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_1
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_2
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_3
	checkforspecies SPECIES_GENESECT, NO_PARTY_SCREEN, MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect
	release
	end


MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect::
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_0
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_1
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_2
	giveitem ITEM_DOUSE_DRIVE
	giveitem ITEM_SHOCK_DRIVE
	giveitem ITEM_BURN_DRIVE
	giveitem ITEM_CHILL_DRIVE
	msgbox MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_3
	release
	end


MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_0:
	.string "Have you ever heard of a POKéMON named\n"
	.string "Genesect?$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_1:
	.string "It's a Mythical POKéMON said to have\n"
	.string "been genetically modified by an evil\l"
	.string "team from another region.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_2:
	.string "If you happen to find a Genesect,\n"
	.string "please let me examine it for my\l"
	.string "research.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_Text_3:
	.string "I'll give you some items in return.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_0:
	.string "... Oh, that's a Genesect!))\n"
	.string "	msgbox(format(Let me take a look at it\l"
	.string "quickly.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_1:
	.string "... Interesting ... Okay!))\n"
	.string "	msgbox(format(This will be very useful\l"
	.string "for my research.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_2:
	.string "Please accept these as my thanks.))\n"
	.string "	msgbox(format(These items will change\l"
	.string "Genesect's type when they are held.$"

MossdeepCity_PokemonCenter_1F_EventScript_GenesectScientist_HasGenesect_Text_3:
	.string "If you ever require more, please come\n"
	.string "see me again. I'll be happy to provide\l"
	.string "more drives in exchange for more data.$"
