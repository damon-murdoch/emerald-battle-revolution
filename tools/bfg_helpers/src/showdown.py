# Global Imports
import json as JSON
import requests
import os

# Showdown API Data Directory
DATA_DIR = "./tools/bfg_helpers/data"

# Custom Move / Species Data Directory
CUSTOM_DIR = "./tools/bfg_helpers/custom"

def pull_move_data(moves_file):
    
    # Require requests module
    import requests

    # Download the file from the server, and save it to the data folder
    request = requests.get("https://play.pokemonshowdown.com/data/moves.json")

    # Get json data
    content = request.content

    # Load moves from json data
    moves = JSON.loads(content)

    with open(moves_file, "w+") as file:
        # Write json data to file
        JSON.dump(moves, file)

def pull_dex_data(dex_file):
    
    # Require requests module
    import requests

    # Download the file from the server, and save it to the data folder
    request = requests.get("https://play.pokemonshowdown.com/data/pokedex.json")

    # Get json data
    content = request.content

    # Load dex from json data
    dex = JSON.loads(content)

    with open(dex_file, "w+") as file:
        # Write json data to file
        JSON.dump(dex, file)

def get_custom_data():

    # Create the custom directory
    os.makedirs(CUSTOM_DIR, exist_ok=True)

    # Moves data
    moves = {}

    # Moves filename
    moves_file = os.path.join(CUSTOM_DIR, "moves.json")

    # Source moves file is not present
    if not os.path.exists(moves_file):
        JSON.dump(moves, moves_file) # Create placeholder file

    with open(moves_file, "r") as file:
        # Read json data from file
        moves = JSON.load(file)
    
    # Pokedex data
    dex = {}

    # Pokedex filename
    dex_file = os.path.join(CUSTOM_DIR, "pokedex.json")

    # Source dex file is not present
    if not os.path.exists(dex_file):
        JSON.dump(dex, dex_file) # Create placeholder file

    with open(dex_file, "r") as file:
        # Read json data from file
        dex = JSON.load(file)

    # Return custom data
    return moves, dex

def get_showdown_data(force=False):

    # Create the data directory
    os.makedirs(DATA_DIR, exist_ok=True)

    # Moves Data
    moves = {}

    # Moves Filename
    moves_file = os.path.join(DATA_DIR, "moves.json")

    # Force switch set, or moves file not present
    if force or not os.path.exists(moves_file):
        pull_move_data(moves_file)

    with open(moves_file, "r") as file:
        # Read json data from file
        moves = JSON.load(file)

    # Pokedex data
    dex = {}

    # Pokedex Filename
    dex_file = os.path.join(DATA_DIR, "pokedex.json")

    # Force switch set, or dex file not present
    if force or not os.path.exists(dex_file):
        pull_dex_data(dex_file)
    with open(dex_file, "r") as file:
        # Read json data from file
        dex = JSON.load(file)

    # Get custom data
    custom_moves, custom_dex = get_custom_data()

    # Add (or replace) custom moves
    for move_name in custom_moves:
        moves[move_name] = custom_moves[move_name]

    # Add (or replace) custom Pokemon
    for dex_name in custom_dex:
        dex[dex_name] = custom_dex[dex_name]

    # Return data
    return moves, dex
