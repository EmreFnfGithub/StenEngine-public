// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_
#include <lime/graphics/opengl/_GLProgram/GLProgram_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f26ce6442e8f3a65_21_fromInt,"lime.graphics.opengl._GLProgram.GLProgram_Impl_","fromInt",0x3e290e1d,"lime.graphics.opengl._GLProgram.GLProgram_Impl_.fromInt","lime/graphics/opengl/GLProgram.hx",21,0x48d7ea15)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLProgram{

void GLProgram_Impl__obj::__construct() { }

Dynamic GLProgram_Impl__obj::__CreateEmpty() { return new GLProgram_Impl__obj; }

void *GLProgram_Impl__obj::_hx_vtable = 0;

Dynamic GLProgram_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLProgram_Impl__obj > _hx_result = new GLProgram_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLProgram_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c41ec70;
}

 ::lime::graphics::opengl::GLObject GLProgram_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_f26ce6442e8f3a65_21_fromInt)
HXDLIN(  21)		return ::lime::graphics::opengl::GLObject_obj::fromInt(1,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,fromInt,return )


GLProgram_Impl__obj::GLProgram_Impl__obj()
{
}

bool GLProgram_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLProgram_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLProgram_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GLProgram_Impl__obj::__mClass;

static ::String GLProgram_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLProgram_Impl__obj::__register()
{
	GLProgram_Impl__obj _hx_dummy;
	GLProgram_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLProgram.GLProgram_Impl_",e6,58,21,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLProgram_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLProgram_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLProgram_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLProgram
