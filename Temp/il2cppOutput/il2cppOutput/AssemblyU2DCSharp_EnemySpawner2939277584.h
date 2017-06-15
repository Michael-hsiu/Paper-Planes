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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2939277584  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EnemySpawner::xBound
	float ___xBound_2;
	// System.Single EnemySpawner::yBound
	float ___yBound_3;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_4;
	// System.Boolean EnemySpawner::spawnEnabled
	bool ___spawnEnabled_5;
	// System.Int32 EnemySpawner::currLevel
	int32_t ___currLevel_6;
	// System.Boolean EnemySpawner::bossSpawnEnabled
	bool ___bossSpawnEnabled_7;
	// System.Int32 EnemySpawner::MAX_PAWNS
	int32_t ___MAX_PAWNS_8;
	// System.Int32 EnemySpawner::MAX_RANGED
	int32_t ___MAX_RANGED_9;
	// System.Int32 EnemySpawner::MAX_BOMBERS
	int32_t ___MAX_BOMBERS_10;
	// System.Int32 EnemySpawner::MAX_DROPSHIPS
	int32_t ___MAX_DROPSHIPS_11;
	// System.Int32 EnemySpawner::MAX_MEDICS
	int32_t ___MAX_MEDICS_12;
	// System.Int32 EnemySpawner::MAX_TURRETS
	int32_t ___MAX_TURRETS_13;
	// System.Int32 EnemySpawner::MAX_ASSASSINS
	int32_t ___MAX_ASSASSINS_14;
	// System.Int32 EnemySpawner::MAX_BOSSES
	int32_t ___MAX_BOSSES_15;
	// System.Int32 EnemySpawner::NUM_PAWNS_ALIVE
	int32_t ___NUM_PAWNS_ALIVE_16;
	// System.Int32 EnemySpawner::NUM_RANGED_ALIVE
	int32_t ___NUM_RANGED_ALIVE_17;
	// System.Int32 EnemySpawner::NUM_BOMBERS_ALIVE
	int32_t ___NUM_BOMBERS_ALIVE_18;
	// System.Int32 EnemySpawner::NUM_DROPSHIPS_ALIVE
	int32_t ___NUM_DROPSHIPS_ALIVE_19;
	// System.Int32 EnemySpawner::NUM_MEDICS_ALIVE
	int32_t ___NUM_MEDICS_ALIVE_20;
	// System.Int32 EnemySpawner::NUM_TURRETS_ALIVE
	int32_t ___NUM_TURRETS_ALIVE_21;
	// System.Int32 EnemySpawner::NUM_ASSASSINS_ALIVE
	int32_t ___NUM_ASSASSINS_ALIVE_22;
	// System.Int32 EnemySpawner::NUM_BOSSES_ALIVE
	int32_t ___NUM_BOSSES_ALIVE_23;
	// System.Collections.IEnumerator EnemySpawner::enemySpawnRoutine
	Il2CppObject * ___enemySpawnRoutine_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemySpawner::enemyShips
	List_1_t1125654279 * ___enemyShips_25;

