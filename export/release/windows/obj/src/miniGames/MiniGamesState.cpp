// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_EngineEditorsState
#include <EngineEditorsState.h>
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
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_miniGames_CharacterTestState
#include <miniGames/CharacterTestState.h>
#endif
#ifndef INCLUDED_miniGames_DrawState
#include <miniGames/DrawState.h>
#endif
#ifndef INCLUDED_miniGames_MiniGamesState
#include <miniGames/MiniGamesState.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3a0c5fc3aa47bc34_29_new,"miniGames.MiniGamesState","new",0x3d498bdd,"miniGames.MiniGamesState.new","miniGames/MiniGamesState.hx",29,0xf4d14d12)
static const ::String _hx_array_data_0e8d596b_1[] = {
	HX_("Character Test",69,58,df,91),HX_("Draw Stage",a2,71,84,e6),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3a0c5fc3aa47bc34_45_create,"miniGames.MiniGamesState","create",0xf3c0379f,"miniGames.MiniGamesState.create","miniGames/MiniGamesState.hx",45,0xf4d14d12)
HX_LOCAL_STACK_FRAME(_hx_pos_3a0c5fc3aa47bc34_94_update,"miniGames.MiniGamesState","update",0xfeb656ac,"miniGames.MiniGamesState.update","miniGames/MiniGamesState.hx",94,0xf4d14d12)
HX_LOCAL_STACK_FRAME(_hx_pos_3a0c5fc3aa47bc34_146_update,"miniGames.MiniGamesState","update",0xfeb656ac,"miniGames.MiniGamesState.update","miniGames/MiniGamesState.hx",146,0xf4d14d12)
HX_LOCAL_STACK_FRAME(_hx_pos_3a0c5fc3aa47bc34_161_changeSelection,"miniGames.MiniGamesState","changeSelection",0x4bd51bb9,"miniGames.MiniGamesState.changeSelection","miniGames/MiniGamesState.hx",161,0xf4d14d12)
HX_LOCAL_STACK_FRAME(_hx_pos_3a0c5fc3aa47bc34_36_boot,"miniGames.MiniGamesState","boot",0x5b29d615,"miniGames.MiniGamesState.boot","miniGames/MiniGamesState.hx",36,0xf4d14d12)
namespace miniGames{

void MiniGamesState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_3a0c5fc3aa47bc34_29_new)
HXLINE(  40)		this->char2 = null();
HXLINE(  39)		this->char1 = null();
HXLINE(  34)		this->confirming = false;
HXLINE(  31)		this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_0e8d596b_1,2);
HXLINE(  29)		super::__construct(TransIn,TransOut);
            	}

Dynamic MiniGamesState_obj::__CreateEmpty() { return new MiniGamesState_obj; }

void *MiniGamesState_obj::_hx_vtable = 0;

Dynamic MiniGamesState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MiniGamesState_obj > _hx_result = new MiniGamesState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MiniGamesState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x681c6209 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MiniGamesState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_3a0c5fc3aa47bc34_45_create)
HXLINE(  48)		::DiscordClient_obj::changePresence(HX_("In the MiniGames",40,bc,74,3c),null(),null(),null(),null());
HXLINE(  51)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)		::String library = null();
HXDLIN(  51)		this->bg = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  52)		this->bg->set_color(-13290187);
HXLINE(  53)		this->add(this->bg);
HXLINE(  55)		this->grpOptionShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  56)		this->add(this->grpOptionShit);
HXLINE(  58)		this->char1 =  ::Character_obj::__alloc( HX_CTX ,( (Float)(870) ),( (Float)(180) ),HX_("monster-christmas",4f,88,85,27),true);
HXLINE(  59)		 ::Character _hx_tmp1 = this->char1;
HXDLIN(  59)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->char1->get_width() * ((Float)0.8))),null());
HXLINE(  60)		this->add(this->char1);
HXLINE(  61)		this->char1->set_visible(false);
HXLINE(  63)		this->char2 =  ::Character_obj::__alloc( HX_CTX ,( (Float)(870) ),( (Float)(180) ),HX_("pico",e5,e8,57,4a),true);
HXLINE(  64)		 ::Character _hx_tmp2 = this->char2;
HXDLIN(  64)		_hx_tmp2->setGraphicSize(::Std_obj::_hx_int((this->char2->get_width() * ((Float)0.6))),null());
HXLINE(  65)		this->add(this->char2);
HXLINE(  66)		this->char2->set_visible(false);
HXLINE(  68)		 ::flixel::text::FlxText versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 18),0,HX_("Coming Soon",fa,a1,f9,11),12,null());
HXLINE(  69)		versionShit->scrollFactor->set(null(),null());
HXLINE(  70)		versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = this->optionShit->length;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				int i = (_g - 1);
HXLINE(  75)				 ::Alphabet creditText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->optionShit->__get(i),true,false,null(),null(),null());
HXLINE(  76)				creditText->isMenuItem = true;
HXLINE(  77)				creditText->targetY = ( (Float)(i) );
HXLINE(  78)				this->grpOptionShit->add(creditText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  85)		this->changeSelection(null());
HXLINE(  89)		this->super::create();
            	}


