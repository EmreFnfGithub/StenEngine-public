// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_TimingStruct
#include <TimingStruct.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2bef5994c8f2a111_3_new,"TimingStruct","new",0xf65a6d11,"TimingStruct.new","TimingStruct.hx",3,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_18_clearTimings,"TimingStruct","clearTimings",0x24dc9dcb,"TimingStruct.clearTimings","TimingStruct.hx",18,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_22_addTiming,"TimingStruct","addTiming",0xea33fefc,"TimingStruct.addTiming","TimingStruct.hx",22,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_28_getBeatFromTime,"TimingStruct","getBeatFromTime",0x899f5614,"TimingStruct.getBeatFromTime","TimingStruct.hx",28,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_39_getTimeFromBeat,"TimingStruct","getTimeFromBeat",0xc7fe4514,"TimingStruct.getTimeFromBeat","TimingStruct.hx",39,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_59_getTimingAtTimestamp,"TimingStruct","getTimingAtTimestamp",0x8761c9b2,"TimingStruct.getTimingAtTimestamp","TimingStruct.hx",59,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_69_getTimingAtBeat,"TimingStruct","getTimingAtBeat",0xdd9d1a1a,"TimingStruct.getTimingAtBeat","TimingStruct.hx",69,0x0c959f7f)
HX_LOCAL_STACK_FRAME(_hx_pos_2bef5994c8f2a111_5_boot,"TimingStruct","boot",0x90de0261,"TimingStruct.boot","TimingStruct.hx",5,0x0c959f7f)

void TimingStruct_obj::__construct(Float startBeat,Float bpm,Float endBeat,Float offset){
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_3_new)
HXLINE(  14)		this->length = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  12)		this->startTime = ((Float)0);
HXLINE(  11)		this->endBeat = ::Math_obj::POSITIVE_INFINITY;
HXLINE(  10)		this->startStep = 0;
HXLINE(   9)		this->startBeat = ((Float)0);
HXLINE(   7)		this->bpm = ((Float)0);
HXLINE(  51)		this->bpm = bpm;
HXLINE(  52)		this->startBeat = startBeat;
HXLINE(  53)		if ((endBeat != -1)) {
HXLINE(  54)			this->endBeat = endBeat;
            		}
HXLINE(  55)		this->startTime = offset;
            	}

Dynamic TimingStruct_obj::__CreateEmpty() { return new TimingStruct_obj; }

void *TimingStruct_obj::_hx_vtable = 0;

Dynamic TimingStruct_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TimingStruct_obj > _hx_result = new TimingStruct_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TimingStruct_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5041e35f;
}

::Array< ::Dynamic> TimingStruct_obj::AllTimings;

void TimingStruct_obj::clearTimings(){
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_18_clearTimings)
HXDLIN(  18)		::TimingStruct_obj::AllTimings = ::Array_obj< ::Dynamic>::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TimingStruct_obj,clearTimings,(void))

void TimingStruct_obj::addTiming(Float startBeat,Float bpm,Float endBeat,Float offset){
            	HX_GC_STACKFRAME(&_hx_pos_2bef5994c8f2a111_22_addTiming)
HXLINE(  23)		 ::TimingStruct pog =  ::TimingStruct_obj::__alloc( HX_CTX ,startBeat,bpm,endBeat,offset);
HXLINE(  24)		::TimingStruct_obj::AllTimings->push(pog);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TimingStruct_obj,addTiming,(void))

Float TimingStruct_obj::getBeatFromTime(Float time){
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_28_getBeatFromTime)
HXLINE(  29)		Float beat = ((Float)-1.0);
HXLINE(  30)		 ::TimingStruct seg = ::TimingStruct_obj::getTimingAtTimestamp(time);
HXLINE(  32)		if (::hx::IsNotNull( seg )) {
HXLINE(  33)			beat = (seg->startBeat + (((time / ( (Float)(1000) )) - seg->startTime) * (seg->bpm / ( (Float)(60) ))));
            		}
