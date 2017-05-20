#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SniperBoss
struct SniperBoss_t228994654;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SniperBossMS
struct  SniperBossMS_t1623985390  : public MonoBehaviour_t1158329972
{
public:
	// Direction SniperBossMS::direction
	int32_t ___direction_2;
	// SniperBoss SniperBossMS::sb
	SniperBoss_t228994654 * ___sb_3;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_sb_3() { return static_cast<int32_t>(offsetof(SniperBossMS_t1623985390, ___sb_3)); }
	inline SniperBoss_t228994654 * get_sb_3() const { return ___sb_3; }
	inline SniperBoss_t228994654 ** get_address_of_sb_3() { return &___sb_3; }
	inline void set_sb_3(SniperBoss_t228994654 * value)
	{
		___sb_3 = value;
		Il2CppCodeGenWriteBarrier(&___sb_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
