#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UpgradableScriptableObject
struct UpgradableScriptableObject_t868707505;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_t2844261301;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t3671312409;
// PowerupHolder
struct PowerupHolder_t2490551786;
// ShopMenu
struct ShopMenu_t2948784613;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShopMenu
struct  ShopMenu_t2948784613  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShopMenu::shopBaseUI
	GameObject_t1756533147 * ___shopBaseUI_2;
	// UnityEngine.GameObject ShopMenu::welcomeScreen
	GameObject_t1756533147 * ___welcomeScreen_3;
	// UnityEngine.GameObject ShopMenu::shipUpgrades
	GameObject_t1756533147 * ___shipUpgrades_4;
	// UnityEngine.GameObject ShopMenu::powerupUpgrades
	GameObject_t1756533147 * ___powerupUpgrades_5;
	// UnityEngine.GameObject ShopMenu::specificPowerupUpgrades
	GameObject_t1756533147 * ___specificPowerupUpgrades_6;
	// UnityEngine.GameObject ShopMenu::exitButton
	GameObject_t1756533147 * ___exitButton_7;
	// UnityEngine.GameObject ShopMenu::upgradesListPanel
	GameObject_t1756533147 * ___upgradesListPanel_8;
	// UnityEngine.GameObject ShopMenu::shopSlot
	GameObject_t1756533147 * ___shopSlot_9;
	// UnityEngine.GameObject ShopMenu::playerBalance
	GameObject_t1756533147 * ___playerBalance_10;
	// UnityEngine.GameObject ShopMenu::shopInfoPanel
	GameObject_t1756533147 * ___shopInfoPanel_11;
	// UnityEngine.GameObject ShopMenu::buyButton
	GameObject_t1756533147 * ___buyButton_12;
	// UpgradableScriptableObject ShopMenu::currActiveUpgrade
	UpgradableScriptableObject_t868707505 * ___currActiveUpgrade_13;
	// UnityEngine.UI.Button ShopMenu::currButton
	Button_t2872111280 * ___currButton_14;
	// UnityEngine.UI.Text ShopMenu::upgradeName
	Text_t356221433 * ___upgradeName_15;
	// UnityEngine.UI.Text ShopMenu::upgradePrice
	Text_t356221433 * ___upgradePrice_16;
	// UnityEngine.UI.Text ShopMenu::upgradeInfo
	Text_t356221433 * ___upgradeInfo_17;
	// UnityEngine.Sprite ShopMenu::upgradeSprite
	Sprite_t309593783 * ___upgradeSprite_18;
	// UnityEngine.GameObject ShopMenu::activeScreen
	GameObject_t1756533147 * ___activeScreen_19;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> ShopMenu::screenStack
	Stack_1_t2844261301 * ___screenStack_20;
	// System.Boolean ShopMenu::isOpen
	bool ___isOpen_21;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShopMenu::activeSlots
	List_1_t1125654279 * ___activeSlots_22;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ShopMenu::visitedPowerupSlots
	Dictionary_2_t3671312409 * ___visitedPowerupSlots_23;
	// PowerupHolder ShopMenu::activePowerupHolder
	PowerupHolder_t2490551786 * ___activePowerupHolder_24;

