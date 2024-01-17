#include "global.h"
#include "battle.h"
#include "battle_gfx_sfx_util.h"
#include "berry.h"
#include "data.h"
#include "daycare.h"
#include "decompress.h"
#include "event_data.h"
#include "international_string_util.h"
#include "link.h"
#include "link_rfu.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "script.h"
#include "sprite.h"
#include "string_util.h"
#include "tv.h"
#include "wild_encounter.h"
#include "constants/items.h"
#include "constants/battle_frontier.h"
#include "config/battle_frontier.h"

static void CB2_ReturnFromChooseHalfParty(void);
static void CB2_ReturnFromChooseBattleFrontierParty(void);
static void HealPlayerBoxes(void);

void HealPlayerParty(void)
{
    u32 i;
    for (i = 0; i < gPlayerPartyCount; i++)
        HealPokemon(&gPlayerParty[i]);
    if (OW_PC_HEAL >= GEN_8)
        HealPlayerBoxes();
}

static void HealPlayerBoxes(void)
{
    int boxId, boxPosition;
    struct BoxPokemon *boxMon;

    for (boxId = 0; boxId < TOTAL_BOXES_COUNT; boxId++)
    {
        for (boxPosition = 0; boxPosition < IN_BOX_COUNT; boxPosition++)
        {
            boxMon = &gPokemonStoragePtr->boxes[boxId][boxPosition];
            if (GetBoxMonData(boxMon, MON_DATA_SANITY_HAS_SPECIES))
                HealBoxPokemon(boxMon);
        }
    }
}

u8 ScriptGiveMon(u16 species, u8 level, u16 item, u32 unused1, u32 unused2, u8 unused3)
{
    u16 nationalDexNum;
    int sentToPc;
    u8 heldItem[2];
    struct Pokemon mon;
    u16 targetSpecies;

    if (OW_SYNCHRONIZE_NATURE >= GEN_6 && (gSpeciesInfo[species].eggGroups[0] == EGG_GROUP_NO_EGGS_DISCOVERED || OW_SYNCHRONIZE_NATURE == GEN_7))
        CreateMonWithNature(&mon, species, level, USE_RANDOM_IVS, PickWildMonNature());
    else
        CreateMon(&mon, species, level, USE_RANDOM_IVS, FALSE, 0, OT_ID_PLAYER_ID, 0);

    heldItem[0] = item;
    heldItem[1] = item >> 8;
    SetMonData(&mon, MON_DATA_HELD_ITEM, heldItem);

    // In case a mon with a form changing item is given. Eg: SPECIES_ARCEUS_NORMAL with ITEM_SPLASH_PLATE will transform into SPECIES_ARCEUS_WATER upon gifted.
    targetSpecies = GetFormChangeTargetSpecies(&mon, FORM_CHANGE_ITEM_HOLD, 0);
    if (targetSpecies != SPECIES_NONE)
    {
        SetMonData(&mon, MON_DATA_SPECIES, &targetSpecies);
        CalculateMonStats(&mon);
    }

    sentToPc = GiveMonToPlayer(&mon);
    nationalDexNum = SpeciesToNationalPokedexNum(species);

    // Don't set Pokédex flag for MON_CANT_GIVE
    switch(sentToPc)
    {
    case MON_GIVEN_TO_PARTY:
    case MON_GIVEN_TO_PC:
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
        GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
        break;
    }
    return sentToPc;
}

u8 ScriptGiveEgg(u16 species)
{
    struct Pokemon mon;
    u8 isEgg;

    CreateEgg(&mon, species, TRUE);
    isEgg = TRUE;
    SetMonData(&mon, MON_DATA_IS_EGG, &isEgg);

    return GiveMonToPlayer(&mon);
}

void HasEnoughMonsForDoubleBattle(void)
{
    switch (GetMonsStateToDoubles())
    {
    case PLAYER_HAS_TWO_USABLE_MONS:
        gSpecialVar_Result = PLAYER_HAS_TWO_USABLE_MONS;
        break;
    case PLAYER_HAS_ONE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_MON;
        break;
    case PLAYER_HAS_ONE_USABLE_MON:
        gSpecialVar_Result = PLAYER_HAS_ONE_USABLE_MON;
        break;
    }
}

