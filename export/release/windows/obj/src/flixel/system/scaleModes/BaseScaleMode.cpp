// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVerticalAlign
#include <flixel/util/FlxVerticalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_14_new,"flixel.system.scaleModes.BaseScaleMode","new",0xb84381b3,"flixel.system.scaleModes.BaseScaleMode.new","flixel/system/scaleModes/BaseScaleMode.hx",14,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_33_onMeasure,"flixel.system.scaleModes.BaseScaleMode","onMeasure",0xbc54a592,"flixel.system.scaleModes.BaseScaleMode.onMeasure","flixel/system/scaleModes/BaseScaleMode.hx",33,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_45_updateGameSize,"flixel.system.scaleModes.BaseScaleMode","updateGameSize",0x99f00e89,"flixel.system.scaleModes.BaseScaleMode.updateGameSize","flixel/system/scaleModes/BaseScaleMode.hx",45,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_50_updateDeviceSize,"flixel.system.scaleModes.BaseScaleMode","updateDeviceSize",0xb35132ad,"flixel.system.scaleModes.BaseScaleMode.updateDeviceSize","flixel/system/scaleModes/BaseScaleMode.hx",50,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_54_updateScaleOffset,"flixel.system.scaleModes.BaseScaleMode","updateScaleOffset",0x13e546c7,"flixel.system.scaleModes.BaseScaleMode.updateScaleOffset","flixel/system/scaleModes/BaseScaleMode.hx",54,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_63_updateOffsetX,"flixel.system.scaleModes.BaseScaleMode","updateOffsetX",0xcbc7256f,"flixel.system.scaleModes.BaseScaleMode.updateOffsetX","flixel/system/scaleModes/BaseScaleMode.hx",63,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_76_updateOffsetY,"flixel.system.scaleModes.BaseScaleMode","updateOffsetY",0xcbc72570,"flixel.system.scaleModes.BaseScaleMode.updateOffsetY","flixel/system/scaleModes/BaseScaleMode.hx",76,0x5a3188fe)
HX_LOCAL_STACK_FRAME(_hx_pos_c713eb0ccb2ced4e_88_updateGamePosition,"flixel.system.scaleModes.BaseScaleMode","updateGamePosition",0xebf59271,"flixel.system.scaleModes.BaseScaleMode.updateGamePosition","flixel/system/scaleModes/BaseScaleMode.hx",88,0x5a3188fe)
namespace flixel{
namespace _hx_system{
namespace scaleModes{

void BaseScaleMode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_14_new)
HXLINE(  22)		this->verticalAlign = ::flixel::util::FlxVerticalAlign_obj::CENTER_dyn();
HXLINE(  21)		this->horizontalAlign = ::flixel::util::FlxHorizontalAlign_obj::CENTER_dyn();
HXLINE(  26)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  26)		point->_inPool = false;
HXDLIN(  26)		this->deviceSize = point;
HXLINE(  27)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  27)		point1->_inPool = false;
HXDLIN(  27)		this->gameSize = point1;
HXLINE(  28)		 ::flixel::math::FlxPoint point2 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  28)		point2->_inPool = false;
HXDLIN(  28)		this->scale = point2;
HXLINE(  29)		 ::flixel::math::FlxPoint point3 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  29)		point3->_inPool = false;
HXDLIN(  29)		this->offset = point3;
            	}

Dynamic BaseScaleMode_obj::__CreateEmpty() { return new BaseScaleMode_obj; }

void *BaseScaleMode_obj::_hx_vtable = 0;

Dynamic BaseScaleMode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseScaleMode_obj > _hx_result = new BaseScaleMode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseScaleMode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5671ae2b;
}

void BaseScaleMode_obj::onMeasure(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_33_onMeasure)
HXLINE(  34)		::flixel::FlxG_obj::width = ::flixel::FlxG_obj::initialWidth;
HXLINE(  35)		::flixel::FlxG_obj::height = ::flixel::FlxG_obj::initialHeight;
HXLINE(  37)		this->updateGameSize(Width,Height);
HXLINE(  38)		this->updateDeviceSize(Width,Height);
HXLINE(  39)		this->updateScaleOffset();
HXLINE(  40)		this->updateGamePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,onMeasure,(void))

void BaseScaleMode_obj::updateGameSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_45_updateGameSize)
HXDLIN(  45)		this->gameSize->set(Width,Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateGameSize,(void))

void BaseScaleMode_obj::updateDeviceSize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_50_updateDeviceSize)
HXDLIN(  50)		this->deviceSize->set(Width,Height);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateDeviceSize,(void))

void BaseScaleMode_obj::updateScaleOffset(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_54_updateScaleOffset)
HXLINE(  55)		this->scale->set_x((this->gameSize->x / (( (Float)(::flixel::FlxG_obj::width) ) * ::flixel::FlxG_obj::initialZoom)));
HXLINE(  56)		this->scale->set_y((this->gameSize->y / (( (Float)(::flixel::FlxG_obj::height) ) * ::flixel::FlxG_obj::initialZoom)));
HXLINE(  57)		this->updateOffsetX();
HXLINE(  58)		this->updateOffsetY();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateScaleOffset,(void))

void BaseScaleMode_obj::updateOffsetX(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_63_updateOffsetX)
HXDLIN(  63)		Float _hx_tmp;
HXDLIN(  63)		switch((int)(this->horizontalAlign->_hx_getIndex())){
            			case (int)0: {
HXDLIN(  63)				_hx_tmp = ( (Float)(0) );
            			}
            			break;
            			case (int)1: {
HXDLIN(  63)				_hx_tmp = ( (Float)(::Math_obj::ceil(((this->deviceSize->x - this->gameSize->x) * ((Float)0.5)))) );
            			}
            			break;
            			case (int)2: {
HXDLIN(  63)				_hx_tmp = (this->deviceSize->x - this->gameSize->x);
            			}
            			break;
            		}