public:
	inline static int32_t get_offset_of_shopBaseUI_2() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___shopBaseUI_2)); }
	inline GameObject_t1756533147 * get_shopBaseUI_2() const { return ___shopBaseUI_2; }
	inline GameObject_t1756533147 ** get_address_of_shopBaseUI_2() { return &___shopBaseUI_2; }
	inline void set_shopBaseUI_2(GameObject_t1756533147 * value)
	{
		___shopBaseUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___shopBaseUI_2, value);
	}

	inline static int32_t get_offset_of_welcomeScreen_3() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___welcomeScreen_3)); }
	inline GameObject_t1756533147 * get_welcomeScreen_3() const { return ___welcomeScreen_3; }
	inline GameObject_t1756533147 ** get_address_of_welcomeScreen_3() { return &___welcomeScreen_3; }
	inline void set_welcomeScreen_3(GameObject_t1756533147 * value)
	{
		___welcomeScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&___welcomeScreen_3, value);
	}

	inline static int32_t get_offset_of_shipUpgrades_4() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___shipUpgrades_4)); }
	inline GameObject_t1756533147 * get_shipUpgrades_4() const { return ___shipUpgrades_4; }
	inline GameObject_t1756533147 ** get_address_of_shipUpgrades_4() { return &___shipUpgrades_4; }
	inline void set_shipUpgrades_4(GameObject_t1756533147 * value)
	{
		___shipUpgrades_4 = value;
		Il2CppCodeGenWriteBarrier(&___shipUpgrades_4, value);
	}

	inline static int32_t get_offset_of_powerupUpgrades_5() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___powerupUpgrades_5)); }
	inline GameObject_t1756533147 * get_powerupUpgrades_5() const { return ___powerupUpgrades_5; }
	inline GameObject_t1756533147 ** get_address_of_powerupUpgrades_5() { return &___powerupUpgrades_5; }
	inline void set_powerupUpgrades_5(GameObject_t1756533147 * value)
	{
		___powerupUpgrades_5 = value;
		Il2CppCodeGenWriteBarrier(&___powerupUpgrades_5, value);
	}

	inline static int32_t get_offset_of_specificPowerupUpgrades_6() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___specificPowerupUpgrades_6)); }
	inline GameObject_t1756533147 * get_specificPowerupUpgrades_6() const { return ___specificPowerupUpgrades_6; }
	inline GameObject_t1756533147 ** get_address_of_specificPowerupUpgrades_6() { return &___specificPowerupUpgrades_6; }
	inline void set_specificPowerupUpgrades_6(GameObject_t1756533147 * value)
	{
		___specificPowerupUpgrades_6 = value;
		Il2CppCodeGenWriteBarrier(&___specificPowerupUpgrades_6, value);
	}

	inline static int32_t get_offset_of_exitButton_7() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___exitButton_7)); }
	inline GameObject_t1756533147 * get_exitButton_7() const { return ___exitButton_7; }
	inline GameObject_t1756533147 ** get_address_of_exitButton_7() { return &___exitButton_7; }
	inline void set_exitButton_7(GameObject_t1756533147 * value)
	{
		___exitButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___exitButton_7, value);
	}

	inline static int32_t get_offset_of_upgradesListPanel_8() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___upgradesListPanel_8)); }
	inline GameObject_t1756533147 * get_upgradesListPanel_8() const { return ___upgradesListPanel_8; }
	inline GameObject_t1756533147 ** get_address_of_upgradesListPanel_8() { return &___upgradesListPanel_8; }
	inline void set_upgradesListPanel_8(GameObject_t1756533147 * value)
	{
		___upgradesListPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___upgradesListPanel_8, value);
	}

	inline static int32_t get_offset_of_shopSlot_9() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___shopSlot_9)); }
	inline GameObject_t1756533147 * get_shopSlot_9() const { return ___shopSlot_9; }
	inline GameObject_t1756533147 ** get_address_of_shopSlot_9() { return &___shopSlot_9; }
	inline void set_shopSlot_9(GameObject_t1756533147 * value)
	{
		___shopSlot_9 = value;
		Il2CppCodeGenWriteBarrier(&___shopSlot_9, value);
	}

	inline static int32_t get_offset_of_playerBalance_10() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___playerBalance_10)); }
	inline GameObject_t1756533147 * get_playerBalance_10() const { return ___playerBalance_10; }
	inline GameObject_t1756533147 ** get_address_of_playerBalance_10() { return &___playerBalance_10; }
	inline void set_playerBalance_10(GameObject_t1756533147 * value)
	{
		___playerBalance_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerBalance_10, value);
	}

	inline static int32_t get_offset_of_shopInfoPanel_11() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___shopInfoPanel_11)); }
	inline GameObject_t1756533147 * get_shopInfoPanel_11() const { return ___shopInfoPanel_11; }
	inline GameObject_t1756533147 ** get_address_of_shopInfoPanel_11() { return &___shopInfoPanel_11; }
	inline void set_shopInfoPanel_11(GameObject_t1756533147 * value)
	{
		___shopInfoPanel_11 = value;
		Il2CppCodeGenWriteBarrier(&___shopInfoPanel_11, value);
	}

	inline static int32_t get_offset_of_buyButton_12() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___buyButton_12)); }
	inline GameObject_t1756533147 * get_buyButton_12() const { return ___buyButton_12; }
	inline GameObject_t1756533147 ** get_address_of_buyButton_12() { return &___buyButton_12; }
	inline void set_buyButton_12(GameObject_t1756533147 * value)
	{
		___buyButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___buyButton_12, value);
	}

	inline static int32_t get_offset_of_currActiveUpgrade_13() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___currActiveUpgrade_13)); }
	inline UpgradableScriptableObject_t868707505 * get_currActiveUpgrade_13() const { return ___currActiveUpgrade_13; }
	inline UpgradableScriptableObject_t868707505 ** get_address_of_currActiveUpgrade_13() { return &___currActiveUpgrade_13; }
	inline void set_currActiveUpgrade_13(UpgradableScriptableObject_t868707505 * value)
	{
		___currActiveUpgrade_13 = value;
		Il2CppCodeGenWriteBarrier(&___currActiveUpgrade_13, value);
	}

	inline static int32_t get_offset_of_currButton_14() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___currButton_14)); }
	inline Button_t2872111280 * get_currButton_14() const { return ___currButton_14; }
	inline Button_t2872111280 ** get_address_of_currButton_14() { return &___currButton_14; }
	inline void set_currButton_14(Button_t2872111280 * value)
	{
		___currButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___currButton_14, value);
	}

	inline static int32_t get_offset_of_upgradeName_15() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___upgradeName_15)); }
	inline Text_t356221433 * get_upgradeName_15() const { return ___upgradeName_15; }
	inline Text_t356221433 ** get_address_of_upgradeName_15() { return &___upgradeName_15; }
	inline void set_upgradeName_15(Text_t356221433 * value)
	{
		___upgradeName_15 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeName_15, value);
	}

	inline static int32_t get_offset_of_upgradePrice_16() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___upgradePrice_16)); }
	inline Text_t356221433 * get_upgradePrice_16() const { return ___upgradePrice_16; }
	inline Text_t356221433 ** get_address_of_upgradePrice_16() { return &___upgradePrice_16; }
	inline void set_upgradePrice_16(Text_t356221433 * value)
	{
		___upgradePrice_16 = value;
		Il2CppCodeGenWriteBarrier(&___upgradePrice_16, value);
	}

	inline static int32_t get_offset_of_upgradeInfo_17() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___upgradeInfo_17)); }
	inline Text_t356221433 * get_upgradeInfo_17() const { return ___upgradeInfo_17; }
	inline Text_t356221433 ** get_address_of_upgradeInfo_17() { return &___upgradeInfo_17; }
	inline void set_upgradeInfo_17(Text_t356221433 * value)
	{
		___upgradeInfo_17 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeInfo_17, value);
	}

	inline static int32_t get_offset_of_upgradeSprite_18() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___upgradeSprite_18)); }
	inline Sprite_t309593783 * get_upgradeSprite_18() const { return ___upgradeSprite_18; }
	inline Sprite_t309593783 ** get_address_of_upgradeSprite_18() { return &___upgradeSprite_18; }
	inline void set_upgradeSprite_18(Sprite_t309593783 * value)
	{
		___upgradeSprite_18 = value;
		Il2CppCodeGenWriteBarrier(&___upgradeSprite_18, value);
	}

	inline static int32_t get_offset_of_activeScreen_19() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___activeScreen_19)); }
	inline GameObject_t1756533147 * get_activeScreen_19() const { return ___activeScreen_19; }
	inline GameObject_t1756533147 ** get_address_of_activeScreen_19() { return &___activeScreen_19; }
	inline void set_activeScreen_19(GameObject_t1756533147 * value)
	{
		___activeScreen_19 = value;
		Il2CppCodeGenWriteBarrier(&___activeScreen_19, value);
	}

	inline static int32_t get_offset_of_screenStack_20() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___screenStack_20)); }
	inline Stack_1_t2844261301 * get_screenStack_20() const { return ___screenStack_20; }
	inline Stack_1_t2844261301 ** get_address_of_screenStack_20() { return &___screenStack_20; }
	inline void set_screenStack_20(Stack_1_t2844261301 * value)
	{
		___screenStack_20 = value;
		Il2CppCodeGenWriteBarrier(&___screenStack_20, value);
	}

	inline static int32_t get_offset_of_isOpen_21() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___isOpen_21)); }
	inline bool get_isOpen_21() const { return ___isOpen_21; }
	inline bool* get_address_of_isOpen_21() { return &___isOpen_21; }
	inline void set_isOpen_21(bool value)
	{
		___isOpen_21 = value;
	}

	inline static int32_t get_offset_of_activeSlots_22() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___activeSlots_22)); }
	inline List_1_t1125654279 * get_activeSlots_22() const { return ___activeSlots_22; }
	inline List_1_t1125654279 ** get_address_of_activeSlots_22() { return &___activeSlots_22; }
	inline void set_activeSlots_22(List_1_t1125654279 * value)
	{
		___activeSlots_22 = value;
		Il2CppCodeGenWriteBarrier(&___activeSlots_22, value);
	}

	inline static int32_t get_offset_of_visitedPowerupSlots_23() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___visitedPowerupSlots_23)); }
	inline Dictionary_2_t3671312409 * get_visitedPowerupSlots_23() const { return ___visitedPowerupSlots_23; }
	inline Dictionary_2_t3671312409 ** get_address_of_visitedPowerupSlots_23() { return &___visitedPowerupSlots_23; }
	inline void set_visitedPowerupSlots_23(Dictionary_2_t3671312409 * value)
	{
		___visitedPowerupSlots_23 = value;
		Il2CppCodeGenWriteBarrier(&___visitedPowerupSlots_23, value);
	}

	inline static int32_t get_offset_of_activePowerupHolder_24() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613, ___activePowerupHolder_24)); }
	inline PowerupHolder_t2490551786 * get_activePowerupHolder_24() const { return ___activePowerupHolder_24; }
	inline PowerupHolder_t2490551786 ** get_address_of_activePowerupHolder_24() { return &___activePowerupHolder_24; }
	inline void set_activePowerupHolder_24(PowerupHolder_t2490551786 * value)
	{
		___activePowerupHolder_24 = value;
		Il2CppCodeGenWriteBarrier(&___activePowerupHolder_24, value);
	}
};

struct ShopMenu_t2948784613_StaticFields
{
public:
	// ShopMenu ShopMenu::instance
	ShopMenu_t2948784613 * ___instance_25;

public:
	inline static int32_t get_offset_of_instance_25() { return static_cast<int32_t>(offsetof(ShopMenu_t2948784613_StaticFields, ___instance_25)); }
	inline ShopMenu_t2948784613 * get_instance_25() const { return ___instance_25; }
	inline ShopMenu_t2948784613 ** get_address_of_instance_25() { return &___instance_25; }
	inline void set_instance_25(ShopMenu_t2948784613 * value)
	{
		___instance_25 = value;
		Il2CppCodeGenWriteBarrier(&___instance_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
