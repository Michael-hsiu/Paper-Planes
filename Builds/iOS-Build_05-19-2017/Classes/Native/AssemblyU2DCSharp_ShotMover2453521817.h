#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShotMover
struct  ShotMover_t2453521817  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ShotMover::speed
	float ___speed_2;
	// System.Single ShotMover::lifeTime
	float ___lifeTime_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ShotMover_t2453521817, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lifeTime_3() { return static_cast<int32_t>(offsetof(ShotMover_t2453521817, ___lifeTime_3)); }
	inline float get_lifeTime_3() const { return ___lifeTime_3; }
	inline float* get_address_of_lifeTime_3() { return &___lifeTime_3; }
	inline void set_lifeTime_3(float value)
	{
		___lifeTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