void MiniGamesState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_3a0c5fc3aa47bc34_94_update)
HXLINE(  93)		 ::miniGames::MiniGamesState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  95)		this->super::update(elapsed);
HXLINE(  97)		bool upP = ::PlayerSettings_obj::player1->controls->_upP->check();
HXLINE(  98)		bool downP = ::PlayerSettings_obj::player1->controls->_downP->check();
HXLINE(  99)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 100)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 100)		bool space = _this->keyManager->checkStatusUnsafe(32,_this->status);
HXLINE( 104)		if ((this->optionShit->__get(::miniGames::MiniGamesState_obj::curSelected) == HX_("Character Test",69,58,df,91))) {
HXLINE( 106)			this->char1->dance(null(),null());
HXLINE( 107)			this->char1->updateHitbox();
HXLINE( 108)			this->char1->set_visible(true);
            		}
            		else {
HXLINE( 112)			this->char1->set_visible(false);
            		}
HXLINE( 116)		int shiftMult = 1;
HXLINE( 117)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 117)		if (_this1->keyManager->checkStatusUnsafe(16,_this1->status)) {
HXLINE( 118)			shiftMult = 3;
            		}
HXLINE( 120)		bool _hx_tmp;
HXDLIN( 120)		if (upP) {
HXLINE( 120)			_hx_tmp = !(this->confirming);
            		}
            		else {
HXLINE( 120)			_hx_tmp = false;
            		}
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 122)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 122)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 123)			this->changeSelection(-(shiftMult));
            		}
HXLINE( 125)		bool _hx_tmp1;
HXDLIN( 125)		if (downP) {
HXLINE( 125)			_hx_tmp1 = !(this->confirming);
            		}
            		else {
HXLINE( 125)			_hx_tmp1 = false;
            		}
HXDLIN( 125)		if (_hx_tmp1) {
HXLINE( 127)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 127)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 128)			this->changeSelection(shiftMult);
            		}
HXLINE( 131)		bool _hx_tmp2;
HXDLIN( 131)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 131)			_hx_tmp2 = !(this->confirming);
            		}
            		else {
HXLINE( 131)			_hx_tmp2 = false;
            		}
HXDLIN( 131)		if (_hx_tmp2) {
HXLINE( 132)			if ((::miniGames::MiniGamesState_obj::h == HX_("mainmenu",58,8e,02,b6))) {
HXLINE( 134)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 134)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 134)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE( 137)				 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::EngineEditorsState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 137)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 137)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 141)		bool _hx_tmp3;
HXDLIN( 141)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 141)			_hx_tmp3 = !(this->confirming);
            		}
            		else {
HXLINE( 141)			_hx_tmp3 = false;
            		}
HXDLIN( 141)		if (_hx_tmp3) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::miniGames::MiniGamesState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::effects::FlxFlicker flick){
            				HX_GC_STACKFRAME(&_hx_pos_3a0c5fc3aa47bc34_146_update)
HXLINE( 147)				::String _hx_switch_0 = _gthis->optionShit->__get(::miniGames::MiniGamesState_obj::curSelected);
            				if (  (_hx_switch_0==HX_("Character Test",69,58,df,91)) ){
HXLINE( 150)					 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::miniGames::CharacterTestState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 150)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 150)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
HXDLIN( 150)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("Draw Stage",a2,71,84,e6)) ){
HXLINE( 152)					 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::miniGames::DrawState_obj::__alloc( HX_CTX ,null(),null())) ),false);
HXDLIN( 152)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 152)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
HXDLIN( 152)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
HXLINE( 154)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 155)				_gthis->confirming = false;
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 143)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 143)			_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 144)			this->confirming = true;
HXLINE( 145)			::flixel::effects::FlxFlicker_obj::flicker(Dynamic( this->grpOptionShit->members->__get(::miniGames::MiniGamesState_obj::curSelected)).StaticCast<  ::Alphabet >(),1,((Float)0.06),true,false, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            	}


void MiniGamesState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_3a0c5fc3aa47bc34_161_changeSelection)
HXLINE( 162)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::miniGames::MiniGamesState >();
HXDLIN( 162)		::miniGames::MiniGamesState_obj::curSelected = (::miniGames::MiniGamesState_obj::curSelected + change);
HXLINE( 164)		if ((::miniGames::MiniGamesState_obj::curSelected < 0)) {
HXLINE( 165)			::miniGames::MiniGamesState_obj::curSelected = (this->optionShit->length - 1);
            		}
HXLINE( 166)		if ((::miniGames::MiniGamesState_obj::curSelected >= this->optionShit->length)) {
HXLINE( 167)			::miniGames::MiniGamesState_obj::curSelected = 0;
            		}
