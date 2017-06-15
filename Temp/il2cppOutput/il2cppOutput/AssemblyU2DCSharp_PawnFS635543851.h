#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"

// PawnShip
struct PawnShip_t2860244988;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PawnFS
struct  PawnFS_t635543851  : public MonoBehaviour_t1158329972
{
public:
	// FiringMode PawnFS::mode
	int32_t ___mode_2;
	// PawnShip PawnFS::pawnShip
	PawnShip_t2860244988 * ___pawnShip_3;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(PawnFS_t635543851, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_pawnShip_3() { return static_cast<int32_t>(offsetof(PawnFS_t635543851, ___pawnShip_3)); }
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
