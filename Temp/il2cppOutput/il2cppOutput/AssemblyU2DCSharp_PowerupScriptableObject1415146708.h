#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UpgradableScriptableObject>
struct List_1_t237828637;

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerupScriptableObject
struct  PowerupScriptableObject_t1415146708  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<UpgradableScriptableObject> PowerupScriptableObject::upgradeList
	List_1_t237828637 * ___upgradeList_2;

public:
	inline static int32_t get_offset_of_upgradeList_2() { return static_cast<int32_t>(offsetof(PowerupScriptableObject_t1415146708, ___upgradeList_2)); }
	inline List_1_t237828637 * get_upgradeList_2() const { return ___upgradeList_2; }
	inline List_1_t237828637 ** get_address_of_upgradeList_2() { return &___upgradeList_2; }
	inline void set_upgradeList_2(List_1_t237828637 * value)
	{
		___upgradeList_2 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
