#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// ExtendedCollections.EnemyTypeCountsDictionary
struct EnemyTypeCountsDictionary_t1290104454;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DictRow/TeamHolder
struct  TeamHolder_t1859884362  : public Il2CppObject
{
public:
	// ExtendedCollections.EnemyTypeCountsDictionary DictRow/TeamHolder::dict
	EnemyTypeCountsDictionary_t1290104454 * ___dict_0;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(TeamHolder_t1859884362, ___dict_0)); }
	inline EnemyTypeCountsDictionary_t1290104454 * get_dict_0() const { return ___dict_0; }
	inline EnemyTypeCountsDictionary_t1290104454 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(EnemyTypeCountsDictionary_t1290104454 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier(&___dict_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
