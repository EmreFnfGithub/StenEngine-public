// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_MiddleScrollOption
#include <MiddleScrollOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0223c7916a99f2e4_1843_new,"MiddleScrollOption","new",0xfbf83ee9,"MiddleScrollOption.new","Options.hx",1843,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0223c7916a99f2e4_1852_left,"MiddleScrollOption","left",0x7bec515e,"MiddleScrollOption.left","Options.hx",1852,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0223c7916a99f2e4_1861_right,"MiddleScrollOption","right",0x69e7eea5,"MiddleScrollOption.right","Options.hx",1861,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_0223c7916a99f2e4_1868_updateDisplay,"MiddleScrollOption","updateDisplay",0x8079e302,"MiddleScrollOption.updateDisplay","Options.hx",1868,0x9d9a0240)

void MiddleScrollOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_1843_new)
HXLINE(1844)		super::__construct();
HXLINE(1845)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1846)			this->description = HX_("This option cannot be toggled in the pause menu.",b4,21,dd,c9);
            		}
            		else {
HXLINE(1848)			this->description = desc;
            		}
            	}

Dynamic MiddleScrollOption_obj::__CreateEmpty() { return new MiddleScrollOption_obj; }

void *MiddleScrollOption_obj::_hx_vtable = 0;

Dynamic MiddleScrollOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MiddleScrollOption_obj > _hx_result = new MiddleScrollOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MiddleScrollOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x56368dff;
	}
}

bool MiddleScrollOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_1852_left)
HXLINE(1853)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1854)			return false;
            		}
HXLINE(1855)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE(1856)		this->display = this->updateDisplay();
HXLINE(1857)		return true;
            	}


bool MiddleScrollOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_1861_right)
HXLINE(1862)		this->left();
HXLINE(1863)		return true;
            	}


::String MiddleScrollOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_0223c7916a99f2e4_1868_updateDisplay)
HXDLIN(1868)		::String _hx_tmp;
HXDLIN(1868)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) )) {
HXDLIN(1868)			_hx_tmp = HX_("Enabled",61,2c,82,4b);
            		}
            		else {
HXDLIN(1868)			_hx_tmp = HX_("Disabled",9c,fd,b5,55);
            		}
HXDLIN(1868)		return ((HX_("Middle Scroll: < ",02,de,a4,bd) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< MiddleScrollOption_obj > MiddleScrollOption_obj::__new(::String desc) {
	::hx::ObjectPtr< MiddleScrollOption_obj > __this = new MiddleScrollOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< MiddleScrollOption_obj > MiddleScrollOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	MiddleScrollOption_obj *__this = (MiddleScrollOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MiddleScrollOption_obj), true, "MiddleScrollOption"));
	*(void **)__this = MiddleScrollOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

MiddleScrollOption_obj::MiddleScrollOption_obj()
{
}

::hx::Val MiddleScrollOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *MiddleScrollOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MiddleScrollOption_obj_sStaticStorageInfo = 0;
#endif

static ::String MiddleScrollOption_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class MiddleScrollOption_obj::__mClass;

void MiddleScrollOption_obj::__register()
{
	MiddleScrollOption_obj _hx_dummy;
	MiddleScrollOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MiddleScrollOption",77,96,8a,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MiddleScrollOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MiddleScrollOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MiddleScrollOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MiddleScrollOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

