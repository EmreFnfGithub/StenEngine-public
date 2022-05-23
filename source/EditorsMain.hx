package;

import flixel.input.gamepad.FlxGamepad;
import Controls.KeyboardScheme;
import flixel.FlxG;
import flixel.FlxObject;
import openfl.desktop.ClipboardTransferMode;
import openfl.desktop.ClipboardFormats;
import openfl.desktop.Clipboard;
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
import miniGames.MiniGamesState;

using StringTools;

class EditorsMainButton extends FlxButton{

}
class EditorsMain extends FlxSubState
{
    var bg2:FlxSprite;
    var bg3:FlxSprite;
    var bg:FlxSprite;
	override function create(){
        bg2 = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		bg2.alpha = 0.6;
		bg2.scrollFactor.set();
		add(bg2);
        bg = new FlxSprite(-100).loadGraphic(Paths.loadImage('no/menuBGSub'));
		bg.scrollFactor.x = 0;
		bg.scrollFactor.y = 0.10;
		bg.setGraphicSize(Std.int(bg.width * 1.1));
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = FlxG.save.data.antialiasing;
		add(bg);
        FlxG.mouse.visible = true;
        var button2:FlxButton = new FlxButton(35, 105, "Stage Editor", function(){
			FlxG.switchState(new StageEditor());
		});
        add(button2);

		var button3:FlxButton = new FlxButton(35, 130, "Character E", function(){
			MainMenuState.Editorsnull = true;
			FlxG.switchState(new MainMenuState());
		});
        add(button3);

		var button4:FlxButton = new FlxButton(35, 155, "Week Editor", function(){
			MainMenuState.Editorsnull = true;
			FlxG.switchState(new MainMenuState());
		});
        add(button4);

		var button5:FlxButton = new FlxButton(35, 180, "Mini Games", function(){
			FlxG.switchState(new miniGames.MiniGamesState());
		});
        add(button5);

		var button6:FlxButton = new FlxButton(35, 205, "Other...", function(){
			FlxG.switchState(new EngineEditorsState());
		});
        add(button6);

		var close:FlxButton = new FlxButton(310, 50, "X", function(){
			MainMenuState.Editorsnull = true;
			FlxG.switchState(new MainMenuState());
		});
		close.color = FlxColor.RED;
        add(close);
        
		super.create();
    }
    override function update(elapsed:Float){
		super.update(elapsed);
    }

    function stageEditorFunc():Void
		{
			
		}
}