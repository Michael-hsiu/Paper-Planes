#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExtendedCollections.EnemyTypeCountsDictionary
struct EnemyTypeCountsDictionary_t1290104454;
// System.Collections.Generic.List`1<EnemySquad>
struct List_1_t3585603542;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelData
struct  LevelData_t4104249894  : public ScriptableObject_t1975622470
{
public:
	// System.Int32 LevelData::currLevel
	int32_t ___currLevel_2;
	// ExtendedCollections.EnemyTypeCountsDictionary LevelData::enemyCounts
	EnemyTypeCountsDictionary_t1290104454 * ___enemyCounts_3;
	// System.Collections.Generic.List`1<EnemySquad> LevelData::movingEnemySpawn
	List_1_t3585603542 * ___movingEnemySpawn_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LevelData::powerups
	List_1_t1125654279 * ___powerups_5;

public:
	inline static int32_t get_offset_of_currLevel_2() { return static_cast<int32_t>(offsetof(LevelData_t4104249894, ___currLevel_2)); }
	inline int32_t get_currLevel_2() const { return ___currLevel_2; }
	inline int32_t* get_address_of_currLevel_2() { return &___currLevel_2; }
	inline void set_currLevel_2(int32_t value)
	{
		___currLevel_2 = value;
	}

	inline static int32_t get_offset_of_enemyCounts_3() { return static_cast<int32_t>(offsetof(LevelData_t4104249894, ___enemyCounts_3)); }
	inline EnemyTypeCountsDictionary_t1290104454 * get_enemyCounts_3() const { return ___enemyCounts_3; }
	inline EnemyTypeCountsDictionary_t1290104454 ** get_address_of_enemyCounts_3() { return &___enemyCounts_3; }
	inline void set_enemyCounts_3(EnemyTypeCountsDictionary_t1290104454 * value)
	{
		___enemyCounts_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemyCounts_3, value);
	}

	inline static int32_t get_offset_of_movingEnemySpawn_4() { return static_cast<int32_t>(offsetof(LevelData_t4104249894, ___movingEnemySpawn_4)); }
	inline List_1_t3585603542 * get_movingEnemySpawn_4() const { return ___movingEnemySpawn_4; }
	inline List_1_t3585603542 ** get_address_of_movingEnemySpawn_4() { return &___movingEnemySpawn_4; }
	inline void set_movingEnemySpawn_4(List_1_t3585603542 * value)
	{
		___movingEnemySpawn_4 = value;
		Il2CppCodeGenWriteBarrier(&___movingEnemySpawn_4, value);
	}

	inline static int32_t get_offset_of_powerups_5() { return static_cast<int32_t>(offsetof(LevelData_t4104249894, ___powerups_5)); }
	inline List_1_t1125654279 * get_powerups_5() const { return ___powerups_5; }
	inline List_1_t1125654279 ** get_address_of_powerups_5() { return &___powerups_5; }
	inline void set_powerups_5(List_1_t1125654279 * value)
	{
		___powerups_5 = value;
		Il2CppCodeGenWriteBarrier(&___powerups_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
