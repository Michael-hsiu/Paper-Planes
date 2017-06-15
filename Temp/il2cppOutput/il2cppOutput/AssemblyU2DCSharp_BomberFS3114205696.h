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

// BomberFS
struct BomberFS_t3114205696;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BomberFS
struct  BomberFS_t3114205696  : public MonoBehaviour_t1158329972
{
public:
	// FiringMode BomberFS::mode
	int32_t ___mode_2;
	// BomberFS BomberFS::bs
	BomberFS_t3114205696 * ___bs_3;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(BomberFS_t3114205696, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_bs_3() { return static_cast<int32_t>(offsetof(BomberFS_t3114205696, ___bs_3)); }
	inline BomberFS_t3114205696 * get_bs_3() const { return ___bs_3; }
	inline BomberFS_t3114205696 ** get_address_of_bs_3() { return &___bs_3; }
	inline void set_bs_3(BomberFS_t3114205696 * value)
	{
		___bs_3 = value;
		Il2CppCodeGenWriteBarrier(&___bs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
