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


def create_folders(items: list, folder_name: str, subfolder_name: str):

    # Soft copy
    new_items = items

    has_folder = False
    for folder in items:
        if folder["action"] == folder_name:
            has_folder = True
            break

    if has_folder:  # Folder already exists
        for subfolder in folder:
            if subfolder["action"] == subfolder_name:
                has_subfolder = True
                break

        # Subfolder not found
        if has_subfolder == False:
            # Add the subfolder to the folder
            folder.append({"name": subfolder_name, "action": []})

    else:  # Folder not found
        # Create new folder with desired subfolder
        new_items.append(
            {"name": folder_name, "action": [{"name": subfolder_name, "action": []}]}
        )

    # Return updated list
    return new_items


def insert_team(items: list, file_name: str, file_data: dict):

    def get_givemon_team(team_data: dict):

        # Empty list
        givemon_list = []

        # Add each set
        for set in team_data:
            givemon_list.append(givemon.get_givemon_str(set))

        # Add final goto
        givemon_list.append("goto(Common_Eventscript_Sample_Team_CheckPurchase)")

        # Return joined list
        return ";".join(givemon_list)

    # Split the file name to get the folder/subfolder/team names
    folder_name, subfolder_name, team_name = file_name.split("_")

    # Insert folder / subfolder (if required)
    new_items = create_folders(items, folder_name, subfolder_name)

    # Loop over the folders
    for i in range(len(new_items)):
        folder = new_items[i]
        if folder["name"] == folder_name:  # Correct folder
            for j in range(len(folder["action"])):
                subfolder = folder["action"][j]
                if subfolder["name"] == subfolder_name:  # Correct subfolder

                    # Append team to samples
                    subfolder["action"].append(
                        {
                            "name": team_name,
                            "action": get_givemon_team(
                                file_data
                            ),  # Givemon string for whole team
                        }
                    )

                    break  # End loop

            break  # End loop

    # Return updated list
    return new_items


def insert_sets(items: list, file_name: str, file_data: dict):

    def get_givemon_set(set_data: dict):
        return f"{givemon.get_givemon_str(set_data)};goto(Common_Eventscript_Sample_Sets_CheckPurchase)"

    # Split the file name to get the folder/subfolder
    folder_name, subfolder_name = file_name.split("_")

    # Insert folder / subfolder (if required)
    new_items = create_folders(items, folder_name, subfolder_name)

    # Loop over the folders
    for i in range(len(new_items)):
        folder = new_items[i]
        if folder["name"] == folder_name:  # Correct folder
            for j in range(len(folder["action"])):
                subfolder = folder["action"][j]
                if subfolder["name"] == subfolder_name:  # Correct subfolder

                    # Loop over the sets
                    for set in file_data:

                        # Lower-case Species Name
                        name = set["species"].lower()

                        # Append set to samples list
                        subfolder["action"].append(
                            {"name": f"{name}", "action": get_givemon_set(set)}
                        )

                    break  # End loop

            break  # End loop

    # Return updated list
    return new_items


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

            # Loop over the sets
            # for set in sets:
            # print(givemon.get_givemon_str(set))

            # print(create_folders(sample_sets, "standard", "mega"))

            # Treat as entire team
            if extension == "team":
                sample_teams = insert_team(sample_teams, no_extension, sets)

            # Treat as sample sets
            elif extension == "set":
                sample_sets = insert_sets(sample_sets, no_extension, sets)

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
        json.dump(sample_teams, f)

    # Create Sets Outfile
    sets_out = os.path.join(
        OUTPUT_DIRECTORY, 
        SETS_OUTFILE
    )

    # Dump sample sets to file
    with open(sets_out, "w+", encoding="utf8") as f:
        # Dump sample sets to file
        json.dump(sample_sets, f)
