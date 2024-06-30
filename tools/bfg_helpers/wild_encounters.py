# Showdown Data
import src.showdown as showdown

# Common Library
import src.common as common

# Data Files
import src.data as data

# Built-in libs
import json as JSON
import random
import os
import re

# Excluded Maps
# e.g. MAP_ALTERING_CAVE
EXCLUDE_MAPS = [
    "MAP_ARTISAN_CAVE_B1F",
    "MAP_ARTISAN_CAVE_1F",
    "MAP_ALTERING_CAVE"
]

# Excluded Labels
# e.g. gAlteringCave7
EXCLUDE_LABELS = [
    "gCaveOfOrigin_UnusedRubySapphireMap1",
    "gCaveOfOrigin_UnusedRubySapphireMap2",
    "gCaveOfOrigin_UnusedRubySapphireMap3",
]

# Ignore Pokedex Num. Below 1
IGNORE_SPECIAL = True

# Ignore Legends/Mythicals
IGNORE_MYTHICAL = True
IGNORE_LEGEND = True

# Ignore Species List
IGNORE_SPECIES = [
    # Paradoxes
    "greattusk",
    "screamtail",
    "brutebonnet",
    "fluttermane",
    "slitherwing",
    "sandyshocks",
    "irontreads",
    "ironbundle",
    "ironhands",
    "ironjugulis",
    "ironmoth",
    "ironthorns",
    "roaringmoon",
    "ironvaliant",
    "walkingwake", 
    "ironleaves", 
    "gougingfire",
    "ragingbolt",
    "ironboulder",
    "ironcrown",
    # Others
]

# Output folder
OUT_FOLDER = "src/data/"

# Output filename
OUT_FILENAME = "wild_encounters.json"

# Default file, if no arguments provided
IN_FILENAME = 'tools/bfg_helpers/data/wild_encounters.json'


def land_mons_filter(species: object):
    # Get the species types
    types = species["types"]
    for type in types:
        if type != "Water": 
            return True # No mono-water
    return False


def water_mons_filter(species: object):
    # Get the species types
    types = species["types"]
    for type in types:
        if type in ["Water", "Flying"]:
            return True # Water/Flying ok
    return False


def fishing_mons_filter(species: object):
    # Get the species types
    types = species["types"]
    for type in types:
        if type in ["Water"]:
            return True # Water ok
    return False


def rock_smash_mons_filter(species: object):
    # Get the species types
    types = species["types"]
    for type in types:
        if type in ["Rock", "Ground", "Steel"]:
            return True # Rock/Ground/Steel ok
    return False


# Spawn Area Functions
SPAWN_TABLE_FILTERS = {
    "land_mons": land_mons_filter,
    "water_mons": water_mons_filter,
    "fishing_mons": fishing_mons_filter,
    "rock_smash_mons": rock_smash_mons_filter,
}

# List of valid field types
FIELD_TYPES = SPAWN_TABLE_FILTERS.keys()


def get_species_list(pokedex: object):

    # List of valid Pokemon
    # Excludes alt. Formes, etc.
    pokemon = []

    # Loop over species ids
    for speciesId in pokedex:
        species = pokedex[speciesId]

        if speciesId in IGNORE_SPECIES:
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

        # Species has tags
        if "tags" in species:
            # If the species is tagged as either a restricted legendary or a sub-legendary pokemon
            if IGNORE_LEGEND and common.is_tagged(species, "Restricted Legendary") or common.is_tagged(species, "Sub-Legendary"):
                continue  # No evolved pokemon

            # If the species is tagged as a mythical pokemon
            if IGNORE_MYTHICAL and common.is_tagged(species, "Mythical"):
                continue  # No evolved pokemon

        if "prevo" in species:
            continue  # No evolved pokemon

        # Add species id to list
        pokemon.append(speciesId)

    return pokemon


def get_species_table(species_list: list, pokedex: object):

    # Spawn Tables Dict
    spawn_tables = {}

    # Loop over the species
    for speciesId in species_list:

        # Get the data for the species
        species = pokedex[speciesId]

        # Generate the constant for the species
        constant = common.get_species_constant(species["name"])

        # Loop over the spawn table filters
        for spawn_area in SPAWN_TABLE_FILTERS:

            # If the species is valid for the spawn area
            if SPAWN_TABLE_FILTERS[spawn_area](species):

                # Spawn area not in spawn table
                if spawn_area not in spawn_tables:

                    # Add array to the spawn tables
                    spawn_tables[spawn_area] = [{
                        "indexes": [],
                        "species": []
                    }]

                # Add the species constant to the spawn tables
                spawn_tables[spawn_area][0]["species"].append(constant)

    # Return spawn tables
    return spawn_tables


