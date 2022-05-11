package funkinMedia;

#if desktop
import Discord.DiscordClient;
#end
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.input.gamepad.FlxGamepad;
import flixel.addons.text.FlxTypeText;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import lime.utils.Assets;
#if sys
import sys.io.File;
import sys.FileSystem;
#end
import funkinMedia.FunkinMedia;

using StringTools;

class FunkinMedia extends MusicBeatState
{
	
	var updateAvailable:Bool = false;
	override function create()
		{
		var bgColors:Array<String> = ['#ff4242', '#3727e8', '#e000d1', '#523961'];
	    var colorRotation:Int = 1;

		var menuBG:FlxSprite = new FlxSprite().loadGraphic(Paths.loadImage("menuDesat"));

		menuBG.setGraphicSize(Std.int(menuBG.width * 1.1));
		menuBG.updateHitbox();
		menuBG.screenCenter();
		menuBG.antialiasing = FlxG.save.data.antialiasing;
		add(menuBG);

		FlxTween.color(menuBG, 2, menuBG.color, FlxColor.fromString(bgColors[colorRotation]));

		new FlxTimer().start(2, function(tmr:FlxTimer)
		{
			FlxTween.color(menuBG, 2, menuBG.color, FlxColor.fromString(bgColors[colorRotation]));
			if (colorRotation < (bgColors.length - 1))
				colorRotation++;
			else
				colorRotation = 0;
		}, 0);

		var ver = "v" + MainMenuState.StenEngineVer;

		var http = new haxe.Http("https://raw.githubusercontent.com/EmreFnfGithub/FunkinMediaStenEngine/main/version.txt");

		http.onData = function(data:String)
		{
			var funkinmediaaa:FlxText = new FlxText(30, FlxG.height - 700, 0,  "Funkin Media" + " " + data, 31);
			funkinmediaaa.scrollFactor.set();
			funkinmediaaa.setFormat("PhantomMuff 1.5", 46, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			add(funkinmediaaa);
		
		}

		
		http.request();

		var http2 = new haxe.Http("https://raw.githubusercontent.com/EmreFnfGithub/StenEngine-public/main/gameVer.txt");

		http2.onData = function(data2:String)
		{
			var updateVersion = data2.split('\n')[0].trim();
			var curVersion:String = MainMenuState.StenEngineVer;
			if (updateVersion != curVersion)
			{
				FlxG.switchState(new OutdatedSubState2());
			}
			
		}
		

		http2.request();

		var versionShit:FlxText = new FlxText(5, FlxG.height - 18, 0, "Press S to Sten Web Site", 12);
                versionShit.scrollFactor.set();
                versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
                add(versionShit);

				

		}
	override function update(elapsed:Float)
		{
			if(controls.BACK)
				{
					FlxG.switchState(new MainMenuState());
				}
			if(FlxG.keys.justPressed.S)
				{
					CoolUtil.browserLoad("https://emrefnfgithub.github.io/");
				}
		}
}