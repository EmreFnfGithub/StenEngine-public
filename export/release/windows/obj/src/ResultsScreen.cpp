// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_HitGraph
#include <HitGraph.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OFLSprite
#include <OFLSprite.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Ratings
#include <Ratings.h>
#endif
#ifndef INCLUDED_Replay
#include <Replay.h>
#endif
#ifndef INCLUDED_ResultsScreen
#include <ResultsScreen.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3efdaff7283d8f05_36_new,"ResultsScreen","new",0x2d002ed4,"ResultsScreen.new","ResultsScreen.hx",36,0x463a871c)
HX_LOCAL_STACK_FRAME(_hx_pos_3efdaff7283d8f05_176_create,"ResultsScreen","create",0xf19e8908,"ResultsScreen.create","ResultsScreen.hx",176,0x463a871c)
HX_LOCAL_STACK_FRAME(_hx_pos_3efdaff7283d8f05_57_create,"ResultsScreen","create",0xf19e8908,"ResultsScreen.create","ResultsScreen.hx",57,0x463a871c)
HX_LOCAL_STACK_FRAME(_hx_pos_3efdaff7283d8f05_190_update,"ResultsScreen","update",0xfc94a815,"ResultsScreen.update","ResultsScreen.hx",190,0x463a871c)

void ResultsScreen_obj::__construct( ::Dynamic BGColor){
            	HX_STACKFRAME(&_hx_pos_3efdaff7283d8f05_36_new)
HXLINE( 187)		this->frames = 0;
HXLINE(  36)		super::__construct(BGColor);
            	}

Dynamic ResultsScreen_obj::__CreateEmpty() { return new ResultsScreen_obj; }

void *ResultsScreen_obj::_hx_vtable = 0;

Dynamic ResultsScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResultsScreen_obj > _hx_result = new ResultsScreen_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResultsScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x69a2ba76) {
		if (inClassId<=(int)0x62817b24) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x62817b24;
			}
		} else {
			return inClassId==(int)0x69a2ba76;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ResultsScreen_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::ResultsScreen,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween tween){
            			HX_GC_STACKFRAME(&_hx_pos_3efdaff7283d8f05_176_create)
HXLINE( 177)			_gthis->graph->set_alpha((::Math_obj::max((tween->_secondsSinceStart - tween->_delayToUse),( (Float)(0) )) / tween->duration));
HXLINE( 178)			_gthis->graphSprite->set_alpha((::Math_obj::max((tween->_secondsSinceStart - tween->_delayToUse),( (Float)(0) )) / tween->duration));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3efdaff7283d8f05_57_create)
HXLINE(  56)		 ::ResultsScreen _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  58)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  59)		this->background->scrollFactor->set(null(),null());
HXLINE(  60)		this->add(this->background);
HXLINE(  62)		if (!(::PlayState_obj::inResults)) {
HXLINE(  64)			 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  64)			::String library = null();
HXDLIN(  64)			this->music = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  65)			this->music->set_volume(( (Float)(0) ));
HXLINE(  66)			 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->music;
HXDLIN(  66)			 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  66)			_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->music->_length / ( (Float)(2) ))),null()),null());
HXLINE(  67)			::flixel::FlxG_obj::sound->list->add(this->music).StaticCast<  ::flixel::_hx_system::FlxSound >();
            		}
HXLINE(  70)		this->background->set_alpha(( (Float)(0) ));
HXLINE(  72)		this->text =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,-55,0,HX_("Song Cleared!",20,a5,f1,45),null(),null());
HXLINE(  73)		this->text->set_size(34);
HXLINE(  74)		{
HXLINE(  74)			 ::flixel::text::FlxText _this = this->text;
HXDLIN(  74)			_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  74)			_this->set_borderColor(-16777216);
HXDLIN(  74)			_this->set_borderSize(( (Float)(4) ));
HXDLIN(  74)			_this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  75)		this->text->set_color(-1);
HXLINE(  76)		this->text->scrollFactor->set(null(),null());
HXLINE(  77)		this->add(this->text);
HXLINE(  79)		int score = ::PlayState_obj::instance->songScore;
HXLINE(  80)		if (::PlayState_obj::isStoryMode) {
HXLINE(  82)			score = ::PlayState_obj::campaignScore;
HXLINE(  83)			this->text->set_text(HX_("Week Cleared!",21,6d,d1,44));
            		}
