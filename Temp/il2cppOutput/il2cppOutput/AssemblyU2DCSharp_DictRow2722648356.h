#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DictRow/TeamHolder>
struct List_1_t1229005494;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DictRow
struct  DictRow_t2722648356  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<DictRow/TeamHolder> DictRow::dictRow
	List_1_t1229005494 * ___dictRow_0;

public:
	inline static int32_t get_offset_of_dictRow_0() { return static_cast<int32_t>(offsetof(DictRow_t2722648356, ___dictRow_0)); }
	inline List_1_t1229005494 * get_dictRow_0() const { return ___dictRow_0; }
	inline List_1_t1229005494 ** get_address_of_dictRow_0() { return &___dictRow_0; }
	inline void set_dictRow_0(List_1_t1229005494 * value)
	{
		___dictRow_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictRow_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
