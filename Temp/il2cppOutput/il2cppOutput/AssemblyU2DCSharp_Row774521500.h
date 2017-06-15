#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Row
struct  Row_t774521500  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Row::row
	List_1_t1125654279 * ___row_0;

public:
	inline static int32_t get_offset_of_row_0() { return static_cast<int32_t>(offsetof(Row_t774521500, ___row_0)); }
	inline List_1_t1125654279 * get_row_0() const { return ___row_0; }
	inline List_1_t1125654279 ** get_address_of_row_0() { return &___row_0; }
	inline void set_row_0(List_1_t1125654279 * value)
	{
		___row_0 = value;
		Il2CppCodeGenWriteBarrier(&___row_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
