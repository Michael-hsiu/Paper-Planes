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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Examples.Scenes.TouchpadCamera.RotationConstraint
struct  RotationConstraint_t1160835953  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Examples.Scenes.TouchpadCamera.RotationConstraint::Min
	float ___Min_2;
	// System.Single Examples.Scenes.TouchpadCamera.RotationConstraint::Max
	float ___Max_3;
	// UnityEngine.Transform Examples.Scenes.TouchpadCamera.RotationConstraint::_transformCache
	Transform_t3275118058 * ____transformCache_4;
	// UnityEngine.Quaternion Examples.Scenes.TouchpadCamera.RotationConstraint::_minQuaternion
	Quaternion_t4030073918  ____minQuaternion_5;
	// UnityEngine.Quaternion Examples.Scenes.TouchpadCamera.RotationConstraint::_maxQuaternion
	Quaternion_t4030073918  ____maxQuaternion_6;
	// UnityEngine.Vector3 Examples.Scenes.TouchpadCamera.RotationConstraint::_rotateAround
	Vector3_t2243707580  ____rotateAround_7;
	// System.Single Examples.Scenes.TouchpadCamera.RotationConstraint::_range
	float ____range_8;

public:
	inline static int32_t get_offset_of_Min_2() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ___Min_2)); }
	inline float get_Min_2() const { return ___Min_2; }
	inline float* get_address_of_Min_2() { return &___Min_2; }
	inline void set_Min_2(float value)
	{
		___Min_2 = value;
	}

	inline static int32_t get_offset_of_Max_3() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ___Max_3)); }
	inline float get_Max_3() const { return ___Max_3; }
	inline float* get_address_of_Max_3() { return &___Max_3; }
	inline void set_Max_3(float value)
	{
		___Max_3 = value;
	}

	inline static int32_t get_offset_of__transformCache_4() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ____transformCache_4)); }
	inline Transform_t3275118058 * get__transformCache_4() const { return ____transformCache_4; }
	inline Transform_t3275118058 ** get_address_of__transformCache_4() { return &____transformCache_4; }
	inline void set__transformCache_4(Transform_t3275118058 * value)
	{
		____transformCache_4 = value;
		Il2CppCodeGenWriteBarrier(&____transformCache_4, value);
	}

	inline static int32_t get_offset_of__minQuaternion_5() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ____minQuaternion_5)); }
	inline Quaternion_t4030073918  get__minQuaternion_5() const { return ____minQuaternion_5; }
	inline Quaternion_t4030073918 * get_address_of__minQuaternion_5() { return &____minQuaternion_5; }
	inline void set__minQuaternion_5(Quaternion_t4030073918  value)
	{
		____minQuaternion_5 = value;
	}

	inline static int32_t get_offset_of__maxQuaternion_6() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ____maxQuaternion_6)); }
	inline Quaternion_t4030073918  get__maxQuaternion_6() const { return ____maxQuaternion_6; }
	inline Quaternion_t4030073918 * get_address_of__maxQuaternion_6() { return &____maxQuaternion_6; }
	inline void set__maxQuaternion_6(Quaternion_t4030073918  value)
	{
		____maxQuaternion_6 = value;
	}

	inline static int32_t get_offset_of__rotateAround_7() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ____rotateAround_7)); }
	inline Vector3_t2243707580  get__rotateAround_7() const { return ____rotateAround_7; }
	inline Vector3_t2243707580 * get_address_of__rotateAround_7() { return &____rotateAround_7; }
	inline void set__rotateAround_7(Vector3_t2243707580  value)
	{
		____rotateAround_7 = value;
	}

	inline static int32_t get_offset_of__range_8() { return static_cast<int32_t>(offsetof(RotationConstraint_t1160835953, ____range_8)); }
	inline float get__range_8() const { return ____range_8; }
	inline float* get_address_of__range_8() { return &____range_8; }
	inline void set__range_8(float value)
	{
		____range_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
