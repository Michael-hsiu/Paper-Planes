#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"

// System.Collections.Generic.List`1<EnemyType>
struct List_1_t125521920;
// ExtendedCollections.EnemyTypeCountsDictionary
struct EnemyTypeCountsDictionary_t1290104454;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingSpawn
struct  MovingSpawn_t1342199589  : public PoolObject_t202793199
{
public:
	// System.Collections.Generic.List`1<EnemyType> MovingSpawn::enemyTypes
	List_1_t125521920 * ___enemyTypes_2;
	// System.Single MovingSpawn::spawnDelay
	float ___spawnDelay_3;
	// System.Single MovingSpawn::spawnRadius
	float ___spawnRadius_4;
	// System.Boolean MovingSpawn::startSpawning
	bool ___startSpawning_5;
	// ExtendedCollections.EnemyTypeCountsDictionary MovingSpawn::dict
	EnemyTypeCountsDictionary_t1290104454 * ___dict_6;
	// System.Int32 MovingSpawn::squadTotal
	int32_t ___squadTotal_7;
	// UnityEngine.GameObject MovingSpawn::player
	GameObject_t1756533147 * ___player_8;
	// System.Boolean MovingSpawn::wasReused
	bool ___wasReused_9;
	// System.Single MovingSpawn::spawnAngle
	float ___spawnAngle_10;
	// System.Collections.IEnumerator MovingSpawn::cr
	Il2CppObject * ___cr_11;
	// System.Int32 MovingSpawn::numEnemies
	int32_t ___numEnemies_12;
	// UnityEngine.GameObject MovingSpawn::spawnContainer
	GameObject_t1756533147 * ___spawnContainer_13;

public:
	inline static int32_t get_offset_of_enemyTypes_2() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___enemyTypes_2)); }
	inline List_1_t125521920 * get_enemyTypes_2() const { return ___enemyTypes_2; }
	inline List_1_t125521920 ** get_address_of_enemyTypes_2() { return &___enemyTypes_2; }
	inline void set_enemyTypes_2(List_1_t125521920 * value)
	{
		___enemyTypes_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTypes_2, value);
	}

	inline static int32_t get_offset_of_spawnDelay_3() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___spawnDelay_3)); }
	inline float get_spawnDelay_3() const { return ___spawnDelay_3; }
	inline float* get_address_of_spawnDelay_3() { return &___spawnDelay_3; }
	inline void set_spawnDelay_3(float value)
	{
		___spawnDelay_3 = value;
	}

	inline static int32_t get_offset_of_spawnRadius_4() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___spawnRadius_4)); }
	inline float get_spawnRadius_4() const { return ___spawnRadius_4; }
	inline float* get_address_of_spawnRadius_4() { return &___spawnRadius_4; }
	inline void set_spawnRadius_4(float value)
	{
		___spawnRadius_4 = value;
	}

	inline static int32_t get_offset_of_startSpawning_5() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___startSpawning_5)); }
	inline bool get_startSpawning_5() const { return ___startSpawning_5; }
	inline bool* get_address_of_startSpawning_5() { return &___startSpawning_5; }
	inline void set_startSpawning_5(bool value)
	{
		___startSpawning_5 = value;
	}

	inline static int32_t get_offset_of_dict_6() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___dict_6)); }
	inline EnemyTypeCountsDictionary_t1290104454 * get_dict_6() const { return ___dict_6; }
	inline EnemyTypeCountsDictionary_t1290104454 ** get_address_of_dict_6() { return &___dict_6; }
	inline void set_dict_6(EnemyTypeCountsDictionary_t1290104454 * value)
	{
		___dict_6 = value;
		Il2CppCodeGenWriteBarrier(&___dict_6, value);
	}

	inline static int32_t get_offset_of_squadTotal_7() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___squadTotal_7)); }
	inline int32_t get_squadTotal_7() const { return ___squadTotal_7; }
	inline int32_t* get_address_of_squadTotal_7() { return &___squadTotal_7; }
	inline void set_squadTotal_7(int32_t value)
	{
		___squadTotal_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___player_8)); }
	inline GameObject_t1756533147 * get_player_8() const { return ___player_8; }
	inline GameObject_t1756533147 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_t1756533147 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}

	inline static int32_t get_offset_of_wasReused_9() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___wasReused_9)); }
	inline bool get_wasReused_9() const { return ___wasReused_9; }
	inline bool* get_address_of_wasReused_9() { return &___wasReused_9; }
	inline void set_wasReused_9(bool value)
	{
		___wasReused_9 = value;
	}

	inline static int32_t get_offset_of_spawnAngle_10() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___spawnAngle_10)); }
	inline float get_spawnAngle_10() const { return ___spawnAngle_10; }
	inline float* get_address_of_spawnAngle_10() { return &___spawnAngle_10; }
	inline void set_spawnAngle_10(float value)
	{
		___spawnAngle_10 = value;
	}

	inline static int32_t get_offset_of_cr_11() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___cr_11)); }
	inline Il2CppObject * get_cr_11() const { return ___cr_11; }
	inline Il2CppObject ** get_address_of_cr_11() { return &___cr_11; }
	inline void set_cr_11(Il2CppObject * value)
	{
		___cr_11 = value;
		Il2CppCodeGenWriteBarrier(&___cr_11, value);
	}

	inline static int32_t get_offset_of_numEnemies_12() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___numEnemies_12)); }
	inline int32_t get_numEnemies_12() const { return ___numEnemies_12; }
	inline int32_t* get_address_of_numEnemies_12() { return &___numEnemies_12; }
	inline void set_numEnemies_12(int32_t value)
	{
		___numEnemies_12 = value;
	}

	inline static int32_t get_offset_of_spawnContainer_13() { return static_cast<int32_t>(offsetof(MovingSpawn_t1342199589, ___spawnContainer_13)); }
	inline GameObject_t1756533147 * get_spawnContainer_13() const { return ___spawnContainer_13; }
	inline GameObject_t1756533147 ** get_address_of_spawnContainer_13() { return &___spawnContainer_13; }
	inline void set_spawnContainer_13(GameObject_t1756533147 * value)
	{
		___spawnContainer_13 = value;
		Il2CppCodeGenWriteBarrier(&___spawnContainer_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
