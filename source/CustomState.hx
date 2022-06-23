package;

import hscript.Expr;
import hscript.Parser;
import hscript.Interp;
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
#if sys
import sys.FileSystem;
import sys.io.File;
#end

using StringTools;

class CustomState extends MusicBeatState
{
    public static var char1:Character = null;
	#if sys
	public static var hmmmmmmmmmmmmmmmm:String = sys.io.File.getContent('assets/data/language.txt');
	public static var language:String = hmmmmmmmmmmmmmmmm;
	#end
   
    var h5:Bool = false;
    var h6:Bool = false;
    var eventsEnter = false;
    
            
    public static var interp:Interp;

    public static var statename:String;

	public static var hmmbool:Bool;

    override function create()
    {
        //set custom state jsons
        var jsonData = Paths.loadStateJson(statename);
				var data:StateData = cast jsonData;
                stenEngine.EngineMain.discordClient(data.rpc);
				if(data.escapeback == true)
					{
						hmmbool = true;
					}
				for (statespritelayer in data.flxsprites)
					{
						var newstatelayer:FlxSprite = new FlxSprite(statespritelayer.x,statespritelayer.y).loadGraphic(Paths.image(statespritelayer.image));
				        newstatelayer.scrollFactor.set(0, 0);
				        newstatelayer.antialiasing = FlxG.save.data.antialiasing;
						if(statespritelayer.animated == true)
							{
								newstatelayer.frames = Paths.getSparrowAtlas(statespritelayer.sparrowatlas);
							}
						if(statespritelayer.scrollFactor == true)
							{
								newstatelayer.scrollFactor.set();
							}
						newstatelayer.updateHitbox();
				        add(newstatelayer);
					}
                for (statetextlayer in data.flxtext)
					{
                        var shittext:FlxText = new FlxText(statetextlayer.x,statetextlayer.y, 0, statetextlayer.text, statetextlayer.size);
                        shittext.scrollFactor.set();
                        shittext.font = statetextlayer.font;
                        add(shittext);
					}
				 for (alphabetlayer in data.alphabets)
					{	               
						var newalphabetlayer:Alphabet = new Alphabet(alphabetlayer.x, alphabetlayer.y,alphabetlayer.text, true, false);
						if(alphabetlayer.isMenuItem == true)
						{
						      newalphabetlayer.isMenuItem = true;
						}
						add(newalphabetlayer);
					}
					
		super.create();
    }
    override function update(elapsed:Float)
    {
		if(hmmbool == true)
			{
				if(FlxG.keys.justPressed.ESCAPE)
					{
						FlxG.switchState(new MainMenuState());
					}
			}
        super.update(elapsed);
    }

    
}

typedef StateData = {
	var escapeback:Bool;
    var rpc:String;
    var flxsprites:Array<Sprites>;
    var flxtext:Array<Texts>;
	var alphabets:Array<Alphabets>;
}

typedef Sprites =
{
	var name:String;
	var x:Float;
	var y:Float;
	var image:String;
	var active:Bool;
	var scrollFactor:Bool;
	var animated:Bool;
	var sparrowatlas:String;
	var startanim:String;
}

typedef Texts =
{
	var name:String;
	var x:Float;
	var y:Float;
	var text:String;
    var font:String;
    var size:Int;
}

typedef Alphabets =
{
	var name:String;
	var x:Float;
	var y:Float;
	var text:String;
    var isMenuItem:Bool;
}
