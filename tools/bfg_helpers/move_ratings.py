# Showdown Data
import src.showdown as showdown

# Common Library
import src.common as common

# Built-in libs
import math, os, re

OUTPUT_DIRECTORY = "src/data/battle_frontier"
OUTPUT_FILENAME = "battle_frontier_generator_move_ratings.h"

# Constants
MOVE_RATING_DEFAULT = 0
EFFECT_RATING_DEFAULT = 0

# Normalised value
# If this is set to 0, it will be ignored
MOVE_RATING_MAXIMUM = 0xFF

# Rating Modifiers
MOVE_ACCURACY_MODIFIER = 1.6

MOVE_PRIORITY_MIN = 0
MOVE_PRIORITY_MAX = 3
MOVE_PRIORITY_MODIFIER = 10
MOVE_CRIT_RATIO_MODIFIER = 10

SECONDARY_EFFECT_CHANCE_MODIFIER = 0.1
SECONDARY_EFFECT_BOOST_MODIFIER = 1  # Stat Boosts/Drops

# Status/Volatile Status Effect Modifiers
SECONDARY_EFFECT_STATUS_MODIFIERS = {
    # Status
    "psn": 1,
    "brn": 2,
    "frz": 2,
    "par": 2,
    "tox": 2,
    "slp": 2,
    # Volatile
    "flinch": 2,
    "confusion": 2,
    "healblock": 1,
    "saltcure": 2,
    "sparklingaria": 1,
    "syrupbomb": 1,
    # Negative
    "mustrecharge": -3,
    "glaiverush": 0,
    "lockedmove": -3,
    "rage": -5,
    "uproar": -5,
    # Default
    "default": 0,
}

# Move Flag Modifiers
MOVE_FLAG_EFFECT_MODIFIERS = {
    # Negative Flags
    "charge": -2,
    "recharge": -2,
    "cantusetwice": -2,
    "futuremove": -3,
    # Relevant Flags
    "heal": 2,
    "sound": 1,
    "defrost": 1,
    "bypasssub": 1,
    # Possibly Relevant Flags
    "gravity": 0,
    "contact": 0,
    "slicing": 0,
    "wind": 0,
    "nonsky": 0,
    "pulse": 0,
    "bullet": 0,
    "punch": 0,
    "distance": 0,
    "dance": 0,
    "bite": 0,
    "pledgecombo": 0,
    "reflectable": 0,
    # Irrelevant Flags
    "allyanim": 0,
    "protect": 0,
    "mirror": 0,
    "metronome": 0,
    "failencore": 0,
    "failmefirst": 0,
    "nosleeptalk": 0,
    "noassist": 0,
    "failcopycat": 0,
    "failmimic": 0,
    "failinstruct": 0,
    "noparentalbond": 0,
    "mustpressure": 0,
    # Default
    "default": 0,
}

MOVE_SECONDARY_MODIFIER = 1
MOVE_FLAG_MODIFIER = 10

MOVE_POWER_MODIFIER = 1


# Power Modifiers
MOVE_OHKO_POWER = 0x7F
MOVE_HALF_POWER = 0x3F

# Negative Effect Modifiers
MOVE_SELF_KO_MODIFIER = 0

# List of moves to exclude
MOVE_EXCLUSIONS = [
    # Other Games (??)
    "paleowave", 
    "shadowstrike", 
    # Alt. Hidden Power Types
    "hiddenpowerbug",
    "hiddenpowerdark",
    "hiddenpowerdragon",
    "hiddenpowerelectric",
    "hiddenpowerfighting",
    "hiddenpowerfire",
    "hiddenpowerflying",
    "hiddenpowerghost",
    "hiddenpowergrass",
    "hiddenpowerground",
    "hiddenpowerice",
    "hiddenpowerpoison",
    "hiddenpowerpsychic",
    "hiddenpowerrock",
    "hiddenpowersteel",
    "hiddenpowerwater"
]


def get_secondary_effect_rating(effect, self=False):

    effect_rating = EFFECT_RATING_DEFAULT
    if effect == None or effect == {}:
        return 0  # No effect

    chance = 100
    if chance in effect:
        chance = effect["chance"]

    if "self" in effect:
        self_effect = {"chance": chance}
        self_effect.update(effect["self"])
        return get_secondary_effect_rating(self_effect, self=True)

    if "boosts" in effect:
        for stat in effect["boosts"]:
            boost = effect["boosts"][stat]
            if self == False:
                boost = abs(boost)  # Ignore Positive/Negative
            effect_rating += math.floor(boost * SECONDARY_EFFECT_BOOST_MODIFIER)

    if "status" in effect:
        status = effect["status"]
        if status in SECONDARY_EFFECT_STATUS_MODIFIERS:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS[status]
        else:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS["default"]

    if "volatileStatus" in effect:
        volatile_status = effect["volatileStatus"]
        if volatile_status in SECONDARY_EFFECT_STATUS_MODIFIERS:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS[volatile_status]
        else:
            effect_rating += SECONDARY_EFFECT_STATUS_MODIFIERS["default"]

    effect_rating *= math.floor(chance * SECONDARY_EFFECT_CHANCE_MODIFIER)

    return effect_rating

