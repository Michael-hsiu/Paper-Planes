#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// PowerupSpawner
struct PowerupSpawner_t3879613040;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerupSpawner
struct  PowerupSpawner_t3879613040  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PowerupSpawner::xBoundLeft
	float ___xBoundLeft_2;
	// System.Single PowerupSpawner::xBoundRight
	float ___xBoundRight_3;
	// System.Single PowerupSpawner::yBoundLeft
	float ___yBoundLeft_4;
	// System.Single PowerupSpawner::yBoundRight
	float ___yBoundRight_5;
	// System.Single PowerupSpawner::spawnDelay
	float ___spawnDelay_6;
	// System.Boolean PowerupSpawner::spawnEnabled
	bool ___spawnEnabled_7;
	// System.Int32 PowerupSpawner::numPowerupsSpawned
	int32_t ___numPowerupsSpawned_8;
	// System.Collections.IEnumerator PowerupSpawner::powerupSpawnRoutine
	Il2CppObject * ___powerupSpawnRoutine_9;
	// System.Collections.IEnumerator PowerupSpawner::cr2
	Il2CppObject * ___cr2_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PowerupSpawner::powerups
	List_1_t1125654279 * ___powerups_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PowerupSpawner::enemyShips
	List_1_t1125654279 * ___enemyShips_12;

public:
	inline static int32_t get_offset_of_xBoundLeft_2() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___xBoundLeft_2)); }
	inline float get_xBoundLeft_2() const { return ___xBoundLeft_2; }
	inline float* get_address_of_xBoundLeft_2() { return &___xBoundLeft_2; }
	inline void set_xBoundLeft_2(float value)
	{
		___xBoundLeft_2 = value;
	}

	inline static int32_t get_offset_of_xBoundRight_3() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___xBoundRight_3)); }
	inline float get_xBoundRight_3() const { return ___xBoundRight_3; }
	inline float* get_address_of_xBoundRight_3() { return &___xBoundRight_3; }
	inline void set_xBoundRight_3(float value)
	{
		___xBoundRight_3 = value;
	}

	inline static int32_t get_offset_of_yBoundLeft_4() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___yBoundLeft_4)); }
	inline float get_yBoundLeft_4() const { return ___yBoundLeft_4; }
	inline float* get_address_of_yBoundLeft_4() { return &___yBoundLeft_4; }
	inline void set_yBoundLeft_4(float value)
	{
		___yBoundLeft_4 = value;
	}

	inline static int32_t get_offset_of_yBoundRight_5() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___yBoundRight_5)); }
	inline float get_yBoundRight_5() const { return ___yBoundRight_5; }
	inline float* get_address_of_yBoundRight_5() { return &___yBoundRight_5; }
	inline void set_yBoundRight_5(float value)
	{
		___yBoundRight_5 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_6() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___spawnDelay_6)); }
	inline float get_spawnDelay_6() const { return ___spawnDelay_6; }
	inline float* get_address_of_spawnDelay_6() { return &___spawnDelay_6; }
	inline void set_spawnDelay_6(float value)
	{
		___spawnDelay_6 = value;
	}

	inline static int32_t get_offset_of_spawnEnabled_7() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___spawnEnabled_7)); }
	inline bool get_spawnEnabled_7() const { return ___spawnEnabled_7; }
	inline bool* get_address_of_spawnEnabled_7() { return &___spawnEnabled_7; }
	inline void set_spawnEnabled_7(bool value)
	{
		___spawnEnabled_7 = value;
	}

	inline static int32_t get_offset_of_numPowerupsSpawned_8() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___numPowerupsSpawned_8)); }
	inline int32_t get_numPowerupsSpawned_8() const { return ___numPowerupsSpawned_8; }
	inline int32_t* get_address_of_numPowerupsSpawned_8() { return &___numPowerupsSpawned_8; }
	inline void set_numPowerupsSpawned_8(int32_t value)
	{
		___numPowerupsSpawned_8 = value;
	}

	inline static int32_t get_offset_of_powerupSpawnRoutine_9() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___powerupSpawnRoutine_9)); }
	inline Il2CppObject * get_powerupSpawnRoutine_9() const { return ___powerupSpawnRoutine_9; }
	inline Il2CppObject ** get_address_of_powerupSpawnRoutine_9() { return &___powerupSpawnRoutine_9; }
	inline void set_powerupSpawnRoutine_9(Il2CppObject * value)
	{
		___powerupSpawnRoutine_9 = value;
		Il2CppCodeGenWriteBarrier(&___powerupSpawnRoutine_9, value);
	}

	inline static int32_t get_offset_of_cr2_10() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___cr2_10)); }
	inline Il2CppObject * get_cr2_10() const { return ___cr2_10; }
	inline Il2CppObject ** get_address_of_cr2_10() { return &___cr2_10; }
	inline void set_cr2_10(Il2CppObject * value)
	{
		___cr2_10 = value;
		Il2CppCodeGenWriteBarrier(&___cr2_10, value);
	}

	inline static int32_t get_offset_of_powerups_11() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___powerups_11)); }
	inline List_1_t1125654279 * get_powerups_11() const { return ___powerups_11; }
	inline List_1_t1125654279 ** get_address_of_powerups_11() { return &___powerups_11; }
	inline void set_powerups_11(List_1_t1125654279 * value)
	{
		___powerups_11 = value;
		Il2CppCodeGenWriteBarrier(&___powerups_11, value);
	}

	inline static int32_t get_offset_of_enemyShips_12() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___enemyShips_12)); }
	inline List_1_t1125654279 * get_enemyShips_12() const { return ___enemyShips_12; }
	inline List_1_t1125654279 ** get_address_of_enemyShips_12() { return &___enemyShips_12; }
	inline void set_enemyShips_12(List_1_t1125654279 * value)
	{
		___enemyShips_12 = value;
		Il2CppCodeGenWriteBarrier(&___enemyShips_12, value);
	}
};

struct PowerupSpawner_t3879613040_StaticFields
{
public:
	// PowerupSpawner PowerupSpawner::singleton
	PowerupSpawner_t3879613040 * ___singleton_13;

public:
	inline static int32_t get_offset_of_singleton_13() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040_StaticFields, ___singleton_13)); }
	inline PowerupSpawner_t3879613040 * get_singleton_13() const { return ___singleton_13; }
	inline PowerupSpawner_t3879613040 ** get_address_of_singleton_13() { return &___singleton_13; }
	inline void set_singleton_13(PowerupSpawner_t3879613040 * value)
	{
		___singleton_13 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