static bool8 CheckPartyMonHasHeldItem(u16 item)
{
    int i;

    for(i = 0; i < PARTY_SIZE; i++)
    {
        u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);
        if (species != SPECIES_NONE && species != SPECIES_EGG && GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM) == item)
            return TRUE;
    }
    return FALSE;
}

bool8 DoesPartyHaveEnigmaBerry(void)
{
    bool8 hasItem = CheckPartyMonHasHeldItem(ITEM_ENIGMA_BERRY_E_READER);
    if (hasItem == TRUE)
        GetBerryNameByBerryType(ItemIdToBerryType(ITEM_ENIGMA_BERRY_E_READER), gStringVar1);

    return hasItem;
}

void CreateScriptedWildMon(u16 species, u8 level, u16 item)
{
    u8 heldItem[2];

    ZeroEnemyPartyMons();
    if (OW_SYNCHRONIZE_NATURE > GEN_3)
        CreateMonWithNature(&gEnemyParty[0], species, level, USE_RANDOM_IVS, PickWildMonNature());
    else
        CreateMon(&gEnemyParty[0], species, level, USE_RANDOM_IVS, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item)
    {
        heldItem[0] = item;
        heldItem[1] = item >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem);
    }
}
void CreateScriptedDoubleWildMon(u16 species1, u8 level1, u16 item1, u16 species2, u8 level2, u16 item2)
{
    u8 heldItem1[2];
    u8 heldItem2[2];

    ZeroEnemyPartyMons();

    if (OW_SYNCHRONIZE_NATURE > GEN_3)
        CreateMonWithNature(&gEnemyParty[0], species1, level1, 32, PickWildMonNature());
    else
        CreateMon(&gEnemyParty[0], species1, level1, 32, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item1)
    {
        heldItem1[0] = item1;
        heldItem1[1] = item1 >> 8;
        SetMonData(&gEnemyParty[0], MON_DATA_HELD_ITEM, heldItem1);
    }

    if (OW_SYNCHRONIZE_NATURE > GEN_3)
        CreateMonWithNature(&gEnemyParty[1], species2, level2, 32, PickWildMonNature());
    else
        CreateMon(&gEnemyParty[1], species2, level2, 32, 0, 0, OT_ID_PLAYER_ID, 0);
    if (item2)
    {
        heldItem2[0] = item2;
        heldItem2[1] = item2 >> 8;
        SetMonData(&gEnemyParty[1], MON_DATA_HELD_ITEM, heldItem2);
    }
}

void ScriptSetMonMoveSlot(u8 monIndex, u16 move, u8 slot)
{
// Allows monIndex to go out of bounds of gPlayerParty. Doesn't occur in vanilla
#ifdef BUGFIX
    if (monIndex >= PARTY_SIZE)
#else
    if (monIndex > PARTY_SIZE)
#endif
        monIndex = gPlayerPartyCount - 1;

    SetMonMoveSlot(&gPlayerParty[monIndex], move, slot);
}

// Note: When control returns to the event script, gSpecialVar_Result will be
// TRUE if the party selection was successful.
void ChooseHalfPartyForBattle(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseHalfParty;
    VarSet(VAR_FRONTIER_FACILITY, FACILITY_MULTI_OR_EREADER);
    InitChooseHalfPartyForBattle(0);
}

static void CB2_ReturnFromChooseHalfParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ChoosePartyForBattleFrontier(void)
{
    gMain.savedCallback = CB2_ReturnFromChooseBattleFrontierParty;
    InitChooseHalfPartyForBattle(gSpecialVar_0x8004 + 1);
}

static void CB2_ReturnFromChooseBattleFrontierParty(void)
{
    switch (gSelectedOrderFromParty[0])
    {
    case 0:
        gSpecialVar_Result = FALSE;
        break;
    default:
        gSpecialVar_Result = TRUE;
        break;
    }

    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void ReducePlayerPartyToSelectedMons(void)
{
    struct Pokemon party[MAX_FRONTIER_PARTY_SIZE];
    int i;

    CpuFill32(0, party, sizeof party);

    // copy the selected Pokémon according to the order.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        if (gSelectedOrderFromParty[i]) { // as long as the order keeps going (did the player select 1 mon? 2? 3?), do not stop
            party[i] = gPlayerParty[gSelectedOrderFromParty[i] - 1]; // index is 0 based, not literal
            // Ensure level scaling is met
            CalculateMonStats(&party[i]);
        }

    CpuFill32(0, gPlayerParty, sizeof gPlayerParty);

    // overwrite the first 4 with the order copied to.
    for (i = 0; i < MAX_FRONTIER_PARTY_SIZE; i++)
        gPlayerParty[i] = party[i];

    CalculatePlayerPartyCount();
}

