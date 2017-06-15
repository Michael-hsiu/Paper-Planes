#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;
// PowerupScriptableObject
struct PowerupScriptableObject_t1415146708;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgradableScriptableObject
struct  UpgradableScriptableObject_t868707505  : public ScriptableObject_t1975622470
{
public:
	// System.String UpgradableScriptableObject::powerupName
	String_t* ___powerupName_2;
	// System.Int32 UpgradableScriptableObject::powerupPrice
	int32_t ___powerupPrice_3;
	// System.String UpgradableScriptableObject::powerupInfo
	String_t* ___powerupInfo_4;
	// System.Int32 UpgradableScriptableObject::currLvl
	int32_t ___currLvl_5;
	// System.Int32 UpgradableScriptableObject::MAX_LEVEL
	int32_t ___MAX_LEVEL_6;
	// System.String UpgradableScriptableObject::id
	String_t* ___id_7;
	// PowerupScriptableObject UpgradableScriptableObject::parentPowerup
	PowerupScriptableObject_t1415146708 * ___parentPowerup_8;

public:
	inline static int32_t get_offset_of_powerupName_2() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___powerupName_2)); }
	inline String_t* get_powerupName_2() const { return ___powerupName_2; }
	inline String_t** get_address_of_powerupName_2() { return &___powerupName_2; }
	inline void set_powerupName_2(String_t* value)
	{
		___powerupName_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerupName_2, value);
	}

	inline static int32_t get_offset_of_powerupPrice_3() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___powerupPrice_3)); }
	inline int32_t get_powerupPrice_3() const { return ___powerupPrice_3; }
	inline int32_t* get_address_of_powerupPrice_3() { return &___powerupPrice_3; }
	inline void set_powerupPrice_3(int32_t value)
	{
		___powerupPrice_3 = value;
	}

	inline static int32_t get_offset_of_powerupInfo_4() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___powerupInfo_4)); }
	inline String_t* get_powerupInfo_4() const { return ___powerupInfo_4; }
	inline String_t** get_address_of_powerupInfo_4() { return &___powerupInfo_4; }
	inline void set_powerupInfo_4(String_t* value)
	{
		___powerupInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___powerupInfo_4, value);
	}

	inline static int32_t get_offset_of_currLvl_5() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___currLvl_5)); }
	inline int32_t get_currLvl_5() const { return ___currLvl_5; }
	inline int32_t* get_address_of_currLvl_5() { return &___currLvl_5; }
	inline void set_currLvl_5(int32_t value)
	{
		___currLvl_5 = value;
	}

	inline static int32_t get_offset_of_MAX_LEVEL_6() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___MAX_LEVEL_6)); }
	inline int32_t get_MAX_LEVEL_6() const { return ___MAX_LEVEL_6; }
	inline int32_t* get_address_of_MAX_LEVEL_6() { return &___MAX_LEVEL_6; }
	inline void set_MAX_LEVEL_6(int32_t value)
	{
		___MAX_LEVEL_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___id_7)); }
	inline String_t* get_id_7() const { return ___id_7; }
	inline String_t** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(String_t* value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier(&___id_7, value);
	}

	inline static int32_t get_offset_of_parentPowerup_8() { return static_cast<int32_t>(offsetof(UpgradableScriptableObject_t868707505, ___parentPowerup_8)); }
	inline PowerupScriptableObject_t1415146708 * get_parentPowerup_8() const { return ___parentPowerup_8; }
	inline PowerupScriptableObject_t1415146708 ** get_address_of_parentPowerup_8() { return &___parentPowerup_8; }
	inline void set_parentPowerup_8(PowerupScriptableObject_t1415146708 * value)
	{
		___parentPowerup_8 = value;
		Il2CppCodeGenWriteBarrier(&___parentPowerup_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
