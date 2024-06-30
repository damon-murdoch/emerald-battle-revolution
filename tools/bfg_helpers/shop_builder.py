# Showdown Data
import src.showdown as showdown

# Common Library
import src.common as common

# Data Files
import src.data as data

# Built-in Libraries
import os, json

LEGENDARY_TAGS = [
    "Restricted Legendary",
    "Sub-Legendary",
    "Mythical",
]

LEGENDARY_LEVELS = {
    "Restricted Legendary": 1,
    "Sub-Legendary": 1,
    "Mythical": 1,
}

# Output Directory
OUTPUT_DIRECTORY = "tools/bfg_helpers/select"

# Ignore Pokedex Num. Below 1
IGNORE_SPECIAL = True

# Output File Names
POKEMON_OUTFILE = "pokemon_shop.json"
LEGENDARY_OUTFILE = "legendary_shop.json"

# Goto Purchase Jump Scripts
POKEMON_GOTO = "goto(Common_EventScript_Pokemon_Shop_CheckPurchase)"
LEGENDARY_GOTO = "goto(Common_EventScript_Legendary_Shop_CheckPurchase)"

if __name__ == "__main__":

    # Pokemon lists
    pokemon_shop = []
    legendary_shop = []

    # Get showdown data files
    MOVES, POKEMON = showdown.get_showdown_data()

    # List of valid Pokemon
    # Excludes alt. Formes, etc.
    pokemon = []

    # Loop over species ids
    for speciesId in POKEMON:
        species = POKEMON[speciesId]

        if speciesId in data.IGNORE_SPECIES:
            continue  # Skip ignored species

        if IGNORE_SPECIAL and species["num"] < 1:
            continue  # Skip special Pokemon

        # Base forme for species
        if "baseSpecies" in species:
            if "forme" in species:
                forme = species["forme"]
                if not (
                    (forme == "Alola" and speciesId != "pikachualola")
                    or forme == "Galar"
                    or forme == "Hisui"
                    or forme == "Paldea"
                ):
                    continue  # Skip non-regional variants

        # Add species id to list
        pokemon.append(speciesId)

    # Loop over species
    for speciesId in pokemon:

        # Get the species data
        species = POKEMON[speciesId]

        # Get the species name
        name = common.remove_accented_chars(species["name"])

        # Species has no pre-evolution
        if "prevo" not in species:

            level = 1
            is_legendary = False

            # Tags in species list
            if "tags" in species:

                # Species has legend tag
                for tag in LEGENDARY_TAGS:
                    if tag in species["tags"]:
                        level = LEGENDARY_LEVELS[tag]
                        is_legendary = True
                        break

            # Get the species constant
            constant = common.get_species_constant(name)

            # Generate givemon string
            givemon_str = f"givemon({constant},{level})"

            # Loop over all types
            for type in species["types"]:

                # Species first character
                path = [type, name]

                if is_legendary:  # Add to legendary list
                    common.insert_data(
                        legendary_shop, path, f"{givemon_str};{LEGENDARY_GOTO}"
                    )
                else:  # Add to standard list
                    common.insert_data(
                        pokemon_shop, path, f"{givemon_str};{POKEMON_GOTO}"
                    )

    # Create output directory (if not exists)
    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)

    # Create Teams Outfile
    pokemon_out = os.path.join(OUTPUT_DIRECTORY, POKEMON_OUTFILE)

    # Dump sample teams to file
    with open(pokemon_out, "w+", encoding="utf8") as f:
        # Dump sample teams to file
        json.dump(pokemon_shop, f, indent=2)

    # Create Sets Outfile
    legendary_out = os.path.join(OUTPUT_DIRECTORY, LEGENDARY_OUTFILE)

    # Dump sample sets to file
    with open(legendary_out, "w+", encoding="utf8") as f:
        # Dump sample sets to file
        json.dump(legendary_shop, f, indent=2)
