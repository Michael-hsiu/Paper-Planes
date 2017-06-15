#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




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
	GameObject_t1756533147 * ___shipToSpawn_20;
	// System.Single DropShip::timeUntilNextSpawnMode
	float ___timeUntilNextSpawnMode_21;
	// System.Single DropShip::spawnModeDuration
	float ___spawnModeDuration_22;
	// System.Single DropShip::timeBetweenSpawns
	float ___timeBetweenSpawns_23;
	// System.Int32 DropShip::deathSpawnCount
	int32_t ___deathSpawnCount_24;
	// System.Boolean DropShip::isSpawning
	bool ___isSpawning_25;
	// UnityEngine.Vector2 DropShip::offset
	Vector2_t2243707579  ___offset_26;
	// System.Single DropShip::nextSpawn
	float ___nextSpawn_27;

public:
	inline static int32_t get_offset_of_shipToSpawn_20() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___shipToSpawn_20)); }
	inline GameObject_t1756533147 * get_shipToSpawn_20() const { return ___shipToSpawn_20; }
	inline GameObject_t1756533147 ** get_address_of_shipToSpawn_20() { return &___shipToSpawn_20; }
	inline void set_shipToSpawn_20(GameObject_t1756533147 * value)
	{
		___shipToSpawn_20 = value;
		Il2CppCodeGenWriteBarrier(&___shipToSpawn_20, value);
	}

	inline static int32_t get_offset_of_timeUntilNextSpawnMode_21() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___timeUntilNextSpawnMode_21)); }
	inline float get_timeUntilNextSpawnMode_21() const { return ___timeUntilNextSpawnMode_21; }
	inline float* get_address_of_timeUntilNextSpawnMode_21() { return &___timeUntilNextSpawnMode_21; }
	inline void set_timeUntilNextSpawnMode_21(float value)
	{
		___timeUntilNextSpawnMode_21 = value;
	}

	inline static int32_t get_offset_of_spawnModeDuration_22() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___spawnModeDuration_22)); }
	inline float get_spawnModeDuration_22() const { return ___spawnModeDuration_22; }
	inline float* get_address_of_spawnModeDuration_22() { return &___spawnModeDuration_22; }
	inline void set_spawnModeDuration_22(float value)
	{
		___spawnModeDuration_22 = value;
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_23() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___timeBetweenSpawns_23)); }
	inline float get_timeBetweenSpawns_23() const { return ___timeBetweenSpawns_23; }
	inline float* get_address_of_timeBetweenSpawns_23() { return &___timeBetweenSpawns_23; }
	inline void set_timeBetweenSpawns_23(float value)
	{
		___timeBetweenSpawns_23 = value;
	}

	inline static int32_t get_offset_of_deathSpawnCount_24() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___deathSpawnCount_24)); }
	inline int32_t get_deathSpawnCount_24() const { return ___deathSpawnCount_24; }
	inline int32_t* get_address_of_deathSpawnCount_24() { return &___deathSpawnCount_24; }
	inline void set_deathSpawnCount_24(int32_t value)
	{
		___deathSpawnCount_24 = value;
	}

	inline static int32_t get_offset_of_isSpawning_25() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___isSpawning_25)); }
	inline bool get_isSpawning_25() const { return ___isSpawning_25; }
	inline bool* get_address_of_isSpawning_25() { return &___isSpawning_25; }
	inline void set_isSpawning_25(bool value)
	{
		___isSpawning_25 = value;
	}

	inline static int32_t get_offset_of_offset_26() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___offset_26)); }
	inline Vector2_t2243707579  get_offset_26() const { return ___offset_26; }
	inline Vector2_t2243707579 * get_address_of_offset_26() { return &___offset_26; }
	inline void set_offset_26(Vector2_t2243707579  value)
	{
		___offset_26 = value;
	}

	inline static int32_t get_offset_of_nextSpawn_27() { return static_cast<int32_t>(offsetof(DropShip_t1455526841, ___nextSpawn_27)); }
	inline float get_nextSpawn_27() const { return ___nextSpawn_27; }
	inline float* get_address_of_nextSpawn_27() { return &___nextSpawn_27; }
	inline void set_nextSpawn_27(float value)
	{
		___nextSpawn_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
