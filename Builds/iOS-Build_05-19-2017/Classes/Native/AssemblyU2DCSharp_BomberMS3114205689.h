#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BomberShip
struct BomberShip_t3698202601;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BomberMS
struct  BomberMS_t3114205689  : public MonoBehaviour_t1158329972
{
public:
	// Direction BomberMS::direction
	int32_t ___direction_2;
	// BomberShip BomberMS::bs
	BomberShip_t3698202601 * ___bs_3;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(BomberMS_t3114205689, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_bs_3() { return static_cast<int32_t>(offsetof(BomberMS_t3114205689, ___bs_3)); }
	inline BomberShip_t3698202601 * get_bs_3() const { return ___bs_3; }
	inline BomberShip_t3698202601 ** get_address_of_bs_3() { return &___bs_3; }
	inline void set_bs_3(BomberShip_t3698202601 * value)
	{
		___bs_3 = value;
		Il2CppCodeGenWriteBarrier(&___bs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
