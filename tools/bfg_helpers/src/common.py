import unicodedata

from datetime import datetime

import src.data as data

CONFIG_FILE = "./include/config/battle_frontier_generator.h"

# Species filename, for retrieving species constants
SPECIES_FILE = "./include/constants/species.h"


def get_species_constants():

    # List of species
    species = []

    # Open the species list filename
    with open(SPECIES_FILE) as f:
        lines = f.readlines()

        # Loop over the lines
        for line in lines:
            if line.startswith("#define"):
                contents = line[8:].split(" ")

                # Key (e.g. SPECIES_BULBASAUR)
                key = contents[0].strip()

                # Add species to list
                species.append(key)

    # Return species table
    return species


def remove_accented_chars(text):
    normalized_text = unicodedata.normalize('NFKD', text)
    ascii_text = normalized_text.encode('ascii', 'ignore').decode('utf-8')
    return ascii_text


def get_timestamp(time=datetime.now()):
    return time.strftime("%d-%m-%y %H:%M:%S")


def pory_format(string, delim="_"):

    # Update formatting
    pory_str = string.replace("_", " ").replace("-", " ")
    pory_str = pory_str.replace("'", " ").replace(":", " ")

    # Remove Brackets
    pory_str = pory_str.replace("(", "").replace(")", "")
    pory_str = pory_str.replace("[", "").replace("]", "")
    pory_str = pory_str.replace("{", "").replace("}", "")

    # Remove accented characters
    pory_str = remove_accented_chars(pory_str)

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
    constant = constant.replace("’", "").replace(":", "")
    constant = constant.replace("%", "").replace(".", "")

    # Remove accented characters
    constant = remove_accented_chars(constant)

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

    # Return the constant string
    return f"SPECIES_{constant}"


def get_species_id(species_name):

    # Convert species name to lower case
    constant = species_name.lower()

    # Remove accented characters
    constant = remove_accented_chars(constant)

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


def insert_data(data, path, value):

    # Depth not reached
    if len(path) > 0:

        # Get the first item from the path
        key = path.pop(0)

        # Key is found
        has_key = False

        # Loop over the data items
        for i in range(len(data)):

            # Matching key found
            if data[i]["name"] == key:

                # Get the type of the action
                action_type = type(data[i]["action"])

                # Further nesting, and action is list
                if action_type == list and len(path) > 0:
                    insert_data(data[i]["action"], path, value)

                # No further nesting, and data is string
                elif action_type == str and len(path) == 0:
                    data[i]["action"] = value  # Update the value

                else:  # Data type mismatch
                    raise TypeError(
                        f"Data type mismatch: {str(action_type)} at key '{key}'"
                    )

                has_key = True
                break  # Break the loop

        # Key is not found
        if has_key == False:

            # Key type
            action_type = str
            if len(path) > 0:
                action_type = list

            # Insertion index
            index = -1  # Back of list

            # Loop over all of the keys
            for i in range(len(data)):

                # Get the action type for the index
                index_type = type(data[i]["action"])

                # Current action is a list (and the other is not), or earlier in alphabet
                if (action_type == list and action_type != index_type) or (
                    action_type == index_type and key < data[i]["name"]
                ):

                    # Update index
                    index = i
                    break

            # Max. Depth not reached
            if action_type == list:

                template = {"name": key, "action": []}

                # Index found
                if index >= 0:
                    data.insert(index, template)
                else:  # Insert key and continue
                    data.append(template)

                insert_data(data[index]["action"], path, value)

            else:  # Max. Depth reached

                template = {"name": key, "action": str(value)}

                # Index found
                if index >= 0:
                    data.insert(index, template)
                else:  # Insert key and continue
                    data.append(template)
