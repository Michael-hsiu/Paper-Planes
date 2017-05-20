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

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySquad
struct  EnemySquad_t4216482410  : public ScriptableObject_t1975622470
{
public:
	// ExtendedCollections.EnemyTypeCountsDictionary EnemySquad::enemyCounts
	EnemyTypeCountsDictionary_t1290104454 * ___enemyCounts_2;

public:
	inline static int32_t get_offset_of_enemyCounts_2() { return static_cast<int32_t>(offsetof(EnemySquad_t4216482410, ___enemyCounts_2)); }
	inline EnemyTypeCountsDictionary_t1290104454 * get_enemyCounts_2() const { return ___enemyCounts_2; }
	inline EnemyTypeCountsDictionary_t1290104454 ** get_address_of_enemyCounts_2() { return &___enemyCounts_2; }
	inline void set_enemyCounts_2(EnemyTypeCountsDictionary_t1290104454 * value)
	{
		___enemyCounts_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyCounts_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
