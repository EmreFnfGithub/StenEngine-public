package engineEditors;

import flixel.input.gamepad.FlxGamepad;
import Controls.KeyboardScheme;
import flixel.FlxG;
import flixel.FlxObject;
import openfl.desktop.ClipboardTransferMode;
import openfl.desktop.ClipboardFormats;
import openfl.desktop.Clipboard;
import flixel.ui.FlxButton;
import flixel.FlxSprite;
import flixel.addons.ui.FlxInputText;
import flixel.addons.ui.FlxUIInputText;
import flixel.ui.FlxButton;
import flixel.effects.FlxFlicker;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import lime.app.Application;
#if FEATURE_DISCORD
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import lime.utils.Assets;
import flixel.FlxSubState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSave;
import haxe.Json;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import Controls;
import sys.io.File;


using StringTools;

class CreditsEditor extends MusicBeatState
{
	//input texts
	var eventName:FlxUIInputText;
	var eventName2:FlxUIInputText;

	//buttons
	var createButton:FlxButton;
	var saveButtons:FlxButton;

	//flx texts
	var versionShit:FlxText;
	var selec:FlxText;

	var options:Array<String> = ['Credit Name'];
	var creditText:Alphabet;
	private var grpOptions:FlxTypedGroup<Alphabet>;
	var bg:FlxSprite;

	var content:String = sys.io.File.getContent('assets/data/creditsList.txt');

	override function create()
		{
			bg = new FlxSprite().loadGraphic(Paths.image('menuDesat'));
		bg.color = FlxColor.PINK;
		add(bg);

			grpOptions = new FlxTypedGroup<Alphabet>();
		    add(grpOptions);

			for (i in 0...options.length)
				{
		    creditText = new Alphabet(0, (70 * i) + 30, "Credit Name", true, false);
			creditText.isMenuItem = true;
			creditText.targetY = i;
			creditText.x += 570;
			grpOptions.add(creditText);
			
			}

			versionShit = new FlxText(5, FlxG.height - 49, 0, "WHITE", 12);
        versionShit.scrollFactor.set();
        versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        add(versionShit);
		versionShit.visible = false;

		selec = new FlxText(1180, FlxG.height - 20, 0, "" + "", 12);
		selec.scrollFactor.set();
		selec.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(selec);


			eventName = new FlxUIInputText(50, 20, 80, "credit name");
		    add(eventName);

			eventName2 = new FlxUIInputText(50, 100, 80, "number of credits");
		    add(eventName2);

			saveButtons = new FlxButton(150, 100, "Save", function(){
				/*
				var fileDir:String = "assets/data/creditsList.txt";
				File.append(fileDir, false);
			    
				var names = new List<String>();

				names.add(selec.text);

				var output;
			    
				for (i in names)
					{
						output = File.append(fileDir, false);
						output.writeString(i + "\n");
						output.close();
					}
*/
				sys.io.File.saveContent("assets/data/creditsColors/" + eventName2.text + ".txt", versionShit.text);
				sys.io.File.copy("assets/images/credits/ExampleCredits.png", "assets/images/credits/" + selec.text + ".png");
				sys.FileSystem.deleteFile("assets/data/creditsList.txt");
				sys.io.File.saveContent("assets/data/creditsList.txt", content + "\n" + eventName.text);
			});
		    add(saveButtons);

			createButton = new FlxButton(150, 20, "Change", buttonoption);
		    add(createButton);
			var red:FlxButton = new FlxButton(150, 60, "Red", function(){
				versionShit.text = "RED";
				versionShit.visible = true;
				bg.color = FlxColor.RED;
			});

			red.color = FlxColor.RED;
		    add(red);
			var brown:FlxButton = new FlxButton(250, 60, "Brown", function(){
				versionShit.text = "BROWN";
				versionShit.visible = true;
				bg.color = FlxColor.BROWN;
			});
			brown.color = FlxColor.BROWN;
		    add(brown);
			var white:FlxButton = new FlxButton(350, 60, "White", function(){
				versionShit.text = "WHITE";
				versionShit.visible = true;
				bg.color = FlxColor.WHITE;
			});
			white.color = FlxColor.WHITE;
		    add(white);
			var yellow:FlxButton = new FlxButton(450, 60, "Yellow", function(){
				versionShit.text = "YELLOW";
				versionShit.visible = true;
				bg.color = FlxColor.YELLOW;
			});
			yellow.color = FlxColor.YELLOW;
		    add(yellow);
			var green:FlxButton = new FlxButton(550, 60, "green", function(){
				versionShit.text = "GREEN";
				versionShit.visible = true;
				bg.color = FlxColor.GREEN;
			});
			green.color = FlxColor.GREEN;
		    add(green);

			var black:FlxButton = new FlxButton(650, 60, "Black", function(){
				versionShit.text = "BLACK";
				versionShit.visible = true;
				bg.color = FlxColor.BLACK;
			});
			black.color = FlxColor.BLACK;
		    add(black);
			
			var cyan:FlxButton = new FlxButton(750, 60, "Cyan", function(){
				versionShit.text = "CYAN";
				versionShit.visible = true;
				bg.color = FlxColor.CYAN;
			});
			cyan.color = FlxColor.CYAN;
		    add(cyan);

			var blue:FlxButton = new FlxButton(850, 60, "Blue", function(){
				versionShit.text = "BLUE";
				versionShit.visible = true;
				bg.color = FlxColor.BLUE;
			});
			blue.color = FlxColor.BLUE;
		    add(blue);

			var pink:FlxButton = new FlxButton(950, 60, "Pink", function(){
				versionShit.text = "PINK";
				versionShit.visible = true;
				bg.color = FlxColor.PINK;
			});
			pink.color = FlxColor.PINK;
		    add(pink);

			var purple:FlxButton = new FlxButton(1050, 60, "Purple", function(){
				versionShit.text = "PURPLE";
				versionShit.visible = true;
				bg.color = FlxColor.PURPLE;
			});
			purple.color = FlxColor.PURPLE;
		    add(purple);

			var close:FlxButton = new FlxButton(1150, 20, "X", function(){
				FlxG.switchState(new CreditsState());
			});
			close.color = FlxColor.RED;
			add(close);

			super.create();
		}

		function buttonoption()
		{
			for (i in 0...options.length)
				{
			grpOptions.remove(creditText);
		    creditText = new Alphabet(0, (70 * i) + 30, eventName.text, true, false);
			creditText.isMenuItem = true;
			creditText.targetY = i;
			creditText.x += 570;
			grpOptions.add(creditText);
			remove(selec);
			selec.text = eventName.text;
			
			}
		}
	override function update(elapsed:Float)
		{
			super.update(elapsed);
		}

}
