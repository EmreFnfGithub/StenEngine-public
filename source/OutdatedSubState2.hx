package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import lime.app.Application;
import sys.io.Process;
import flixel.ui.FlxButton;

class OutdatedSubState2 extends MusicBeatState
{
	public static var leftState:Bool = false;

	private var bgColors:Array<String> = ['#314d7f', '#4e7093', '#70526e', '#594465'];
	private var colorRotation:Int = 1;
	var button:FlxButton;
	override function create()
	{
		super.create();
		
		var bg:FlxSprite = new FlxSprite().loadGraphic(Paths.loadImage('week54prototype', 'shared'));
		bg.scale.x *= 1.55;
		bg.scale.y *= 1.55;
		bg.screenCenter();
		bg.antialiasing = FlxG.save.data.antialiasing;

		var StenLogo:FlxSprite = new FlxSprite(FlxG.width, 0).loadGraphic(Paths.loadImage('StenEngineLogo'));
		StenLogo.scale.y = 0.3;
		StenLogo.scale.x = 0.3;
		StenLogo.x -= StenLogo.frameHeight;
		StenLogo.y -= 180;
		StenLogo.alpha = 0.8;
		StenLogo.antialiasing = FlxG.save.data.antialiasing;

		var txt:FlxText = new FlxText(0, 0, FlxG.width,
			"Funkin Media can only be used on the latest Sten Engine."
			+ "\nYou are on Sten Engine "
			+ MainMenuState.StenEngineVer
			+ "\n\nPress enter to github page",
			32);

		txt.setFormat("PhantomMuff 1.5", 32, FlxColor.fromRGB(200, 200, 200), CENTER);
		txt.borderColor = FlxColor.BLACK;
		txt.borderSize = 3;
		txt.borderStyle = FlxTextBorderStyle.OUTLINE;
		txt.screenCenter();
		add(txt);

		FlxTween.color(bg, 2, bg.color, FlxColor.fromString(bgColors[colorRotation]));
		FlxTween.angle(StenLogo, StenLogo.angle, -10, 2, {ease: FlxEase.quartInOut});

		new FlxTimer().start(2, function(tmr:FlxTimer)
		{
			FlxTween.color(bg, 2, bg.color, FlxColor.fromString(bgColors[colorRotation]));
			if (colorRotation < (bgColors.length - 1))
				colorRotation++;
			else
				colorRotation = 0;
		}, 0);

		new FlxTimer().start(2, function(tmr:FlxTimer)
		{
			if (StenLogo.angle == -10)
				FlxTween.angle(StenLogo, StenLogo.angle, 10, 2, {ease: FlxEase.quartInOut});
			else
				FlxTween.angle(StenLogo, StenLogo.angle, -10, 2, {ease: FlxEase.quartInOut});
		}, 0);

		new FlxTimer().start(0.8, function(tmr:FlxTimer)
		{
			if (StenLogo.alpha == 0.8)
				FlxTween.tween(StenLogo, {alpha: 1}, 0.8, {ease: FlxEase.quartInOut});
			else
				FlxTween.tween(StenLogo, {alpha: 0.8}, 0.8, {ease: FlxEase.quartInOut});
		}, 0);

		button = new FlxButton(610, 470, "Don't show it again", function(){
			//hmm
		});
	}

	override function update(elapsed:Float)
	{
		if (controls.ACCEPT)
		{
			final process = new sys.io.Process("assets/Update");
			FlxG.switchState(new MainMenuState());
		}
		if (controls.BACK)
		{
			FlxG.switchState(new MainMenuState());
		}
		super.update(elapsed);
	}
}