HXDLIN(  63)		this->offset->set_x(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateOffsetX,(void))

void BaseScaleMode_obj::updateOffsetY(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_76_updateOffsetY)
HXDLIN(  76)		Float _hx_tmp;
HXDLIN(  76)		switch((int)(this->verticalAlign->_hx_getIndex())){
            			case (int)0: {
HXDLIN(  76)				_hx_tmp = ( (Float)(0) );
            			}
            			break;
            			case (int)1: {
HXDLIN(  76)				_hx_tmp = ( (Float)(::Math_obj::ceil(((this->deviceSize->y - this->gameSize->y) * ((Float)0.5)))) );
            			}
            			break;
            			case (int)2: {
HXDLIN(  76)				_hx_tmp = (this->deviceSize->y - this->gameSize->y);
            			}
            			break;
            		}
HXDLIN(  76)		this->offset->set_y(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateOffsetY,(void))

void BaseScaleMode_obj::updateGamePosition(){
            	HX_STACKFRAME(&_hx_pos_c713eb0ccb2ced4e_88_updateGamePosition)
HXLINE(  89)		if (::hx::IsNull( ::flixel::FlxG_obj::game )) {
HXLINE(  90)			return;
            		}
HXLINE(  92)		::flixel::FlxG_obj::game->set_x(this->offset->x);
HXLINE(  93)		::flixel::FlxG_obj::game->set_y(this->offset->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateGamePosition,(void))


::hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__new() {
	::hx::ObjectPtr< BaseScaleMode_obj > __this = new BaseScaleMode_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseScaleMode_obj *__this = (BaseScaleMode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseScaleMode_obj), true, "flixel.system.scaleModes.BaseScaleMode"));
	*(void **)__this = BaseScaleMode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseScaleMode_obj::BaseScaleMode_obj()
{
}

void BaseScaleMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScaleMode);
	HX_MARK_MEMBER_NAME(deviceSize,"deviceSize");
	HX_MARK_MEMBER_NAME(gameSize,"gameSize");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_MARK_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_MARK_END_CLASS();
}

void BaseScaleMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deviceSize,"deviceSize");
	HX_VISIT_MEMBER_NAME(gameSize,"gameSize");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_VISIT_MEMBER_NAME(verticalAlign,"verticalAlign");
}

::hx::Val BaseScaleMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { return ::hx::Val( gameSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return ::hx::Val( onMeasure_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { return ::hx::Val( deviceSize ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return ::hx::Val( verticalAlign ); }
		if (HX_FIELD_EQ(inName,"updateOffsetX") ) { return ::hx::Val( updateOffsetX_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateOffsetY") ) { return ::hx::Val( updateOffsetY_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return ::hx::Val( updateGameSize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return ::hx::Val( horizontalAlign ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateDeviceSize") ) { return ::hx::Val( updateDeviceSize_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScaleOffset") ) { return ::hx::Val( updateScaleOffset_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamePosition") ) { return ::hx::Val( updateGamePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseScaleMode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { gameSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { deviceSize=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { verticalAlign=inValue.Cast<  ::flixel::util::FlxVerticalAlign >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { horizontalAlign=inValue.Cast<  ::flixel::util::FlxHorizontalAlign >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("deviceSize",77,ac,dd,b5));
	outFields->push(HX_("gameSize",d3,a1,79,b8));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseScaleMode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(BaseScaleMode_obj,deviceSize),HX_("deviceSize",77,ac,dd,b5)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(BaseScaleMode_obj,gameSize),HX_("gameSize",d3,a1,79,b8)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(BaseScaleMode_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(BaseScaleMode_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::util::FlxHorizontalAlign */ ,(int)offsetof(BaseScaleMode_obj,horizontalAlign),HX_("horizontalAlign",41,8f,67,f4)},
	{::hx::fsObject /*  ::flixel::util::FlxVerticalAlign */ ,(int)offsetof(BaseScaleMode_obj,verticalAlign),HX_("verticalAlign",6f,1e,7c,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseScaleMode_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseScaleMode_obj_sMemberFields[] = {
	HX_("deviceSize",77,ac,dd,b5),
	HX_("gameSize",d3,a1,79,b8),
	HX_("scale",8a,ce,ce,78),
	HX_("offset",93,97,3f,60),
	HX_("horizontalAlign",41,8f,67,f4),
	HX_("verticalAlign",6f,1e,7c,e4),
	HX_("onMeasure",ff,b3,94,14),
	HX_("updateGameSize",fc,94,a3,ed),
	HX_("updateDeviceSize",e0,7b,c9,ff),
	HX_("updateScaleOffset",34,0a,ad,b0),
	HX_("updateOffsetX",5c,6e,d3,a2),
	HX_("updateOffsetY",5d,6e,d3,a2),
	HX_("updateGamePosition",64,ce,f8,7d),
	::String(null()) };

::hx::Class BaseScaleMode_obj::__mClass;

void BaseScaleMode_obj::__register()
{
	BaseScaleMode_obj _hx_dummy;
	BaseScaleMode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.scaleModes.BaseScaleMode",41,2c,f6,57);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseScaleMode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseScaleMode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseScaleMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseScaleMode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes
