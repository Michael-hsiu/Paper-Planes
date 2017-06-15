#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




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
	GameObject_t1756533147 * ___shot_20;
	// UnityEngine.GameObject FiringShip::fasterShot
	GameObject_t1756533147 * ___fasterShot_21;
	// UnityEngine.Transform FiringShip::shotSpawn
	Transform_t3275118058 * ___shotSpawn_22;
	// System.Int32 FiringShip::shotDamage
	int32_t ___shotDamage_23;
	// System.Single FiringShip::fireRate
	float ___fireRate_24;
	// System.Single FiringShip::nextFire
	float ___nextFire_25;
	// System.Single FiringShip::buffedFiringRateFactor
	float ___buffedFiringRateFactor_26;
	// System.Boolean FiringShip::isFiringBuffed
	bool ___isFiringBuffed_27;

public:
	inline static int32_t get_offset_of_shot_20() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___shot_20)); }
	inline GameObject_t1756533147 * get_shot_20() const { return ___shot_20; }
	inline GameObject_t1756533147 ** get_address_of_shot_20() { return &___shot_20; }
	inline void set_shot_20(GameObject_t1756533147 * value)
	{
		___shot_20 = value;
		Il2CppCodeGenWriteBarrier(&___shot_20, value);
	}

	inline static int32_t get_offset_of_fasterShot_21() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___fasterShot_21)); }
	inline GameObject_t1756533147 * get_fasterShot_21() const { return ___fasterShot_21; }
	inline GameObject_t1756533147 ** get_address_of_fasterShot_21() { return &___fasterShot_21; }
	inline void set_fasterShot_21(GameObject_t1756533147 * value)
	{
		___fasterShot_21 = value;
		Il2CppCodeGenWriteBarrier(&___fasterShot_21, value);
	}

	inline static int32_t get_offset_of_shotSpawn_22() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___shotSpawn_22)); }
	inline Transform_t3275118058 * get_shotSpawn_22() const { return ___shotSpawn_22; }
	inline Transform_t3275118058 ** get_address_of_shotSpawn_22() { return &___shotSpawn_22; }
	inline void set_shotSpawn_22(Transform_t3275118058 * value)
	{
		___shotSpawn_22 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_22, value);
	}

	inline static int32_t get_offset_of_shotDamage_23() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___shotDamage_23)); }
	inline int32_t get_shotDamage_23() const { return ___shotDamage_23; }
	inline int32_t* get_address_of_shotDamage_23() { return &___shotDamage_23; }
	inline void set_shotDamage_23(int32_t value)
	{
		___shotDamage_23 = value;
	}

	inline static int32_t get_offset_of_fireRate_24() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___fireRate_24)); }
	inline float get_fireRate_24() const { return ___fireRate_24; }
	inline float* get_address_of_fireRate_24() { return &___fireRate_24; }
	inline void set_fireRate_24(float value)
	{
		___fireRate_24 = value;
	}

	inline static int32_t get_offset_of_nextFire_25() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___nextFire_25)); }
	inline float get_nextFire_25() const { return ___nextFire_25; }
	inline float* get_address_of_nextFire_25() { return &___nextFire_25; }
	inline void set_nextFire_25(float value)
	{
		___nextFire_25 = value;
	}

	inline static int32_t get_offset_of_buffedFiringRateFactor_26() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___buffedFiringRateFactor_26)); }
	inline float get_buffedFiringRateFactor_26() const { return ___buffedFiringRateFactor_26; }
	inline float* get_address_of_buffedFiringRateFactor_26() { return &___buffedFiringRateFactor_26; }
	inline void set_buffedFiringRateFactor_26(float value)
	{
		___buffedFiringRateFactor_26 = value;
	}

	inline static int32_t get_offset_of_isFiringBuffed_27() { return static_cast<int32_t>(offsetof(FiringShip_t3666415697, ___isFiringBuffed_27)); }
	inline bool get_isFiringBuffed_27() const { return ___isFiringBuffed_27; }
	inline bool* get_address_of_isFiringBuffed_27() { return &___isFiringBuffed_27; }
	inline void set_isFiringBuffed_27(bool value)
	{
		___isFiringBuffed_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
