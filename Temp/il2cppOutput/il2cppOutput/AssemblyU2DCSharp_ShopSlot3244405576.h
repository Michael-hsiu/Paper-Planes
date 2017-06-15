#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UpgradableScriptableObject
struct UpgradableScriptableObject_t868707505;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShopSlot
struct  ShopSlot_t3244405576  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ShopSlot::id
	int32_t ___id_2;
	// UpgradableScriptableObject ShopSlot::upgrade
	UpgradableScriptableObject_t868707505 * ___upgrade_3;
	// UnityEngine.UI.Text ShopSlot::nameText
	Text_t356221433 * ___nameText_4;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(ShopSlot_t3244405576, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_upgrade_3() { return static_cast<int32_t>(offsetof(ShopSlot_t3244405576, ___upgrade_3)); }
	inline UpgradableScriptableObject_t868707505 * get_upgrade_3() const { return ___upgrade_3; }
	inline UpgradableScriptableObject_t868707505 ** get_address_of_upgrade_3() { return &___upgrade_3; }
	inline void set_upgrade_3(UpgradableScriptableObject_t868707505 * value)
	{
		___upgrade_3 = value;
		Il2CppCodeGenWriteBarrier(&___upgrade_3, value);
	}

	inline static int32_t get_offset_of_nameText_4() { return static_cast<int32_t>(offsetof(ShopSlot_t3244405576, ___nameText_4)); }
	inline Text_t356221433 * get_nameText_4() const { return ___nameText_4; }
	inline Text_t356221433 ** get_address_of_nameText_4() { return &___nameText_4; }
	inline void set_nameText_4(Text_t356221433 * value)
	{
		___nameText_4 = value;
		Il2CppCodeGenWriteBarrier(&___nameText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
