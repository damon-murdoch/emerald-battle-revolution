# Showdown Data
import src.showdown as showdown

# Showdown Format Parser
import src.parser as parser

# Common Library
import src.common as common

# Built-in libs
import math
import os
import re

# Input File Folders
# .set files will be treated as individual sets
# .team files will be treated as an entire team
INPUT_FOLDER = "tools/bfg_helpers/battle_spot"

# Output Files

# Generic mons (for spare slots)
OUTPUT_MONS = "src/data/battle_spot_mons.h"

# Trainer Details
OUTPUT_TRAINERS = "src/data/battle_spot_trainers.h"

# Pre-Constructed trainer mons (per user)
OUTPUT_TRAINER_MONS = "src/data/battle_spot_trainer_mons.h"

if __name__ == '__main__':

    output_mons = []
    output_trainers = []
    output_trainer_mons = []

    # Get list of input files
    files = os.listdir(INPUT_FOLDER)

    # Loop over the files
    for file_name in files:

        # File Name Format
        # [folder]_[subfolder]_[name]_[tier]_[rating].[team] OR
        # [folder]_[subfolder].[set]

        # Split filename, extension from file info
        no_extension, extension = file_name.split(".")

        # Combine the file path for the input file
        file_path = os.path.join(INPUT_FOLDER, file_name)

        # File headers (e.g. trainer class, etc.)
        # Headers follow the syntax .[key] = [value]
        headers = {}

"""
[FRONTIER_TRAINER_BRADY] = {
    .facilityClass = FACILITY_CLASS_YOUNGSTER,
    .trainerName = _("BRADY"),
    .speechBefore = {EC_WORD_I_AM, EC_WORD_NEVER, EC_WORD_GOING, EC_WORD_TO, EC_WORD_LOSE, EC_WORD_EXCL},
    .speechWin = {EC_WORD_I_AM, EC_WORD_STRONG, EC_WORD_AREN_T, EC_WORD_I, EC_WORD_QUES, EC_EMPTY_WORD},
    .speechLose = {EC_WORD_WHAT, EC_WORD_QUES, EC_EMPTY_WORD, EC_WORD_BUT, EC_WORD_HOW, EC_WORD_QUES},
    .monSet = gBattleFrontierTrainerMons_Brady
},
"""

        # Open the file contents
        with open(file_path, "r") as file:

            raw_lines = []
            lines = file.readlines()

            # Check for headers
            for line in lines:
                if line.startswith('.'):
                    key, value = line[1:].split("=")

                    # Strip whitespace
                    key = key.strip()
                    value = value.strip()

                    # Add k,v to headers
                    headers[key] = value
                else:
                    # Add the raw line with whitespace stripped
                    raw_lines.append(line.strip())

            # Read the raw file
            raw = "\n".join(raw_lines)

            # Parse the showdown data
            sets = parser.parse_sets(raw)

            # Split the names on the under score
            names = no_extension.split("_")

            # Treat as entire team
            if extension == "team":
                pass

            # Treat as sample sets
            elif extension == "sets":
                pass

            else:  # Unhandled extension
                raise Exception(
                    f"Unhandled file extension {extension}! Accepted: .sets, .team ..."
                )
