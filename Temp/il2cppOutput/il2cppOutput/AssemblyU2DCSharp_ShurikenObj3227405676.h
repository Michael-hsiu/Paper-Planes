#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"

// ShurikenScrObj
struct ShurikenScrObj_t3401882274;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShurikenObj
struct  ShurikenObj_t3227405676  : public PoolObject_t202793199
{
public:
	// ShurikenScrObj ShurikenObj::powerupData
	ShurikenScrObj_t3401882274 * ___powerupData_2;
	// UnityEngine.GameObject ShurikenObj::explosion
	GameObject_t1756533147 * ___explosion_3;
	// System.Single ShurikenObj::rotationFactor
	float ___rotationFactor_4;
	// System.Int32 ShurikenObj::damageDealt
	int32_t ___damageDealt_5;
	// System.Single ShurikenObj::growTimeMult
	float ___growTimeMult_6;
	// System.Single ShurikenObj::MAX_SIZE
	float ___MAX_SIZE_7;
	// System.Boolean ShurikenObj::dmgDone
	bool ___dmgDone_8;
	// System.Boolean ShurikenObj::growingBigger
	bool ___growingBigger_9;
	// System.Single ShurikenObj::dmgDelay
	float ___dmgDelay_10;
	// System.Boolean ShurikenObj::canDmg
	bool ___canDmg_11;
	// System.Collections.IEnumerator ShurikenObj::cr
	Il2CppObject * ___cr_12;
	// System.Collections.IEnumerator ShurikenObj::dd
	Il2CppObject * ___dd_13;

public:
	inline static int32_t get_offset_of_powerupData_2() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___powerupData_2)); }
	inline ShurikenScrObj_t3401882274 * get_powerupData_2() const { return ___powerupData_2; }
	inline ShurikenScrObj_t3401882274 ** get_address_of_powerupData_2() { return &___powerupData_2; }
	inline void set_powerupData_2(ShurikenScrObj_t3401882274 * value)
	{
		___powerupData_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerupData_2, value);
	}

	inline static int32_t get_offset_of_explosion_3() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___explosion_3)); }
	inline GameObject_t1756533147 * get_explosion_3() const { return ___explosion_3; }
	inline GameObject_t1756533147 ** get_address_of_explosion_3() { return &___explosion_3; }
	inline void set_explosion_3(GameObject_t1756533147 * value)
	{
		___explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_3, value);
	}

	inline static int32_t get_offset_of_rotationFactor_4() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___rotationFactor_4)); }
	inline float get_rotationFactor_4() const { return ___rotationFactor_4; }
	inline float* get_address_of_rotationFactor_4() { return &___rotationFactor_4; }
	inline void set_rotationFactor_4(float value)
	{
		___rotationFactor_4 = value;
	}

	inline static int32_t get_offset_of_damageDealt_5() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___damageDealt_5)); }
	inline int32_t get_damageDealt_5() const { return ___damageDealt_5; }
	inline int32_t* get_address_of_damageDealt_5() { return &___damageDealt_5; }
	inline void set_damageDealt_5(int32_t value)
	{
		___damageDealt_5 = value;
	}

	inline static int32_t get_offset_of_growTimeMult_6() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___growTimeMult_6)); }
	inline float get_growTimeMult_6() const { return ___growTimeMult_6; }
	inline float* get_address_of_growTimeMult_6() { return &___growTimeMult_6; }
	inline void set_growTimeMult_6(float value)
	{
		___growTimeMult_6 = value;
	}

	inline static int32_t get_offset_of_MAX_SIZE_7() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___MAX_SIZE_7)); }
	inline float get_MAX_SIZE_7() const { return ___MAX_SIZE_7; }
	inline float* get_address_of_MAX_SIZE_7() { return &___MAX_SIZE_7; }
	inline void set_MAX_SIZE_7(float value)
	{
		___MAX_SIZE_7 = value;
	}

	inline static int32_t get_offset_of_dmgDone_8() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___dmgDone_8)); }
	inline bool get_dmgDone_8() const { return ___dmgDone_8; }
	inline bool* get_address_of_dmgDone_8() { return &___dmgDone_8; }
	inline void set_dmgDone_8(bool value)
	{
		___dmgDone_8 = value;
	}

	inline static int32_t get_offset_of_growingBigger_9() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___growingBigger_9)); }
	inline bool get_growingBigger_9() const { return ___growingBigger_9; }
	inline bool* get_address_of_growingBigger_9() { return &___growingBigger_9; }
	inline void set_growingBigger_9(bool value)
	{
		___growingBigger_9 = value;
	}

	inline static int32_t get_offset_of_dmgDelay_10() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___dmgDelay_10)); }
	inline float get_dmgDelay_10() const { return ___dmgDelay_10; }
	inline float* get_address_of_dmgDelay_10() { return &___dmgDelay_10; }
	inline void set_dmgDelay_10(float value)
	{
		___dmgDelay_10 = value;
	}

	inline static int32_t get_offset_of_canDmg_11() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___canDmg_11)); }
	inline bool get_canDmg_11() const { return ___canDmg_11; }
	inline bool* get_address_of_canDmg_11() { return &___canDmg_11; }
	inline void set_canDmg_11(bool value)
	{
		___canDmg_11 = value;
	}

	inline static int32_t get_offset_of_cr_12() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___cr_12)); }
	inline Il2CppObject * get_cr_12() const { return ___cr_12; }
	inline Il2CppObject ** get_address_of_cr_12() { return &___cr_12; }
	inline void set_cr_12(Il2CppObject * value)
	{
		___cr_12 = value;
		Il2CppCodeGenWriteBarrier(&___cr_12, value);
	}

	inline static int32_t get_offset_of_dd_13() { return static_cast<int32_t>(offsetof(ShurikenObj_t3227405676, ___dd_13)); }
	inline Il2CppObject * get_dd_13() const { return ___dd_13; }
	inline Il2CppObject ** get_address_of_dd_13() { return &___dd_13; }
	inline void set_dd_13(Il2CppObject * value)
	{
		___dd_13 = value;
		Il2CppCodeGenWriteBarrier(&___dd_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
