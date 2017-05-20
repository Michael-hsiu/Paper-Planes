#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CnControls.DpadAxis[]
struct DpadAxisU5BU5D_t1107744861;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.Dpad
struct  Dpad_t2915111111  : public MonoBehaviour_t1158329972
{
public:
	// CnControls.DpadAxis[] CnControls.Dpad::DpadAxis
	DpadAxisU5BU5D_t1107744861* ___DpadAxis_2;
	// UnityEngine.Camera CnControls.Dpad::<CurrentEventCamera>k__BackingField
	Camera_t189460977 * ___U3CCurrentEventCameraU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_DpadAxis_2() { return static_cast<int32_t>(offsetof(Dpad_t2915111111, ___DpadAxis_2)); }
	inline DpadAxisU5BU5D_t1107744861* get_DpadAxis_2() const { return ___DpadAxis_2; }
	inline DpadAxisU5BU5D_t1107744861** get_address_of_DpadAxis_2() { return &___DpadAxis_2; }
	inline void set_DpadAxis_2(DpadAxisU5BU5D_t1107744861* value)
	{
		___DpadAxis_2 = value;
		Il2CppCodeGenWriteBarrier(&___DpadAxis_2, value);
	}

	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Dpad_t2915111111, ___U3CCurrentEventCameraU3Ek__BackingField_3)); }
	inline Camera_t189460977 * get_U3CCurrentEventCameraU3Ek__BackingField_3() const { return ___U3CCurrentEventCameraU3Ek__BackingField_3; }
	inline Camera_t189460977 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_3() { return &___U3CCurrentEventCameraU3Ek__BackingField_3; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_3(Camera_t189460977 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentEventCameraU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