# Main Process
if __name__ == "__main__":

    # Before all else, abort if the config is off
    with open(common.CONFIG_FILE, "r") as file:
        rating_config = re.findall("#define BFG_GENERATE_MOVE_RATINGS *([^ ]*)", file.read())
        if len(rating_config) != 1:
            quit()
        if rating_config[0] != "TRUE":
            quit() 

    # Get showdown data files
    MOVES, POKEMON = showdown.get_showdown_data()

    # Filtered moves
    moves = []

    # Loop over the moves
    for moveId in MOVES:

        # Check for duplicate moves or exclusions
        if moveId in MOVE_EXCLUSIONS or moveId in moves:
            continue

        # Dereference move data
        move = MOVES[moveId]

        if move["category"] == "Status":
            continue  # Skip Status Moves
        if "isZ" in move and move["isZ"] != False:
            continue  # Skip Z-Moves
        if "isMax" in move and move["isMax"] != False:
            continue  # Skip Max Moves

        moves.append(moveId)

    # Move Ratings
    ratings = {}

    # Highest rating
    highest_rating = 0

    # Loop over filtered moves
    for moveId in moves:

        # Default Move Rating
        rating = MOVE_RATING_DEFAULT

        # Dereference move data
        move = MOVES[moveId]

        # Process Accuracy
        accuracy = move["accuracy"]
        if accuracy == True:
            accuracy = 100  # Cannot miss

        # Apply accuracy modifier
        rating += math.floor(accuracy * MOVE_ACCURACY_MODIFIER)

        # Process Priority
        priority = move["priority"]
        priority = min(
            MOVE_PRIORITY_MAX, priority
        )  # Ensure less than MOVE_PRIORITY_MAX
        priority = max(
            MOVE_PRIORITY_MIN, priority
        )  # Ensure greater than MOVE_PRIORITY_MIN

        # Apply priority modifier
        rating += math.floor(priority * MOVE_PRIORITY_MODIFIER)

        # Process Crit Ratio
        if "critRatio" in move:
            crit_ratio = move["critRatio"]
            rating += math.floor(crit_ratio * MOVE_CRIT_RATIO_MODIFIER)

        # Handle secondary effects
        if "secondary" in move:
            secondary_rating = get_secondary_effect_rating(move["secondary"])
            rating += math.floor(secondary_rating * MOVE_SECONDARY_MODIFIER)

        # Multiple secondary effects
        if "secondaries" in move:
            for secondary in move["secondaries"]:
                secondary_rating = get_secondary_effect_rating(secondary)
                rating += math.floor(secondary_rating * MOVE_SECONDARY_MODIFIER)

        # Self-Effects
        if "self" in move:
            self_rating = get_secondary_effect_rating(move["self"], self=True)
            rating += math.floor(self_rating * MOVE_SECONDARY_MODIFIER)

        # Process Flags
        for flag in move["flags"]:
            if flag in MOVE_FLAG_EFFECT_MODIFIERS:
                rating += math.floor(
                    MOVE_FLAG_EFFECT_MODIFIERS[flag]
                    * move["flags"][flag]
                    * MOVE_FLAG_MODIFIER
                )

        # Process Power
        power = move["basePower"]
        if "multihit" in move:
            hits = move["multihit"]
            if type(hits) != int:
                hits = math.ceil(
                    (hits[0] + hits[1]) / 2
                )  # Average number of hits, rounded up
            power *= hits
        if power == 0:  # Special case
            if moveId in ["fissure", "guillotine", "horndrill", "sheercold"]:
                power = MOVE_OHKO_POWER
            elif moveId in ["naturesmadness", "ruination", "superfang"]:
                power = MOVE_HALF_POWER
            elif moveId in ["return", "frustration"]:
                power = 102
            else:
                power = 80

        # Apply power modifier
        rating += math.floor(power * MOVE_POWER_MODIFIER)

        # Add move rating to table (round down)
        ratings[moveId] = math.floor(rating)

        # Update highest rating
        if rating > highest_rating:
            highest_rating = rating

    # Sort ratings from highest to lowest
    ratings_sorted = sorted(ratings.items(), key=lambda x: x[1], reverse=True)

    normalizer = 1  # No change
    if MOVE_RATING_MAXIMUM != 0:
        normalizer = MOVE_RATING_MAXIMUM / highest_rating

    # Create output content
    output = [
        "// File Auto-Generated By tools/bfg_helpers/get_move_ratings.py",
        "",
        "const u8 gBattleFrontierAttackRatings[MOVES_COUNT] = {",
    ]

    # Loop over sorted moves
    for i in range(len(ratings_sorted)):
        move = ratings_sorted[i]
        moveData = MOVES[move[0]]
        moveName = f"MOVE_{common.get_constant(moveData['name'])}"
        output.append(
            f"\t[{moveName}] = {math.floor(move[1] * normalizer)},"
        )

    output.append("};\n")

    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
    outpath = os.path.join(OUTPUT_DIRECTORY, OUTPUT_FILENAME)

    with open(outpath, "w+") as f:
        f.write("\n".join(output))
