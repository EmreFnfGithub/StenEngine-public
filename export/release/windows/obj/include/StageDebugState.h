// Generated by Haxe 4.1.5
#ifndef INCLUDED_StageDebugState
#define INCLUDED_StageDebugState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Stage)
HX_DECLARE_CLASS0(StageDebugState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)



class HXCPP_CLASS_ATTRIBUTES StageDebugState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef StageDebugState_obj OBJ_;
		StageDebugState_obj();

	public:
		enum { _hx_ClassId = 0x10b6a990 };

		void __construct(::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StageDebugState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"StageDebugState"); }
		static ::hx::ObjectPtr< StageDebugState_obj > __new(::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent);
		static ::hx::ObjectPtr< StageDebugState_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_daStage,::String __o_daGf,::String __o_daBf,::String __o_opponent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StageDebugState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StageDebugState",fc,d6,73,b7); }

		::String daStage;
		::String daBf;
		::String daGf;
		::String opponent;
		 ::openfl::net::FileReference _file;
		 ::Character gf;
		 ::Boyfriend boyfriend;
		 ::Character dad;
		 ::Stage Stage;
		 ::flixel::FlxObject camFollow;
		 ::flixel::text::FlxText posText;
		 ::flixel::FlxSprite curChar;
		int curCharIndex;
		::String curCharString;
		::Array< ::Dynamic> curChars;
		bool dragging;
		int oldMousePosX;
		int oldMousePosY;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		bool charMode;
		::Array< ::Dynamic> usedObjects;
		void create();

		 ::flixel::text::FlxText helpText;
		void addHelpText();
		::Dynamic addHelpText_dyn();

		void update(Float elapsed);

		void updateMousePos();
		::Dynamic updateMousePos_dyn();

		void getNextObject();
		::Dynamic getNextObject_dyn();

		void getNextChar();
		::Dynamic getNextChar_dyn();

		void saveBoyPos();
		::Dynamic saveBoyPos_dyn();

		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

};


#endif /* INCLUDED_StageDebugState */ 
