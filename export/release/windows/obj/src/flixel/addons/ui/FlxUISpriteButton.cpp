// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7ec0642bbae75140_26_new,"flixel.addons.ui.FlxUISpriteButton","new",0x3b737abe,"flixel.addons.ui.FlxUISpriteButton.new","flixel/addons/ui/FlxUISpriteButton.hx",26,0xcd05ded3)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec0642bbae75140_42_resize,"flixel.addons.ui.FlxUISpriteButton","resize",0xe723fe56,"flixel.addons.ui.FlxUISpriteButton.resize","flixel/addons/ui/FlxUISpriteButton.hx",42,0xcd05ded3)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec0642bbae75140_49_autoCenterLabel,"flixel.addons.ui.FlxUISpriteButton","autoCenterLabel",0x0d1e740e,"flixel.addons.ui.FlxUISpriteButton.autoCenterLabel","flixel/addons/ui/FlxUISpriteButton.hx",49,0xcd05ded3)
namespace flixel{
namespace addons{
namespace ui{

void FlxUISpriteButton_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Asset, ::Dynamic OnClick){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_7ec0642bbae75140_26_new)
HXLINE(  27)		super::__construct(X,Y,OnClick);
HXLINE(  32)		this->up_color = (this->over_color = (this->down_color = (this->up_toggle_color = (this->over_toggle_color = (this->down_toggle_color = -1)))));
HXLINE(  34)		if (::hx::IsNotNull( Asset )) {
HXLINE(  36)			this->set_label(Asset);
            		}
            	}

Dynamic FlxUISpriteButton_obj::__CreateEmpty() { return new FlxUISpriteButton_obj; }

void *FlxUISpriteButton_obj::_hx_vtable = 0;

Dynamic FlxUISpriteButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUISpriteButton_obj > _hx_result = new FlxUISpriteButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxUISpriteButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x69939bda) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x2a6d0b59) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2a6d0b59;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x69939bda;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x6b3699ba || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::addons::ui::interfaces::IFlxUIButton_obj _hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_addons_ui_interfaces_IFlxUIButton= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::destroy,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_toggled,
	(  ::flixel::FlxSprite (::hx::Object::*)( ::flixel::FlxSprite))&::flixel::addons::ui::FlxUISpriteButton_obj::set_toggle_label,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::get_justMousedOver,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::get_mouseIsOver,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::get_mouseIsOut,
	( bool (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::get_justMousedOut,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::autoCenterLabel,
	( void (::hx::Object::*)(::cpp::VirtualArray,::hx::Null< int > ,::hx::Null< int > ,::Array< ::Dynamic>,::hx::Null< int > ,::hx::Null< Float > ,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< int > ,::Array< int >))&::flixel::addons::ui::FlxUISpriteButton_obj::loadGraphicSlice9,
	( void (::hx::Object::*)(::String))&::flixel::addons::ui::FlxUISpriteButton_obj::forceStateHandler,
};

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_visible,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISpriteButton_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISpriteButton_obj::set_y,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_visible,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::destroy,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISpriteButton_obj::set_visible,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISpriteButton_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISpriteButton_obj::set_y,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISpriteButton_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISpriteButton_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISpriteButton_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (::hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUISpriteButton_obj::set_params,
};

void *FlxUISpriteButton_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x2772d80c: return &_hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_addons_ui_interfaces_IFlxUIButton;
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_IFlxBasic;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_util_IFlxDestroyable;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUISpriteButton__hx_flixel_addons_ui_interfaces_IHasParams;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUISpriteButton_obj::resize(Float W,Float H){
            	HX_STACKFRAME(&_hx_pos_7ec0642bbae75140_42_resize)
HXLINE(  43)		this->super::resize(W,H);
HXLINE(  44)		this->autoCenterLabel();
            	}


void FlxUISpriteButton_obj::autoCenterLabel(){
            	HX_STACKFRAME(&_hx_pos_7ec0642bbae75140_49_autoCenterLabel)
HXDLIN(  49)		if (::hx::IsNotNull( this->label )) {
HXLINE(  51)			if (::Std_obj::isOfType(this->label,::hx::ClassOf< ::flixel::group::FlxTypedSpriteGroup >())) {
HXLINE(  53)				 ::flixel::group::FlxTypedSpriteGroup g = ( ( ::flixel::group::FlxTypedSpriteGroup)(this->label) );
HXLINE(  54)				{
HXLINE(  54)					int _g = 0;
HXDLIN(  54)					::Array< ::Dynamic> _g1 = g->group->members;
HXDLIN(  54)					while((_g < _g1->length)){
HXLINE(  54)						 ::flixel::FlxSprite sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  54)						_g = (_g + 1);
HXLINE(  56)						sprite->set_x((-(sprite->get_width()) / ( (Float)(2) )));
HXLINE(  57)						sprite->set_y((-(sprite->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  62)				Float W = g->get_width();
HXLINE(  63)				Float H = g->get_height();
HXLINE(  65)				{
HXLINE(  65)					int _g2 = 0;
HXDLIN(  65)					::Array< ::Dynamic> _g3 = g->group->members;
HXDLIN(  65)					while((_g2 < _g3->length)){
HXLINE(  65)						 ::flixel::FlxSprite sprite = _g3->__get(_g2).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  65)						_g2 = (_g2 + 1);
HXLINE(  67)						sprite->set_x(((W - sprite->get_width()) / ( (Float)(2) )));
HXLINE(  68)						sprite->set_y(((H - sprite->get_height()) / ( (Float)(2) )));
            					}
            				}
            			}
HXLINE(  71)			this->super::autoCenterLabel();
            		}
            	}



::hx::ObjectPtr< FlxUISpriteButton_obj > FlxUISpriteButton_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Asset, ::Dynamic OnClick) {
	::hx::ObjectPtr< FlxUISpriteButton_obj > __this = new FlxUISpriteButton_obj();
	__this->__construct(__o_X,__o_Y,Asset,OnClick);
	return __this;
}

::hx::ObjectPtr< FlxUISpriteButton_obj > FlxUISpriteButton_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y, ::flixel::FlxSprite Asset, ::Dynamic OnClick) {
	FlxUISpriteButton_obj *__this = (FlxUISpriteButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUISpriteButton_obj), true, "flixel.addons.ui.FlxUISpriteButton"));
	*(void **)__this = FlxUISpriteButton_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Asset,OnClick);
	return __this;
}

FlxUISpriteButton_obj::FlxUISpriteButton_obj()
{
}

::hx::Val FlxUISpriteButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return ::hx::Val( autoCenterLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxUISpriteButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxUISpriteButton_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUISpriteButton_obj_sMemberFields[] = {
	HX_("resize",f4,59,7b,08),
	HX_("autoCenterLabel",b0,b4,79,af),
	::String(null()) };

::hx::Class FlxUISpriteButton_obj::__mClass;

void FlxUISpriteButton_obj::__register()
{
	FlxUISpriteButton_obj _hx_dummy;
	FlxUISpriteButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUISpriteButton",cc,03,3c,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUISpriteButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUISpriteButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUISpriteButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUISpriteButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