HXLINE(  86)		int sicks;
HXDLIN(  86)		if (::PlayState_obj::isStoryMode) {
HXLINE(  86)			sicks = ::PlayState_obj::campaignSicks;
            		}
            		else {
HXLINE(  86)			sicks = ::PlayState_obj::sicks;
            		}
HXLINE(  87)		int goods;
HXDLIN(  87)		if (::PlayState_obj::isStoryMode) {
HXLINE(  87)			goods = ::PlayState_obj::campaignGoods;
            		}
            		else {
HXLINE(  87)			goods = ::PlayState_obj::goods;
            		}
HXLINE(  88)		int bads;
HXDLIN(  88)		if (::PlayState_obj::isStoryMode) {
HXLINE(  88)			bads = ::PlayState_obj::campaignBads;
            		}
            		else {
HXLINE(  88)			bads = ::PlayState_obj::bads;
            		}
HXLINE(  89)		int shits;
HXDLIN(  89)		if (::PlayState_obj::isStoryMode) {
HXLINE(  89)			shits = ::PlayState_obj::campaignShits;
            		}
            		else {
HXLINE(  89)			shits = ::PlayState_obj::shits;
            		}
HXLINE(  92)		int _hx_tmp;
HXDLIN(  92)		if (::PlayState_obj::isStoryMode) {
HXLINE(  92)			_hx_tmp = ::PlayState_obj::campaignMisses;
            		}
            		else {
HXLINE(  92)			_hx_tmp = ::PlayState_obj::misses;
            		}
HXDLIN(  92)		::String _hx_tmp1 = ((((((((((((HX_("Judgements:\nSicks - ",0c,4b,5e,27) + sicks) + HX_("\nGoods - ",c7,46,05,64)) + goods) + HX_("\nBads - ",3b,0e,4d,9d)) + bads) + HX_("\n\nMisses : ",bc,b5,a9,90)) + _hx_tmp) + HX_("\nHighest Combo: ",6e,77,5e,8a)) + (::PlayState_obj::highestCombo + 1)) + HX_("\nScore: ",8e,3b,e4,81)) + ::PlayState_obj::instance->songScore) + HX_("\nAccuracy: ",c9,2d,1f,3f));
HXDLIN(  92)		::String _hx_tmp2 = ((_hx_tmp1 + ::HelperFunctions_obj::truncateFloat(::PlayState_obj::instance->accuracy,2)) + HX_("%\n\n",25,1c,1c,00));
HXDLIN(  92)		::String _hx_tmp3 = ((_hx_tmp2 + ::Ratings_obj::GenerateLetterRank(::PlayState_obj::instance->accuracy)) + HX_("\nRate: ",30,15,f2,8f));
HXDLIN(  92)		::String _hx_tmp4;
HXDLIN(  92)		if (!(::PlayState_obj::loadRep)) {
HXLINE(  92)			_hx_tmp4 = HX_("\nF1 - Replay song",30,4d,ca,54);
            		}
            		else {
HXLINE(  92)			_hx_tmp4 = HX_("",00,00,00,00);
            		}
HXLINE(  91)		this->comboText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,-75,0,((((_hx_tmp3 + ::PlayState_obj::songMultiplier) + HX_("x\n\n",38,17,5b,00)) + _hx_tmp4) + HX_("\n        ",0a,8a,e8,e3)),null(),null());
HXLINE(  94)		this->comboText->set_size(28);
HXLINE(  95)		{
HXLINE(  95)			 ::flixel::text::FlxText _this1 = this->comboText;
HXDLIN(  95)			_this1->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN(  95)			_this1->set_borderColor(-16777216);
HXDLIN(  95)			_this1->set_borderSize(( (Float)(4) ));
HXDLIN(  95)			_this1->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  96)		this->comboText->set_color(-1);
HXLINE(  97)		this->comboText->scrollFactor->set(null(),null());
HXLINE(  98)		this->add(this->comboText);
HXLINE( 100)		::String _hx_tmp5;
HXDLIN( 100)		if (::KeyBinds_obj::gamepad) {
HXLINE( 100)			_hx_tmp5 = HX_("A",41,00,00,00);
            		}
            		else {
HXLINE( 100)			_hx_tmp5 = HX_("ENTER",f8,a4,74,ee);
            		}
