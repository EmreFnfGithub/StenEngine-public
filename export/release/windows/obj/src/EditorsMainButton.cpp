// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_EditorsMainButton
#include <EditorsMainButton.h>
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
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d7c4fdb3c9e40e8a_31_new,"EditorsMainButton","new",0x1a0d3223,"EditorsMainButton.new","EditorsMain.hx",31,0x1e276abf)

void EditorsMainButton_obj::__construct( ::Dynamic X, ::Dynamic Y,::String Text, ::Dynamic OnClick){
            	HX_STACKFRAME(&_hx_pos_d7c4fdb3c9e40e8a_31_new)
HXDLIN(  31)		super::__construct(X,Y,Text,OnClick);
            	}

Dynamic EditorsMainButton_obj::__CreateEmpty() { return new EditorsMainButton_obj; }

void *EditorsMainButton_obj::_hx_vtable = 0;

Dynamic EditorsMainButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EditorsMainButton_obj > _hx_result = new EditorsMainButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool EditorsMainButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x26f5d20b) {
			if (inClassId<=(int)0x0155df10) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0155df10;
			} else {
				return inClassId==(int)0x26f5d20b;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x4bbd99f1 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}


::hx::ObjectPtr< EditorsMainButton_obj > EditorsMainButton_obj::__new( ::Dynamic X, ::Dynamic Y,::String Text, ::Dynamic OnClick) {
	::hx::ObjectPtr< EditorsMainButton_obj > __this = new EditorsMainButton_obj();
	__this->__construct(X,Y,Text,OnClick);
	return __this;
}

::hx::ObjectPtr< EditorsMainButton_obj > EditorsMainButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y,::String Text, ::Dynamic OnClick) {
	EditorsMainButton_obj *__this = (EditorsMainButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EditorsMainButton_obj), true, "EditorsMainButton"));
	*(void **)__this = EditorsMainButton_obj::_hx_vtable;
	__this->__construct(X,Y,Text,OnClick);
	return __this;
}

EditorsMainButton_obj::EditorsMainButton_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EditorsMainButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EditorsMainButton_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EditorsMainButton_obj::__mClass;

void EditorsMainButton_obj::__register()
{
	EditorsMainButton_obj _hx_dummy;
	EditorsMainButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EditorsMainButton",b1,e4,22,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EditorsMainButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EditorsMainButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EditorsMainButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

