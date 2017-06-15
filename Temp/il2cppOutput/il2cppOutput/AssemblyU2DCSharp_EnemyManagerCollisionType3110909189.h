#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyManagerCollisionType
struct  EnemyManagerCollisionType_t3110909189  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyManagerCollisionType::explosion
	GameObject_t1756533147 * ___explosion_2;
	// System.Int32 EnemyManagerCollisionType::enemyHealth
	int32_t ___enemyHealth_3;
	// System.Int32 EnemyManagerCollisionType::shotDamage
	int32_t ___shotDamage_4;
	// System.Int32 EnemyManagerCollisionType::enemyPoints
	int32_t ___enemyPoints_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(EnemyManagerCollisionType_t3110909189, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_enemyHealth_3() { return static_cast<int32_t>(offsetof(EnemyManagerCollisionType_t3110909189, ___enemyHealth_3)); }
	inline int32_t get_enemyHealth_3() const { return ___enemyHealth_3; }
	inline int32_t* get_address_of_enemyHealth_3() { return &___enemyHealth_3; }
	inline void set_enemyHealth_3(int32_t value)
	{
		___enemyHealth_3 = value;
	}

	inline static int32_t get_offset_of_shotDamage_4() { return static_cast<int32_t>(offsetof(EnemyManagerCollisionType_t3110909189, ___shotDamage_4)); }
	inline int32_t get_shotDamage_4() const { return ___shotDamage_4; }
	inline int32_t* get_address_of_shotDamage_4() { return &___shotDamage_4; }
	inline void set_shotDamage_4(int32_t value)
	{
		___shotDamage_4 = value;
	}

	inline static int32_t get_offset_of_enemyPoints_5() { return static_cast<int32_t>(offsetof(EnemyManagerCollisionType_t3110909189, ___enemyPoints_5)); }
	inline int32_t get_enemyPoints_5() const { return ___enemyPoints_5; }
	inline int32_t* get_address_of_enemyPoints_5() { return &___enemyPoints_5; }
	inline void set_enemyPoints_5(int32_t value)
	{
		___enemyPoints_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
