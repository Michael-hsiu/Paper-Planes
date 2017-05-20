#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// VirtualJoystick
struct VirtualJoystick_t1639799649;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

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
	// UnityEngine.Vector2 AIInput::savedVelocity
	Vector2_t2243707579  ___savedVelocity_3;
	// UnityEngine.Vector2 AIInput::lastDashVelocity
	Vector2_t2243707579  ___lastDashVelocity_4;
	// System.Collections.IEnumerator AIInput::cr1
	Il2CppObject * ___cr1_5;
	// VirtualJoystick AIInput::virtualJoystick
	VirtualJoystick_t1639799649 * ___virtualJoystick_6;

public:
	inline static int32_t get_offset_of_controlsEnabled_2() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___controlsEnabled_2)); }
	inline bool get_controlsEnabled_2() const { return ___controlsEnabled_2; }
	inline bool* get_address_of_controlsEnabled_2() { return &___controlsEnabled_2; }
	inline void set_controlsEnabled_2(bool value)
	{
		___controlsEnabled_2 = value;
	}

	inline static int32_t get_offset_of_savedVelocity_3() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___savedVelocity_3)); }
	inline Vector2_t2243707579  get_savedVelocity_3() const { return ___savedVelocity_3; }
	inline Vector2_t2243707579 * get_address_of_savedVelocity_3() { return &___savedVelocity_3; }
	inline void set_savedVelocity_3(Vector2_t2243707579  value)
	{
		___savedVelocity_3 = value;
	}

	inline static int32_t get_offset_of_lastDashVelocity_4() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___lastDashVelocity_4)); }
	inline Vector2_t2243707579  get_lastDashVelocity_4() const { return ___lastDashVelocity_4; }
	inline Vector2_t2243707579 * get_address_of_lastDashVelocity_4() { return &___lastDashVelocity_4; }
	inline void set_lastDashVelocity_4(Vector2_t2243707579  value)
	{
		___lastDashVelocity_4 = value;
	}

	inline static int32_t get_offset_of_cr1_5() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___cr1_5)); }
	inline Il2CppObject * get_cr1_5() const { return ___cr1_5; }
	inline Il2CppObject ** get_address_of_cr1_5() { return &___cr1_5; }
	inline void set_cr1_5(Il2CppObject * value)
	{
		___cr1_5 = value;
		Il2CppCodeGenWriteBarrier(&___cr1_5, value);
	}

	inline static int32_t get_offset_of_virtualJoystick_6() { return static_cast<int32_t>(offsetof(AIInput_t860244006, ___virtualJoystick_6)); }
	inline VirtualJoystick_t1639799649 * get_virtualJoystick_6() const { return ___virtualJoystick_6; }
	inline VirtualJoystick_t1639799649 ** get_address_of_virtualJoystick_6() { return &___virtualJoystick_6; }
	inline void set_virtualJoystick_6(VirtualJoystick_t1639799649 * value)
	{
		___virtualJoystick_6 = value;
		Il2CppCodeGenWriteBarrier(&___virtualJoystick_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
