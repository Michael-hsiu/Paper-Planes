#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IMoveState
struct IMoveState_t587483389;
// IFireState
struct IFireState_t3386544712;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_FiringShip3666415697.h"

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
	Il2CppObject * ___moveState_23;
	// IFireState RangedShip::firingState
	Il2CppObject * ___firingState_24;
	// UnityEngine.GameObject RangedShip::firingRangeColliders
	GameObject_t1756533147 * ___firingRangeColliders_25;
	// UnityEngine.GameObject RangedShip::safeDistanceColliders
	GameObject_t1756533147 * ___safeDistanceColliders_26;
	// System.Single RangedShip::offsetY
	float ___offsetY_27;
	// System.Single RangedShip::sqFireDist
	float ___sqFireDist_28;
	// System.Single RangedShip::sqMoveDist
	float ___sqMoveDist_29;

public:
	inline static int32_t get_offset_of_moveState_23() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___moveState_23)); }
	inline Il2CppObject * get_moveState_23() const { return ___moveState_23; }
	inline Il2CppObject ** get_address_of_moveState_23() { return &___moveState_23; }
	inline void set_moveState_23(Il2CppObject * value)
	{
		___moveState_23 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_23, value);
	}

	inline static int32_t get_offset_of_firingState_24() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___firingState_24)); }
	inline Il2CppObject * get_firingState_24() const { return ___firingState_24; }
	inline Il2CppObject ** get_address_of_firingState_24() { return &___firingState_24; }
	inline void set_firingState_24(Il2CppObject * value)
	{
		___firingState_24 = value;
		Il2CppCodeGenWriteBarrier(&___firingState_24, value);
	}

	inline static int32_t get_offset_of_firingRangeColliders_25() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___firingRangeColliders_25)); }
	inline GameObject_t1756533147 * get_firingRangeColliders_25() const { return ___firingRangeColliders_25; }
	inline GameObject_t1756533147 ** get_address_of_firingRangeColliders_25() { return &___firingRangeColliders_25; }
	inline void set_firingRangeColliders_25(GameObject_t1756533147 * value)
	{
		___firingRangeColliders_25 = value;
		Il2CppCodeGenWriteBarrier(&___firingRangeColliders_25, value);
	}

	inline static int32_t get_offset_of_safeDistanceColliders_26() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___safeDistanceColliders_26)); }
	inline GameObject_t1756533147 * get_safeDistanceColliders_26() const { return ___safeDistanceColliders_26; }
	inline GameObject_t1756533147 ** get_address_of_safeDistanceColliders_26() { return &___safeDistanceColliders_26; }
	inline void set_safeDistanceColliders_26(GameObject_t1756533147 * value)
	{
		___safeDistanceColliders_26 = value;
		Il2CppCodeGenWriteBarrier(&___safeDistanceColliders_26, value);
	}

	inline static int32_t get_offset_of_offsetY_27() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___offsetY_27)); }
	inline float get_offsetY_27() const { return ___offsetY_27; }
	inline float* get_address_of_offsetY_27() { return &___offsetY_27; }
	inline void set_offsetY_27(float value)
	{
		___offsetY_27 = value;
	}

	inline static int32_t get_offset_of_sqFireDist_28() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___sqFireDist_28)); }
	inline float get_sqFireDist_28() const { return ___sqFireDist_28; }
	inline float* get_address_of_sqFireDist_28() { return &___sqFireDist_28; }
	inline void set_sqFireDist_28(float value)
	{
		___sqFireDist_28 = value;
	}

	inline static int32_t get_offset_of_sqMoveDist_29() { return static_cast<int32_t>(offsetof(RangedShip_t2972560139, ___sqMoveDist_29)); }
	inline float get_sqMoveDist_29() const { return ___sqMoveDist_29; }
	inline float* get_address_of_sqMoveDist_29() { return &___sqMoveDist_29; }
	inline void set_sqMoveDist_29(float value)
	{
		___sqMoveDist_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
