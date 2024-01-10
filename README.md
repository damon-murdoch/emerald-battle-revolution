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
  * [DPPt Style 2-in-1 Bike](https://www.pokecommunity.com/showpost.php?p=10217718&postcount=172)
  * [Party swap with select](https://github.com/pret/pokeemerald/compare/master...LOuroboros:partyScrQuickSwap)
  * [Nicknaming as an option in the Pokémon Party Screen](https://github.com/pret/pokeemerald/wiki/Nickname-your-Pok%C3%A9mon-from-the-party-menu)
  * [Hidden Power type in battle menu](https://www.pokecommunity.com/showpost.php?p=10269149)

* `Jirachii`, for creating the [Hidden Power type in summary screen](https://www.pokecommunity.com/threads/simple-modifications-directory.416647/post-10269132) tutorial.

* `EllaBrella`, for creating the [Increase Text Speed Beyond Fast](https://www.pokecommunity.com/showpost.php?p=10400198) tutorial

* `Hiram Anderson`, for creating the [Extra Save Space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code) tutorial

* `FieryMewtwo`, for creating the following tutorials: 
  * [Keyboard auto switch](https://github.com/pret/pokeemerald/wiki/Automatically-make-the-keyboard-switch-to-lowercase-after-the-first-character/) 
  * [Trade with FRLG without beating the game](https://github.com/pret/pokeemerald/wiki/Enable-trade-with-FRLG-without-beating-the-game)

* `voloved`, for creating the following tutorials: 
  * [Add Sleep Mode](https://github.com/pret/pokeemerald/wiki/Add-Sleep-Mode)
  * [PC Access in PokeNav](https://github.com/pret/pokeemerald/wiki/Add-PC-Access-in-PokeNav)
  * [Allow Move Relearner to Teach Moves that Pre Evolutions Know](https://github.com/pret/pokeemerald/wiki/Allow-Move-Relearner-to-Teach-Moves-that-Pre-Evolutions-Know)

* `Mkol103`, for creating the [mid-battle test skip](https://www.pokecommunity.com/showpost.php?p=10266925) tutorial

* `DizzyEgg`, for creating the [Coloured Stats by Nature](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen) tutorial

* `PokemonCrazy`, for creating the [Show EVs / IVs in Summary](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77) tutorial

* `huderlem`, for creating [Poryscript](https://github.com/huderlem/poryscript)

## Branches

### Main (Release)

This is the main release branch for the software, where the latest stable version
of the code will be deployed. This will be kept up to date with the latest stable 
`dev` release.

### Mint (Release)

This is the second main release branch for the software, which has Groulslash's nature
mints code implemented on top of the other main branch features. This has been added
to a seperate branch to prevent merge conflicts in the future once the mints are
implemented on the upstream branch of `PokeEmerald-Expanded.` This will be kept 
up to date with the latest stable `dev` release.

### Modified (Release)

This is an offshoot branch of the software, which has modified moves / learn tables / etc.
for some Pokemon or items which will be notated with the `// Modified` comment after each 
adjusted line. The `main` or `dev` branches will never directly modify a Pokemon's stats
or otherwise modify them from how they behave in the main series titles. This will be 
kept up to date with the latest stable `dev` release.

### Combined (Release)

This is a combined branch of both the `mint` and `modified` releases, so you can use the
modified Pokemon with the nature mint code together. This will be kept up to date with
the latest stable `dev` release.

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

### Ver. 0.9.5

Added an NPC to all battle facilities (Frontier Facilities and Trainer Tower) which allows
you to change the battle music within the facility. NPCs still need to be added for the battle
tents located throughout the game.

### Ver. 0.9.4

Removed Cherish Ball / Gold Bottle Cap from stores, added NPC for exchanging Battle Points
for those items (50 each) to Battle Frontier Underground Pokemon Centre, reorganised shop items

### Ver. 0.9.3

Added fully working Pokemon Centre to (with respawn point) to Battle Frontier Underground, 
added Gimmighoul Coin / Leaders Crest item effects

### Ver. 0.9.2

Resolved merge conflicts, new teachable moves, text improvements, updated rom name, 
changed Ursaluna-BM to use standard Ursaluna sprite temporarily

### Ver. 0.9.1

Created Game Corner Currency Converter, added to the top left of both the Mauville Game Corner
and the Battle Frontier Underground Game Corner

### Ver. 0.9.0

Removed fade to black from pokemon salespeople, added multichoice text for all breeder options, 
implemented pokemon breeder for all species, minor refractor to add some missing species

### Ver. 0.8.3

Updated move tutor prices, fixed berry/bottle cap descriptions, made photon geyser single target, 
fixed bleakwind/wildbolt/sandsear storm accuracy, 

### Ver. 0.8.2

Implemented system for exchanging Gold Bottle Caps for shiny Pokemon in both the legendary Pokemon counter and
the Pokemon breeder, added optional allow battle z-moves in battle frontier switch, reduce held item animation time

### Ver. 0.8.1

Hidden Power type is now displayed accurately in the summary menu, move teacher menu, and in battle. Code has been
developed based on the guides provided by [LOuroboros](https://www.pokecommunity.com/showpost.php?p=10269149) and [Jirachii](https://www.pokecommunity.com/threads/simple-modifications-directory.416647/post-10269132).

### Ver. 0.8.0

Added fully working Game Corner to Battle Frontier Underground, where the greeter outside gives
you a coin case if you do not already own one. Balls can now be used on a Pokemon from the bag
menu to swap the ball the Pokemon is in. The original ball is returned to the player's inventory. 
Battle frontier species checks have now been disabled for the open rules mode, allowing all Pokemon
(incl. Mythicals) to be allowed. The level cap has also been reduced to level 50.

### Ver. 0.7.2

Merged code from pokeemerald-expanded upcoming branch into dev, updated evolution methods for 
all unobtainable evolutions (i.e. Hisuian formes, etc.) using a linking cable, new Paldean 
Pokemon with unimplemented evolution methods have been given item evolutions. Updated 
item prices, underground item shop layouts, and pokemon breeding helper messages.

### Ver. 0.7.1

Last used bike is now remembered, and will not be reset back to Acro bike each time you
get off it. Several item prices have been reduced. Signs have been added to all of the
entrances to the Battle Frontier Underground, and the Battle Dome Underground Entrance
has been moved to make it more accessible. Added a new file `ENCOUNTERS.md` which lists
all of the locations where Pokemon can be encountered, generated by [Spawn Table Analyzer](https://github.com/damon-murdoch/pokeemerald-spawn-table-analyser).

### Ver. 0.7.0

Fixed move tutor, improved relearn tutor. Improved flow for move tutor 
conversation loop (both). Fixed Genie signature moves to be spread, however they still
do not have perfect accuracy in rain. Further improved underground layout, added shop
clerks for both new (Expansion) and original key items, implemented support
for gender-specific flags in sandbox mode startup script. Other minor improvements

### Ver. 0.6.6

Remodeled underground interior, implemented dev sandbox mode code (Within starting truck). Working move 
relearner has been created for tutor/egg moves, and has been added to both the Battle Frontier Underground 
and the original Move Tutor house. Instead of requiring a Heart Scale, both tutors now cost for $2000 per move. 

### Ver. 0.6.5

Added Porymoves combined teachable_learnsets to teachable_learnsets.h, which will allow Pokemon to be taught 
moves they learnt in any game after `Black and White 2`, except for `Pokemon Let's Go Pikachu and Eevee`. 

Minor improvements have been made to the Battle Frontier Underground map layout, and development for a move 
tutor for allowing Pokemon to be taught egg/tutor/other moves has been started.

### Ver. 0.6.4

Merged upcoming features into main branch, resolved associated merge conflicts. Updated wild
encounters json file with randomly generated wild encounters, using [Wild Encounter Randomiser](https://github.com/damon-murdoch/pokeemerald-wild-encounter-randomiser). 
These spawn tables are likely to be modified in the future, as the Wild Encounter Randomiser
is developed and improved.

### Ver. 0.6.3

Implemented Bottle Cap function for maxing all ivs, durin/belue berry for 0 Attack / Speed
respectively. Added TM/HM sellers to underground as well as added basic item / pokeball seller. 

### Ver. 0.6.2

Created work-in-progress currency converter (BP -> $, $ -> BP), as well as more 
battle item shops. Reworked battle frontier underground layout to make it smaller 
and easier to navigate.

### Ver. 0.6.1

Implemented basic pokemon breeder code, for selling basic Pokemon within the Battle
Frontier Underground Day Care. Training Item/Berry Sellers, signs, and many placeholders
and other basic features have been added.

### Ver. 0.6.0

Legendary Pokemon shop has now been implemented for all legendaries, using the new
left/right bumper navigation system to simplify navigation. Instructions for how to
navigate the menu are displayed in the chat window. Several new underground shops 
have been added, for purposes such as ev/iv training, battle items, tm/hms and more.

### Ver. 0.5.4

Legendary seller has been implemented up to generation six, and an additional feature
has been added to multichoice2 which allows for the 'left' and 'right' bumpers to be
accepted as inputs, similar to the 'b' button. This has been used for tabbing between
Pokemon seller menus, rather than needing to have an additional item at the bottom 
of the menu.

### Ver. 0.5.3

Battle Frontier Underground Day Care service has been added, with an entrance next to
the Legendary Pokemon sales counter. Legendary Pokemon seller has been implemented up
to the first three generations.

### Ver. 0.5.2

Started work on Battle Frontier Underground Legendary Pokemon sales counter, which 
will be able to sell any Legendary Pokemon to players for a flat price ($12000).

### Ver. 0.5.1

Started working on Battle Frontier Underground area, which will include shops for 
every type of item as well as various facilities such as a Day Care and Game Corner.

Basic floor plan has been created, and map warps with the Battle Frontier overworld
(both East and West) have been created. 

### Ver. 0.5.0

Implemented flags to optionally allow duplicate items and species, merged changes from 
PokeEmerald-Expanded upcoming branch, resolved issues related to level scaling system - 
level scaling now works without issues for both open level (level 100) and level 50 rules. 

### Ver. 0.4.4

Implemented level scaling system for Battle Frontier facilities, which allows for Pokemon above level 50 to participate
in level 50 battles and optionally, pokemon below level 50 can be raised to level 50 or level 100 in Open Battles. As a
result, the minimum level for Open Battles has been raised to 100 to ensure Pokemon all have the same level.

### Ver. 0.4.3

Implemented `voloved`'s [PC Access in PokeNav](https://github.com/pret/pokeemerald/wiki/Add-PC-Access-in-PokeNav) tutorial, as well as [allow Move Relearner to Teach Moves that Pre Evolutions Know](https://github.com/pret/pokeemerald/wiki/Allow-Move-Relearner-to-Teach-Moves-that-Pre-Evolutions-Know). Implemented `Diego Marten`'s [Move Relearner as an option in the Pokémon Party Screen](https://www.pokecommunity.com/showpost.php?p=10470602) tutorial. Implemented `Lunos`'s [Party swap with select](https://github.com/pret/pokeemerald/compare/master...LOuroboros:partyScrQuickSwap) tutorial, as well as [Nicknaming as an option in the Pokémon Party Screen](https://github.com/pret/pokeemerald/wiki/Nickname-your-Pok%C3%A9mon-from-the-party-menu)

### Ver. 0.4.2

Implemented `Lunos`'s [2-in-1-bike](https://www.pokecommunity.com/showpost.php?p=10217718&postcount=172) 
tutorial, and modified the bike shop scripts to adjust it for the new behavior. Swapped the order of battle
mechanic items to be the following:
* 2nd Gym: Z Power Ring
* 4th Gym: Mega Ring
* 6th Gym: Tera Orb
* 8th Gym: Dynamax Band
Shops have also been modified to unlock relevant items for each mechanic as they are unlocked.

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
