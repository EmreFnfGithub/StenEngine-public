// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#define INCLUDED_flixel_addons_ui_interfaces_IResizable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IResizable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Float (::hx::Object :: *_hx_get_width)(); 
		static inline Float get_width( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IResizable_obj *>(_hx_.mPtr->_hx_getInterface(0x194a3c9f)))->_hx_get_width)();
		}
		Float (::hx::Object :: *_hx_get_height)(); 
		static inline Float get_height( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IResizable_obj *>(_hx_.mPtr->_hx_getInterface(0x194a3c9f)))->_hx_get_height)();
		}
		void (::hx::Object :: *_hx_resize)(Float w,Float h); 
		static inline void resize( ::Dynamic _hx_,Float w,Float h) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IResizable_obj *>(_hx_.mPtr->_hx_getInterface(0x194a3c9f)))->_hx_resize)(w,h);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IResizable */ 
