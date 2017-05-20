#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "AssemblyU2DCSharp_Ship1116303770.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FiringShip
struct  FiringShip_t3666415697  : public Ship_t1116303770
{
public:
	// UnityEngine.GameObject FiringShip::shot
	GameObject_t1756533147 * ___shot_15;
	// UnityEngine.GameObject FiringShip::fasterShot
	GameObject_t1756533147 * ___fasterShot_16;
	// UnityEngine.Transform FiringShip::shotSpawn
	Transform_t3275118058 * ___shotSpawn_17;
	// System.Int32 FiringShip::shotDamage
	int32_t ___shotDamage_18;
	// System.Single FiringShip::fireRate
	float ___fireRate_19;
	// System.Single FiringShip::nextFire
	float ___nextFire_20;
	// System.Single FiringShip::buffedFiringRateFactor
	float ___buffedFiringRateFactor_21;
	// System.Boolean FiringShip::isFiringBuffed
	bool ___isFiringBuffed_22;

public:
	inline static int32_t get_offset_of_shot_15() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___shot_15)); }
	inline GameObject_t1756533147 * get_shot_15() const { return ___shot_15; }
	inline GameObject_t1756533147 ** get_address_of_shot_15() { return &___shot_15; }
	inline void set_shot_15(GameObject_t1756533147 * value)
	{
		___shot_15 = value;
		Il2CppCodeGenWriteBarrier(&___shot_15, value);
	}

	inline static int32_t get_offset_of_fasterShot_16() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___fasterShot_16)); }
	inline GameObject_t1756533147 * get_fasterShot_16() const { return ___fasterShot_16; }
	inline GameObject_t1756533147 ** get_address_of_fasterShot_16() { return &___fasterShot_16; }
	inline void set_fasterShot_16(GameObject_t1756533147 * value)
	{
		___fasterShot_16 = value;
		Il2CppCodeGenWriteBarrier(&___fasterShot_16, value);
	}

	inline static int32_t get_offset_of_shotSpawn_17() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___shotSpawn_17)); }
	inline Transform_t3275118058 * get_shotSpawn_17() const { return ___shotSpawn_17; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_17() { return &___shotSpawn_17; }
	inline void set_shotSpawn_17(Transform_t3275118058 * value)
	{
		___shotSpawn_17 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_17, value);
	}

	inline static int32_t get_offset_of_shotDamage_18() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___shotDamage_18)); }
	inline int32_t get_shotDamage_18() const { return ___shotDamage_18; }
	inline int32_t* get_address_of_shotDamage_18() { return &___shotDamage_18; }
	inline void set_shotDamage_18(int32_t value)
	{
		___shotDamage_18 = value;
	}

	inline static int32_t get_offset_of_fireRate_19() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___fireRate_19)); }
	inline float get_fireRate_19() const { return ___fireRate_19; }
	inline float* get_address_of_fireRate_19() { return &___fireRate_19; }
	inline void set_fireRate_19(float value)
	{
		___fireRate_19 = value;
	}

	inline static int32_t get_offset_of_nextFire_20() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___nextFire_20)); }
	inline float get_nextFire_20() const { return ___nextFire_20; }
	inline float* get_address_of_nextFire_20() { return &___nextFire_20; }
	inline void set_nextFire_20(float value)
	{
		___nextFire_20 = value;
	}

	inline static int32_t get_offset_of_buffedFiringRateFactor_21() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___buffedFiringRateFactor_21)); }
	inline float get_buffedFiringRateFactor_21() const { return ___buffedFiringRateFactor_21; }
	inline float* get_address_of_buffedFiringRateFactor_21() { return &___buffedFiringRateFactor_21; }
	inline void set_buffedFiringRateFactor_21(float value)
	{
		___buffedFiringRateFactor_21 = value;
	}

	inline static int32_t get_offset_of_isFiringBuffed_22() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___isFiringBuffed_22)); }
	inline bool get_isFiringBuffed_22() const { return ___isFiringBuffed_22; }
	inline bool* get_address_of_isFiringBuffed_22() { return &___isFiringBuffed_22; }
	inline void set_isFiringBuffed_22(bool value)
	{
		___isFiringBuffed_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
