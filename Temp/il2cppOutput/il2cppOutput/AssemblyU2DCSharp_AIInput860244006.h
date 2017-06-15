#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// VirtualJoystick
struct VirtualJoystick_t1639799649;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIInput
struct  AIInput_t860244006  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean AIInput::controlsEnabled
	bool ___controlsEnabled_2;
	// System.Single AIInput::disableTime
	float ___disableTime_3;
	// UnityEngine.Vector2 AIInput::savedVelocity
	Vector2_t2243707579  ___savedVelocity_4;
	// UnityEngine.Vector2 AIInput::lastDashVelocity
	Vector2_t2243707579  ___lastDashVelocity_5;
	// System.Collections.IEnumerator AIInput::cr1
	Il2CppObject * ___cr1_6;
	// VirtualJoystick AIInput::virtualJoystickMove
	VirtualJoystick_t1639799649 * ___virtualJoystickMove_7;
	// VirtualJoystick AIInput::virtualJoystickRotate
	VirtualJoystick_t1639799649 * ___virtualJoystickRotate_8;

public:
	inline static int32_t get_offset_of_controlsEnabled_2() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___controlsEnabled_2)); }
	inline bool get_controlsEnabled_2() const { return ___controlsEnabled_2; }
	inline bool* get_address_of_controlsEnabled_2() { return &___controlsEnabled_2; }
	inline void set_controlsEnabled_2(bool value)
	{
		___controlsEnabled_2 = value;
	}

	inline static int32_t get_offset_of_disableTime_3() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___disableTime_3)); }
	inline float get_disableTime_3() const { return ___disableTime_3; }
	inline float* get_address_of_disableTime_3() { return &___disableTime_3; }
	inline void set_disableTime_3(float value)
	{
		___disableTime_3 = value;
	}

	inline static int32_t get_offset_of_savedVelocity_4() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___savedVelocity_4)); }
	inline Vector2_t2243707579  get_savedVelocity_4() const { return ___savedVelocity_4; }
	inline Vector2_t2243707579 * get_address_of_savedVelocity_4() { return &___savedVelocity_4; }
	inline void set_savedVelocity_4(Vector2_t2243707579  value)
	{
		___savedVelocity_4 = value;
	}

	inline static int32_t get_offset_of_lastDashVelocity_5() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___lastDashVelocity_5)); }
	inline Vector2_t2243707579  get_lastDashVelocity_5() const { return ___lastDashVelocity_5; }
	inline Vector2_t2243707579 * get_address_of_lastDashVelocity_5() { return &___lastDashVelocity_5; }
	inline void set_lastDashVelocity_5(Vector2_t2243707579  value)
	{
		___lastDashVelocity_5 = value;
	}

	inline static int32_t get_offset_of_cr1_6() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___cr1_6)); }
	inline Il2CppObject * get_cr1_6() const { return ___cr1_6; }
	inline Il2CppObject ** get_address_of_cr1_6() { return &___cr1_6; }
	inline void set_cr1_6(Il2CppObject * value)
	{
		___cr1_6 = value;
		Il2CppCodeGenWriteBarrier(&___cr1_6, value);
	}

	inline static int32_t get_offset_of_virtualJoystickMove_7() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___virtualJoystickMove_7)); }
	inline VirtualJoystick_t1639799649 * get_virtualJoystickMove_7() const { return ___virtualJoystickMove_7; }
	inline VirtualJoystick_t1639799649 ** get_address_of_virtualJoystickMove_7() { return &___virtualJoystickMove_7; }
	inline void set_virtualJoystickMove_7(VirtualJoystick_t1639799649 * value)
	{
		___virtualJoystickMove_7 = value;
		Il2CppCodeGenWriteBarrier(&___virtualJoystickMove_7, value);
	}

	inline static int32_t get_offset_of_virtualJoystickRotate_8() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___virtualJoystickRotate_8)); }
	inline VirtualJoystick_t1639799649 * get_virtualJoystickRotate_8() const { return ___virtualJoystickRotate_8; }
	inline VirtualJoystick_t1639799649 ** get_address_of_virtualJoystickRotate_8() { return &___virtualJoystickRotate_8; }
	inline void set_virtualJoystickRotate_8(VirtualJoystick_t1639799649 * value)
	{
		___virtualJoystickRotate_8 = value;
		Il2CppCodeGenWriteBarrier(&___virtualJoystickRotate_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