HXLINE(  35)		return beat;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimingStruct_obj,getBeatFromTime,return )

Float TimingStruct_obj::getTimeFromBeat(Float beat){
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_39_getTimeFromBeat)
HXLINE(  40)		Float time = ((Float)-1.0);
HXLINE(  41)		 ::TimingStruct seg = ::TimingStruct_obj::getTimingAtBeat(beat);
HXLINE(  43)		if (::hx::IsNotNull( seg )) {
HXLINE(  44)			time = (seg->startTime + ((beat - seg->startBeat) / (seg->bpm / ( (Float)(60) ))));
            		}
HXLINE(  46)		return (time * ( (Float)(1000) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimingStruct_obj,getTimeFromBeat,return )

 ::TimingStruct TimingStruct_obj::getTimingAtTimestamp(Float msTime){
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_59_getTimingAtTimestamp)
HXLINE(  60)		{
HXLINE(  60)			int _g = 0;
HXDLIN(  60)			::Array< ::Dynamic> _g1 = ::TimingStruct_obj::AllTimings;
HXDLIN(  60)			while((_g < _g1->length)){
HXLINE(  60)				 ::TimingStruct i = _g1->__get(_g).StaticCast<  ::TimingStruct >();
HXDLIN(  60)				_g = (_g + 1);
HXLINE(  62)				bool _hx_tmp;
HXDLIN(  62)				if ((msTime >= (i->startTime * ( (Float)(1000) )))) {
HXLINE(  62)					_hx_tmp = (msTime < ((i->startTime + i->length) * ( (Float)(1000) )));
            				}
            				else {
HXLINE(  62)					_hx_tmp = false;
            				}
HXDLIN(  62)				if (_hx_tmp) {
HXLINE(  63)					return i;
            				}
            			}
            		}
HXLINE(  65)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimingStruct_obj,getTimingAtTimestamp,return )

 ::TimingStruct TimingStruct_obj::getTimingAtBeat(Float beat){
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_69_getTimingAtBeat)
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			::Array< ::Dynamic> _g1 = ::TimingStruct_obj::AllTimings;
HXDLIN(  70)			while((_g < _g1->length)){
HXLINE(  70)				 ::TimingStruct i = _g1->__get(_g).StaticCast<  ::TimingStruct >();
HXDLIN(  70)				_g = (_g + 1);
HXLINE(  72)				bool _hx_tmp;
HXDLIN(  72)				if ((i->startBeat <= beat)) {
HXLINE(  72)					_hx_tmp = (i->endBeat >= beat);
            				}
            				else {
HXLINE(  72)					_hx_tmp = false;
            				}
HXDLIN(  72)				if (_hx_tmp) {
HXLINE(  73)					return i;
            				}
            			}
            		}
HXLINE(  75)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimingStruct_obj,getTimingAtBeat,return )


::hx::ObjectPtr< TimingStruct_obj > TimingStruct_obj::__new(Float startBeat,Float bpm,Float endBeat,Float offset) {
	::hx::ObjectPtr< TimingStruct_obj > __this = new TimingStruct_obj();
	__this->__construct(startBeat,bpm,endBeat,offset);
	return __this;
}

::hx::ObjectPtr< TimingStruct_obj > TimingStruct_obj::__alloc(::hx::Ctx *_hx_ctx,Float startBeat,Float bpm,Float endBeat,Float offset) {
	TimingStruct_obj *__this = (TimingStruct_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TimingStruct_obj), false, "TimingStruct"));
	*(void **)__this = TimingStruct_obj::_hx_vtable;
	__this->__construct(startBeat,bpm,endBeat,offset);
	return __this;
}

TimingStruct_obj::TimingStruct_obj()
{
}

