#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"

// ExtendedCollections.SerializableDictionary`2<System.Object,System.Object>
struct SerializableDictionary_2_t755520112;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtendedCollections.SerializableDictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t189411651 
{
public:
	// ExtendedCollections.SerializableDictionary`2<TKey,TValue> ExtendedCollections.SerializableDictionary`2/Enumerator::_Dictionary
	SerializableDictionary_2_t755520112 * ____Dictionary_0;
	// System.Int32 ExtendedCollections.SerializableDictionary`2/Enumerator::_Version
	int32_t ____Version_1;
	// System.Int32 ExtendedCollections.SerializableDictionary`2/Enumerator::_Index
	int32_t ____Index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> ExtendedCollections.SerializableDictionary`2/Enumerator::_Current
	KeyValuePair_2_t38854645  ____Current_3;

public:
	inline static int32_t get_offset_of__Dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t189411651, ____Dictionary_0)); }
	inline SerializableDictionary_2_t755520112 * get__Dictionary_0() const { return ____Dictionary_0; }
	inline SerializableDictionary_2_t755520112 ** get_address_of__Dictionary_0() { return &____Dictionary_0; }
	inline void set__Dictionary_0(SerializableDictionary_2_t755520112 * value)
	{
		____Dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____Dictionary_0, value);
	}

	inline static int32_t get_offset_of__Version_1() { return static_cast<int32_t>(offsetof(Enumerator_t189411651, ____Version_1)); }
	inline int32_t get__Version_1() const { return ____Version_1; }
	inline int32_t* get_address_of__Version_1() { return &____Version_1; }
	inline void set__Version_1(int32_t value)
	{
		____Version_1 = value;
	}

	inline static int32_t get_offset_of__Index_2() { return static_cast<int32_t>(offsetof(Enumerator_t189411651, ____Index_2)); }
	inline int32_t get__Index_2() const { return ____Index_2; }
	inline int32_t* get_address_of__Index_2() { return &____Index_2; }
	inline void set__Index_2(int32_t value)
	{
		____Index_2 = value;
	}

	inline static int32_t get_offset_of__Current_3() { return static_cast<int32_t>(offsetof(Enumerator_t189411651, ____Current_3)); }
	inline KeyValuePair_2_t38854645  get__Current_3() const { return ____Current_3; }
	inline KeyValuePair_2_t38854645 * get_address_of__Current_3() { return &____Current_3; }
	inline void set__Current_3(KeyValuePair_2_t38854645  value)
	{
		____Current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
