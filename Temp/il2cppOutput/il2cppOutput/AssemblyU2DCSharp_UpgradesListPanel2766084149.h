#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t1515633077;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgradesListPanel
struct  UpgradesListPanel_t2766084149  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.GridLayoutGroup UpgradesListPanel::gridLayoutGroup
	GridLayoutGroup_t1515633077 * ___gridLayoutGroup_2;
	// UnityEngine.GameObject UpgradesListPanel::cellPrefab
	GameObject_t1756533147 * ___cellPrefab_3;

public:
	inline static int32_t get_offset_of_gridLayoutGroup_2() { return static_cast<int32_t>(offsetof(UpgradesListPanel_t2766084149, ___gridLayoutGroup_2)); }
	inline GridLayoutGroup_t1515633077 * get_gridLayoutGroup_2() const { return ___gridLayoutGroup_2; }
	inline GridLayoutGroup_t1515633077 ** get_address_of_gridLayoutGroup_2() { return &___gridLayoutGroup_2; }
	inline void set_gridLayoutGroup_2(GridLayoutGroup_t1515633077 * value)
	{
		___gridLayoutGroup_2 = value;
		Il2CppCodeGenWriteBarrier(&___gridLayoutGroup_2, value);
	}

	inline static int32_t get_offset_of_cellPrefab_3() { return static_cast<int32_t>(offsetof(UpgradesListPanel_t2766084149, ___cellPrefab_3)); }
	inline GameObject_t1756533147 * get_cellPrefab_3() const { return ___cellPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_cellPrefab_3() { return &___cellPrefab_3; }
	inline void set_cellPrefab_3(GameObject_t1756533147 * value)
	{
		___cellPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___cellPrefab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
