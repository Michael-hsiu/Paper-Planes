#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtendedCollections.SerializableDictionary`2<System.Object,System.Object>
struct  SerializableDictionary_2_t755520112  : public Il2CppObject
{
public:
	// System.Int32[] ExtendedCollections.SerializableDictionary`2::_Buckets
	Int32U5BU5D_t3030399641* ____Buckets_0;
	// System.Int32[] ExtendedCollections.SerializableDictionary`2::_HashCodes
	Int32U5BU5D_t3030399641* ____HashCodes_1;
	// System.Int32[] ExtendedCollections.SerializableDictionary`2::_Next
	Int32U5BU5D_t3030399641* ____Next_2;
	// System.Int32 ExtendedCollections.SerializableDictionary`2::_Count
	int32_t ____Count_3;
	// System.Int32 ExtendedCollections.SerializableDictionary`2::_Version
	int32_t ____Version_4;
	// System.Int32 ExtendedCollections.SerializableDictionary`2::_FreeList
	int32_t ____FreeList_5;
	// System.Int32 ExtendedCollections.SerializableDictionary`2::_FreeCount
	int32_t ____FreeCount_6;
	// TKey[] ExtendedCollections.SerializableDictionary`2::_Keys
	ObjectU5BU5D_t3614634134* ____Keys_7;
	// TValue[] ExtendedCollections.SerializableDictionary`2::_Values
	ObjectU5BU5D_t3614634134* ____Values_8;
	// System.Collections.Generic.IEqualityComparer`1<TKey> ExtendedCollections.SerializableDictionary`2::_Comparer
	Il2CppObject* ____Comparer_9;

public:
	inline static int32_t get_offset_of__Buckets_0() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Buckets_0)); }
	inline Int32U5BU5D_t3030399641* get__Buckets_0() const { return ____Buckets_0; }
	inline Int32U5BU5D_t3030399641** get_address_of__Buckets_0() { return &____Buckets_0; }
	inline void set__Buckets_0(Int32U5BU5D_t3030399641* value)
	{
		____Buckets_0 = value;
		Il2CppCodeGenWriteBarrier(&____Buckets_0, value);
	}

	inline static int32_t get_offset_of__HashCodes_1() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____HashCodes_1)); }
	inline Int32U5BU5D_t3030399641* get__HashCodes_1() const { return ____HashCodes_1; }
	inline Int32U5BU5D_t3030399641** get_address_of__HashCodes_1() { return &____HashCodes_1; }
	inline void set__HashCodes_1(Int32U5BU5D_t3030399641* value)
	{
		____HashCodes_1 = value;
		Il2CppCodeGenWriteBarrier(&____HashCodes_1, value);
	}

	inline static int32_t get_offset_of__Next_2() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Next_2)); }
	inline Int32U5BU5D_t3030399641* get__Next_2() const { return ____Next_2; }
	inline Int32U5BU5D_t3030399641** get_address_of__Next_2() { return &____Next_2; }
	inline void set__Next_2(Int32U5BU5D_t3030399641* value)
	{
		____Next_2 = value;
		Il2CppCodeGenWriteBarrier(&____Next_2, value);
	}

	inline static int32_t get_offset_of__Count_3() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Count_3)); }
	inline int32_t get__Count_3() const { return ____Count_3; }
	inline int32_t* get_address_of__Count_3() { return &____Count_3; }
	inline void set__Count_3(int32_t value)
	{
		____Count_3 = value;
	}

	inline static int32_t get_offset_of__Version_4() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Version_4)); }
	inline int32_t get__Version_4() const { return ____Version_4; }
	inline int32_t* get_address_of__Version_4() { return &____Version_4; }
	inline void set__Version_4(int32_t value)
	{
		____Version_4 = value;
	}

	inline static int32_t get_offset_of__FreeList_5() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____FreeList_5)); }
	inline int32_t get__FreeList_5() const { return ____FreeList_5; }
	inline int32_t* get_address_of__FreeList_5() { return &____FreeList_5; }
	inline void set__FreeList_5(int32_t value)
	{
		____FreeList_5 = value;
	}

	inline static int32_t get_offset_of__FreeCount_6() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____FreeCount_6)); }
	inline int32_t get__FreeCount_6() const { return ____FreeCount_6; }
	inline int32_t* get_address_of__FreeCount_6() { return &____FreeCount_6; }
	inline void set__FreeCount_6(int32_t value)
	{
		____FreeCount_6 = value;
	}

	inline static int32_t get_offset_of__Keys_7() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Keys_7)); }
	inline ObjectU5BU5D_t3614634134* get__Keys_7() const { return ____Keys_7; }
	inline ObjectU5BU5D_t3614634134** get_address_of__Keys_7() { return &____Keys_7; }
	inline void set__Keys_7(ObjectU5BU5D_t3614634134* value)
	{
		____Keys_7 = value;
		Il2CppCodeGenWriteBarrier(&____Keys_7, value);
	}

	inline static int32_t get_offset_of__Values_8() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Values_8)); }
	inline ObjectU5BU5D_t3614634134* get__Values_8() const { return ____Values_8; }
	inline ObjectU5BU5D_t3614634134** get_address_of__Values_8() { return &____Values_8; }
	inline void set__Values_8(ObjectU5BU5D_t3614634134* value)
	{
		____Values_8 = value;
		Il2CppCodeGenWriteBarrier(&____Values_8, value);
	}

	inline static int32_t get_offset_of__Comparer_9() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t755520112, ____Comparer_9)); }
	inline Il2CppObject* get__Comparer_9() const { return ____Comparer_9; }
	inline Il2CppObject** get_address_of__Comparer_9() { return &____Comparer_9; }
	inline void set__Comparer_9(Il2CppObject* value)
	{
		____Comparer_9 = value;
		Il2CppCodeGenWriteBarrier(&____Comparer_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
