#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"

// IMoveState
struct IMoveState_t587483389;
// IFireState
struct IFireState_t3386544712;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




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
	Il2CppObject * ___moveState_20;
	// IFireState BomberShip::firingState
	Il2CppObject * ___firingState_21;
	// System.Int32 BomberShip::explosionDamage
	int32_t ___explosionDamage_22;
	// System.Single BomberShip::explosionDelay
	float ___explosionDelay_23;
	// System.Single BomberShip::damageRange
	float ___damageRange_24;
	// System.Single BomberShip::rotationFactor
	float ___rotationFactor_25;
	// System.Boolean BomberShip::isExploding
	bool ___isExploding_26;
	// System.Boolean BomberShip::explosionActive
	bool ___explosionActive_27;
	// UnityEngine.Rigidbody BomberShip::rb
	Rigidbody_t4233889191 * ___rb_28;

public:
	inline static int32_t get_offset_of_moveState_20() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___moveState_20)); }
	inline Il2CppObject * get_moveState_20() const { return ___moveState_20; }
	inline Il2CppObject ** get_address_of_moveState_20() { return &___moveState_20; }
	inline void set_moveState_20(Il2CppObject * value)
	{
		___moveState_20 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_20, value);
	}

	inline static int32_t get_offset_of_firingState_21() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___firingState_21)); }
	inline Il2CppObject * get_firingState_21() const { return ___firingState_21; }
	inline Il2CppObject ** get_address_of_firingState_21() { return &___firingState_21; }
	inline void set_firingState_21(Il2CppObject * value)
	{
		___firingState_21 = value;
		Il2CppCodeGenWriteBarrier(&___firingState_21, value);
	}

	inline static int32_t get_offset_of_explosionDamage_22() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___explosionDamage_22)); }
	inline int32_t get_explosionDamage_22() const { return ___explosionDamage_22; }
	inline int32_t* get_address_of_explosionDamage_22() { return &___explosionDamage_22; }
	inline void set_explosionDamage_22(int32_t value)
	{
		___explosionDamage_22 = value;
	}

	inline static int32_t get_offset_of_explosionDelay_23() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___explosionDelay_23)); }
	inline float get_explosionDelay_23() const { return ___explosionDelay_23; }
	inline float* get_address_of_explosionDelay_23() { return &___explosionDelay_23; }
	inline void set_explosionDelay_23(float value)
	{
		___explosionDelay_23 = value;
	}

	inline static int32_t get_offset_of_damageRange_24() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___damageRange_24)); }
	inline float get_damageRange_24() const { return ___damageRange_24; }
	inline float* get_address_of_damageRange_24() { return &___damageRange_24; }
	inline void set_damageRange_24(float value)
	{
		___damageRange_24 = value;
	}

	inline static int32_t get_offset_of_rotationFactor_25() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___rotationFactor_25)); }
	inline float get_rotationFactor_25() const { return ___rotationFactor_25; }
	inline float* get_address_of_rotationFactor_25() { return &___rotationFactor_25; }
	inline void set_rotationFactor_25(float value)
	{
		___rotationFactor_25 = value;
	}

	inline static int32_t get_offset_of_isExploding_26() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___isExploding_26)); }
	inline bool get_isExploding_26() const { return ___isExploding_26; }
	inline bool* get_address_of_isExploding_26() { return &___isExploding_26; }
	inline void set_isExploding_26(bool value)
	{
		___isExploding_26 = value;
	}

	inline static int32_t get_offset_of_explosionActive_27() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___explosionActive_27)); }
	inline bool get_explosionActive_27() const { return ___explosionActive_27; }
	inline bool* get_address_of_explosionActive_27() { return &___explosionActive_27; }
	inline void set_explosionActive_27(bool value)
	{
		___explosionActive_27 = value;
	}

	inline static int32_t get_offset_of_rb_28() { return static_cast<int32_t>(offsetof(BomberShip_t3698202601, ___rb_28)); }
	inline Rigidbody_t4233889191 * get_rb_28() const { return ___rb_28; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_28() { return &___rb_28; }
	inline void set_rb_28(Rigidbody_t4233889191 * value)
	{
		___rb_28 = value;
		Il2CppCodeGenWriteBarrier(&___rb_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
