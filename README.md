![Sten Engine Logo](/art/StenEngineTHENEWLogoBuildPS.png)
# Friday Night Funkin ' - Sten Engine
This engine was made for modding the Friday Night Funkin. [More Information](https://gamebanana.com/mods/375364)
# Sten Engine Links
[Sten Engine GameBanana Link](https://gamebanana.com/mods/375364)
[Sten Engine GameJolt Link](https://gamejolt.com/games/stenengine/716503)
# Sten Engine Web
https://emrefnfgithub.github.io/
# Engine Credits
- EmreFnF
- Behlul
# Friday Night Funkin' Credits
- ninjamuffin99
- PhantomArcade
- evilsk8r
- kawaisprite
# How to build engine
**Download** [Haxe 4.2.4/4.1.5](https://haxe.org/download/version/4.2.4/)

**Download** [Git](https://git-scm.com/)

**And Download Sten Engine Source-Code**

**And enter CMD via Sten Engine's location**

**And in cmd, write**

[It says here](https://emrefnfgithub.github.io/htmlassets/building.html)

# Main Menu
**Main Menu**
![](/art/mainstenengine.png)
**Credits Menu**
![](/art/creditsstenengine.png)
**Free Play**
![](/art/freeplay.png)
**AND CUSTOM STATES (No Coding)**

# Source Code
### Installing the Required Programs

First, you need to install Haxe and HaxeFlixel. I'm too lazy to write and keep updated with that setup (which is pretty simple). 
1. [Install Haxe 4.1.5](https://haxe.org/download/version/4.1.5/) (Download 4.1.5 instead of 4.2.0 because 4.2.0 is broken and is not working with gits properly...)
2. [Install HaxeFlixel](https://haxeflixel.com/documentation/install-haxeflixel/) after downloading Haxe

Other installations you'd need are the additional libraries, a fully updated list will be in `Project.xml` in the project root. Currently, these are all of the things you need to install:
```
flixel
flixel-addons
flixel-ui
hscript
newgrounds
```
So for each of those type `haxelib install [library]` so shit like `haxelib install newgrounds`

You'll also need to install a couple things that involve Gits. To do this, you need to do a few things first.
1. Download [git-scm](https://git-scm.com/downloads). Works for Windows, Mac, and Linux, just select your build.
2. Follow instructions to install the application properly.
3. Run `haxelib git polymod https://github.com/larsiusprime/polymod.git` to install Polymod.
4. Run `haxelib git discord_rpc https://github.com/Aidan63/linc_discord-rpc` to install Discord RPC.

You should have everything ready for compiling the game! Follow the guide below to continue!

At the moment, you can optionally fix the transition bug in songs with zoomed-out cameras.
- Run `haxelib git flixel-addons https://github.com/HaxeFlixel/flixel-addons` in the terminal/command-prompt.

### Ignored files

I gitignore the API keys for the game so that no one can nab them and post fake high scores on the leaderboards. But because of that the game
doesn't compile without it.

Just make a file in `/source` and call it `APIStuff.hx`, and copy & paste this into it

**Check Up https://gamebanana.com/mods/375364**