public:
	inline static int32_t get_offset_of_xBound_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___xBound_2)); }
	inline float get_xBound_2() const { return ___xBound_2; }
	inline float* get_address_of_xBound_2() { return &___xBound_2; }
	inline void set_xBound_2(float value)
	{
		___xBound_2 = value;
	}

	inline static int32_t get_offset_of_yBound_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___yBound_3)); }
	inline float get_yBound_3() const { return ___yBound_3; }
	inline float* get_address_of_yBound_3() { return &___yBound_3; }
	inline void set_yBound_3(float value)
	{
		___yBound_3 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnDelay_4)); }
	inline float get_spawnDelay_4() const { return ___spawnDelay_4; }
	inline float* get_address_of_spawnDelay_4() { return &___spawnDelay_4; }
	inline void set_spawnDelay_4(float value)
	{
		___spawnDelay_4 = value;
	}

	inline static int32_t get_offset_of_spawnEnabled_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnEnabled_5)); }
	inline bool get_spawnEnabled_5() const { return ___spawnEnabled_5; }
	inline bool* get_address_of_spawnEnabled_5() { return &___spawnEnabled_5; }
	inline void set_spawnEnabled_5(bool value)
	{
		___spawnEnabled_5 = value;
	}

	inline static int32_t get_offset_of_currLevel_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___currLevel_6)); }
	inline int32_t get_currLevel_6() const { return ___currLevel_6; }
	inline int32_t* get_address_of_currLevel_6() { return &___currLevel_6; }
	inline void set_currLevel_6(int32_t value)
	{
		___currLevel_6 = value;
	}

	inline static int32_t get_offset_of_bossSpawnEnabled_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___bossSpawnEnabled_7)); }
	inline bool get_bossSpawnEnabled_7() const { return ___bossSpawnEnabled_7; }
	inline bool* get_address_of_bossSpawnEnabled_7() { return &___bossSpawnEnabled_7; }
	inline void set_bossSpawnEnabled_7(bool value)
	{
		___bossSpawnEnabled_7 = value;
	}

	inline static int32_t get_offset_of_MAX_PAWNS_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_PAWNS_8)); }
	inline int32_t get_MAX_PAWNS_8() const { return ___MAX_PAWNS_8; }
	inline int32_t* get_address_of_MAX_PAWNS_8() { return &___MAX_PAWNS_8; }
	inline void set_MAX_PAWNS_8(int32_t value)
	{
		___MAX_PAWNS_8 = value;
	}

	inline static int32_t get_offset_of_MAX_RANGED_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_RANGED_9)); }
	inline int32_t get_MAX_RANGED_9() const { return ___MAX_RANGED_9; }
	inline int32_t* get_address_of_MAX_RANGED_9() { return &___MAX_RANGED_9; }
	inline void set_MAX_RANGED_9(int32_t value)
	{
		___MAX_RANGED_9 = value;
	}

	inline static int32_t get_offset_of_MAX_BOMBERS_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_BOMBERS_10)); }
	inline int32_t get_MAX_BOMBERS_10() const { return ___MAX_BOMBERS_10; }
	inline int32_t* get_address_of_MAX_BOMBERS_10() { return &___MAX_BOMBERS_10; }
	inline void set_MAX_BOMBERS_10(int32_t value)
	{
		___MAX_BOMBERS_10 = value;
	}

	inline static int32_t get_offset_of_MAX_DROPSHIPS_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_DROPSHIPS_11)); }
	inline int32_t get_MAX_DROPSHIPS_11() const { return ___MAX_DROPSHIPS_11; }
	inline int32_t* get_address_of_MAX_DROPSHIPS_11() { return &___MAX_DROPSHIPS_11; }
	inline void set_MAX_DROPSHIPS_11(int32_t value)
	{
		___MAX_DROPSHIPS_11 = value;
	}

	inline static int32_t get_offset_of_MAX_MEDICS_12() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_MEDICS_12)); }
	inline int32_t get_MAX_MEDICS_12() const { return ___MAX_MEDICS_12; }
	inline int32_t* get_address_of_MAX_MEDICS_12() { return &___MAX_MEDICS_12; }
	inline void set_MAX_MEDICS_12(int32_t value)
	{
		___MAX_MEDICS_12 = value;
	}

	inline static int32_t get_offset_of_MAX_TURRETS_13() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_TURRETS_13)); }
	inline int32_t get_MAX_TURRETS_13() const { return ___MAX_TURRETS_13; }
	inline int32_t* get_address_of_MAX_TURRETS_13() { return &___MAX_TURRETS_13; }
	inline void set_MAX_TURRETS_13(int32_t value)
	{
		___MAX_TURRETS_13 = value;
	}

	inline static int32_t get_offset_of_MAX_ASSASSINS_14() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_ASSASSINS_14)); }
	inline int32_t get_MAX_ASSASSINS_14() const { return ___MAX_ASSASSINS_14; }
	inline int32_t* get_address_of_MAX_ASSASSINS_14() { return &___MAX_ASSASSINS_14; }
	inline void set_MAX_ASSASSINS_14(int32_t value)
	{
		___MAX_ASSASSINS_14 = value;
	}

	inline static int32_t get_offset_of_MAX_BOSSES_15() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___MAX_BOSSES_15)); }
	inline int32_t get_MAX_BOSSES_15() const { return ___MAX_BOSSES_15; }
	inline int32_t* get_address_of_MAX_BOSSES_15() { return &___MAX_BOSSES_15; }
	inline void set_MAX_BOSSES_15(int32_t value)
	{
		___MAX_BOSSES_15 = value;
	}

	inline static int32_t get_offset_of_NUM_PAWNS_ALIVE_16() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_PAWNS_ALIVE_16)); }
	inline int32_t get_NUM_PAWNS_ALIVE_16() const { return ___NUM_PAWNS_ALIVE_16; }
	inline int32_t* get_address_of_NUM_PAWNS_ALIVE_16() { return &___NUM_PAWNS_ALIVE_16; }
	inline void set_NUM_PAWNS_ALIVE_16(int32_t value)
	{
		___NUM_PAWNS_ALIVE_16 = value;
	}

	inline static int32_t get_offset_of_NUM_RANGED_ALIVE_17() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_RANGED_ALIVE_17)); }
	inline int32_t get_NUM_RANGED_ALIVE_17() const { return ___NUM_RANGED_ALIVE_17; }
	inline int32_t* get_address_of_NUM_RANGED_ALIVE_17() { return &___NUM_RANGED_ALIVE_17; }
	inline void set_NUM_RANGED_ALIVE_17(int32_t value)
	{
		___NUM_RANGED_ALIVE_17 = value;
	}

	inline static int32_t get_offset_of_NUM_BOMBERS_ALIVE_18() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_BOMBERS_ALIVE_18)); }
	inline int32_t get_NUM_BOMBERS_ALIVE_18() const { return ___NUM_BOMBERS_ALIVE_18; }
	inline int32_t* get_address_of_NUM_BOMBERS_ALIVE_18() { return &___NUM_BOMBERS_ALIVE_18; }
	inline void set_NUM_BOMBERS_ALIVE_18(int32_t value)
	{
		___NUM_BOMBERS_ALIVE_18 = value;
	}

	inline static int32_t get_offset_of_NUM_DROPSHIPS_ALIVE_19() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_DROPSHIPS_ALIVE_19)); }
	inline int32_t get_NUM_DROPSHIPS_ALIVE_19() const { return ___NUM_DROPSHIPS_ALIVE_19; }
	inline int32_t* get_address_of_NUM_DROPSHIPS_ALIVE_19() { return &___NUM_DROPSHIPS_ALIVE_19; }
	inline void set_NUM_DROPSHIPS_ALIVE_19(int32_t value)
	{
		___NUM_DROPSHIPS_ALIVE_19 = value;
	}

	inline static int32_t get_offset_of_NUM_MEDICS_ALIVE_20() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_MEDICS_ALIVE_20)); }
	inline int32_t get_NUM_MEDICS_ALIVE_20() const { return ___NUM_MEDICS_ALIVE_20; }
	inline int32_t* get_address_of_NUM_MEDICS_ALIVE_20() { return &___NUM_MEDICS_ALIVE_20; }
	inline void set_NUM_MEDICS_ALIVE_20(int32_t value)
	{
		___NUM_MEDICS_ALIVE_20 = value;
	}

	inline static int32_t get_offset_of_NUM_TURRETS_ALIVE_21() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_TURRETS_ALIVE_21)); }
	inline int32_t get_NUM_TURRETS_ALIVE_21() const { return ___NUM_TURRETS_ALIVE_21; }
	inline int32_t* get_address_of_NUM_TURRETS_ALIVE_21() { return &___NUM_TURRETS_ALIVE_21; }
	inline void set_NUM_TURRETS_ALIVE_21(int32_t value)
	{
		___NUM_TURRETS_ALIVE_21 = value;
	}

	inline static int32_t get_offset_of_NUM_ASSASSINS_ALIVE_22() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_ASSASSINS_ALIVE_22)); }
	inline int32_t get_NUM_ASSASSINS_ALIVE_22() const { return ___NUM_ASSASSINS_ALIVE_22; }
	inline int32_t* get_address_of_NUM_ASSASSINS_ALIVE_22() { return &___NUM_ASSASSINS_ALIVE_22; }
	inline void set_NUM_ASSASSINS_ALIVE_22(int32_t value)
	{
		___NUM_ASSASSINS_ALIVE_22 = value;
	}

	inline static int32_t get_offset_of_NUM_BOSSES_ALIVE_23() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___NUM_BOSSES_ALIVE_23)); }
	inline int32_t get_NUM_BOSSES_ALIVE_23() const { return ___NUM_BOSSES_ALIVE_23; }
	inline int32_t* get_address_of_NUM_BOSSES_ALIVE_23() { return &___NUM_BOSSES_ALIVE_23; }
	inline void set_NUM_BOSSES_ALIVE_23(int32_t value)
	{
		___NUM_BOSSES_ALIVE_23 = value;
	}

	inline static int32_t get_offset_of_enemySpawnRoutine_24() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___enemySpawnRoutine_24)); }
	inline Il2CppObject * get_enemySpawnRoutine_24() const { return ___enemySpawnRoutine_24; }
	inline Il2CppObject ** get_address_of_enemySpawnRoutine_24() { return &___enemySpawnRoutine_24; }
	inline void set_enemySpawnRoutine_24(Il2CppObject * value)
	{
		___enemySpawnRoutine_24 = value;
		Il2CppCodeGenWriteBarrier(&___enemySpawnRoutine_24, value);
	}

	inline static int32_t get_offset_of_enemyShips_25() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___enemyShips_25)); }
	inline List_1_t1125654279 * get_enemyShips_25() const { return ___enemyShips_25; }
	inline List_1_t1125654279 ** get_address_of_enemyShips_25() { return &___enemyShips_25; }
	inline void set_enemyShips_25(List_1_t1125654279 * value)
	{
		___enemyShips_25 = value;
		Il2CppCodeGenWriteBarrier(&___enemyShips_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
