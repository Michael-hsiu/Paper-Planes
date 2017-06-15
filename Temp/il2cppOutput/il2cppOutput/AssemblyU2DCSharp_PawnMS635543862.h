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

// PawnShip
struct PawnShip_t2860244988;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PawnMS
struct  PawnMS_t635543862  : public MonoBehaviour_t1158329972
{
public:
	// Direction PawnMS::direction
	int32_t ___direction_2;
	// PawnShip PawnMS::pawnShip
	PawnShip_t2860244988 * ___pawnShip_3;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(PawnMS_t635543862, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_pawnShip_3() { return static_cast<int32_t>(offsetof(PawnMS_t635543862, ___pawnShip_3)); }
	inline PawnShip_t2860244988 * get_pawnShip_3() const { return ___pawnShip_3; }
	inline PawnShip_t2860244988 ** get_address_of_pawnShip_3() { return &___pawnShip_3; }
	inline void set_pawnShip_3(PawnShip_t2860244988 * value)
	{
		___pawnShip_3 = value;
		Il2CppCodeGenWriteBarrier(&___pawnShip_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
