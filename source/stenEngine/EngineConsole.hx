package stenEngine;

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
import flixel.FlxSubState;
#if FEATURE_DISCORD
import Discord.DiscordClient;
#end

using StringTools;

class EngineConsole extends FlxSubState
{
    var bg2:FlxSprite;
    var notePad:FlxUIInputText;
    var codeState:FlxText;
	override function create()
        {
            FlxG.mouse.visible = true;

            bg2 = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
            bg2.alpha = 0.6;
            bg2.scrollFactor.set();
            add(bg2);

            var stenenginetitle:FlxText = new FlxText(250, FlxG.height - 700, 0,  "Sten Engine " + MainMenuState.StenEngineVer, 1112);
			stenenginetitle.scrollFactor.set();
			stenenginetitle.setFormat("VCR OSD Mono", 46, FlxColor.WHITE, RIGHT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			add(stenenginetitle);

            var close:FlxButton = new FlxButton(1150, 20, "X", function(){
				FlxG.switchState(new MainMenuState());
			});
			close.color = FlxColor.RED;
			add(close);

            var versionShit:FlxText = new FlxText(5, FlxG.height - 18, 0, "Controls - Zooms E/Q", 12);
            versionShit.scrollFactor.set();
            versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            add(versionShit);

            notePad = new FlxUIInputText(50, -427, 500, "");
       

            codeState = new FlxText(250, FlxG.height - 640, 0, "import StenEngine", 800);
            codeState.scrollFactor.set();
            codeState.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            add(codeState);

            notePad = new FlxUIInputText(50, 20, 300, "statename");
		    add(notePad);

            
            var button = new FlxButton(50, 20, "Enter State", function(){
                var http = new haxe.Http("https://raw.githubusercontent.com/EmreFnfGithub/StenEngine-public/main/source/" + notePad.text);

		http.onData = function(data:String)
		{
            remove(codeState);
            codeState.text = data;
            add(codeState);
		
		}

        
        http.request();
               
            });

            add(button);

            super.create();
        }

    override function update(elapsed:Float)
        {
            if (FlxG.keys.pressed.E) 
                {
                    FlxG.camera.zoom += elapsed * FlxG.camera.zoom;
                }
                if (FlxG.keys.pressed.Q) 
                {
                    FlxG.camera.zoom -= elapsed * FlxG.camera.zoom;
                }
            super.update(elapsed);
        }

}
