#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// ShopMenu
struct ShopMenu_t2948784613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerupHolder
struct  PowerupHolder_t2490551786  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PowerupHolder::powerup
	GameObject_t1756533147 * ___powerup_2;
	// ShopMenu PowerupHolder::SHOP_MENU
	ShopMenu_t2948784613 * ___SHOP_MENU_3;

public:
	inline static int32_t get_offset_of_powerup_2() { return static_cast<int32_t>(offsetof(PowerupHolder_t2490551786, ___powerup_2)); }
	inline GameObject_t1756533147 * get_powerup_2() const { return ___powerup_2; }
	inline GameObject_t1756533147 ** get_address_of_powerup_2() { return &___powerup_2; }
	inline void set_powerup_2(GameObject_t1756533147 * value)
	{
		___powerup_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerup_2, value);
	}

	inline static int32_t get_offset_of_SHOP_MENU_3() { return static_cast<int32_t>(offsetof(PowerupHolder_t2490551786, ___SHOP_MENU_3)); }
	inline ShopMenu_t2948784613 * get_SHOP_MENU_3() const { return ___SHOP_MENU_3; }
	inline ShopMenu_t2948784613 ** get_address_of_SHOP_MENU_3() { return &___SHOP_MENU_3; }
	inline void set_SHOP_MENU_3(ShopMenu_t2948784613 * value)
	{
		___SHOP_MENU_3 = value;
		Il2CppCodeGenWriteBarrier(&___SHOP_MENU_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
