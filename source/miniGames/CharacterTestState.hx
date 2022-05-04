package miniGames;

import flixel.input.gamepad.FlxGamepad;
import Controls.KeyboardScheme;
import flixel.FlxG;
import flixel.FlxObject;
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

using StringTools;

class CharacterTestState extends MusicBeatState
{
    public static var char1:Character = null;
	public static var textboxhi:FlxInputText;
	public static var versionShit:FlxText;
	public static var notes:FlxSprite;
	public static var scale:Float = 1;

	var name:Int = 0;
	var charnamee:String = "dad";
	override function create()
	{
		

        var bg:FlxSprite = new FlxSprite(-100).loadGraphic(Paths.loadImage('stageback'));
		bg.scrollFactor.x = 0;
		bg.scrollFactor.y = 0.10;
		bg.setGraphicSize(Std.int(bg.width * 1.1));
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = FlxG.save.data.antialiasing;
		add(bg);

		var front:FlxSprite = new FlxSprite(-650, 600).loadGraphic(Paths.loadImage('stagefront', 'shared'));
		front.setGraphicSize(Std.int(front.width * 1.1));
		front.updateHitbox();
	    front.antialiasing = FlxG.save.data.antialiasing;
		front.scrollFactor.set(0.9, 0.9);
        add(front);

		char1 = new Character(500, 300, "bf", true);
		char1.setGraphicSize(Std.int(char1.width * 0.8));
		add(char1);
		char1.visible = false;
		
		var versionShit:FlxText = new FlxText(5, FlxG.height - 18, 0, name + " Developer Mode - Press p to change char", 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);

		var notes:FlxSprite = new FlxSprite(0, 0).loadGraphic(Paths.loadImage('notes/notesidle'));
		notes.scale.x = scale;
		notes.scale.y = scale;
		notes.screenCenter(X);
	    add(notes);
		
		


		super.create();
    }

	function OnClickButton():Void
		{
			
		}
	
	override function update(elapsed:Float)
	{
		

		if (controls.BACK)
			{
				FlxG.switchState(new MiniGamesState());
			}

		if(controls.ACCEPT) 
		{
			 char1.dance();
			 char1.updateHitbox();
			 char1.visible = true;
		}

		var notes:FlxSprite = new FlxSprite(0, 0).loadGraphic(Paths.loadImage('notes/notesidle'));
		notes.scale.x = scale;
		notes.scale.y = scale;
		notes.screenCenter(X);
	    add(notes);

		if(FlxG.keys.justPressed.P)
			{
				name++;
			
			if(name == 1)
				{
					charnamee = "dad";
				}
	
				if(name == 2)
				{
				   charnamee = "spooky";
				}
	
				if(name == 3)
				{
					   charnamee = "pico";
				}
	
				if(name == 4)
				{
					   charnamee = "mom";
				}
	
				if(name == 5)
				{
					   charnamee = "gf";
				}
	
				if(name == 6)
				{
						charnamee = "monster";
				}
	
				if(name == 7)
				{
						charnamee = "senpai-angry";
				}
	
				if(name == 8)
				{
						charnamee = "parents-christmas";
				}	
				
				if(name == 9)
				{
						charnamee = "senpai";
				}	
	
				if(name == 10)
					{
						charnamee = "spirit";
					}	
	
				if(name == 11)
					{
						name = 0;
						charnamee = "bf";
							
					}	
			

			var bg:FlxSprite = new FlxSprite(-100).loadGraphic(Paths.loadImage('stageback'));
		    bg.scrollFactor.x = 0;
		    bg.scrollFactor.y = 0.10;
		    bg.setGraphicSize(Std.int(bg.width * 1.1));
		    bg.updateHitbox();
		    bg.screenCenter();
		    bg.antialiasing = FlxG.save.data.antialiasing;
		    add(bg);

            var front:FlxSprite = new FlxSprite(-650, 600).loadGraphic(Paths.loadImage('stagefront', 'shared'));
		    front.setGraphicSize(Std.int(front.width * 1.1));
		    front.updateHitbox();
	        front.antialiasing = FlxG.save.data.antialiasing;
		    front.scrollFactor.set(0.9, 0.9);
            add(front); 

		char1 = new Character(500, 300, charnamee, true);
		char1.setGraphicSize(Std.int(char1.width * 0.8));
		add(char1);
		char1.visible = false;


        var versionShit:FlxText = new FlxText(5, FlxG.height - 18, 0, name + " Developer Mode - Press p to change char", 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);



			
			}
	

		if(FlxG.keys.justPressed.DOWN) 
			{
				 char1.playAnim('singDOWN');
				 char1.updateHitbox();
				 char1.visible = true;
			}

		if(FlxG.keys.justPressed.LEFT) 
			{
					 char1.playAnim('singLEFT');
					 char1.updateHitbox();
					 char1.visible = true;
			}
		if(FlxG.keys.justPressed.RIGHT) 
			{
					char1.playAnim('singRIGHT');
					char1.updateHitbox();
					char1.visible = true;
			}
		if(FlxG.keys.justPressed.UP) 
			{
					char1.playAnim('singUP');
					char1.updateHitbox();
					char1.visible = true;
			}

			super.update(elapsed);
		
	}

}
