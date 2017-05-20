#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Examples.Scenes.TouchpadCamera.RotateCamera
struct  RotateCamera_t3770268686  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Examples.Scenes.TouchpadCamera.RotateCamera::RotationSpeed
	float ___RotationSpeed_2;
	// UnityEngine.Transform Examples.Scenes.TouchpadCamera.RotateCamera::OriginTransform
	Transform_t3275118058 * ___OriginTransform_3;

public:
	inline static int32_t get_offset_of_RotationSpeed_2() { return static_cast<int32_t>(offsetof(RotateCamera_t3770268686, ___RotationSpeed_2)); }
	inline float get_RotationSpeed_2() const { return ___RotationSpeed_2; }
	inline float* get_address_of_RotationSpeed_2() { return &___RotationSpeed_2; }
	inline void set_RotationSpeed_2(float value)
	{
		___RotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_OriginTransform_3() { return static_cast<int32_t>(offsetof(RotateCamera_t3770268686, ___OriginTransform_3)); }
	inline Transform_t3275118058 * get_OriginTransform_3() const { return ___OriginTransform_3; }
	inline Transform_t3275118058 ** get_address_of_OriginTransform_3() { return &___OriginTransform_3; }
	inline void set_OriginTransform_3(Transform_t3275118058 * value)
	{
		___OriginTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___OriginTransform_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
