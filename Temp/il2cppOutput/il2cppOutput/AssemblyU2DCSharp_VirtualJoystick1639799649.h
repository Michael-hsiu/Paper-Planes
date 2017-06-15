#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualJoystick
struct  VirtualJoystick_t1639799649  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image VirtualJoystick::bgImg
	Image_t2042527209 * ___bgImg_2;
	// UnityEngine.UI.Image VirtualJoystick::joystickImg
	Image_t2042527209 * ___joystickImg_3;
	// UnityEngine.Vector3 VirtualJoystick::inputDirection
	Vector3_t2243707580  ___inputDirection_4;

public:
	inline static int32_t get_offset_of_bgImg_2() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1639799649, ___bgImg_2)); }
	inline Image_t2042527209 * get_bgImg_2() const { return ___bgImg_2; }
	inline Image_t2042527209 ** get_address_of_bgImg_2() { return &___bgImg_2; }
	inline void set_bgImg_2(Image_t2042527209 * value)
	{
		___bgImg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bgImg_2, value);
	}

	inline static int32_t get_offset_of_joystickImg_3() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1639799649, ___joystickImg_3)); }
	inline Image_t2042527209 * get_joystickImg_3() const { return ___joystickImg_3; }
	inline Image_t2042527209 ** get_address_of_joystickImg_3() { return &___joystickImg_3; }
	inline void set_joystickImg_3(Image_t2042527209 * value)
	{
		___joystickImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystickImg_3, value);
	}

	inline static int32_t get_offset_of_inputDirection_4() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1639799649, ___inputDirection_4)); }
	inline Vector3_t2243707580  get_inputDirection_4() const { return ___inputDirection_4; }
	inline Vector3_t2243707580 * get_address_of_inputDirection_4() { return &___inputDirection_4; }
	inline void set_inputDirection_4(Vector3_t2243707580  value)
	{
		___inputDirection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
