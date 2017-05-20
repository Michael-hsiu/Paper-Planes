#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomJoystick.FourWayController
struct  FourWayController_t1585647557  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3[] CustomJoystick.FourWayController::directionalVectors
	Vector3U5BU5D_t1172311765* ___directionalVectors_2;
	// UnityEngine.Transform CustomJoystick.FourWayController::_mainCameraTransform
	Transform_t3275118058 * ____mainCameraTransform_3;

public:
	inline static int32_t get_offset_of_directionalVectors_2() { return static_cast<int32_t>(offsetof(FourWayController_t1585647557, ___directionalVectors_2)); }
	inline Vector3U5BU5D_t1172311765* get_directionalVectors_2() const { return ___directionalVectors_2; }
	inline Vector3U5BU5D_t1172311765** get_address_of_directionalVectors_2() { return &___directionalVectors_2; }
	inline void set_directionalVectors_2(Vector3U5BU5D_t1172311765* value)
	{
		___directionalVectors_2 = value;
		Il2CppCodeGenWriteBarrier(&___directionalVectors_2, value);
	}

	inline static int32_t get_offset_of__mainCameraTransform_3() { return static_cast<int32_t>(offsetof(FourWayController_t1585647557, ____mainCameraTransform_3)); }
	inline Transform_t3275118058 * get__mainCameraTransform_3() const { return ____mainCameraTransform_3; }
	inline Transform_t3275118058 ** get_address_of__mainCameraTransform_3() { return &____mainCameraTransform_3; }
	inline void set__mainCameraTransform_3(Transform_t3275118058 * value)
	{
		____mainCameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&____mainCameraTransform_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
