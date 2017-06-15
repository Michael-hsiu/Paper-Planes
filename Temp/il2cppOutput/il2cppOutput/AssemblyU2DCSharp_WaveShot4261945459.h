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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaveShot
struct  WaveShot_t4261945459  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject WaveShot::shotSpawn
	GameObject_t1756533147 * ___shotSpawn_2;
	// System.Int32 WaveShot::shotDamage
	int32_t ___shotDamage_3;
	// System.Single WaveShot::speed
	float ___speed_4;
	// System.Single WaveShot::speedMultiplier
	float ___speedMultiplier_5;
	// System.Single WaveShot::lifeTime
	float ___lifeTime_6;
	// UnityEngine.GameObject WaveShot::debugExplosion
	GameObject_t1756533147 * ___debugExplosion_7;
	// UnityEngine.Rigidbody WaveShot::rb
	Rigidbody_t4233889191 * ___rb_8;

public:
	inline static int32_t get_offset_of_shotSpawn_2() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___shotSpawn_2)); }
	inline GameObject_t1756533147 * get_shotSpawn_2() const { return ___shotSpawn_2; }
	inline GameObject_t1756533147 ** get_address_of_shotSpawn_2() { return &___shotSpawn_2; }
	inline void set_shotSpawn_2(GameObject_t1756533147 * value)
	{
		___shotSpawn_2 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_2, value);
	}

	inline static int32_t get_offset_of_shotDamage_3() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___shotDamage_3)); }
	inline int32_t get_shotDamage_3() const { return ___shotDamage_3; }
	inline int32_t* get_address_of_shotDamage_3() { return &___shotDamage_3; }
	inline void set_shotDamage_3(int32_t value)
	{
		___shotDamage_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_speedMultiplier_5() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___speedMultiplier_5)); }
	inline float get_speedMultiplier_5() const { return ___speedMultiplier_5; }
	inline float* get_address_of_speedMultiplier_5() { return &___speedMultiplier_5; }
	inline void set_speedMultiplier_5(float value)
	{
		___speedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_lifeTime_6() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___lifeTime_6)); }
	inline float get_lifeTime_6() const { return ___lifeTime_6; }
	inline float* get_address_of_lifeTime_6() { return &___lifeTime_6; }
	inline void set_lifeTime_6(float value)
	{
		___lifeTime_6 = value;
	}

	inline static int32_t get_offset_of_debugExplosion_7() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___debugExplosion_7)); }
	inline GameObject_t1756533147 * get_debugExplosion_7() const { return ___debugExplosion_7; }
	inline GameObject_t1756533147 ** get_address_of_debugExplosion_7() { return &___debugExplosion_7; }
	inline void set_debugExplosion_7(GameObject_t1756533147 * value)
	{
		___debugExplosion_7 = value;
		Il2CppCodeGenWriteBarrier(&___debugExplosion_7, value);
	}

	inline static int32_t get_offset_of_rb_8() { return static_cast<int32_t>(offsetof(WaveShot_t4261945459, ___rb_8)); }
	inline Rigidbody_t4233889191 * get_rb_8() const { return ___rb_8; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_8() { return &___rb_8; }
	inline void set_rb_8(Rigidbody_t4233889191 * value)
	{
		___rb_8 = value;
		Il2CppCodeGenWriteBarrier(&___rb_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
