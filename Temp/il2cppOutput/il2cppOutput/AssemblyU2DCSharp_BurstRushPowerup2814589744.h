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
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t2866794480;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// PlayerShip
struct PlayerShip_t2635532215;

#include "AssemblyU2DCSharp_PoolObject202793199.h"
#include "AssemblyU2DCSharp_SpecialWeapons1455949192.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BurstRushPowerup
struct  BurstRushPowerup_t2814589744  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject BurstRushPowerup::burstChargeColliders
	GameObject_t1756533147 * ___burstChargeColliders_2;
	// UnityEngine.GameObject BurstRushPowerup::burstRushColliders
	GameObject_t1756533147 * ___burstRushColliders_3;
	// System.Boolean BurstRushPowerup::isActive
	bool ___isActive_4;
	// System.Boolean BurstRushPowerup::isCharging
	bool ___isCharging_5;
	// System.Single BurstRushPowerup::chargeTime
	float ___chargeTime_6;
	// System.Single BurstRushPowerup::rushTime
	float ___rushTime_7;
	// System.Single BurstRushPowerup::thrust
	float ___thrust_8;
	// System.Single BurstRushPowerup::radius
	float ___radius_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> BurstRushPowerup::colliders
	List_1_t2866794480 * ___colliders_10;
	// System.Boolean BurstRushPowerup::isVisible
	bool ___isVisible_11;
	// System.Collections.IEnumerator BurstRushPowerup::cr1
	Il2CppObject * ___cr1_12;
	// System.Collections.IEnumerator BurstRushPowerup::cr2
	Il2CppObject * ___cr2_13;
	// PlayerShip BurstRushPowerup::player
	PlayerShip_t2635532215 * ___player_14;
	// SpecialWeapons BurstRushPowerup::id
	int32_t ___id_15;

public:
	inline static int32_t get_offset_of_burstChargeColliders_2() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___burstChargeColliders_2)); }
	inline GameObject_t1756533147 * get_burstChargeColliders_2() const { return ___burstChargeColliders_2; }
	inline GameObject_t1756533147 ** get_address_of_burstChargeColliders_2() { return &___burstChargeColliders_2; }
	inline void set_burstChargeColliders_2(GameObject_t1756533147 * value)
	{
		___burstChargeColliders_2 = value;
		Il2CppCodeGenWriteBarrier(&___burstChargeColliders_2, value);
	}

	inline static int32_t get_offset_of_burstRushColliders_3() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___burstRushColliders_3)); }
	inline GameObject_t1756533147 * get_burstRushColliders_3() const { return ___burstRushColliders_3; }
	inline GameObject_t1756533147 ** get_address_of_burstRushColliders_3() { return &___burstRushColliders_3; }
	inline void set_burstRushColliders_3(GameObject_t1756533147 * value)
	{
		___burstRushColliders_3 = value;
		Il2CppCodeGenWriteBarrier(&___burstRushColliders_3, value);
	}

	inline static int32_t get_offset_of_isActive_4() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___isActive_4)); }
	inline bool get_isActive_4() const { return ___isActive_4; }
	inline bool* get_address_of_isActive_4() { return &___isActive_4; }
	inline void set_isActive_4(bool value)
	{
		___isActive_4 = value;
	}

	inline static int32_t get_offset_of_isCharging_5() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___isCharging_5)); }
	inline bool get_isCharging_5() const { return ___isCharging_5; }
	inline bool* get_address_of_isCharging_5() { return &___isCharging_5; }
	inline void set_isCharging_5(bool value)
	{
		___isCharging_5 = value;
	}

	inline static int32_t get_offset_of_chargeTime_6() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___chargeTime_6)); }
	inline float get_chargeTime_6() const { return ___chargeTime_6; }
	inline float* get_address_of_chargeTime_6() { return &___chargeTime_6; }
	inline void set_chargeTime_6(float value)
	{
		___chargeTime_6 = value;
	}

	inline static int32_t get_offset_of_rushTime_7() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___rushTime_7)); }
	inline float get_rushTime_7() const { return ___rushTime_7; }
	inline float* get_address_of_rushTime_7() { return &___rushTime_7; }
	inline void set_rushTime_7(float value)
	{
		___rushTime_7 = value;
	}

	inline static int32_t get_offset_of_thrust_8() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___thrust_8)); }
	inline float get_thrust_8() const { return ___thrust_8; }
	inline float* get_address_of_thrust_8() { return &___thrust_8; }
	inline void set_thrust_8(float value)
	{
		___thrust_8 = value;
	}

	inline static int32_t get_offset_of_radius_9() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___radius_9)); }
	inline float get_radius_9() const { return ___radius_9; }
	inline float* get_address_of_radius_9() { return &___radius_9; }
	inline void set_radius_9(float value)
	{
		___radius_9 = value;
	}

	inline static int32_t get_offset_of_colliders_10() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___colliders_10)); }
	inline List_1_t2866794480 * get_colliders_10() const { return ___colliders_10; }
	inline List_1_t2866794480 ** get_address_of_colliders_10() { return &___colliders_10; }
	inline void set_colliders_10(List_1_t2866794480 * value)
	{
		___colliders_10 = value;
		Il2CppCodeGenWriteBarrier(&___colliders_10, value);
	}

	inline static int32_t get_offset_of_isVisible_11() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___isVisible_11)); }
	inline bool get_isVisible_11() const { return ___isVisible_11; }
	inline bool* get_address_of_isVisible_11() { return &___isVisible_11; }
	inline void set_isVisible_11(bool value)
	{
		___isVisible_11 = value;
	}

	inline static int32_t get_offset_of_cr1_12() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___cr1_12)); }
	inline Il2CppObject * get_cr1_12() const { return ___cr1_12; }
	inline Il2CppObject ** get_address_of_cr1_12() { return &___cr1_12; }
	inline void set_cr1_12(Il2CppObject * value)
	{
		___cr1_12 = value;
		Il2CppCodeGenWriteBarrier(&___cr1_12, value);
	}

	inline static int32_t get_offset_of_cr2_13() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___cr2_13)); }
	inline Il2CppObject * get_cr2_13() const { return ___cr2_13; }
	inline Il2CppObject ** get_address_of_cr2_13() { return &___cr2_13; }
	inline void set_cr2_13(Il2CppObject * value)
	{
		___cr2_13 = value;
		Il2CppCodeGenWriteBarrier(&___cr2_13, value);
	}

	inline static int32_t get_offset_of_player_14() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___player_14)); }
	inline PlayerShip_t2635532215 * get_player_14() const { return ___player_14; }
	inline PlayerShip_t2635532215 ** get_address_of_player_14() { return &___player_14; }
	inline void set_player_14(PlayerShip_t2635532215 * value)
	{
		___player_14 = value;
		Il2CppCodeGenWriteBarrier(&___player_14, value);
	}

	inline static int32_t get_offset_of_id_15() { return static_cast<int32_t>(offsetof(BurstRushPowerup_t2814589744, ___id_15)); }
	inline int32_t get_id_15() const { return ___id_15; }
	inline int32_t* get_address_of_id_15() { return &___id_15; }
	inline void set_id_15(int32_t value)
	{
		___id_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
