package;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.input.gamepad.FlxGamepad;
import flixel.addons.text.FlxTypeText;
import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIInputText;
import flixel.ui.FlxButton;
import flixel.FlxSprite;
import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIInputText;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import lime.utils.Assets;
#if sys
import sys.io.File;
import sys.FileSystem;
#end

using StringTools;

class ModsMenuState extends MusicBeatState
{
	var mods:Array<ModsMetadata> = [];
	var button:FlxButton;

	static var curSelected:Int = 0;

	private var grpMods:FlxTypedGroup<Alphabet>;
    public var modIcon:FlxSprite;
	var descText:FlxText;
	var bg:FlxSprite;
	var colorTween:FlxTween;

	override function create()
	{
		

		var initCreditlist = CoolUtil.coolTextFile(Paths.txt('modList'));
        
		initCreditlist = CoolUtil.coolTextFile(Paths.txt('modList'));

		for (i in 0...initCreditlist.length)
		{
			var data:Array<String> = initCreditlist[i].split(':');
			mods.push(new ModsMetadata(data[0], data[1]));
		}

		/* 
			if (FlxG.sound.music != null)
			{
				if (!FlxG.sound.music.playing)
					FlxG.sound.playMusic(Paths.music('freakyMenu'));
			}
		 */

		#if desktop
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		bg = new FlxSprite().loadGraphic(Paths.image('menuDesat'));
		bg.color = FlxColor.PINK;
		add(bg);

		descText = new FlxText(50, 600, 1180, "", 32);
		descText.setFormat(Paths.font("muff.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descText.scrollFactor.set();
		descText.text = 'what';
		descText.borderSize = 2.4;
		add(descText);
        
		modIcon = new FlxSprite(870, 180).loadGraphic('mods/' + mods[curSelected].modName + '/icon.png');
		modIcon.setGraphicSize(Std.int(modIcon.width * 0.8));
		add(modIcon);

		grpMods = new FlxTypedGroup<Alphabet>();
		add(grpMods);

		for (i in 0...mods.length)
		{
			var modText:Alphabet = new Alphabet(0, (70 * i) + 30, mods[i].modName, true, false);
			modText.isMenuItem = true;
			modText.targetY = i;
			grpMods.add(modText);

			// creditText.x += 40;
			// DONT PUT X IN THE FIRST PARAMETER OF new ALPHABET() !!
			// creditText.screenCenter(X);
		}

		changeSelection();
		// FlxG.sound.playMusic(Paths.music('title'), 0);
		// FlxG.sound.music.fadeIn(2, 0, 0.8);

		var descText:FlxText = new FlxText(50, 600, 1180, "", 32);
		descText.setFormat(Paths.font("muff.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descText.scrollFactor.set();
		descText.borderSize = 2.4;
		add(descText);

		button = new FlxButton(150, 20, "Create Mod", createMod);
        add(button);
		
		super.create();
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		var upP = controls.UP_P;
		var downP = controls.DOWN_P;
		var accepted = controls.ACCEPT;
		var space = FlxG.keys.justPressed.SPACE;

		var shiftMult:Int = 1;
		if (FlxG.keys.pressed.SHIFT)
			shiftMult = 3;

		if (upP)
		{
			FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
			changeSelection(-shiftMult);
			remove(modIcon);
			modIcon.loadGraphic('mods/' + mods[curSelected].modName + '/icon.png');
			add(modIcon);
		}
		if (downP)
		{
			FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
			changeSelection(shiftMult);
			remove(modIcon);
			modIcon.loadGraphic('mods/' + mods[curSelected].modName + '/icon.png');
			add(modIcon);
		}

		if (controls.BACK)
			FlxG.switchState(new MainMenuState());
	}

	function createMod():Void
	{
		var bg:FlxSprite = new FlxSprite(-100).loadGraphic(Paths.loadImage('menuDesat'));
		bg.scrollFactor.x = 0;
		bg.scrollFactor.y = 0.10;
		bg.setGraphicSize(Std.int(bg.width * 1.1));
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = FlxG.save.data.antialiasing;
		add(bg);

		var bgHM:FlxSprite = new FlxSprite(-100).loadGraphic(Paths.loadImage('no/menuBGMods'));
		bgHM.scrollFactor.x = 0;
		bgHM.scrollFactor.y = 0.10;
		bgHM.setGraphicSize(Std.int(bgHM.width * 1.1));
		bgHM.updateHitbox();
		bgHM.screenCenter();
		bgHM.antialiasing = FlxG.save.data.antialiasing;
		add(bgHM);

		var eventNameEE:FlxUIInputText = new FlxUIInputText(350, 220, 80, "");
		add(eventNameEE);

		var close:FlxButton = new FlxButton(1150, 20, "X", function(){
			FlxG.switchState(new ModsMenuState());
		});
		close.color = FlxColor.RED;
        add(close);

		var button5:FlxButton = new FlxButton(500, 220, "Create Mod", function(){
			sys.FileSystem.createDirectory("mods/" + eventNameEE.text);
		});
        add(button5);
	}
	function changeSelection(change:Int = 0)
	{
		curSelected += change;

		if (curSelected < 0)
			curSelected = mods.length - 1;
		if (curSelected >= mods.length)
			curSelected = 0;

		descText.text = mods[curSelected].desc;

		// selector.y = (70 * curSelected) + 30;
		var bullShit:Int = 0;

		for (item in grpMods.members)
		{
			item.targetY = bullShit - curSelected;
			bullShit++;

			item.alpha = 0.6;
			// item.setGraphicSize(Std.int(item.width * 0.8));

			if (item.targetY == 0)
			{
				item.alpha = 1;
				// item.setGraphicSize(Std.int(item.width));
			}
		}
	}
}

class ModsMetadata
{
	public var modName:String = "";
	public var desc:String = "";

	public function new(name:String, desc:String)
	{
		this.modName = name;
		this.desc = desc;
	}
}