# Showdown Data
import src.showdown as showdown

# Common Library
import src.common as common

# Built-in Libraries
import os, json, random

# Input File Folder
INPUT_FOLDER = "in/givemon"

OUTPUT_DIRECTORY = "out"
OUTPUT_FILENAME = "givemon_from_json.pory"

# Ball given to all pokemon
DEFAULT_POKEBALL = "ITEM_PARK_BALL"

STATS = ["hp", "atk", "def", "spa", "spd", "spe"]

# Multi-Form Mega Evolutions
MULTI_FORM_MEGAS = [
    "SPECIES_CHARIZARD_MEGA_X",
    "SPECIES_CHARIZARD_MEGA_Y",
    "SPECIES_MEWTWO_MEGA_X",
    "SPECIES_MEWTWO_MEGA_Y",
]

# Other args (last 3, follow same format)
OTHER_ARGS = ["shiny", "gigantamax", "tera type"]

# Get showdown data files
MOVES, POKEMON = showdown.get_showdown_data()


def get_givemon_str(pokemon):

    # Gmax value override
    force_gmax = False

    # Get species name / id
    species = pokemon["species"]
    species_id = common.get_species_id(species)

    species_data = None
    if species_id in POKEMON:
        # Get species data from showdown
        species_data = POKEMON[species_id]
    else:  # If this fails, species cannot be found lol
        raise Exception(f"Data for species '{species}' ({species_id}) not found!")

    # Command args
    args = []

    # Other properties
    other = pokemon["other"]

    # Generate species constant
    species_constant = common.get_species_constant(species)

    # If species is 'Mega'
    if species_constant.endswith("_MEGA") or species_constant in MULTI_FORM_MEGAS:

        new_constant = species_constant.split("_MEGA")[0]
        print(
            f"Warning: Converting forme {species_constant} to base forme {new_constant} ..."
        )
        species_constant = new_constant  # Remove _MEGA_x from string

    # If species is 'Gmax'
    if species_constant.endswith("_GMAX"):

        new_constant = species_constant.replace("_GMAX", "")
        print(
            f"Warning: Converting forme {species_constant} to base forme {new_constant} ..."
        )
        species_constant = new_constant  # Remove _GMAX from string

        force_gmax = True  # Override gmax value

    # Species
    args.append(species_constant)

    # Level
    if "level" in other:
        args.append(other["level"])
    else:
        args.append("100")

    # Held Item
    if "item" in pokemon:
        args.append(f"ITEM_{common.get_constant(pokemon['item'])}")
    else:
        args.append(f"ITEM_NONE")

    # Pokeball
    args.append(DEFAULT_POKEBALL)

    # Nature
    if "nature" in pokemon and pokemon["nature"] != "":
        args.append(f"NATURE_{common.get_constant(pokemon['nature'])}")
    else:
        args.append(f"NATURE_HARDY")

    # Ability Number
    if "ability" in pokemon:
        ability = pokemon["ability"]

        ability_num = 0
        found = False

        # Loop over all of the abilities
        for ability_index in species_data["abilities"]:
            ability_name = species_data["abilities"][ability_index]

            # Required ability matched
            if ability == ability_name:
                args.append(str(ability_num))
                found = True
                break

            # Increment ability counter
            ability_num += 1

        # No matching ability found
        if found == False:
            print(
                f"Warning: Invalid ability for species: '{ability}', using default ability ..."
            )
            args.append(str(0))  # First ability
    else:
        # Generate random number within the range of possible abilities
        args.append(random.randint(0, len(species_data["abilities"]) - 1))

    # Gender is provided, and gender is not empty
    if "gender" in pokemon and pokemon["gender"] != "":
        args.append(str(common.parse_gender(pokemon["gender"])))
    elif "gender" in species_data:  # Fixed Gender
        args.append(str(common.parse_gender(species_data["gender"])))
    else:  # No fixed gender
        args.append(str(random.randint(0, 1)))

    # EVs
    evs = pokemon["evs"]
    for stat in STATS:
        if stat in evs:
            args.append(str(evs[stat]))
        else:
            args.append("0")

    # IVs
    ivs = pokemon["ivs"]
    for stat in STATS:
        if stat in ivs:
            args.append(str(ivs[stat]))
        else:
            args.append("31")

    # Moves
    moves = pokemon["moves"]
    move_count = 0
    for move in moves:
        if "hidden power" in move:  # Hidden Power Variant
            args.append("MOVE_HIDDEN_POWER")
        else:
            args.append(f"MOVE_{common.get_constant(move)}")
        move_count += 1

    # Pad extra moves until 4 slots
    for _ in range(move_count, 4):
        args.append("MOVE_NONE")

    # Other arguments
    for arg in OTHER_ARGS:
        # (GMAX Only) Gmax Switch Forced
        if arg == "gigantamax" and force_gmax:
            args.append("TRUE")
        else:  # General Case
            if arg in other and other[arg] == "Yes":
                args.append("TRUE")
            else:
                args.append("FALSE")

    # Return give-mon string
    return f"givemon({','.join(args)})"


if __name__ == "__main__":

    # Get list of input files
    files = os.listdir(INPUT_FOLDER)

    # Output String Contents
    output = [
        "# File Auto-Generated By pokeemerald-expansion-helper-scripts (get_givemon_from_json.py)",
        "# Repository Link: https://github.com/damon-murdoch/pokeemerald-expansion-helper-scripts",
        "",
    ]

    # Loop over the files
    for file_name in files:

        # Combine the file path for the input file
        file_path = os.path.join(INPUT_FOLDER, file_name)

        with open(file_path, "r") as file:
            content = json.load(file)

            # Add source to output
            output.append(f"# Source: {file_name}")

            # Loop over the species
            for pokemon in content:

                # Add the givemon command to the output
                output.append(get_givemon_str(pokemon))

            # Add seperator to output
            output.append("")

    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
    outpath = os.path.join(OUTPUT_DIRECTORY, OUTPUT_FILENAME)

    print(f"Writing results to file '{outpath}' ...")

    with open(outpath, "w+", encoding="utf8") as f:
        f.write("\n".join(output))

    print("Results saved successfully!")
