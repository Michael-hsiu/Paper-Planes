#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_FiringShip3666415697.h"

// IMoveState
struct IMoveState_t587483389;
// IFireState
struct IFireState_t3386544712;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RangedShip
struct  RangedShip_t2972560139  : public FiringShip_t3666415697
{
public:
	// IMoveState RangedShip::moveState
	Il2CppObject * ___moveState_28;
	// IFireState RangedShip::firingState
	Il2CppObject * ___firingState_29;
	// UnityEngine.GameObject RangedShip::firingRangeColliders
	GameObject_t1756533147 * ___firingRangeColliders_30;
	// UnityEngine.GameObject RangedShip::safeDistanceColliders
	GameObject_t1756533147 * ___safeDistanceColliders_31;
	// System.Single RangedShip::offsetY
	float ___offsetY_32;
	// System.Single RangedShip::sqFireDist
	float ___sqFireDist_33;
	// System.Single RangedShip::sqMoveDist
	float ___sqMoveDist_34;

public:
	inline static int32_t get_offset_of_moveState_28() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___moveState_28)); }
	inline Il2CppObject * get_moveState_28() const { return ___moveState_28; }
	inline Il2CppObject ** get_address_of_moveState_28() { return &___moveState_28; }
	inline void set_moveState_28(Il2CppObject * value)
	{
		___moveState_28 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_28, value);
	}

	inline static int32_t get_offset_of_firingState_29() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___firingState_29)); }
	inline Il2CppObject * get_firingState_29() const { return ___firingState_29; }
	inline Il2CppObject ** get_address_of_firingState_29() { return &___firingState_29; }
	inline void set_firingState_29(Il2CppObject * value)
	{
		___firingState_29 = value;
		Il2CppCodeGenWriteBarrier(&___firingState_29, value);
	}

	inline static int32_t get_offset_of_firingRangeColliders_30() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___firingRangeColliders_30)); }
	inline GameObject_t1756533147 * get_firingRangeColliders_30() const { return ___firingRangeColliders_30; }
	inline GameObject_t1756533147 ** get_address_of_firingRangeColliders_30() { return &___firingRangeColliders_30; }
	inline void set_firingRangeColliders_30(GameObject_t1756533147 * value)
	{
		___firingRangeColliders_30 = value;
		Il2CppCodeGenWriteBarrier(&___firingRangeColliders_30, value);
	}

	inline static int32_t get_offset_of_safeDistanceColliders_31() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___safeDistanceColliders_31)); }
	inline GameObject_t1756533147 * get_safeDistanceColliders_31() const { return ___safeDistanceColliders_31; }
	inline GameObject_t1756533147 ** get_address_of_safeDistanceColliders_31() { return &___safeDistanceColliders_31; }
	inline void set_safeDistanceColliders_31(GameObject_t1756533147 * value)
	{
		___safeDistanceColliders_31 = value;
		Il2CppCodeGenWriteBarrier(&___safeDistanceColliders_31, value);
	}

	inline static int32_t get_offset_of_offsetY_32() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___offsetY_32)); }
	inline float get_offsetY_32() const { return ___offsetY_32; }
	inline float* get_address_of_offsetY_32() { return &___offsetY_32; }
	inline void set_offsetY_32(float value)
	{
		___offsetY_32 = value;
	}

	inline static int32_t get_offset_of_sqFireDist_33() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___sqFireDist_33)); }
	inline float get_sqFireDist_33() const { return ___sqFireDist_33; }
	inline float* get_address_of_sqFireDist_33() { return &___sqFireDist_33; }
	inline void set_sqFireDist_33(float value)
	{
		___sqFireDist_33 = value;
	}

	inline static int32_t get_offset_of_sqMoveDist_34() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___sqMoveDist_34)); }
	inline float get_sqMoveDist_34() const { return ___sqMoveDist_34; }
	inline float* get_address_of_sqMoveDist_34() { return &___sqMoveDist_34; }
	inline void set_sqMoveDist_34(float value)
	{
		___sqMoveDist_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
