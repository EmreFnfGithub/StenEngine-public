package;

import flixel.input.gamepad.FlxGamepad;
import Controls.KeyboardScheme;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.ui.FlxButton;
import flixel.effects.FlxFlicker;
import flixel.addons.transition.FlxTransitionableState;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import lime.app.Application;
import miniGames.MiniGamesState;
import funkinMedia.FunkinMedia;
#if FEATURE_DISCORD
import Discord.DiscordClient;
#end


using StringTools;

class StenEngineLoading extends MusicBeatState
{
    var bg:FlxSprite;
	override function create()
        {
            #if FEATURE_DISCORD
            DiscordClient.changePresence("Loading Sten Engine", null);
            #end

            bg = new FlxSprite(-100).loadGraphic(Paths.loadImage('loadingscreen/loadingscreen'));
		    bg.scrollFactor.x = 0;
		    bg.scrollFactor.y = 0.10;
		    bg.setGraphicSize(Std.int(bg.width * 1.1));
		    bg.updateHitbox();
		    bg.screenCenter();
		    bg.antialiasing = FlxG.save.data.antialiasing;
		    add(bg);

            new FlxTimer().start(2, function(tmr:FlxTimer)
                {
                    FlxG.switchState(new TitleState());
                });
        }
    override function update(elapsed:Float)
        {

        }
}
