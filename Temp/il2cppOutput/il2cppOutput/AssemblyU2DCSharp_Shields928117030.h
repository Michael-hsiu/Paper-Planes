#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shields
struct  Shields_t928117030  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Shields::shieldHealth
	int32_t ___shieldHealth_2;
	// System.Single Shields::shieldDuration
	float ___shieldDuration_3;
	// UnityEngine.Color Shields::spriteColor
	Color_t2020392075  ___spriteColor_4;

public:
	inline static int32_t get_offset_of_shieldHealth_2() { return static_cast<int32_t>(offsetof(Shields_t928117030, ___shieldHealth_2)); }
	inline int32_t get_shieldHealth_2() const { return ___shieldHealth_2; }
	inline int32_t* get_address_of_shieldHealth_2() { return &___shieldHealth_2; }
	inline void set_shieldHealth_2(int32_t value)
	{
		___shieldHealth_2 = value;
	}

	inline static int32_t get_offset_of_shieldDuration_3() { return static_cast<int32_t>(offsetof(Shields_t928117030, ___shieldDuration_3)); }
	inline float get_shieldDuration_3() const { return ___shieldDuration_3; }
	inline float* get_address_of_shieldDuration_3() { return &___shieldDuration_3; }
	inline void set_shieldDuration_3(float value)
	{
		___shieldDuration_3 = value;
	}

	inline static int32_t get_offset_of_spriteColor_4() { return static_cast<int32_t>(offsetof(Shields_t928117030, ___spriteColor_4)); }
	inline Color_t2020392075  get_spriteColor_4() const { return ___spriteColor_4; }
	inline Color_t2020392075 * get_address_of_spriteColor_4() { return &___spriteColor_4; }
	inline void set_spriteColor_4(Color_t2020392075  value)
	{
		___spriteColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
