@ Changes the caught ball of a selected Pokémon
.macro setmonball ballId:req
special ChoosePartyMon
waitstate
setvar VAR_TEMP_1, \ballId
special SetMonBall
.endm

@ Checks the state of the Pokédex Seen flag of the specified Pokemon
@ The result is stored in VAR_RESULT
.macro getseenmon species:req
setvar VAR_TEMP_1, \species
specialvar VAR_RESULT, GetSeenMon
.endm

@ Checks the state of the Pokédex Caught flag of the specified Pokemon
@ The result is stored in VAR_RESULT
.macro getcaughtmon species:req
setvar VAR_TEMP_1, \species
specialvar VAR_RESULT, GetCaughtMon
.endm

@ Sets the Pokédex Seen flag of the specified Pokemon
.macro setseenmon species:req
setvar VAR_TEMP_1, \species
special SetSeenMon
.endm

@ Sets the Pokédex Caught flag of the specified Pokemon
.macro setcaughtmon species:req
setvar VAR_TEMP_1, \species
special SetCaughtMon
.endm

OPEN_PARTY_SCREEN = FALSE
NO_PARTY_SCREEN = TRUE

@ Check if the Player has \speciesId in their party.
.macro checkforspecies speciesId:req, silent:req, script:req
.if \silent == OPEN_PARTY_SCREEN
    special ChoosePartyMon
    waitstate
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
    goto_if_eq VAR_RESULT, \speciesId, \script
.else
    setvar VAR_TEMP_1, \speciesId
    specialvar VAR_RESULT, CheckPartyForMon
    goto_if_eq VAR_RESULT, TRUE, \script
.endif
.endm
