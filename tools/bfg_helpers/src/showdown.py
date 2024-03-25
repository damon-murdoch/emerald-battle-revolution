# Global Imports
import json as JSON
import requests
import os

DATA_DIR = "showdown_data"

def get_showdown_data(force=False):

    # Moves Data
    moves = {}

    # Create the data directory
    os.makedirs(DATA_DIR, exist_ok=True)

    # Moves Filename
    moves_file = os.path.join(DATA_DIR, "moves.json")

    # Force switch set, or moves file not present
    if force or not os.path.exists(moves_file):
        # Download the file from the server, and save it to the data folder
        request = requests.get("https://play.pokemonshowdown.com/data/moves.json")

        # Get json data
        content = request.content

        # Load moves from json data
        moves = JSON.loads(content)

        with open(moves_file, "w+") as file:
            # Write json data to file
            JSON.dump(moves, file)

    else:  # File already exists
        with open(moves_file, "r") as file:
            # Read json data from file
            moves = JSON.load(file)

    # Pokedex data
    dex = {}

    # Pokedex Filename
    dex_file = os.path.join(DATA_DIR, "pokedex.json")

    # Force switch set, or dex file not present
    if force or not os.path.exists(dex_file):
        # Download the file from the server, and save it to the data folder
        request = requests.get("https://play.pokemonshowdown.com/data/pokedex.json")

        # Get json data
        content = request.content

        # Load dex from json data
        dex = JSON.loads(content)

        with open(dex_file, "w+") as file:
            # Write json data to file
            JSON.dump(dex, file)

    else:  # File already exists
        with open(dex_file, "r") as file:
            # Read json data from file
            dex = JSON.load(file)

    # Return data
    return moves, dex
