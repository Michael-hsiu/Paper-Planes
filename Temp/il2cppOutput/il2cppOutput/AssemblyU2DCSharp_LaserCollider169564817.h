#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserCollider
struct  LaserCollider_t169564817  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LaserCollider::dmg
	int32_t ___dmg_2;
	// System.Single LaserCollider::dmgDelay
	float ___dmgDelay_3;
	// System.Single LaserCollider::nextDmgTime
	float ___nextDmgTime_4;
	// UnityEngine.Collider LaserCollider::laserCollider
	Collider_t3497673348 * ___laserCollider_5;

public:
	inline static int32_t get_offset_of_dmg_2() { return static_cast<int32_t>(offsetof(LaserCollider_t169564817, ___dmg_2)); }
	inline int32_t get_dmg_2() const { return ___dmg_2; }
	inline int32_t* get_address_of_dmg_2() { return &___dmg_2; }
	inline void set_dmg_2(int32_t value)
	{
		___dmg_2 = value;
	}

	inline static int32_t get_offset_of_dmgDelay_3() { return static_cast<int32_t>(offsetof(LaserCollider_t169564817, ___dmgDelay_3)); }
	inline float get_dmgDelay_3() const { return ___dmgDelay_3; }
	inline float* get_address_of_dmgDelay_3() { return &___dmgDelay_3; }
	inline void set_dmgDelay_3(float value)
	{
		___dmgDelay_3 = value;
	}

	inline static int32_t get_offset_of_nextDmgTime_4() { return static_cast<int32_t>(offsetof(LaserCollider_t169564817, ___nextDmgTime_4)); }
	inline float get_nextDmgTime_4() const { return ___nextDmgTime_4; }
	inline float* get_address_of_nextDmgTime_4() { return &___nextDmgTime_4; }
	inline void set_nextDmgTime_4(float value)
	{
		___nextDmgTime_4 = value;
	}

	inline static int32_t get_offset_of_laserCollider_5() { return static_cast<int32_t>(offsetof(LaserCollider_t169564817, ___laserCollider_5)); }
	inline Collider_t3497673348 * get_laserCollider_5() const { return ___laserCollider_5; }
	inline Collider_t3497673348 ** get_address_of_laserCollider_5() { return &___laserCollider_5; }
	inline void set_laserCollider_5(Collider_t3497673348 * value)
	{
		___laserCollider_5 = value;
		Il2CppCodeGenWriteBarrier(&___laserCollider_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
