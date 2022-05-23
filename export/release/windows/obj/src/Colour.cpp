// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Colour
#include <Colour.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0438001de6863180_1113_new,"Colour","new",0x7d6b835e,"Colour.new","Options.hx",1113,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0438001de6863180_1122_left,"Colour","left",0x3f54f349,"Colour.left","Options.hx",1122,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0438001de6863180_1131_right,"Colour","right",0xa20cfa5a,"Colour.right","Options.hx",1131,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0438001de6863180_1138_updateDisplay,"Colour","updateDisplay",0x69d12bb7,"Colour.updateDisplay","Options.hx",1138,0x9d9a0240)

void Colour_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_0438001de6863180_1113_new)
HXLINE(1114)		super::__construct();
HXLINE(1115)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1116)			this->description = HX_("This option cannot be toggled in the pause menu.",b4,21,dd,c9);
            		}
            		else {
HXLINE(1118)			this->description = desc;
            		}
            	}

Dynamic Colour_obj::__CreateEmpty() { return new Colour_obj; }

void *Colour_obj::_hx_vtable = 0;

Dynamic Colour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Colour_obj > _hx_result = new Colour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Colour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x5c65ff2c;
	}
}

bool Colour_obj::left(){
            	HX_STACKFRAME(&_hx_pos_0438001de6863180_1122_left)
HXLINE(1123)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1124)			return false;
            		}
HXLINE(1125)		::flixel::FlxG_obj::save->data->__SetField(HX_("colour",4c,c8,86,c6),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("colour",4c,c8,86,c6),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE(1126)		this->display = this->updateDisplay();
HXLINE(1127)		return true;
            	}


bool Colour_obj::right(){
            	HX_STACKFRAME(&_hx_pos_0438001de6863180_1131_right)
HXLINE(1132)		this->left();
HXLINE(1133)		return true;
            	}


::String Colour_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_0438001de6863180_1138_updateDisplay)
HXDLIN(1138)		::String _hx_tmp;
HXDLIN(1138)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("colour",4c,c8,86,c6),::hx::paccDynamic)) )) {
HXDLIN(1138)			_hx_tmp = HX_("Enabled",61,2c,82,4b);
            		}
            		else {
HXDLIN(1138)			_hx_tmp = HX_("Disabled",9c,fd,b5,55);
            		}
HXDLIN(1138)		return ((HX_("Colored HP Bars: < ",44,ef,e3,ac) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< Colour_obj > Colour_obj::__new(::String desc) {
	::hx::ObjectPtr< Colour_obj > __this = new Colour_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< Colour_obj > Colour_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	Colour_obj *__this = (Colour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Colour_obj), true, "Colour"));
	*(void **)__this = Colour_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

Colour_obj::Colour_obj()
{
}

::hx::Val Colour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Colour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Colour_obj_sStaticStorageInfo = 0;
#endif

static ::String Colour_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class Colour_obj::__mClass;

void Colour_obj::__register()
{
	Colour_obj _hx_dummy;
	Colour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Colour",6c,3c,1b,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Colour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Colour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Colour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Colour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

