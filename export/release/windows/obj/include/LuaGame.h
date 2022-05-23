// Generated by Haxe 4.1.5
#ifndef INCLUDED_LuaGame
#define INCLUDED_LuaGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_LuaClass
#include <LuaClass.h>
#endif
#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS0(LuaClass)
HX_DECLARE_CLASS0(LuaGame)



class HXCPP_CLASS_ATTRIBUTES LuaGame_obj : public  ::LuaClass_obj
{
	public:
		typedef  ::LuaClass_obj super;
		typedef LuaGame_obj OBJ_;
		LuaGame_obj();

	public:
		enum { _hx_ClassId = 0x066d5606 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LuaGame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LuaGame"); }
		static ::hx::ObjectPtr< LuaGame_obj > __new();
		static ::hx::ObjectPtr< LuaGame_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaGame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LuaGame",aa,dd,36,29); }

		static void __boot();
		static  cpp::Reference<lua_State> state;
		static int changeStage( lua_State* l);

		static ::cpp::Function< int  ( lua_State*) > changeStageC;
		static Dynamic changeStageC_dyn() { return changeStageC;}
		int SetNumProperty( cpp::Reference<lua_State> l);
		::Dynamic SetNumProperty_dyn();

		void Register( cpp::Reference<lua_State> l);

};


#endif /* INCLUDED_LuaGame */ 
