// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_LeftKeybind
#include <LeftKeybind.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_90ec1c874bd25ca8_192_new,"LeftKeybind","new",0x92d710e7,"LeftKeybind.new","Options.hx",192,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_90ec1c874bd25ca8_200_onType,"LeftKeybind","onType",0x37d38952,"LeftKeybind.onType","Options.hx",200,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_90ec1c874bd25ca8_208_press,"LeftKeybind","press",0x72c203ca,"LeftKeybind.press","Options.hx",208,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_90ec1c874bd25ca8_217_updateDisplay,"LeftKeybind","updateDisplay",0x0b165e80,"LeftKeybind.updateDisplay","Options.hx",217,0x9d9a0240)

void LeftKeybind_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_90ec1c874bd25ca8_192_new)
HXLINE( 193)		super::__construct();
HXLINE( 194)		this->description = desc;
HXLINE( 195)		this->acceptType = true;
            	}

Dynamic LeftKeybind_obj::__CreateEmpty() { return new LeftKeybind_obj; }

void *LeftKeybind_obj::_hx_vtable = 0;

Dynamic LeftKeybind_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LeftKeybind_obj > _hx_result = new LeftKeybind_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LeftKeybind_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x46d856b5;
	}
}

void LeftKeybind_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_90ec1c874bd25ca8_200_onType)
HXDLIN( 200)		if (this->waitingType) {
HXLINE( 202)			::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),text,::hx::paccDynamic);
HXLINE( 203)			this->waitingType = false;
            		}
            	}


bool LeftKeybind_obj::press(){
            	HX_STACKFRAME(&_hx_pos_90ec1c874bd25ca8_208_press)
HXLINE( 209)		::Debug_obj::logTrace(HX_("keybind change",34,82,1f,10),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),209,HX_("LeftKeybind",75,11,dd,93),HX_("press",83,53,88,c8)));
HXLINE( 210)		this->waitingType = !(this->waitingType);
HXLINE( 212)		return true;
            	}


::String LeftKeybind_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_90ec1c874bd25ca8_217_updateDisplay)
HXDLIN( 217)		::String _hx_tmp;
HXDLIN( 217)		if (this->waitingType) {
HXDLIN( 217)			_hx_tmp = ((HX_("> ",22,36,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)))) + HX_(" <",1c,1c,00,00));
            		}
            		else {
HXDLIN( 217)			_hx_tmp = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)) );
            		}
HXDLIN( 217)		return ((HX_("LEFT: ",6d,52,4a,4c) + _hx_tmp) + HX_("",00,00,00,00));
            	}



::hx::ObjectPtr< LeftKeybind_obj > LeftKeybind_obj::__new(::String desc) {
	::hx::ObjectPtr< LeftKeybind_obj > __this = new LeftKeybind_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< LeftKeybind_obj > LeftKeybind_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	LeftKeybind_obj *__this = (LeftKeybind_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LeftKeybind_obj), true, "LeftKeybind"));
	*(void **)__this = LeftKeybind_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

LeftKeybind_obj::LeftKeybind_obj()
{
}

::hx::Val LeftKeybind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onType") ) { return ::hx::Val( onType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LeftKeybind_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LeftKeybind_obj_sStaticStorageInfo = 0;
#endif

static ::String LeftKeybind_obj_sMemberFields[] = {
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class LeftKeybind_obj::__mClass;

void LeftKeybind_obj::__register()
{
	LeftKeybind_obj _hx_dummy;
	LeftKeybind_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LeftKeybind",75,11,dd,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LeftKeybind_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LeftKeybind_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LeftKeybind_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LeftKeybind_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