if __name__ == '__main__':

    """
    # Before all else, abort if the config is off
    with open(common.CONFIG_FILE, "r") as file:
        rating_config = re.findall("BFG_GENERATE_WILD_ENCOUNTERS *([^ ]*)", file.read())
        if len(rating_config) != 1:
            quit()
        if rating_config[0] != "TRUE":
            quit() 
    """

    # Get showdown data files
    MOVES, POKEMON = showdown.get_showdown_data()

    # Get the list of valid species
    species_list = get_species_list(POKEMON)

    # Get the species table for the Pokemon
    ENCOUNTER_SPECIES = get_species_table(species_list, POKEMON)

    # Open the argument provided
    with open(IN_FILENAME, "r") as file:

        # Raw file contents
        raw = ''.join(file.readlines())

        # Read json data from file
        json = JSON.loads(raw)

        # Loop over all of the wild encounter groups
        for group in json['wild_encounter_groups']:

            label = group["label"]

            # Fields are in group
            if 'fields' in group:

                fields = group["fields"]

                wild_encounter_fields = {}

                print(f"Processing label wild encounter group '{label}' ...")

                # Last seen map
                last_map = None

                # Loop over the encounter tables in the group
                for encounters in group["encounters"]:

                    area_map = encounters['map']
                    area_label = encounters['base_label']

                    # If the map is not excluded, via either map name or label
                    if (not area_map in EXCLUDE_MAPS) and (not area_label in EXCLUDE_LABELS):

                        print(
                            f"Processing encounter table for map '{area_map}' [{area_label}] ...")

                        # Loop over the encounter types
                        for field in fields:
                            field_type = field['type']

                            # If the field type is not in the wild encounters
                            if field_type not in wild_encounter_fields:
                                wild_encounter_fields[field_type] = []

                            # Exclude any fields in the config, and the map has the encounter type
                            if (field_type in FIELD_TYPES) and field_type in encounters:
                                print(
                                    f"Processing encounter type '{field_type}' ...")

                                # Dereference encounter rates / size
                                field_rates = field["encounter_rates"]
                                field_size = len(field_rates)

                                # Get the field encounters for the type
                                field_encounters = encounters[field_type]

                                # Order species inserted
                                field_order = []

                                # Field encounter table
                                field_table = {}

                                # Min/Max level per whole area
                                field_min_level = 100
                                field_max_level = 0

                                # Loop over the field encounters
                                for mon in field_encounters["mons"]:

                                    # Dereference mon fields
                                    min_level = mon["min_level"]
                                    max_level = mon["max_level"]
                                    species = mon["species"]

                                    if field_min_level > min_level:
                                        field_min_level = min_level
                                    if field_max_level < max_level:
                                        field_max_level = max_level

                                    # Species already in table
                                    if species in field_table:
                                        # Update the minimum level, if the new level is lower
                                        if field_table[species]["min_level"] > min_level:
                                            field_table[species]["min_level"] = min_level
                                        # Update the maximum level, if the new level is higher
                                        if field_table[species]["max_level"] < max_level:
                                            field_table[species]["max_level"] = max_level
                                    else:  # Species not in table
                                        field_table[species] = {
                                            "min_level": min_level, "max_level": max_level}
                                        field_order.append(species)

                                # New mons array
                                new_mons = []

                                # Loop over species order
                                for species in field_order:

                                    # Get the field table data for the mon
                                    mon = field_table[species]

                                    # Add the mon to the list
                                    new_mons.append({
                                        "species": species,
                                        "min_level": mon["min_level"],
                                        "max_level": mon["max_level"]
                                    })

                                # Get the number of remaining slots
                                remainder = field_size - len(field_order)

                                print(
                                    f"Remaining slots: {remainder} ({field_size} - {len(field_order)}) ...")

                                # If the field type has encounters provided
                                if field_type in ENCOUNTER_SPECIES:

                                    # List of species already added
                                    # for THIS SPECIFIC FIELD
                                    already_added = []

                                    # Index for the new species
                                    index = len(field_order)

                                    # Loop over remaining slots
                                    for i in range(remainder):

                                        new_species = "SPECIES_NONE"

                                        # Loop over the encounter sets in the field type
                                        for encounter_sets in ENCOUNTER_SPECIES[field_type]:

                                            # Get the indexes, species from the encounters
                                            encounter_indexes = encounter_sets["indexes"]
                                            encounter_species = encounter_sets["species"]

                                            # No specific indexes, or index is not in the allowed list
                                            if (len(encounter_indexes) == 0) or (index in encounter_indexes):

                                                # At least one species in the encounter set
                                                if len(encounter_species) > 0:

                                                    # Filter out all of the elements which are already in the field encounters list
                                                    options = list(
                                                        filter(lambda x: x not in wild_encounter_fields[field_type], encounter_species))

                                                    # No options left
                                                    if len(options) == 0:
                                                        # Use the whole array instead
                                                        options = encounter_species

                                                    # Filter the already-used (for this field) members from the array
                                                    options = list(
                                                        filter(lambda x: x not in already_added, options))

                                                    # At least one option
                                                    if len(options) > 0:
                                                        # Sample a random option from the list
                                                        new_species = random.choice(
                                                            options)

                                                # New species is not SPECIES_NONE
                                                if not new_species == "SPECIES_NONE":

                                                    # Add species to already_added
                                                    already_added.append(
                                                        new_species)

                                                    # Add the species to the list of present species
                                                    if new_species not in wild_encounter_fields[field_type]:
                                                        wild_encounter_fields[field_type].append(
                                                            new_species)

                                                    new_mons.append({
                                                        "species": new_species,
                                                        "min_level": field_min_level,
                                                        "max_level": field_max_level,
                                                    })

                                                # Species retrieved
                                                break

                                        # Increment index
                                        index += 1

                                else:
                                    # Loop over remaining slots
                                    for i in range(remainder):
                                        new_mons.append({
                                            "species": "SPECIES_NONE",
                                            "min_level": field_min_level,
                                            "max_level": field_max_level,
                                        })

                                    print(
                                        f"Please note, these will need to be replaced manually.")

                                # Update the mons list for the field
                                field_encounters["mons"] = new_mons

                        # Update last map
                        last_map = area_map

                    else:  # Map / Label is excluded
                        print(
                            f"Encounter table excluded for map '{area_map}' [{area_label}] ...")

            else:  # No fields in group

                print(f"No fields in group '{label}', skipping ...")

        if not os.path.exists(OUT_FOLDER):
            # If it doesn't exist, create the folder
            os.makedirs(OUT_FOLDER)

        # Combine output filepath
        outpath = os.path.join(OUT_FOLDER, OUT_FILENAME)

        # Open the output file with write access
        with open(outpath, "w+") as out_file:

            # Dump the JSON content to the file
            out_file.write(JSON.dumps(json, indent=2))
