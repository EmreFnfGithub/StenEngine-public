package options;

import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
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
#if FEATURE_DISCORD
import Discord.DiscordClient;
#end
using StringTools;

class GamePlaySub extends MusicBeatState
{
    private var grpOptions:FlxTypedGroup<Alphabet>;
    var options:Array<String> = ['Redesigned Menu On', 'Redesigned Menu Off', 'Set Username', 'Scroll Speed Change', 'Offset Thing', 'Ghost Tap On', 'Ghost Tap Off', 'Bot Play On', 'Bot Play Off', 'DownScroll', 'UpScroll', 'Reset Button On', 'Reset Button Off', 'Customize Gameplay'];
	private static var curSelected:Int = 0;
	public static var menuBG:FlxSprite;
    public static var hm:Bool = false;

	function optionEnter(label:String) {
		switch(label) {
			case 'Redesigned Menu On':
				FlxG.save.data.redesignedmenustyle = "On";
			case 'Redesigned Menu Off':
				FlxG.save.data.redesignedmenustyle = "Off";
			case 'Set Username':
				FlxG.switchState(new SetUser());
			case 'Ghost Tap On':
				FlxG.save.data.ghost = "Enabled";
            case 'Ghost Tap Off':
                FlxG.save.data.ghost = "Disabled";
            case 'Bot Play On':
                FlxG.save.data.option = "on";
            case 'Bot Play Off':
                FlxG.save.data.option = "off";
            case 'DownScroll':
                FlxG.save.data.downscroll = "Downscroll";
            case 'UpScroll':
                FlxG.save.data.downscroll = "Upscroll";
            case 'Reset Button On':
                FlxG.save.data.resetButton = "on";
            case 'Reset Button Off':
                FlxG.save.data.resetButton = "off";
		}
	}

    var selectorLeft:Alphabet;
	var selectorRight:Alphabet;

	override function create()
        {
            // Updating Discord Rich Presence
            #if FEATURE_DISCORD
            DiscordClient.changePresence("In the Options", null);
            #end

            //COLORED BG
            var bgColors:Array<String> = ['#314d7f', '#4e7093', '#70526e', '#594465'];
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

            grpOptions = new FlxTypedGroup<Alphabet>();
		    add(grpOptions);

            for (i in 0...options.length)
                {
                    var optionText:Alphabet = new Alphabet(0, (70 * i), options[i], true, false);
                    optionText.screenCenter();
                    optionText.targetY = i;
                    optionText.y += (100 * (i - (options.length / 2))) + 50;
                    grpOptions.add(optionText);
                }
                
            selectorLeft = new Alphabet(0, 0, '>', true, false);
                add(selectorLeft);
            selectorRight = new Alphabet(0, 0, '<', true, false);
                add(selectorRight);
            
            
            super.create();
        }
    override function update(elapsed:Float)
        {
            super.update(elapsed);
            if(FlxG.keys.justPressed.UP)
                {
                  changeSelection(-1);
                  hm = true;
                }
            if(FlxG.keys.justPressed.DOWN)
                {
                   changeSelection(1);
                   hm = false;
                }
            if(controls.ACCEPT)
                {
                    optionEnter(options[curSelected]);
                }
            if(controls.BACK)
                {
                    FlxG.switchState(new MainMenuState());
                }
            
        }
    function changeSelection(huh:Int = 0) {
            curSelected += huh;
            if (curSelected < 0)
                curSelected = options.length - 1;
            if (curSelected >= options.length)
                curSelected = 0;
    
            var bullShit:Int = 0;
    
            for (item in grpOptions.members) {
                item.targetY = bullShit - curSelected;
                bullShit++;
    
                item.alpha = 0.6;
                if (item.targetY == 0) {
                    item.alpha = 1;
                    selectorLeft.x = item.x - 63;
                    selectorLeft.y = item.y;
                    selectorRight.x = item.x + item.width + 15;
                    selectorRight.y = item.y;
                   
                }
                var add:Float = 0;
				if(item.length > 4) {
					add = item.length * 8;
				}
                
                if(hm == true)
                    {
                        item.offset.y -= 50;
                    }
                else{
                    item.offset.y += 50;
                }
                /**
                camFollow.setPosition(spr.getGraphicMidpoint().x, spr.getGraphicMidpoint().y - add);
				spr.centerOffsets();
                **/
            }
            FlxG.sound.play(Paths.sound('scrollMenu'));
        }
        
}