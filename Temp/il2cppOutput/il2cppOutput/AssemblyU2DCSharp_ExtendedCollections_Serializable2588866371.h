#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ExtendedCollections.SerializableDictionary`2<EnemyType,System.Int32>
struct SerializableDictionary_2_t3154974832;

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22438309365.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtendedCollections.SerializableDictionary`2/Enumerator<EnemyType,System.Int32>
struct  Enumerator_t2588866371 
{
public:
	// ExtendedCollections.SerializableDictionary`2<TKey,TValue> ExtendedCollections.SerializableDictionary`2/Enumerator::_Dictionary
	SerializableDictionary_2_t3154974832 * ____Dictionary_0;
	// System.Int32 ExtendedCollections.SerializableDictionary`2/Enumerator::_Version
	int32_t ____Version_1;
	// System.Int32 ExtendedCollections.SerializableDictionary`2/Enumerator::_Index
	int32_t ____Index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> ExtendedCollections.SerializableDictionary`2/Enumerator::_Current
	KeyValuePair_2_t2438309365  ____Current_3;

public:
	inline static int32_t get_offset_of__Dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2588866371, ____Dictionary_0)); }
	inline SerializableDictionary_2_t3154974832 * get__Dictionary_0() const { return ____Dictionary_0; }
	inline SerializableDictionary_2_t3154974832 ** get_address_of__Dictionary_0() { return &____Dictionary_0; }
	inline void set__Dictionary_0(SerializableDictionary_2_t3154974832 * value)
	{
		____Dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____Dictionary_0, value);
	}

	inline static int32_t get_offset_of__Version_1() { return static_cast<int32_t>(offsetof(Enumerator_t2588866371, ____Version_1)); }
	inline int32_t get__Version_1() const { return ____Version_1; }
	inline int32_t* get_address_of__Version_1() { return &____Version_1; }
	inline void set__Version_1(int32_t value)
	{
		____Version_1 = value;
	}

	inline static int32_t get_offset_of__Index_2() { return static_cast<int32_t>(offsetof(Enumerator_t2588866371, ____Index_2)); }
	inline int32_t get__Index_2() const { return ____Index_2; }
	inline int32_t* get_address_of__Index_2() { return &____Index_2; }
	inline void set__Index_2(int32_t value)
	{
		____Index_2 = value;
	}

	inline static int32_t get_offset_of__Current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2588866371, ____Current_3)); }
	inline KeyValuePair_2_t2438309365  get__Current_3() const { return ____Current_3; }
	inline KeyValuePair_2_t2438309365 * get_address_of__Current_3() { return &____Current_3; }
	inline void set__Current_3(KeyValuePair_2_t2438309365  value)
	{
		____Current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