HXDLIN( 100)		this->contText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 475),(::flixel::FlxG_obj::height + 50),0,((HX_("Press ",5d,33,55,e3) + _hx_tmp5) + HX_(" to continue.",22,53,88,ca)),null(),null());
HXLINE( 101)		this->contText->set_size(28);
HXLINE( 102)		{
HXLINE( 102)			 ::flixel::text::FlxText _this2 = this->contText;
HXDLIN( 102)			_this2->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 102)			_this2->set_borderColor(-16777216);
HXDLIN( 102)			_this2->set_borderSize(( (Float)(4) ));
HXDLIN( 102)			_this2->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 103)		this->contText->set_color(-1);
HXLINE( 104)		this->contText->scrollFactor->set(null(),null());
HXLINE( 105)		this->add(this->contText);
HXLINE( 107)		this->anotherBackground =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 500),45,null())->makeGraphic(450,240,-16777216,null(),null());
HXLINE( 108)		this->anotherBackground->scrollFactor->set(null(),null());
HXLINE( 109)		this->anotherBackground->set_alpha(( (Float)(0) ));
HXLINE( 110)		this->add(this->anotherBackground);
HXLINE( 112)		this->graph =  ::HitGraph_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 500),45,495,240);
HXLINE( 113)		this->graph->set_alpha(( (Float)(0) ));
HXLINE( 115)		this->graphSprite =  ::OFLSprite_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 510),45,460,240,this->graph);
HXLINE( 117)		this->graphSprite->scrollFactor->set(null(),null());
HXLINE( 118)		this->graphSprite->set_alpha(( (Float)(0) ));
HXLINE( 120)		this->add(this->graphSprite);
HXLINE( 122)		Float sicks1 = ::HelperFunctions_obj::truncateFloat((( (Float)(::PlayState_obj::sicks) ) / ( (Float)(::PlayState_obj::goods) )),1);
HXLINE( 123)		Float goods1 = ::HelperFunctions_obj::truncateFloat((( (Float)(::PlayState_obj::goods) ) / ( (Float)(::PlayState_obj::bads) )),1);
HXLINE( 125)		if ((sicks1 == ::Math_obj::POSITIVE_INFINITY)) {
HXLINE( 126)			sicks1 = ( (Float)(0) );
            		}
HXLINE( 127)		if ((goods1 == ::Math_obj::POSITIVE_INFINITY)) {
HXLINE( 128)			goods1 = ( (Float)(0) );
            		}
HXLINE( 130)		Float mean = ( (Float)(0) );
HXLINE( 132)		{
HXLINE( 132)			int _g = 0;
HXDLIN( 132)			int _g1 = ( (::cpp::VirtualArray)(::PlayState_obj::rep->replay->__Field(HX_("songNotes",2c,24,45,cf),::hx::paccDynamic)) )->get_length();
HXDLIN( 132)			while((_g < _g1)){
HXLINE( 132)				_g = (_g + 1);
HXDLIN( 132)				int i = (_g - 1);
HXLINE( 138)				::Array< Float > obj = ( (::Array< Float >)( ::Dynamic(::PlayState_obj::rep->replay->__Field(HX_("songNotes",2c,24,45,cf),::hx::paccDynamic))->__GetItem(i)) );
HXLINE( 140)				::String obj2 = ( (::String)( ::Dynamic(::PlayState_obj::rep->replay->__Field(HX_("songJudgements",53,36,93,44),::hx::paccDynamic))->__GetItem(i)) );
HXLINE( 142)				Float obj3 = obj->__get(0);
HXLINE( 144)				Float diff = obj->__get(3);
HXLINE( 145)				::String judge = obj2;
HXLINE( 146)				if ((diff != (( (Float)((166 * ::Math_obj::floor(((( (Float)(::PlayState_obj::rep->replay->__Field(HX_("sf",93,64,00,00),::hx::paccDynamic)) ) / ( (Float)(60) )) * ( (Float)(1000) ))))) ) / ( (Float)(166) )))) {
HXLINE( 147)					mean = (mean + diff);
            				}
HXLINE( 148)				if ((obj->__get(1) != -1)) {
HXLINE( 149)					this->graph->addToHistory((diff / ::PlayState_obj::songMultiplier),judge,(obj3 / ::PlayState_obj::songMultiplier));
            				}
            			}
            		}
HXLINE( 152)		bool _hx_tmp6;
HXDLIN( 152)		if ((sicks1 != ::Math_obj::POSITIVE_INFINITY)) {
HXLINE( 152)			_hx_tmp6 = (sicks1 == ::Math_obj::NaN);
            		}
            		else {
HXLINE( 152)			_hx_tmp6 = true;
            		}
HXDLIN( 152)		if (_hx_tmp6) {
HXLINE( 153)			sicks1 = ( (Float)(0) );
            		}
