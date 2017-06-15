#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStraightMissile
struct  PlayerStraightMissile_t771456871  : public PoolObject_t202793199
{
public:
	// System.Single PlayerStraightMissile::thrust
	float ___thrust_2;
	// System.Int32 PlayerStraightMissile::missileDmg
	int32_t ___missileDmg_3;
	// UnityEngine.GameObject PlayerStraightMissile::explosion
	GameObject_t1756533147 * ___explosion_4;

public:
	inline static int32_t get_offset_of_thrust_2() { return static_cast<int32_t>(offsetof(PlayerStraightMissile_t771456871, ___thrust_2)); }
	inline float get_thrust_2() const { return ___thrust_2; }
	inline float* get_address_of_thrust_2() { return &___thrust_2; }
	inline void set_thrust_2(float value)
	{
		___thrust_2 = value;
	}

	inline static int32_t get_offset_of_missileDmg_3() { return static_cast<int32_t>(offsetof(PlayerStraightMissile_t771456871, ___missileDmg_3)); }
	inline int32_t get_missileDmg_3() const { return ___missileDmg_3; }
	inline int32_t* get_address_of_missileDmg_3() { return &___missileDmg_3; }
	inline void set_missileDmg_3(int32_t value)
	{
		___missileDmg_3 = value;
	}

	inline static int32_t get_offset_of_explosion_4() { return static_cast<int32_t>(offsetof(PlayerStraightMissile_t771456871, ___explosion_4)); }
	inline GameObject_t1756533147 * get_explosion_4() const { return ___explosion_4; }
	inline GameObject_t1756533147 ** get_address_of_explosion_4() { return &___explosion_4; }
	inline void set_explosion_4(GameObject_t1756533147 * value)
	{
		___explosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
