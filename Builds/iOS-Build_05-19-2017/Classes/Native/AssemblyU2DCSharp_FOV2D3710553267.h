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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FOV2D
struct  FOV2D_t3710553267  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FOV2D::radius
	float ___radius_2;
	// System.Int32 FOV2D::fov
	int32_t ___fov_3;
	// UnityEngine.Vector2 FOV2D::direction
	Vector2_t2243707579  ___direction_4;
	// UnityEngine.Transform FOV2D::testPoint
	Transform_t3275118058 * ___testPoint_5;
	// UnityEngine.Vector2 FOV2D::leftLineFOV
	Vector2_t2243707579  ___leftLineFOV_6;
	// UnityEngine.Vector2 FOV2D::rightLineFOV
	Vector2_t2243707579  ___rightLineFOV_7;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(FOV2D_t3710553267, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_fov_3() { return static_cast<int32_t>(offsetof(FOV2D_t3710553267, ___fov_3)); }
	inline int32_t get_fov_3() const { return ___fov_3; }
	inline int32_t* get_address_of_fov_3() { return &___fov_3; }
	inline void set_fov_3(int32_t value)
	{
		___fov_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(FOV2D_t3710553267, ___direction_4)); }
	inline Vector2_t2243707579  get_direction_4() const { return ___direction_4; }
	inline Vector2_t2243707579 * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector2_t2243707579  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_testPoint_5() { return static_cast<int32_t>(offsetof(FOV2D_t3710553267, ___testPoint_5)); }
	inline Transform_t3275118058 * get_testPoint_5() const { return ___testPoint_5; }
	inline Transform_t3275118058 ** get_address_of_testPoint_5() { return &___testPoint_5; }
	inline void set_testPoint_5(Transform_t3275118058 * value)
	{
		___testPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___testPoint_5, value);
	}

	inline static int32_t get_offset_of_leftLineFOV_6() { return static_cast<int32_t>(offsetof(FOV2D_t3710553267, ___leftLineFOV_6)); }
	inline Vector2_t2243707579  get_leftLineFOV_6() const { return ___leftLineFOV_6; }
	inline Vector2_t2243707579 * get_address_of_leftLineFOV_6() { return &___leftLineFOV_6; }
	inline void set_leftLineFOV_6(Vector2_t2243707579  value)
	{
		___leftLineFOV_6 = value;
	}

	inline static int32_t get_offset_of_rightLineFOV_7() { return static_cast<int32_t>(offsetof(FOV2D_t3710553267, ___rightLineFOV_7)); }
	inline Vector2_t2243707579  get_rightLineFOV_7() const { return ___rightLineFOV_7; }
	inline Vector2_t2243707579 * get_address_of_rightLineFOV_7() { return &___rightLineFOV_7; }
	inline void set_rightLineFOV_7(Vector2_t2243707579  value)
	{
		___rightLineFOV_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
