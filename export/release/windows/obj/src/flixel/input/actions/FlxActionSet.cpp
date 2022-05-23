// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_266239be989c53a0_26_new,"flixel.input.actions.FlxActionSet","new",0x7bcda713,"flixel.input.actions.FlxActionSet.new","flixel/input/actions/FlxActionSet.hx",26,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_212_add,"flixel.input.actions.FlxActionSet","add",0x7bc3c8d4,"flixel.input.actions.FlxActionSet.add","flixel/input/actions/FlxActionSet.hx",212,0x0b1a665a)
HX_LOCAL_STACK_FRAME(_hx_pos_266239be989c53a0_233_destroy,"flixel.input.actions.FlxActionSet","destroy",0x215cd92d,"flixel.input.actions.FlxActionSet.destroy","flixel/input/actions/FlxActionSet.hx",233,0x0b1a665a)
namespace flixel{
namespace input{
namespace actions{

void FlxActionSet_obj::__construct(::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_26_new)
HXLINE(  31)		this->name = HX_("",00,00,00,00);
HXLINE( 190)		this->name = Name;
HXLINE( 191)		if (::hx::IsNull( DigitalActions )) {
HXLINE( 192)			DigitalActions = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 193)		if (::hx::IsNull( AnalogActions )) {
HXLINE( 194)			AnalogActions = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 195)		this->digitalActions = DigitalActions;
HXLINE( 196)		this->analogActions = AnalogActions;
            	}

Dynamic FlxActionSet_obj::__CreateEmpty() { return new FlxActionSet_obj; }

void *FlxActionSet_obj::_hx_vtable = 0;

Dynamic FlxActionSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionSet_obj > _hx_result = new FlxActionSet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxActionSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_actions_FlxActionSet__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::actions::FlxActionSet_obj::destroy,
};

void *FlxActionSet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_actions_FlxActionSet__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool FlxActionSet_obj::add( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_212_add)
HXLINE( 213)		if (::hx::IsEq( Action->type,::flixel::input::actions::FlxInputType_obj::DIGITAL_dyn() )) {
HXLINE( 215)			 ::flixel::input::actions::FlxActionDigital dAction = ( ( ::flixel::input::actions::FlxActionDigital)(Action) );
HXLINE( 216)			if (this->digitalActions->contains(dAction)) {
HXLINE( 217)				return false;
            			}
HXLINE( 218)			this->digitalActions->push(dAction);
HXLINE( 219)			return true;
            		}
            		else {
HXLINE( 221)			if (::hx::IsEq( Action->type,::flixel::input::actions::FlxInputType_obj::ANALOG_dyn() )) {
HXLINE( 223)				 ::flixel::input::actions::FlxActionAnalog aAction = ( ( ::flixel::input::actions::FlxActionAnalog)(Action) );
HXLINE( 224)				if (this->analogActions->contains(aAction)) {
HXLINE( 225)					return false;
            				}
HXLINE( 226)				this->analogActions->push(aAction);
HXLINE( 227)				return true;
            			}
            		}
HXLINE( 229)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxActionSet_obj,add,return )

void FlxActionSet_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_266239be989c53a0_233_destroy)
HXLINE( 234)		this->digitalActions = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->digitalActions);
HXLINE( 235)		this->analogActions = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->analogActions);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionSet_obj,destroy,(void))


::hx::ObjectPtr< FlxActionSet_obj > FlxActionSet_obj::__new(::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions) {
	::hx::ObjectPtr< FlxActionSet_obj > __this = new FlxActionSet_obj();
	__this->__construct(Name,DigitalActions,AnalogActions);
	return __this;
}

::hx::ObjectPtr< FlxActionSet_obj > FlxActionSet_obj::__alloc(::hx::Ctx *_hx_ctx,::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions) {
	FlxActionSet_obj *__this = (FlxActionSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionSet_obj), true, "flixel.input.actions.FlxActionSet"));
	*(void **)__this = FlxActionSet_obj::_hx_vtable;
	__this->__construct(Name,DigitalActions,AnalogActions);
	return __this;
}

FlxActionSet_obj::FlxActionSet_obj()
{
}

void FlxActionSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionSet);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(digitalActions,"digitalActions");
	HX_MARK_MEMBER_NAME(analogActions,"analogActions");
	HX_MARK_END_CLASS();
}

void FlxActionSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(digitalActions,"digitalActions");
	HX_VISIT_MEMBER_NAME(analogActions,"analogActions");
}

::hx::Val FlxActionSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"analogActions") ) { return ::hx::Val( analogActions ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"digitalActions") ) { return ::hx::Val( digitalActions ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"analogActions") ) { analogActions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"digitalActions") ) { digitalActions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("digitalActions",05,8f,e5,5b));
	outFields->push(HX_("analogActions",ad,7b,59,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionSet_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxActionSet_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxActionSet_obj,digitalActions),HX_("digitalActions",05,8f,e5,5b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxActionSet_obj,analogActions),HX_("analogActions",ad,7b,59,50)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionSet_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionSet_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("digitalActions",05,8f,e5,5b),
	HX_("analogActions",ad,7b,59,50),
	HX_("add",21,f2,49,00),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxActionSet_obj::__mClass;

void FlxActionSet_obj::__register()
{
	FlxActionSet_obj _hx_dummy;
	FlxActionSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionSet",a1,21,6a,73);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionSet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