HXLINE( 154)		bool _hx_tmp7;
HXDLIN( 154)		if ((goods1 != ::Math_obj::POSITIVE_INFINITY)) {
HXLINE( 154)			_hx_tmp7 = (goods1 == ::Math_obj::NaN);
            		}
            		else {
HXLINE( 154)			_hx_tmp7 = true;
            		}
HXDLIN( 154)		if (_hx_tmp7) {
HXLINE( 155)			goods1 = ( (Float)(0) );
            		}
HXLINE( 157)		this->graph->update();
HXLINE( 159)		mean = ::HelperFunctions_obj::truncateFloat((mean / ( (Float)(( (::cpp::VirtualArray)(::PlayState_obj::rep->replay->__Field(HX_("songNotes",2c,24,45,cf),::hx::paccDynamic)) )->get_length()) )),2);
HXLINE( 161)		this->settingsText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,(::flixel::FlxG_obj::height + 50),0,((((((((((HX_("Mean: ",4b,bc,64,31) + mean) + HX_("ms (SICK:",0e,12,1e,ae)) + ::Ratings_obj::timingWindows->__get(3)) + HX_("ms,GOOD:",97,08,3a,b6)) + ::Ratings_obj::timingWindows->__get(2)) + HX_("ms,BAD:",fb,37,21,31)) + ::Ratings_obj::timingWindows->__get(1)) + HX_("ms,SHIT:",b4,00,64,9a)) + ::Ratings_obj::timingWindows->__get(0)) + HX_("ms)",03,1a,53,00)),null(),null());
HXLINE( 163)		this->settingsText->set_size(16);
HXLINE( 164)		{
HXLINE( 164)			 ::flixel::text::FlxText _this3 = this->settingsText;
HXDLIN( 164)			_this3->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXDLIN( 164)			_this3->set_borderColor(-16777216);
HXDLIN( 164)			_this3->set_borderSize(( (Float)(2) ));
HXDLIN( 164)			_this3->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 165)		this->settingsText->set_color(-1);
HXLINE( 166)		this->settingsText->scrollFactor->set(null(),null());
HXLINE( 167)		this->add(this->settingsText);
HXLINE( 169)		::flixel::tweens::FlxTween_obj::tween(this->background, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.5))),((Float)0.5),null());
HXLINE( 170)		::flixel::tweens::FlxTween_obj::tween(this->text, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),20)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 171)		::flixel::tweens::FlxTween_obj::tween(this->comboText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),145)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 172)		::flixel::tweens::FlxTween_obj::tween(this->contText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(::flixel::FlxG_obj::height - 45))),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 173)		::flixel::tweens::FlxTween_obj::tween(this->settingsText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(::flixel::FlxG_obj::height - 35))),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 174)		::flixel::tweens::FlxTween_obj::tween(this->anotherBackground, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("onUpdate",88,7c,b2,66), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 182)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 184)		this->super::create();
            	}


void ResultsScreen_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_3efdaff7283d8f05_190_update)
HXLINE( 191)		if (::hx::IsNotNull( this->music )) {
HXLINE( 192)			if ((this->music->_volume < ((Float)0.5))) {
HXLINE( 193)				 ::flixel::_hx_system::FlxSound _g = this->music;
HXDLIN( 193)				_g->set_volume((_g->_volume + (((Float)0.01) * elapsed)));
            			}
            		}
HXLINE( 197)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 199)			if (::hx::IsNotNull( this->music )) {
HXLINE( 200)				 ::flixel::_hx_system::FlxSound _this = this->music;
HXDLIN( 200)				 ::Dynamic onComplete = null();
HXDLIN( 200)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 200)					_this->fadeTween->cancel();
            				}
HXDLIN( 200)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE( 202)			::PlayState_obj::loadRep = false;
HXLINE( 203)			::PlayState_obj::stageTesting = false;
HXLINE( 204)			::PlayState_obj::rep = null();
HXLINE( 207)			::Highscore_obj::saveScore(( (::String)(::PlayState_obj::SONG->__Field(HX_("songId",10,c3,88,2d),::hx::paccDynamic)) ),::Math_obj::round(( (Float)(::PlayState_obj::instance->songScore) )),::PlayState_obj::storyDifficulty);
HXLINE( 208)			::String _hx_tmp = ( (::String)(::PlayState_obj::SONG->__Field(HX_("songId",10,c3,88,2d),::hx::paccDynamic)) );
HXDLIN( 208)			::String _hx_tmp1 = ::Ratings_obj::GenerateLetterRank(::PlayState_obj::instance->accuracy);
HXDLIN( 208)			::Highscore_obj::saveCombo(_hx_tmp,_hx_tmp1,::PlayState_obj::storyDifficulty);
HXLINE( 211)			if (::PlayState_obj::isStoryMode) {
HXLINE( 213)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 213)				::String library = null();
HXDLIN( 213)				_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE( 214)				::Conductor_obj::changeBPM(( (Float)(102) ),null());
HXLINE( 215)				{
HXLINE( 215)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 215)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 215)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            			}
            			else {
HXLINE( 218)				 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 218)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 218)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 219)			::PlayState_obj::instance->clean();
            		}
HXLINE( 222)		bool _hx_tmp;
HXDLIN( 222)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 222)		if (_this->keyManager->checkStatusUnsafe(112,_this->status)) {
HXLINE( 222)			_hx_tmp = !(::PlayState_obj::loadRep);
            		}
            		else {
HXLINE( 222)			_hx_tmp = false;
            		}
HXDLIN( 222)		if (_hx_tmp) {
HXLINE( 224)			::PlayState_obj::rep = null();
HXLINE( 226)			::PlayState_obj::loadRep = false;
HXLINE( 227)			::PlayState_obj::stageTesting = false;
HXLINE( 230)			::Highscore_obj::saveScore(( (::String)(::PlayState_obj::SONG->__Field(HX_("songId",10,c3,88,2d),::hx::paccDynamic)) ),::Math_obj::round(( (Float)(::PlayState_obj::instance->songScore) )),::PlayState_obj::storyDifficulty);
HXLINE( 231)			::String _hx_tmp = ( (::String)(::PlayState_obj::SONG->__Field(HX_("songId",10,c3,88,2d),::hx::paccDynamic)) );
HXDLIN( 231)			::String _hx_tmp1 = ::Ratings_obj::GenerateLetterRank(::PlayState_obj::instance->accuracy);
HXDLIN( 231)			::Highscore_obj::saveCombo(_hx_tmp,_hx_tmp1,::PlayState_obj::storyDifficulty);
HXLINE( 234)			if (::hx::IsNotNull( this->music )) {
HXLINE( 235)				 ::flixel::_hx_system::FlxSound _this = this->music;
HXDLIN( 235)				 ::Dynamic onComplete = null();
HXDLIN( 235)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 235)					_this->fadeTween->cancel();
            				}
HXDLIN( 235)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(0) ),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE( 237)			::PlayState_obj::isStoryMode = false;
HXLINE( 238)			::PlayState_obj::storyDifficulty = ::PlayState_obj::storyDifficulty;
HXLINE( 239)			{
HXLINE( 239)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 239)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 239)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 240)			::PlayState_obj::instance->clean();
            		}
HXLINE( 243)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< ResultsScreen_obj > ResultsScreen_obj::__new( ::Dynamic BGColor) {
	::hx::ObjectPtr< ResultsScreen_obj > __this = new ResultsScreen_obj();
	__this->__construct(BGColor);
	return __this;
}

::hx::ObjectPtr< ResultsScreen_obj > ResultsScreen_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor) {
	ResultsScreen_obj *__this = (ResultsScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResultsScreen_obj), true, "ResultsScreen"));
	*(void **)__this = ResultsScreen_obj::_hx_vtable;
	__this->__construct(BGColor);
	return __this;
}

ResultsScreen_obj::ResultsScreen_obj()
{
}

void ResultsScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResultsScreen);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(anotherBackground,"anotherBackground");
	HX_MARK_MEMBER_NAME(graph,"graph");
	HX_MARK_MEMBER_NAME(graphSprite,"graphSprite");
	HX_MARK_MEMBER_NAME(comboText,"comboText");
	HX_MARK_MEMBER_NAME(contText,"contText");
	HX_MARK_MEMBER_NAME(settingsText,"settingsText");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(graphData,"graphData");
	HX_MARK_MEMBER_NAME(ranking,"ranking");
	HX_MARK_MEMBER_NAME(accuracy,"accuracy");
	HX_MARK_MEMBER_NAME(frames,"frames");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ResultsScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(anotherBackground,"anotherBackground");
	HX_VISIT_MEMBER_NAME(graph,"graph");
	HX_VISIT_MEMBER_NAME(graphSprite,"graphSprite");
	HX_VISIT_MEMBER_NAME(comboText,"comboText");
	HX_VISIT_MEMBER_NAME(contText,"contText");
	HX_VISIT_MEMBER_NAME(settingsText,"settingsText");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(graphData,"graphData");
	HX_VISIT_MEMBER_NAME(ranking,"ranking");
	HX_VISIT_MEMBER_NAME(accuracy,"accuracy");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ResultsScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"graph") ) { return ::hx::Val( graph ); }
		if (HX_FIELD_EQ(inName,"music") ) { return ::hx::Val( music ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ranking") ) { return ::hx::Val( ranking ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contText") ) { return ::hx::Val( contText ); }
		if (HX_FIELD_EQ(inName,"accuracy") ) { return ::hx::Val( accuracy ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"comboText") ) { return ::hx::Val( comboText ); }
		if (HX_FIELD_EQ(inName,"graphData") ) { return ::hx::Val( graphData ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"graphSprite") ) { return ::hx::Val( graphSprite ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"settingsText") ) { return ::hx::Val( settingsText ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"anotherBackground") ) { return ::hx::Val( anotherBackground ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResultsScreen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"graph") ) { graph=inValue.Cast<  ::HitGraph >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ranking") ) { ranking=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contText") ) { contText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accuracy") ) { accuracy=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"comboText") ) { comboText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphData") ) { graphData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"graphSprite") ) { graphSprite=inValue.Cast<  ::OFLSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"settingsText") ) { settingsText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"anotherBackground") ) { anotherBackground=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResultsScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("anotherBackground",91,e0,4b,cb));
	outFields->push(HX_("graph",4e,0f,ea,99));
	outFields->push(HX_("graphSprite",f3,cd,13,4b));
	outFields->push(HX_("comboText",1b,60,25,65));
	outFields->push(HX_("contText",bf,93,e0,23));
	outFields->push(HX_("settingsText",30,23,74,09));
	outFields->push(HX_("music",a5,d0,5a,10));
	outFields->push(HX_("graphData",98,50,1b,f0));
	outFields->push(HX_("ranking",b6,92,4a,ea));
	outFields->push(HX_("accuracy",39,06,c5,ff));
	outFields->push(HX_("frames",a6,af,85,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResultsScreen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ResultsScreen_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ResultsScreen_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ResultsScreen_obj,anotherBackground),HX_("anotherBackground",91,e0,4b,cb)},
	{::hx::fsObject /*  ::HitGraph */ ,(int)offsetof(ResultsScreen_obj,graph),HX_("graph",4e,0f,ea,99)},
	{::hx::fsObject /*  ::OFLSprite */ ,(int)offsetof(ResultsScreen_obj,graphSprite),HX_("graphSprite",f3,cd,13,4b)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ResultsScreen_obj,comboText),HX_("comboText",1b,60,25,65)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ResultsScreen_obj,contText),HX_("contText",bf,93,e0,23)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ResultsScreen_obj,settingsText),HX_("settingsText",30,23,74,09)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(ResultsScreen_obj,music),HX_("music",a5,d0,5a,10)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(ResultsScreen_obj,graphData),HX_("graphData",98,50,1b,f0)},
	{::hx::fsString,(int)offsetof(ResultsScreen_obj,ranking),HX_("ranking",b6,92,4a,ea)},
	{::hx::fsString,(int)offsetof(ResultsScreen_obj,accuracy),HX_("accuracy",39,06,c5,ff)},
	{::hx::fsInt,(int)offsetof(ResultsScreen_obj,frames),HX_("frames",a6,af,85,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResultsScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String ResultsScreen_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("text",ad,cc,f9,4c),
	HX_("anotherBackground",91,e0,4b,cb),
	HX_("graph",4e,0f,ea,99),
	HX_("graphSprite",f3,cd,13,4b),
	HX_("comboText",1b,60,25,65),
	HX_("contText",bf,93,e0,23),
	HX_("settingsText",30,23,74,09),
	HX_("music",a5,d0,5a,10),
	HX_("graphData",98,50,1b,f0),
	HX_("ranking",b6,92,4a,ea),
	HX_("accuracy",39,06,c5,ff),
	HX_("create",fc,66,0f,7c),
	HX_("frames",a6,af,85,ac),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ResultsScreen_obj::__mClass;

void ResultsScreen_obj::__register()
{
	ResultsScreen_obj _hx_dummy;
	ResultsScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ResultsScreen",e2,74,eb,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResultsScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResultsScreen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResultsScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResultsScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

