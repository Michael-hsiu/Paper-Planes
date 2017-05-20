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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "AssemblyU2DCSharp_Ship1116303770.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BomberShip
struct  BomberShip_t3698202601  : public Ship_t1116303770
{
public:
	// IMoveState BomberShip::moveState
	Il2CppObject * ___moveState_15;
	// IFireState BomberShip::firingState
	Il2CppObject * ___firingState_16;
	// System.Int32 BomberShip::explosionDamage
	int32_t ___explosionDamage_17;
	// System.Single BomberShip::explosionDelay
	float ___explosionDelay_18;
	// System.Single BomberShip::damageRange
	float ___damageRange_19;
	// System.Single BomberShip::rotationFactor
	float ___rotationFactor_20;
	// System.Boolean BomberShip::isExploding
	bool ___isExploding_21;
	// System.Boolean BomberShip::explosionActive
	bool ___explosionActive_22;
	// UnityEngine.Rigidbody BomberShip::rb
	Rigidbody_t4233889191 * ___rb_23;

public:
	inline static int32_t get_offset_of_moveState_15() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___moveState_15)); }
	inline Il2CppObject * get_moveState_15() const { return ___moveState_15; }
	inline Il2CppObject ** get_address_of_moveState_15() { return &___moveState_15; }
	inline void set_moveState_15(Il2CppObject * value)
	{
		___moveState_15 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_15, value);
	}

	inline static int32_t get_offset_of_firingState_16() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___firingState_16)); }
	inline Il2CppObject * get_firingState_16() const { return ___firingState_16; }
	inline Il2CppObject ** get_address_of_firingState_16() { return &___firingState_16; }
	inline void set_firingState_16(Il2CppObject * value)
	{
		___firingState_16 = value;
		Il2CppCodeGenWriteBarrier(&___firingState_16, value);
	}

	inline static int32_t get_offset_of_explosionDamage_17() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___explosionDamage_17)); }
	inline int32_t get_explosionDamage_17() const { return ___explosionDamage_17; }
	inline int32_t* get_address_of_explosionDamage_17() { return &___explosionDamage_17; }
	inline void set_explosionDamage_17(int32_t value)
	{
		___explosionDamage_17 = value;
	}

	inline static int32_t get_offset_of_explosionDelay_18() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___explosionDelay_18)); }
	inline float get_explosionDelay_18() const { return ___explosionDelay_18; }
	inline float* get_address_of_explosionDelay_18() { return &___explosionDelay_18; }
	inline void set_explosionDelay_18(float value)
	{
		___explosionDelay_18 = value;
	}

	inline static int32_t get_offset_of_damageRange_19() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___damageRange_19)); }
	inline float get_damageRange_19() const { return ___damageRange_19; }
	inline float* get_address_of_damageRange_19() { return &___damageRange_19; }
	inline void set_damageRange_19(float value)
	{
		___damageRange_19 = value;
	}

	inline static int32_t get_offset_of_rotationFactor_20() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___rotationFactor_20)); }
	inline float get_rotationFactor_20() const { return ___rotationFactor_20; }
	inline float* get_address_of_rotationFactor_20() { return &___rotationFactor_20; }
	inline void set_rotationFactor_20(float value)
	{
		___rotationFactor_20 = value;
	}

	inline static int32_t get_offset_of_isExploding_21() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___isExploding_21)); }
	inline bool get_isExploding_21() const { return ___isExploding_21; }
	inline bool* get_address_of_isExploding_21() { return &___isExploding_21; }
	inline void set_isExploding_21(bool value)
	{
		___isExploding_21 = value;
	}

	inline static int32_t get_offset_of_explosionActive_22() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___explosionActive_22)); }
	inline bool get_explosionActive_22() const { return ___explosionActive_22; }
	inline bool* get_address_of_explosionActive_22() { return &___explosionActive_22; }
	inline void set_explosionActive_22(bool value)
	{
		___explosionActive_22 = value;
	}

	inline static int32_t get_offset_of_rb_23() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___rb_23)); }
	inline Rigidbody_t4233889191 * get_rb_23() const { return ___rb_23; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_23() { return &___rb_23; }
	inline void set_rb_23(Rigidbody_t4233889191 * value)
	{
		___rb_23 = value;
		Il2CppCodeGenWriteBarrier(&___rb_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