HXLINE( 169)		int bullShit = 0;
HXLINE( 171)		{
HXLINE( 171)			int _g = 0;
HXDLIN( 171)			::Array< ::Dynamic> _g1 = this->grpOptionShit->members;
HXDLIN( 171)			while((_g < _g1->length)){
HXLINE( 171)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 171)				_g = (_g + 1);
HXLINE( 173)				item->targetY = ( (Float)((bullShit - ::miniGames::MiniGamesState_obj::curSelected)) );
HXLINE( 174)				bullShit = (bullShit + 1);
HXLINE( 176)				item->set_alpha(((Float)0.6));
HXLINE( 178)				if ((item->targetY == 0)) {
HXLINE( 180)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MiniGamesState_obj,changeSelection,(void))

::String MiniGamesState_obj::h;

int MiniGamesState_obj::curSelected;


::hx::ObjectPtr< MiniGamesState_obj > MiniGamesState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MiniGamesState_obj > __this = new MiniGamesState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MiniGamesState_obj > MiniGamesState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MiniGamesState_obj *__this = (MiniGamesState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MiniGamesState_obj), true, "miniGames.MiniGamesState"));
	*(void **)__this = MiniGamesState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MiniGamesState_obj::MiniGamesState_obj()
{
}

void MiniGamesState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MiniGamesState);
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(confirming,"confirming");
	HX_MARK_MEMBER_NAME(grpOptionShit,"grpOptionShit");
	HX_MARK_MEMBER_NAME(char1,"char1");
	HX_MARK_MEMBER_NAME(char2,"char2");
	HX_MARK_MEMBER_NAME(bg,"bg");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MiniGamesState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(confirming,"confirming");
	HX_VISIT_MEMBER_NAME(grpOptionShit,"grpOptionShit");
	HX_VISIT_MEMBER_NAME(char1,"char1");
	HX_VISIT_MEMBER_NAME(char2,"char2");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MiniGamesState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"char1") ) { return ::hx::Val( char1 ); }
		if (HX_FIELD_EQ(inName,"char2") ) { return ::hx::Val( char2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"confirming") ) { return ::hx::Val( confirming ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"grpOptionShit") ) { return ::hx::Val( grpOptionShit ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MiniGamesState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { outValue = ( h ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val MiniGamesState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"char1") ) { char1=inValue.Cast<  ::Character >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char2") ) { char2=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"confirming") ) { confirming=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"grpOptionShit") ) { grpOptionShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MiniGamesState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MiniGamesState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("confirming",e2,8f,36,e0));
	outFields->push(HX_("grpOptionShit",1a,6e,9f,41));
	outFields->push(HX_("char1",9b,9c,b3,45));
	outFields->push(HX_("char2",9c,9c,b3,45));
	outFields->push(HX_("bg",c5,55,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MiniGamesState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MiniGamesState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsBool,(int)offsetof(MiniGamesState_obj,confirming),HX_("confirming",e2,8f,36,e0)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MiniGamesState_obj,grpOptionShit),HX_("grpOptionShit",1a,6e,9f,41)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(MiniGamesState_obj,char1),HX_("char1",9b,9c,b3,45)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(MiniGamesState_obj,char2),HX_("char2",9c,9c,b3,45)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MiniGamesState_obj,bg),HX_("bg",c5,55,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MiniGamesState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MiniGamesState_obj::h,HX_("h",68,00,00,00)},
	{::hx::fsInt,(void *) &MiniGamesState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MiniGamesState_obj_sMemberFields[] = {
	HX_("optionShit",d5,2d,ee,91),
	HX_("confirming",e2,8f,36,e0),
	HX_("grpOptionShit",1a,6e,9f,41),
	HX_("char1",9b,9c,b3,45),
	HX_("char2",9c,9c,b3,45),
	HX_("bg",c5,55,00,00),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void MiniGamesState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MiniGamesState_obj::h,"h");
	HX_MARK_MEMBER_NAME(MiniGamesState_obj::curSelected,"curSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MiniGamesState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MiniGamesState_obj::h,"h");
	HX_VISIT_MEMBER_NAME(MiniGamesState_obj::curSelected,"curSelected");
};

#endif

::hx::Class MiniGamesState_obj::__mClass;

static ::String MiniGamesState_obj_sStaticFields[] = {
	HX_("h",68,00,00,00),
	HX_("curSelected",fb,eb,ab,32),
	::String(null())
};

void MiniGamesState_obj::__register()
{
	MiniGamesState_obj _hx_dummy;
	MiniGamesState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("miniGames.MiniGamesState",6b,59,8d,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MiniGamesState_obj::__GetStatic;
	__mClass->mSetStaticField = &MiniGamesState_obj::__SetStatic;
	__mClass->mMarkFunc = MiniGamesState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MiniGamesState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MiniGamesState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MiniGamesState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MiniGamesState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MiniGamesState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MiniGamesState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MiniGamesState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3a0c5fc3aa47bc34_36_boot)
HXDLIN(  36)		curSelected = 0;
            	}
}

} // end namespace miniGames
