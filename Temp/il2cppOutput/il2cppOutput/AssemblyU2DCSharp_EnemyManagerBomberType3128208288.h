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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyManagerBomberType
struct  EnemyManagerBomberType_t3128208288  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyManagerBomberType::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Int32 EnemyManagerBomberType::enemyHealth
	int32_t ___enemyHealth_3;
	// System.Int32 EnemyManagerBomberType::shotDamage
	int32_t ___shotDamage_4;
	// System.Int32 EnemyManagerBomberType::enemyPoints
	int32_t ___enemyPoints_5;
	// UnityEngine.GameObject EnemyManagerBomberType::player
	GameObject_t1756533147 * ___player_6;
	// UnityEngine.Rigidbody EnemyManagerBomberType::rb
	Rigidbody_t4233889191 * ___rb_7;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(EnemyManagerBomberType_t3128208288, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_enemyHealth_3() { return static_cast<int32_t>(offsetof(EnemyManagerBomberType_t3128208288, ___enemyHealth_3)); }
	inline int32_t get_enemyHealth_3() const { return ___enemyHealth_3; }
	inline int32_t* get_address_of_enemyHealth_3() { return &___enemyHealth_3; }
	inline void set_enemyHealth_3(int32_t value)
	{
		___enemyHealth_3 = value;
	}

	inline static int32_t get_offset_of_shotDamage_4() { return static_cast<int32_t>(offsetof(EnemyManagerBomberType_t3128208288, ___shotDamage_4)); }
	inline int32_t get_shotDamage_4() const { return ___shotDamage_4; }
	inline int32_t* get_address_of_shotDamage_4() { return &___shotDamage_4; }
	inline void set_shotDamage_4(int32_t value)
	{
		___shotDamage_4 = value;
	}

	inline static int32_t get_offset_of_enemyPoints_5() { return static_cast<int32_t>(offsetof(EnemyManagerBomberType_t3128208288, ___enemyPoints_5)); }
	inline int32_t get_enemyPoints_5() const { return ___enemyPoints_5; }
	inline int32_t* get_address_of_enemyPoints_5() { return &___enemyPoints_5; }
	inline void set_enemyPoints_5(int32_t value)
	{
		___enemyPoints_5 = value;
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(EnemyManagerBomberType_t3128208288, ___player_6)); }
	inline GameObject_t1756533147 * get_player_6() const { return ___player_6; }
	inline GameObject_t1756533147 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t1756533147 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(EnemyManagerBomberType_t3128208288, ___rb_7)); }
	inline Rigidbody_t4233889191 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t4233889191 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
