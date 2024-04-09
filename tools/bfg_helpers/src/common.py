from datetime import datetime

import src.data as data

CONFIG_FILE = "./include/config/battle_frontier_generator.h"


def get_timestamp(time=datetime.now()):
    return time.strftime("%d-%m-%y %H:%M:%S")


def pory_format(string, delim="_"):

    # Update formatting
    pory_str = string.replace("_", " ").replace("-", " ")
    pory_str = pory_str.replace("'", " ").replace(":", " ")

    # Remove Brackets
    pory_str = pory_str.replace("(", "").replace(")", "")
    pory_str = pory_str.replace("[", "").replace("]", "")
    pory_str = pory_str.replace("}", "").replace("}", "")

    # Split the string on the spaces
    split = pory_str.split(" ")

    # Convert strings to upper case
    for i in range(len(split)):
        split[i] = split[i].capitalize()

        # Special Case: 'EventScript'
        if split[i] == "Eventscript":
            split[i] = "EventScript"

    # Return rejoined string
    return delim.join(split)


def convert_const_to_camel(const):
    parts = const.split("_")
    return parts[0].lower() + "".join(word.capitalize() for word in parts[1:])


def get_constant(string):

    # Convert to upper case
    constant = string.upper()

    # Update formatting
    constant = constant.replace(" ", "_").replace("-", "_")
    constant = constant.replace("'", "").replace(":", "")

    # Replace Special Characters
    constant = (
        constant.replace("’", "").replace(":", "").replace("%", "").replace(".", "")
    )

    # If the constant has a replacement
    if constant in data.REPLACE_CONSTANT:
        return data.REPLACE_CONSTANT[constant]

    # Return as-is
    return constant


def get_species_constant(species_name):

    # Convert to generic constant
    constant = get_constant(species_name)

    # Update characers / constants
    constant = (
        constant.replace("É", "E")
        .replace("_ALOLA", "_ALOLAN")
        .replace("_GALAR", "_GALARIAN")
        .replace("_HISUI", "_HISUIAN")
        .replace("_PALDEA", "_PALDEAN")
    )

    # Generate the constant string
    constant = f"SPECIES_{constant}"

    # If the constant has a replacement
    if constant in data.REPLACE_CONSTANT:
        return data.REPLACE_CONSTANT[constant]

    # Return as-is
    return constant


def get_species_id(species_name):

    # Convert species name to lower case
    constant = species_name.lower()

    # Update formatting
    return (
        constant.replace(" ", "")
        .replace("-", "")
        .replace("'", "")
        .replace(":", "")
        .replace("_", "")
    )


def parse_gender(gender_string):
    gender = gender_string.lower()
    if gender == "m" or gender == "n":  # Male
        return 0
    elif gender == "f":  # Female
        return 1


def is_tagged(species, tag):
    return "tags" in species and tag in species["tags"]


def is_forme(species, forme):
    return "forme" in species and species["forme"] == forme
