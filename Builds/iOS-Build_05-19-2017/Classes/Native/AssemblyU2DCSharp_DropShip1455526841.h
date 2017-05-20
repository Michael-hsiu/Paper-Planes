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

#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DropShip
struct  DropShip_t1455526841  : public Ship_t1116303770
{
public:
	// UnityEngine.GameObject DropShip::shipToSpawn
	GameObject_t1756533147 * ___shipToSpawn_15;
	// System.Single DropShip::timeUntilNextSpawnMode
	float ___timeUntilNextSpawnMode_16;
	// System.Single DropShip::spawnModeDuration
	float ___spawnModeDuration_17;
	// System.Single DropShip::timeBetweenSpawns
	float ___timeBetweenSpawns_18;
	// System.Int32 DropShip::deathSpawnCount
	int32_t ___deathSpawnCount_19;
	// System.Boolean DropShip::isSpawning
	bool ___isSpawning_20;
	// UnityEngine.Vector2 DropShip::offset
	Vector2_t2243707579  ___offset_21;
	// System.Single DropShip::nextSpawn
	float ___nextSpawn_22;

public:
	inline static int32_t get_offset_of_shipToSpawn_15() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___shipToSpawn_15)); }
	inline GameObject_t1756533147 * get_shipToSpawn_15() const { return ___shipToSpawn_15; }
	inline GameObject_t1756533147 ** get_address_of_shipToSpawn_15() { return &___shipToSpawn_15; }
	inline void set_shipToSpawn_15(GameObject_t1756533147 * value)
	{
		___shipToSpawn_15 = value;
		Il2CppCodeGenWriteBarrier(&___shipToSpawn_15, value);
	}

	inline static int32_t get_offset_of_timeUntilNextSpawnMode_16() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___timeUntilNextSpawnMode_16)); }
	inline float get_timeUntilNextSpawnMode_16() const { return ___timeUntilNextSpawnMode_16; }
	inline float* get_address_of_timeUntilNextSpawnMode_16() { return &___timeUntilNextSpawnMode_16; }
	inline void set_timeUntilNextSpawnMode_16(float value)
	{
		___timeUntilNextSpawnMode_16 = value;
	}

	inline static int32_t get_offset_of_spawnModeDuration_17() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___spawnModeDuration_17)); }
	inline float get_spawnModeDuration_17() const { return ___spawnModeDuration_17; }
	inline float* get_address_of_spawnModeDuration_17() { return &___spawnModeDuration_17; }
	inline void set_spawnModeDuration_17(float value)
	{
		___spawnModeDuration_17 = value;
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_18() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___timeBetweenSpawns_18)); }
	inline float get_timeBetweenSpawns_18() const { return ___timeBetweenSpawns_18; }
	inline float* get_address_of_timeBetweenSpawns_18() { return &___timeBetweenSpawns_18; }
	inline void set_timeBetweenSpawns_18(float value)
	{
		___timeBetweenSpawns_18 = value;
	}

	inline static int32_t get_offset_of_deathSpawnCount_19() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___deathSpawnCount_19)); }
	inline int32_t get_deathSpawnCount_19() const { return ___deathSpawnCount_19; }
	inline int32_t* get_address_of_deathSpawnCount_19() { return &___deathSpawnCount_19; }
	inline void set_deathSpawnCount_19(int32_t value)
	{
		___deathSpawnCount_19 = value;
	}

	inline static int32_t get_offset_of_isSpawning_20() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___isSpawning_20)); }
	inline bool get_isSpawning_20() const { return ___isSpawning_20; }
	inline bool* get_address_of_isSpawning_20() { return &___isSpawning_20; }
	inline void set_isSpawning_20(bool value)
	{
		___isSpawning_20 = value;
	}

	inline static int32_t get_offset_of_offset_21() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___offset_21)); }
	inline Vector2_t2243707579  get_offset_21() const { return ___offset_21; }
	inline Vector2_t2243707579 * get_address_of_offset_21() { return &___offset_21; }
	inline void set_offset_21(Vector2_t2243707579  value)
	{
		___offset_21 = value;
	}

	inline static int32_t get_offset_of_nextSpawn_22() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___nextSpawn_22)); }
	inline float get_nextSpawn_22() const { return ___nextSpawn_22; }
	inline float* get_address_of_nextSpawn_22() { return &___nextSpawn_22; }
	inline void set_nextSpawn_22(float value)
	{
		___nextSpawn_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