::hx::Val TimingStruct_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { return ::hx::Val( bpm ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endBeat") ) { return ::hx::Val( endBeat ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startBeat") ) { return ::hx::Val( startBeat ); }
		if (HX_FIELD_EQ(inName,"startStep") ) { return ::hx::Val( startStep ); }
		if (HX_FIELD_EQ(inName,"startTime") ) { return ::hx::Val( startTime ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TimingStruct_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"addTiming") ) { outValue = addTiming_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"AllTimings") ) { outValue = ( AllTimings ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearTimings") ) { outValue = clearTimings_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getBeatFromTime") ) { outValue = getBeatFromTime_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTimeFromBeat") ) { outValue = getTimeFromBeat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTimingAtBeat") ) { outValue = getTimingAtBeat_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTimingAtTimestamp") ) { outValue = getTimingAtTimestamp_dyn(); return true; }
	}
	return false;
}

::hx::Val TimingStruct_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endBeat") ) { endBeat=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startBeat") ) { startBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startStep") ) { startStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimingStruct_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"AllTimings") ) { AllTimings=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void TimingStruct_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bpm",df,be,4a,00));
	outFields->push(HX_("startBeat",f8,5a,07,fa));
	outFields->push(HX_("startStep",ce,60,4f,05));
	outFields->push(HX_("endBeat",f1,9a,38,23));
	outFields->push(HX_("startTime",8f,45,f0,05));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TimingStruct_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TimingStruct_obj,bpm),HX_("bpm",df,be,4a,00)},
	{::hx::fsFloat,(int)offsetof(TimingStruct_obj,startBeat),HX_("startBeat",f8,5a,07,fa)},
	{::hx::fsInt,(int)offsetof(TimingStruct_obj,startStep),HX_("startStep",ce,60,4f,05)},
	{::hx::fsFloat,(int)offsetof(TimingStruct_obj,endBeat),HX_("endBeat",f1,9a,38,23)},
	{::hx::fsFloat,(int)offsetof(TimingStruct_obj,startTime),HX_("startTime",8f,45,f0,05)},
	{::hx::fsFloat,(int)offsetof(TimingStruct_obj,length),HX_("length",e6,94,07,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TimingStruct_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &TimingStruct_obj::AllTimings,HX_("AllTimings",a8,2f,f5,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TimingStruct_obj_sMemberFields[] = {
	HX_("bpm",df,be,4a,00),
	HX_("startBeat",f8,5a,07,fa),
	HX_("startStep",ce,60,4f,05),
	HX_("endBeat",f1,9a,38,23),
	HX_("startTime",8f,45,f0,05),
	HX_("length",e6,94,07,9f),
	::String(null()) };

static void TimingStruct_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimingStruct_obj::AllTimings,"AllTimings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TimingStruct_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimingStruct_obj::AllTimings,"AllTimings");
};

#endif

::hx::Class TimingStruct_obj::__mClass;

static ::String TimingStruct_obj_sStaticFields[] = {
	HX_("AllTimings",a8,2f,f5,9a),
	HX_("clearTimings",9c,d8,19,b7),
	HX_("addTiming",8b,47,f9,d6),
	HX_("getBeatFromTime",e3,f3,07,1c),
	HX_("getTimeFromBeat",e3,e2,66,5a),
	HX_("getTimingAtTimestamp",83,bd,7f,07),
	HX_("getTimingAtBeat",e9,b7,05,70),
	::String(null())
};

void TimingStruct_obj::__register()
{
	TimingStruct_obj _hx_dummy;
	TimingStruct_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TimingStruct",9f,90,60,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TimingStruct_obj::__GetStatic;
	__mClass->mSetStaticField = &TimingStruct_obj::__SetStatic;
	__mClass->mMarkFunc = TimingStruct_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TimingStruct_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TimingStruct_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TimingStruct_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TimingStruct_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimingStruct_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimingStruct_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TimingStruct_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2bef5994c8f2a111_5_boot)
HXDLIN(   5)		AllTimings = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

