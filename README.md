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

* `LOuroboros`, for creating the [Camera Wave Fix](https://github.com/pret/pokeemerald/wiki/Keep-the-Camera-from-Making-Waves) tutorial

* `EllaBrella`, for creating the [Increase Text Speed Beyond Fast](https://www.pokecommunity.com/showpost.php?p=10400198) tutorial

* `Hiram Anderson`, for creating the [Extra Save Space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code) tutorial

* `FieryMewtwo`, for creating the following tutorials: 
  * [Keyboard auto switch](https://github.com/pret/pokeemerald/wiki/Automatically-make-the-keyboard-switch-to-lowercase-after-the-first-character/) 
  * [Trade with FRLG without beating the game](https://github.com/pret/pokeemerald/wiki/Enable-trade-with-FRLG-without-beating-the-game)

* `voloved`, for creating the [Add Sleep Mode](https://github.com/pret/pokeemerald/wiki/Add-Sleep-Mode) tutorial

* `Mkol103`, for creating the [mid-battle test skip](https://www.pokecommunity.com/showpost.php?p=10266925) tutorial

* `DizzyEgg`, for creating the [Coloured Stats by Nature](https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen) tutorial

* `PokemonCrazy`, for creating the [Show EVs / IVs in Summary](https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77) tutorial

## Changelog

Please see below for the Dragapult Emerald project changelog. For changes related to
the PokeEmerald Expanded project, please see the [PokeEmerald Changelog](./CHANGELOG.md).

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
