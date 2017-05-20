#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// PowerupSpawner
struct PowerupSpawner_t3879613040;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerupSpawner
struct  PowerupSpawner_t3879613040  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PowerupSpawner::xBound
	float ___xBound_2;
	// System.Single PowerupSpawner::yBound
	float ___yBound_3;
	// System.Single PowerupSpawner::spawnDelay
	float ___spawnDelay_4;
	// System.Boolean PowerupSpawner::spawnEnabled
	bool ___spawnEnabled_5;
	// System.Int32 PowerupSpawner::numPowerupsSpawned
	int32_t ___numPowerupsSpawned_6;
	// System.Collections.IEnumerator PowerupSpawner::cr1
	Il2CppObject * ___cr1_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PowerupSpawner::powerups
	List_1_t1125654279 * ___powerups_8;

public:
	inline static int32_t get_offset_of_xBound_2() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___xBound_2)); }
	inline float get_xBound_2() const { return ___xBound_2; }
	inline float* get_address_of_xBound_2() { return &___xBound_2; }
	inline void set_xBound_2(float value)
	{
		___xBound_2 = value;
	}

	inline static int32_t get_offset_of_yBound_3() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___yBound_3)); }
	inline float get_yBound_3() const { return ___yBound_3; }
	inline float* get_address_of_yBound_3() { return &___yBound_3; }
	inline void set_yBound_3(float value)
	{
		___yBound_3 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_4() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___spawnDelay_4)); }
	inline float get_spawnDelay_4() const { return ___spawnDelay_4; }
	inline float* get_address_of_spawnDelay_4() { return &___spawnDelay_4; }
	inline void set_spawnDelay_4(float value)
	{
		___spawnDelay_4 = value;
	}

	inline static int32_t get_offset_of_spawnEnabled_5() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___spawnEnabled_5)); }
	inline bool get_spawnEnabled_5() const { return ___spawnEnabled_5; }
	inline bool* get_address_of_spawnEnabled_5() { return &___spawnEnabled_5; }
	inline void set_spawnEnabled_5(bool value)
	{
		___spawnEnabled_5 = value;
	}

	inline static int32_t get_offset_of_numPowerupsSpawned_6() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___numPowerupsSpawned_6)); }
	inline int32_t get_numPowerupsSpawned_6() const { return ___numPowerupsSpawned_6; }
	inline int32_t* get_address_of_numPowerupsSpawned_6() { return &___numPowerupsSpawned_6; }
	inline void set_numPowerupsSpawned_6(int32_t value)
	{
		___numPowerupsSpawned_6 = value;
	}

	inline static int32_t get_offset_of_cr1_7() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___cr1_7)); }
	inline Il2CppObject * get_cr1_7() const { return ___cr1_7; }
	inline Il2CppObject ** get_address_of_cr1_7() { return &___cr1_7; }
	inline void set_cr1_7(Il2CppObject * value)
	{
		___cr1_7 = value;
		Il2CppCodeGenWriteBarrier(&___cr1_7, value);
	}

	inline static int32_t get_offset_of_powerups_8() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040, ___powerups_8)); }
	inline List_1_t1125654279 * get_powerups_8() const { return ___powerups_8; }
	inline List_1_t1125654279 ** get_address_of_powerups_8() { return &___powerups_8; }
	inline void set_powerups_8(List_1_t1125654279 * value)
	{
		___powerups_8 = value;
		Il2CppCodeGenWriteBarrier(&___powerups_8, value);
	}
};

struct PowerupSpawner_t3879613040_StaticFields
{
public:
	// PowerupSpawner PowerupSpawner::singleton
	PowerupSpawner_t3879613040 * ___singleton_9;

public:
	inline static int32_t get_offset_of_singleton_9() { return static_cast<int32_t>(offsetof(PowerupSpawner_t3879613040_StaticFields, ___singleton_9)); }
	inline PowerupSpawner_t3879613040 * get_singleton_9() const { return ___singleton_9; }
	inline PowerupSpawner_t3879613040 ** get_address_of_singleton_9() { return &___singleton_9; }
	inline void set_singleton_9(PowerupSpawner_t3879613040 * value)
	{
		___singleton_9 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
