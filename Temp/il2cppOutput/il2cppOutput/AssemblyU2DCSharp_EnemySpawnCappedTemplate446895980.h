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
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawnCappedTemplate
struct  EnemySpawnCappedTemplate_t446895980  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemySpawnCappedTemplate::enemy
	GameObject_t1756533147 * ___enemy_2;
	// System.Single EnemySpawnCappedTemplate::spawnDelay
	float ___spawnDelay_3;
	// System.Int32 EnemySpawnCappedTemplate::maxEnemies
	int32_t ___maxEnemies_4;
	// System.Collections.IEnumerator EnemySpawnCappedTemplate::coroutine
	Il2CppObject * ___coroutine_5;
	// System.Int32 EnemySpawnCappedTemplate::numEnemies
	int32_t ___numEnemies_6;
	// UnityEngine.GameObject EnemySpawnCappedTemplate::spawnContainer
	GameObject_t1756533147 * ___spawnContainer_7;

public:
	inline static int32_t get_offset_of_enemy_2() { return static_cast<int32_t>(offsetof(EnemySpawnCappedTemplate_t446895980, ___enemy_2)); }
	inline GameObject_t1756533147 * get_enemy_2() const { return ___enemy_2; }
	inline GameObject_t1756533147 ** get_address_of_enemy_2() { return &___enemy_2; }
	inline void set_enemy_2(GameObject_t1756533147 * value)
	{
		___enemy_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_2, value);
	}

	inline static int32_t get_offset_of_spawnDelay_3() { return static_cast<int32_t>(offsetof(EnemySpawnCappedTemplate_t446895980, ___spawnDelay_3)); }
	inline float get_spawnDelay_3() const { return ___spawnDelay_3; }
	inline float* get_address_of_spawnDelay_3() { return &___spawnDelay_3; }
	inline void set_spawnDelay_3(float value)
	{
		___spawnDelay_3 = value;
	}

	inline static int32_t get_offset_of_maxEnemies_4() { return static_cast<int32_t>(offsetof(EnemySpawnCappedTemplate_t446895980, ___maxEnemies_4)); }
	inline int32_t get_maxEnemies_4() const { return ___maxEnemies_4; }
	inline int32_t* get_address_of_maxEnemies_4() { return &___maxEnemies_4; }
	inline void set_maxEnemies_4(int32_t value)
	{
		___maxEnemies_4 = value;
	}

	inline static int32_t get_offset_of_coroutine_5() { return static_cast<int32_t>(offsetof(EnemySpawnCappedTemplate_t446895980, ___coroutine_5)); }
	inline Il2CppObject * get_coroutine_5() const { return ___coroutine_5; }
	inline Il2CppObject ** get_address_of_coroutine_5() { return &___coroutine_5; }
	inline void set_coroutine_5(Il2CppObject * value)
	{
		___coroutine_5 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_5, value);
	}

	inline static int32_t get_offset_of_numEnemies_6() { return static_cast<int32_t>(offsetof(EnemySpawnCappedTemplate_t446895980, ___numEnemies_6)); }
	inline int32_t get_numEnemies_6() const { return ___numEnemies_6; }
	inline int32_t* get_address_of_numEnemies_6() { return &___numEnemies_6; }
	inline void set_numEnemies_6(int32_t value)
	{
		___numEnemies_6 = value;
	}

	inline static int32_t get_offset_of_spawnContainer_7() { return static_cast<int32_t>(offsetof(EnemySpawnCappedTemplate_t446895980, ___spawnContainer_7)); }
	inline GameObject_t1756533147 * get_spawnContainer_7() const { return ___spawnContainer_7; }
	inline GameObject_t1756533147 ** get_address_of_spawnContainer_7() { return &___spawnContainer_7; }
	inline void set_spawnContainer_7(GameObject_t1756533147 * value)
	{
		___spawnContainer_7 = value;
		Il2CppCodeGenWriteBarrier(&___spawnContainer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
