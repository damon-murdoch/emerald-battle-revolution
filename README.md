# Pokemon Dragapult Emerald
## Pokemon Emerald Decompilation Project, based on the PokeEmerald Expansion Project
### Created by Damon Murdoch ([@SirScrubbington](https://twitter.com/SirScrubbington))

## About

This is a Pokemon Emerald decompilation project which uses
the PokeEmerald Expansion project as a base. I am currently
using this project as a way to learn the Emerald codebase. 
I will be building an expanded version of the base game, 
rather than an entirely new game and world. However, there
are several features which I would like to implement within
the development of this project. 

The eventual goal for this project is to create a sandbox for
players to enjoy the incredible post-game content in Emerald, 
such as the Battle Frontier and other facilities which have
been completely lacking since Generation 7 using new Pokemon
and simple methods for obtaining properly trained, competitive
Pokemon easily without the need for modifying save files.

## Useful Links 

* [PokeEmerald Expansion Readme](./EXPANSION.md)
* [PokeEmerald Install / Build Guide](./INSTALL.md)
* [PokeEmerald Tutorials](https://github.com/pret/pokeemerald/wiki/Tutorials)
* [Dragapult.xyz Main Site](https://www.dragapult.xyz)
* [Github Project](https://github.com/users/damon-murdoch/projects/1)
* [Github Issues & Milestones](https://github.com/damon-murdoch/dragapult-emerald/milestones)

## Credits

* The entire [PokeEmerald-Expansion development team](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits/_edit), for developing and maintaining the incredible source image this project uses

* [Avara](https://www.pokecommunity.com/member.php?u=294199), for creating the [Changing Birch's Intro Pokemon](https://www.pokecommunity.com/showpost.php?p=9967857&postcount=6) tutorial

* `SonikkuA-DatH`, for creating the [Make space for EWRAM Data for Summary Screen](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen) tutorial

* `Jaizu`, for creating the [Not showing dex entries until getting the Pokédex](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex) tutorial

* `Anon822`, for creating the [Wrong Save Type Error Screen](https://www.pokecommunity.com/showpost.php?p=10449518) tutorial

* `FlameTix`, for creating the [Implement Missing Text Function RESET_FONT](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT) tutorial

* `Ghoulslash`, for creating the following tutorials: 
  * [Surf Dismount Fix](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)
  * [Better Reflections](https://github.com/pret/pokeemerald/wiki/Reflections)
  * [Repeated Medicine Use](https://github.com/pret/pokeemerald/wiki/Repeated-Field-Medicine-Use)
  * [Plural Give-Item Command](https://github.com/pret/pokeemerald/wiki/Plural-Giveitem)

* `LOuroboros`, for creating the following tutorials:
  * [Camera Wave Fix](https://github.com/pret/pokeemerald/wiki/Keep-the-Camera-from-Making-Waves)
  * [Infinite TM usage](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage)

* `EllaBrella`, for creating the [Increase Text Speed Beyond Fast](https://www.pokecommunity.com/showpost.php?p=10400198) tutorial

* `Hiram Anderson`, for creating the [Extra Save Space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code) tutorial

* `FieryMewtwo`, for creating the following tutorials: 
  * [Keyboard auto switch](https://github.com/pret/pokeemerald/wiki/Automatically-make-the-keyboard-switch-to-lowercase-after-the-first-character/) 
  * [Trade with FRLG without beating the game](https://github.com/pret/pokeemerald/wiki/Enable-trade-with-FRLG-without-beating-the-game)

* `voloved`, for creating the [Add Sleep Mode](https://github.com/pret/pokeemerald/wiki/Add-Sleep-Mode) tutorial

* `Mkol103`, for creating the [mid-battle test skip](https://www.pokecommunity.com/showpost.php?p=10266925) tutorial

* `DizzyEgg`, for creating the [Coloured Stats by Nature](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen) tutorial

* `PokemonCrazy`, for creating the [Show EVs / IVs in Summary](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77) tutorial

* `huderlem`, for creating [Poryscript](https://github.com/huderlem/poryscript)

## Branches

### Main (Release)

This is the main release branch for the software, where the latest stable version
of the code will be deployed.

### Mint (Release)

This is the second main release branch for the software, which has Groulslash's nature
mints code implemented on top of the other main branch features. This has been added
to a seperate branch to prevent merge conflicts in the future once the mints are
implemented on the upstream branch of `PokeEmerald-Expanded.`

### Debug (Release)

This is the third release branch for the software, which has all of the main branch
features with debug code (i.e. debug menu) added for testing purposes. 

### Dev (Development)

This is the main development branch for the software, which is where code which is actively
being worked on is stored. The `Main` and `Mint` branches are both merged from this branch
once the software has been tested and verified as working. This branch is generally not
advised to be used for a genuine playthrough, and may not always be in a compiling state
when committed.

## Changelog

Please see below for the Dragapult Emerald project changelog. For changes related to
the PokeEmerald Expanded project, please see the [PokeEmerald Changelog](./CHANGELOG.md).

### Ver. 0.4.1

Battle mechanic items (e.g. Mega Power Ring) will now be recieved during the story, after
defeating the 2nd, 4th, 6th and 8th gyms respectively. The order is as follows:
* 2nd Gym: Mega Ring
* 4th Gym: Z Power Ring
* 6th Gym: Dynamax Band
* 8th Gym: Tera Orb
After defeating these gyms, the related items will become available in the Pokemart. Flags
for enabling and disabling most optional mechanics have also been implemented, for both
debug and in-game purposes.

### Ver. 0.4.0

Special sellers in each Pokemart have been completely reworked, and the item table for each
has been overhauled to provide a variety of unique items for the player to use while progressing
through the game. Mega Stones, Z-Crystals, Dynamax Candies and Tera Shards will be made available
in each special shop where other items of the same type are also available (e.g. Sootopolis will 
have Dragonium Z and Tera Dragon Shards). Trainer Hill, Lilycove Department Store, Evergrande 
City and the Battle Frontier all have unique secondary special shops which do not follow the
general pattern of the other special shops.

### Ver. 0.3.1

Removed unnecessary files, modified item prices, fixed issues with mochi seller, 
added special shop vendors with static, randomised contents to each Pokemart. 
Implemented and tested multichoice2, which allows for an easy method for 
implementing multiple choice menus. 

### Ver. 0.3.0

Completed rough spawn tables up to route 120, with recurring patterns for water/fishing
encounter tables and mostly new spawn tables for wild encounters (Original wild encounters
remain available, but with lower spawn rate).

### Ver. 0.2.2

Merged upcoming branch of PokeEmerald-Expanded into the project, which adds support for
several new features including all of the Generation 9 Pokemon (so far), Dynamax, most of
the new items, and more. Resolved several merge conflicts which were caused as a result of
this change.

### Ver. 0.2.1

Updated spawn tables for route 101, 102 and 103 with new wild encounters, as well as water
and fishing encounters where applicable. All (Non-Department Store) PokeMarts have now been
updated to use the same item list, which is dependent on the number of badges the player has.
Modified Pokemarts to have stock dependent on the number of badges the player has earned.

### Ver. 0.2.0

Implemented EV/IV increasing/decreasing items - Some Pokeblock-only berries have been repurposed to increase
or decrease IVs by one, and Zinc/Carbos/etc. have been modified to provide 28 EVs at a time in their respective
stat, requiring only 9 to reach the maximum value (252). Feathers have also been modified to provide 4 of their
respective stats, which can be useful for building more fine-grained EV spreads. EV-reducing berries have also
been modified to reduce stats by 28. Item descriptions have been updated to reflect the new behavior. New TM 
behavior has been tested and verified. A bug was fixed where mom would be placed outside (for the running
shoes encounter), even though this encounter has been removed from the game.

### Ver. 0.1.1

Updated TM behavior based on [this](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage) tutorial, now 
infinitely reusable and cannot be sold / bought more than once. Text references to TMs have now been updated 
to reflect new behavior. Replacing a move with a new move will no longer refresh the PP for the move slot

### Ver. 0.1.0

Implemented [Poryscript](https://github.com/huderlem/poryscript) to build pipeline, converted all pre-existing 
map script.inc files to .pory format, removed running shoes event when returning to Littleroot town and enabled 
running shoes flags by default when exiting the truck, Added National Dex upgrade to initial Birch Pokedex event, 
as well as the battle key items (Mega Ring, Z Power Ring, Dynamax Band), Added follow-up event where these items 
can be recieved instead of they are missed initially (for migrated save files). Modified EXP.Share to use Gen 6+ 
behavior (Key item, affects all party members, can be toggled on or off.)

### Ver. 0.0.6

Implemented additional save space ([tutorial by Hiram Anderson](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code)),
keyboard auto switch ([tutorial by FieryMewtwo](https://github.com/pret/pokeemerald/wiki/Automatically-make-the-keyboard-switch-to-lowercase-after-the-first-character/)), 
early FRLG trading ([tutorial by FieryMewtwo](https://github.com/pret/pokeemerald/wiki/Enable-trade-with-FRLG-without-beating-the-game)), 
sleep mode ([tutorial by voloved](https://github.com/pret/pokeemerald/wiki/Add-Sleep-Mode)), 
mid-battle text skip ([tutorial by Mkol103](https://www.pokecommunity.com/showpost.php?p=10266925)), 
coloured stats by nature ([tutorial by DizzyEgg](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen)),
show EVs / IVs in summary ([tutorial by PokemonCrazy](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77))

### Ver. 0.0.5

Implemented repeated medicine use without re-entering the bag menu
([tutorial by ghoulslash](https://github.com/pret/pokeemerald/wiki/Repeated-Field-Medicine-Use)),
faster text speed ([tutorial by ellabrella](https://www.pokecommunity.com/showpost.php?p=10400198))

### Ver. 0.0.4

Implemented not showing dex entries until getting the Pokedex 
([tutorial by Jaizu](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)),
an error screen for if a flash chip is not present on the cart 
([tutorial by Anon822](https://www.pokecommunity.com/showpost.php?p=10449518)), 
implemented missing text function RESET_FONT 
([tutorial by Flametix](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT)),
fixed surf dismount ground effect bug
([tutorial by ghoulslash](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)), 
fixed camera wave bug 
([tutorial by LOuroboros](https://github.com/pret/pokeemerald/wiki/Keep-the-Camera-from-Making-Waves)), 
implemented better reflections
([tutorial by ghoulslash](https://github.com/pret/pokeemerald/wiki/Reflections))

### Ver. 0.0.3

Implemented EWRAM Data summary screen optimisation ([tutorial by SonikkuA-DatH](https://github.com/pret/pokeemerald/wiki/Make-space-for-EWRAM-Data-for-Summary-screen))

### Ver. 0.0.2

Updated readme with planned features / credits / other information, release build script

### Ver. 0.0.1

Implemented main/dev/debug branching system, modified Birch's intro Pokemon to Hisuian Zorua (Added SPECIES_INTRO #define for modifying both intro sprite/sound at once).

### Ver. 0.0.0
Cloned PokeEmerald Expansion project base image, unmodified source project is stored in branch 'base'