void CanHyperTrain(struct ScriptContext *ctx)
{
    u32 stat = ScriptReadByte(ctx);
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    if (stat < NUM_STATS
     && partyIndex < PARTY_SIZE
     && !GetMonData(&gPlayerParty[partyIndex], MON_DATA_HYPER_TRAINED_HP + stat)
     && GetMonData(&gPlayerParty[partyIndex], MON_DATA_HP_IV + stat) < MAX_PER_STAT_IVS)
    {
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

void HyperTrain(struct ScriptContext *ctx)
{
    u32 stat = ScriptReadByte(ctx);
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    if (stat < NUM_STATS && partyIndex < PARTY_SIZE)
    {
        bool32 data = TRUE;
        SetMonData(&gPlayerParty[partyIndex], MON_DATA_HYPER_TRAINED_HP + stat, &data);
        CalculateMonStats(&gPlayerParty[partyIndex]);
    }
}

void HasGigantamaxFactor(struct ScriptContext *ctx)
{
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    if (partyIndex < PARTY_SIZE)
        gSpecialVar_Result = GetMonData(&gPlayerParty[partyIndex], MON_DATA_GIGANTAMAX_FACTOR);
    else
        gSpecialVar_Result = FALSE;
}

#define GIGANTAMAX_ALLOWED_SPECIES 34

// Species which are allowed to be gigantamaxed
static const u16 sGigantamaxFactorAllowedSpecies[GIGANTAMAX_ALLOWED_SPECIES] = {
    SPECIES_VENUSAUR,
    SPECIES_BLASTOISE,
    SPECIES_CHARIZARD,
    SPECIES_BUTTERFREE,
    SPECIES_PIKACHU,
    SPECIES_MEOWTH,
    SPECIES_MACHAMP,
    SPECIES_GENGAR,
    SPECIES_KINGLER,
    SPECIES_LAPRAS,
    SPECIES_EEVEE,
    SPECIES_SNORLAX,
    SPECIES_GARBODOR,
    SPECIES_MELMETAL,
    SPECIES_RILLABOOM,
    SPECIES_CINDERACE,
    SPECIES_INTELEON,
    SPECIES_CORVIKNIGHT,
    SPECIES_ORBEETLE,
    SPECIES_DREDNAW,
    SPECIES_COALOSSAL,
    SPECIES_FLAPPLE,
    SPECIES_APPLETUN,
    SPECIES_SANDACONDA,
    SPECIES_TOXTRICITY_AMPED,
    SPECIES_TOXTRICITY_LOW_KEY,
    SPECIES_CENTISKORCH,
    SPECIES_HATTERENE,
    SPECIES_GRIMMSNARL,
    SPECIES_ALCREMIE,
    SPECIES_COPPERAJAH,
    SPECIES_DURALUDON,
    SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    SPECIES_URSHIFU_RAPID_STRIKE_STYLE,
};

void ToggleGigantamaxFactor(struct ScriptContext *ctx)
{
    u32 i;
    u32 partyIndex = VarGet(ScriptReadHalfword(ctx));
    u32 species;

    gSpecialVar_Result = FALSE;

    if (partyIndex < PARTY_SIZE)
    {
        bool32 gigantamaxFactor;
        bool32 canGigantamax = FALSE;

        species = GetMonData(&gPlayerParty[partyIndex], MON_DATA_SPECIES);
        for (i = 0; i < GIGANTAMAX_ALLOWED_SPECIES; i++)
        {
            if (species == sGigantamaxFactorAllowedSpecies[i]) {
                canGigantamax = TRUE;
                break;
            }
        }

        // Gigantamax-enabled species
        if (canGigantamax) {
            gigantamaxFactor = GetMonData(&gPlayerParty[partyIndex], MON_DATA_GIGANTAMAX_FACTOR);
            gigantamaxFactor = !gigantamaxFactor;
            SetMonData(&gPlayerParty[partyIndex], MON_DATA_GIGANTAMAX_FACTOR, &gigantamaxFactor);
            gSpecialVar_Result = TRUE;
        }
    }
}
