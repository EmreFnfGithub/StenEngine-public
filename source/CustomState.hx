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
#if FEATURE_DISCORD
import Discord.DiscordClient;
#end
import sys.FileSystem;
import sys.io.File;

using StringTools;

class CustomState extends MusicBeatState
{
    public static var char1:Character = null;
	public static var hmmmmmmmmmmmmmmmm:String = sys.io.File.getContent('assets/data/language.txt');
	public static var language:String = hmmmmmmmmmmmmmmmm;
   
    var h5:Bool = false;
    var h6:Bool = false;
    var eventsEnter = false;
    
            
    

    public static var statename:String;

    override function create()
    {
        if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/DiscordRPC.txt"))
            {
                var h10:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/DiscordRPC.txt");
                #if FEATURE_DISCORD
                // Updating Discord Rich Presence
                DiscordClient.changePresence(h10,null);
                #end 
            }

       var h:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/enter.txt");
       if(h == "StoryMenuState")
        {
            FlxG.switchState(new StoryMenuState());
        }
       if(h == "MainMenuState")
        {
            FlxG.switchState(new MainMenuState());
        }
       if(h == "OptionsDirect")
        {
            FlxG.switchState(new OptionsDirect());
        }
       if(h == "Freeplaystate")
        {
            FlxG.switchState(new OptionsDirect());
        }
        if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/bg.png"))
            {
                var bg:FlxSprite = new FlxSprite(-100).loadGraphic("assets/custom/custom_mainmenustates/" + statename + "/bg.png");
		        bg.scrollFactor.x = 0;
		        bg.scrollFactor.y = 0.10;
		        bg.setGraphicSize(Std.int(bg.width * 1.1));
		        bg.updateHitbox();
		        bg.screenCenter();
		        bg.antialiasing = FlxG.save.data.antialiasing;
		        add(bg);
                
            }
        if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/downTextEnable.txt"))
            {
                var h3:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/scripts/downTextEnable.txt");
                var h4:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/scripts/downTextFont.txt");
                var thetext1:FlxText = new FlxText(5, FlxG.height - 18, 0, h3, 12);
				thetext1.scrollFactor.set();
				thetext1.setFormat(h4, 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				add(thetext1);
            }
        if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/addPlayerChar.txt"))
            {
                var readingChar:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/scripts/addPlayerChar.txt");
                char1 = new Character(500, 300, readingChar, true);
		        char1.setGraphicSize(Std.int(char1.width * 0.8));
		        add(char1);
                char1.visible = false;

                if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/addPlayerChar.txt"))
                    {
                        char1.playAnim('idle');
                        char1.updateHitbox();
                        char1.visible = true;
                        if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/playerCharNotesTrue.txt")) 
                            {
                                if(h6 == false)
                                    {
                                        char1.visible = false;
                                        h6 = true;
                                    }
                              
                            }
                    }
                
            }

            if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/playsong.txt"))
                {
                   var h8:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/scripts/playsong.txt");
                        FlxG.sound.playMusic("assets/custom/custom_mainmenustates/" + statename + "/" + h8 + ".ogg");
                }

            if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/startLink.txt"))
                    {
                        var h9:String = sys.io.File.getContent("assets/custom/custom_mainmenustates/" + statename + "/scripts/startLink.txt");
                        CoolUtil.browserLoad(h9);                      
                    }
            

           
       
        

    }
  
    override function update(elapsed:Float)
    {
        
        
        if(sys.FileSystem.exists("assets/custom/custom_mainmenustates/" + statename + "/scripts/playerCharNotesTrue.txt"))
            {
                h5 = true;
            }
            if(h5 == true)
                {
                    if(controls.ACCEPT)
                        {
                            char1.playAnim('idle');
                            char1.updateHitbox();
                            char1.visible = true;
                        }
                    if(FlxG.keys.justPressed.DOWN)
                        {
                            char1.playAnim('singDOWN');
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
                    if(FlxG.keys.justPressed.LEFT)
                        {
                            char1.playAnim('singLEFT');
                            char1.updateHitbox();
                            char1.visible = true;
                        }
                }

        if(controls.BACK)
            {
                FlxG.switchState(new MainMenuState());
            }
            super.update(elapsed);
    }
    
}
