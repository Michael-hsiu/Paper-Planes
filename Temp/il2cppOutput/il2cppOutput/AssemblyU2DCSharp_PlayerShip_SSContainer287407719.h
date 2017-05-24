#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ShotSpawn>
struct List_1_t3173386001;
// Powerup
struct Powerup_t2065360972;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_PlayerShip_Weapons2322246681.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShip/SSContainer
struct  SSContainer_t287407719  : public Il2CppObject
{
public:
	// PlayerShip/Weapons PlayerShip/SSContainer::id
	int32_t ___id_1;
	// System.Int32 PlayerShip/SSContainer::priority
	int32_t ___priority_2;
	// System.Collections.Generic.List`1<ShotSpawn> PlayerShip/SSContainer::ss
	List_1_t3173386001 * ___ss_3;
	// Powerup PlayerShip/SSContainer::activePowerup
	Powerup_t2065360972 * ___activePowerup_4;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(SSContainer_t287407719, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(SSContainer_t287407719, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_ss_3() { return static_cast<int32_t>(offsetof(SSContainer_t287407719, ___ss_3)); }
	inline List_1_t3173386001 * get_ss_3() const { return ___ss_3; }
	inline List_1_t3173386001 ** get_address_of_ss_3() { return &___ss_3; }
	inline void set_ss_3(List_1_t3173386001 * value)
	{
		___ss_3 = value;
		Il2CppCodeGenWriteBarrier(&___ss_3, value);
	}

	inline static int32_t get_offset_of_activePowerup_4() { return static_cast<int32_t>(offsetof(SSContainer_t287407719, ___activePowerup_4)); }
	inline Powerup_t2065360972 * get_activePowerup_4() const { return ___activePowerup_4; }
	inline Powerup_t2065360972 ** get_address_of_activePowerup_4() { return &___activePowerup_4; }
	inline void set_activePowerup_4(Powerup_t2065360972 * value)
	{
		___activePowerup_4 = value;
		Il2CppCodeGenWriteBarrier(&___activePowerup_4, value);
	}
};

struct SSContainer_t287407719_StaticFields
{
public:
	// System.Single PlayerShip/SSContainer::weaponTime
	float ___weaponTime_0;

public:
	inline static int32_t get_offset_of_weaponTime_0() { return static_cast<int32_t>(offsetof(SSContainer_t287407719_StaticFields, ___weaponTime_0)); }
	inline float get_weaponTime_0() const { return ___weaponTime_0; }
	inline float* get_address_of_weaponTime_0() { return &___weaponTime_0; }
	inline void set_weaponTime_0(float value)
	{
		___weaponTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
