#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"
#include "AssemblyU2DCSharp_SpecialWeapons1455949192.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<Mine>
struct List_1_t2098562409;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TripMineWeapon
struct  TripMineWeapon_t4010445916  : public PoolObject_t202793199
{
public:
	// UnityEngine.GameObject TripMineWeapon::mine
	GameObject_t1756533147 * ___mine_2;
	// System.Single TripMineWeapon::radius
	float ___radius_3;
	// System.Single TripMineWeapon::mineFuse
	float ___mineFuse_4;
	// System.Single TripMineWeapon::explosionForce
	float ___explosionForce_5;
	// System.Collections.Generic.List`1<Mine> TripMineWeapon::mines
	List_1_t2098562409 * ___mines_6;
	// System.Boolean TripMineWeapon::isVisible
	bool ___isVisible_7;
	// System.Collections.IEnumerator TripMineWeapon::cr
	Il2CppObject * ___cr_8;
	// UnityEngine.GameObject TripMineWeapon::player
	GameObject_t1756533147 * ___player_9;
	// SpecialWeapons TripMineWeapon::id
	int32_t ___id_10;

public:
	inline static int32_t get_offset_of_mine_2() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___mine_2)); }
	inline GameObject_t1756533147 * get_mine_2() const { return ___mine_2; }
	inline GameObject_t1756533147 ** get_address_of_mine_2() { return &___mine_2; }
	inline void set_mine_2(GameObject_t1756533147 * value)
	{
		___mine_2 = value;
		Il2CppCodeGenWriteBarrier(&___mine_2, value);
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_mineFuse_4() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___mineFuse_4)); }
	inline float get_mineFuse_4() const { return ___mineFuse_4; }
	inline float* get_address_of_mineFuse_4() { return &___mineFuse_4; }
	inline void set_mineFuse_4(float value)
	{
		___mineFuse_4 = value;
	}

	inline static int32_t get_offset_of_explosionForce_5() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___explosionForce_5)); }
	inline float get_explosionForce_5() const { return ___explosionForce_5; }
	inline float* get_address_of_explosionForce_5() { return &___explosionForce_5; }
	inline void set_explosionForce_5(float value)
	{
		___explosionForce_5 = value;
	}

	inline static int32_t get_offset_of_mines_6() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___mines_6)); }
	inline List_1_t2098562409 * get_mines_6() const { return ___mines_6; }
	inline List_1_t2098562409 ** get_address_of_mines_6() { return &___mines_6; }
	inline void set_mines_6(List_1_t2098562409 * value)
	{
		___mines_6 = value;
		Il2CppCodeGenWriteBarrier(&___mines_6, value);
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_cr_8() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___cr_8)); }
	inline Il2CppObject * get_cr_8() const { return ___cr_8; }
	inline Il2CppObject ** get_address_of_cr_8() { return &___cr_8; }
	inline void set_cr_8(Il2CppObject * value)
	{
		___cr_8 = value;
		Il2CppCodeGenWriteBarrier(&___cr_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___player_9)); }
	inline GameObject_t1756533147 * get_player_9() const { return ___player_9; }
	inline GameObject_t1756533147 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t1756533147 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_id_10() { return static_cast<int32_t>(offsetof(TripMineWeapon_t4010445916, ___id_10)); }
	inline int32_t get_id_10() const { return ___id_10; }
	inline int32_t* get_address_of_id_10() { return &___id_10; }
	inline void set_id_10(int32_t value)
	{
		___id_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
