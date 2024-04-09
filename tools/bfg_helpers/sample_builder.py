# Give-Mon String Generator
import src.givemon as givemon

# Common Library
import src.common as common

# Showdown Format Parsing Library
import src.parser as parser

# Built-in Libraries
import os, json

# Input File Folders
# .set files will be treated as individual sets
# .team files will be treated as an entire team
INPUT_FOLDER = "tools/bfg_helpers/sample"

# Output Directory
OUTPUT_DIRECTORY = "tools/bfg_helpers/select"

# Output File Names
SETS_OUTFILE = "sample_sets.json"
TEAMS_OUTFILE = "sample_teams.json"

# Goto Purchase Jump Scripts
SETS_GOTO = "goto(Common_EventScript_Sample_Sets_CheckPurchase)"
TEAMS_GOTO = "goto(Common_EventScript_Sample_Team_CheckPurchase)"


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
                    data[i]["action"] = value # Update the value

                else: # Data type mismatch
                    raise TypeError(f"Data type mismatch: {str(action_type)} at key '{key}'")

                has_key = True
                break # Break the loop

        # Key is not found
        if has_key == False:

            # Max. Depth not reached
            if len(path) > 0:
                # Insert key and continue
                data.append({"name": key, "action": []})
                insert_data(data[-1]["action"], path, value)
            else: # Max. Depth reached
                data.append({"name": key, "action": str(value)}) # Insert value


    
if __name__ == "__main__":

    # Sets dict
    sample_sets = []

    # Teams dict
    sample_teams = []

    # Get list of input files
    files = os.listdir(INPUT_FOLDER)

    # Loop over the files
    for file_name in files:

        # File Name Format:
        # [folder]_[subfolder]_[name].[team/set]
        # e.g.
        # standard_mega_gardevoir.team

        # Split filename, extension from file info
        no_extension, extension = file_name.split(".")

        # Combine the file path for the input file
        file_path = os.path.join(INPUT_FOLDER, file_name)

        # Open the file contents
        with open(file_path, "r") as file:

            # Read the raw file
            raw = file.read()

            # Parse the showdown data
            sets = parser.parse_sets(raw)

            # Split the names on the under score
            names = no_extension.split('_')

            # Treat as entire team
            if extension == "team":

                # Givemon string array
                givemon_list = []

                # Loop over the sets
                for set in sets:

                    # Generate the givemon string and add it to the list
                    givemon_list.append(givemon.get_givemon_str(set))

                # Combine the givemon string (Including team goto jump)
                givemon_str = f"{';'.join(givemon_list)};{TEAMS_GOTO}"

                # Add the sample team to the table
                insert_data(sample_teams, names, givemon_str)   

            # Treat as sample sets
            elif extension == "set":

                # Loop over the sets
                for set in sets:

                    # Add species to names
                    full_names = list(names)

                    # Get the species name
                    name = set["species"]

                    # Check species for note property
                    if "note" in set["other"]:
                        # Add the 'note' to the set name
                        name = f"{name} ({set['other']['note']})"

                    # Add name to names list
                    full_names.append(name)

                    # Generate the givemon string (Including sets goto jump)
                    givemon_str = f"{givemon.get_givemon_str(set)};{SETS_GOTO}"

                    insert_data(sample_sets, full_names, givemon_str)

            else:  # Unhandled extension
                raise Exception(
                    f"Unhandled file extension {extension}! Accepted: .set, .team ..."
                )
            
    # Create output directory (if not exists)
    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)

    # Create Teams Outfile
    teams_out = os.path.join(
        OUTPUT_DIRECTORY, 
        TEAMS_OUTFILE
    )

    # Dump sample teams to file
    with open(teams_out, "w+", encoding="utf8") as f:
        # Dump sample teams to file
        json.dump(sample_teams, f, indent=2)

    # Create Sets Outfile
    sets_out = os.path.join(
        OUTPUT_DIRECTORY, 
        SETS_OUTFILE
    )

    # Dump sample sets to file
    with open(sets_out, "w+", encoding="utf8") as f:
        # Dump sample sets to file
        json.dump(sample_sets, f, indent=2)
