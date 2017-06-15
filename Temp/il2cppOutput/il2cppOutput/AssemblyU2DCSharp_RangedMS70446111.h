#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"

// RangedShip
struct RangedShip_t2972560139;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RangedMS
struct  RangedMS_t70446111  : public MonoBehaviour_t1158329972
{
public:
	// Direction RangedMS::direction
	int32_t ___direction_2;
	// RangedShip RangedMS::rangedShip
	RangedShip_t2972560139 * ___rangedShip_3;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(RangedMS_t70446111, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_rangedShip_3() { return static_cast<int32_t>(offsetof(RangedMS_t70446111, ___rangedShip_3)); }
	inline RangedShip_t2972560139 * get_rangedShip_3() const { return ___rangedShip_3; }
	inline RangedShip_t2972560139 ** get_address_of_rangedShip_3() { return &___rangedShip_3; }
	inline void set_rangedShip_3(RangedShip_t2972560139 * value)
	{
		___rangedShip_3 = value;
		Il2CppCodeGenWriteBarrier(&___rangedShip_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
