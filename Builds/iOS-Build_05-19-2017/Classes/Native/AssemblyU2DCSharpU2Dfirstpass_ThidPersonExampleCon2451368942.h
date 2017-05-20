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
// UnityEngine.CharacterController
struct CharacterController_t4094781467;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThidPersonExampleController
struct  ThidPersonExampleController_t2451368942  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ThidPersonExampleController::MovementSpeed
	float ___MovementSpeed_2;
	// UnityEngine.Transform ThidPersonExampleController::_mainCameraTransform
	Transform_t3275118058 * ____mainCameraTransform_3;
	// UnityEngine.Transform ThidPersonExampleController::_transform
	Transform_t3275118058 * ____transform_4;
	// UnityEngine.CharacterController ThidPersonExampleController::_characterController
	CharacterController_t4094781467 * ____characterController_5;

public:
	inline static int32_t get_offset_of_MovementSpeed_2() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t2451368942, ___MovementSpeed_2)); }
	inline float get_MovementSpeed_2() const { return ___MovementSpeed_2; }
	inline float* get_address_of_MovementSpeed_2() { return &___MovementSpeed_2; }
	inline void set_MovementSpeed_2(float value)
	{
		___MovementSpeed_2 = value;
	}

	inline static int32_t get_offset_of__mainCameraTransform_3() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t2451368942, ____mainCameraTransform_3)); }
	inline Transform_t3275118058 * get__mainCameraTransform_3() const { return ____mainCameraTransform_3; }
	inline Transform_t3275118058 ** get_address_of__mainCameraTransform_3() { return &____mainCameraTransform_3; }
	inline void set__mainCameraTransform_3(Transform_t3275118058 * value)
	{
		____mainCameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&____mainCameraTransform_3, value);
	}

	inline static int32_t get_offset_of__transform_4() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t2451368942, ____transform_4)); }
	inline Transform_t3275118058 * get__transform_4() const { return ____transform_4; }
	inline Transform_t3275118058 ** get_address_of__transform_4() { return &____transform_4; }
	inline void set__transform_4(Transform_t3275118058 * value)
	{
		____transform_4 = value;
		Il2CppCodeGenWriteBarrier(&____transform_4, value);
	}

	inline static int32_t get_offset_of__characterController_5() { return static_cast<int32_t>(offsetof(ThidPersonExampleController_t2451368942, ____characterController_5)); }
	inline CharacterController_t4094781467 * get__characterController_5() const { return ____characterController_5; }
	inline CharacterController_t4094781467 ** get_address_of__characterController_5() { return &____characterController_5; }
	inline void set__characterController_5(CharacterController_t4094781467 * value)
	{
		____characterController_5 = value;
		Il2CppCodeGenWriteBarrier(&____characterController_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
