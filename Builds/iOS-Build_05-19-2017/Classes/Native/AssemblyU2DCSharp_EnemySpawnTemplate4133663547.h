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
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawnTemplate
struct  EnemySpawnTemplate_t4133663547  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemySpawnTemplate::enemy
	GameObject_t1756533147 * ___enemy_2;
	// System.Single EnemySpawnTemplate::spawnDelay
	float ___spawnDelay_3;
	// System.Single EnemySpawnTemplate::spawnRadius
	float ___spawnRadius_4;
	// System.Boolean EnemySpawnTemplate::startSpawning
	bool ___startSpawning_5;
	// System.Single EnemySpawnTemplate::spawnAngle
	float ___spawnAngle_6;
	// System.Collections.IEnumerator EnemySpawnTemplate::cr
	Il2CppObject * ___cr_7;
	// System.Int32 EnemySpawnTemplate::numEnemies
	int32_t ___numEnemies_8;
	// UnityEngine.GameObject EnemySpawnTemplate::spawnContainer
	GameObject_t1756533147 * ___spawnContainer_9;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___enemy_2)); }
	inline GameObject_t1756533147 * get_enemy_2() const { return ___enemy_2; }
	inline GameObject_t1756533147 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(GameObject_t1756533147 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}

	inline static int32_t get_offset_of_spawnDelay_3() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___spawnDelay_3)); }
	inline float get_spawnDelay_3() const { return ___spawnDelay_3; }
	inline float* get_address_of_spawnDelay_3() { return &___spawnDelay_3; }
	inline void set_spawnDelay_3(float value)
	{
		___spawnDelay_3 = value;
	}

	inline static int32_t get_offset_of_spawnRadius_4() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___spawnRadius_4)); }
	inline float get_spawnRadius_4() const { return ___spawnRadius_4; }
	inline float* get_address_of_spawnRadius_4() { return &___spawnRadius_4; }
	inline void set_spawnRadius_4(float value)
	{
		___spawnRadius_4 = value;
	}

	inline static int32_t get_offset_of_startSpawning_5() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___startSpawning_5)); }
	inline bool get_startSpawning_5() const { return ___startSpawning_5; }
	inline bool* get_address_of_startSpawning_5() { return &___startSpawning_5; }
	inline void set_startSpawning_5(bool value)
	{
		___startSpawning_5 = value;
	}

	inline static int32_t get_offset_of_spawnAngle_6() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___spawnAngle_6)); }
	inline float get_spawnAngle_6() const { return ___spawnAngle_6; }
	inline float* get_address_of_spawnAngle_6() { return &___spawnAngle_6; }
	inline void set_spawnAngle_6(float value)
	{
		___spawnAngle_6 = value;
	}

	inline static int32_t get_offset_of_cr_7() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___cr_7)); }
	inline Il2CppObject * get_cr_7() const { return ___cr_7; }
	inline Il2CppObject ** get_address_of_cr_7() { return &___cr_7; }
	inline void set_cr_7(Il2CppObject * value)
	{
		___cr_7 = value;
		Il2CppCodeGenWriteBarrier(&___cr_7, value);
	}

	inline static int32_t get_offset_of_numEnemies_8() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___numEnemies_8)); }
	inline int32_t get_numEnemies_8() const { return ___numEnemies_8; }
	inline int32_t* get_address_of_numEnemies_8() { return &___numEnemies_8; }
	inline void set_numEnemies_8(int32_t value)
	{
		___numEnemies_8 = value;
	}

	inline static int32_t get_offset_of_spawnContainer_9() { return static_cast<int32_t>(offsetof(EnemySpawnTemplate_t4133663547, ___spawnContainer_9)); }
	inline GameObject_t1756533147 * get_spawnContainer_9() const { return ___spawnContainer_9; }
	inline GameObject_t1756533147 ** get_address_of_spawnContainer_9() { return &___spawnContainer_9; }
	inline void set_spawnContainer_9(GameObject_t1756533147 * value)
	{
		___spawnContainer_9 = value;
		Il2CppCodeGenWriteBarrier(&___spawnContainer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
