#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssassinShip
struct  AssassinShip_t2748391195  : public Ship_t1116303770
{
public:
	// System.Single AssassinShip::detectionDist
	float ___detectionDist_15;
	// System.Single AssassinShip::rushDelay
	float ___rushDelay_16;
	// System.Single AssassinShip::rushSpeed
	float ___rushSpeed_17;
	// System.Single AssassinShip::rushDist
	float ___rushDist_18;
	// System.Single AssassinShip::timeBtwnAtk
	float ___timeBtwnAtk_19;
	// System.Boolean AssassinShip::startTargeting
	bool ___startTargeting_20;
	// System.Boolean AssassinShip::isAttacking
	bool ___isAttacking_21;
	// System.Boolean AssassinShip::onStandby
	bool ___onStandby_22;
	// UnityEngine.Vector3 AssassinShip::currPos
	Vector3_t2243707580  ___currPos_23;
	// UnityEngine.Vector3 AssassinShip::playerPos
	Vector3_t2243707580  ___playerPos_24;
	// UnityEngine.Vector3 AssassinShip::playerDir
	Vector3_t2243707580  ___playerDir_25;
	// UnityEngine.Vector2 AssassinShip::offset
	Vector2_t2243707579  ___offset_26;

public:
	inline static int32_t get_offset_of_detectionDist_15() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___detectionDist_15)); }
	inline float get_detectionDist_15() const { return ___detectionDist_15; }
	inline float* get_address_of_detectionDist_15() { return &___detectionDist_15; }
	inline void set_detectionDist_15(float value)
	{
		___detectionDist_15 = value;
	}

	inline static int32_t get_offset_of_rushDelay_16() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___rushDelay_16)); }
	inline float get_rushDelay_16() const { return ___rushDelay_16; }
	inline float* get_address_of_rushDelay_16() { return &___rushDelay_16; }
	inline void set_rushDelay_16(float value)
	{
		___rushDelay_16 = value;
	}

	inline static int32_t get_offset_of_rushSpeed_17() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___rushSpeed_17)); }
	inline float get_rushSpeed_17() const { return ___rushSpeed_17; }
	inline float* get_address_of_rushSpeed_17() { return &___rushSpeed_17; }
	inline void set_rushSpeed_17(float value)
	{
		___rushSpeed_17 = value;
	}

	inline static int32_t get_offset_of_rushDist_18() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___rushDist_18)); }
	inline float get_rushDist_18() const { return ___rushDist_18; }
	inline float* get_address_of_rushDist_18() { return &___rushDist_18; }
	inline void set_rushDist_18(float value)
	{
		___rushDist_18 = value;
	}

	inline static int32_t get_offset_of_timeBtwnAtk_19() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___timeBtwnAtk_19)); }
	inline float get_timeBtwnAtk_19() const { return ___timeBtwnAtk_19; }
	inline float* get_address_of_timeBtwnAtk_19() { return &___timeBtwnAtk_19; }
	inline void set_timeBtwnAtk_19(float value)
	{
		___timeBtwnAtk_19 = value;
	}

	inline static int32_t get_offset_of_startTargeting_20() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___startTargeting_20)); }
	inline bool get_startTargeting_20() const { return ___startTargeting_20; }
	inline bool* get_address_of_startTargeting_20() { return &___startTargeting_20; }
	inline void set_startTargeting_20(bool value)
	{
		___startTargeting_20 = value;
	}

	inline static int32_t get_offset_of_isAttacking_21() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___isAttacking_21)); }
	inline bool get_isAttacking_21() const { return ___isAttacking_21; }
	inline bool* get_address_of_isAttacking_21() { return &___isAttacking_21; }
	inline void set_isAttacking_21(bool value)
	{
		___isAttacking_21 = value;
	}

	inline static int32_t get_offset_of_onStandby_22() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___onStandby_22)); }
	inline bool get_onStandby_22() const { return ___onStandby_22; }
	inline bool* get_address_of_onStandby_22() { return &___onStandby_22; }
	inline void set_onStandby_22(bool value)
	{
		___onStandby_22 = value;
	}

	inline static int32_t get_offset_of_currPos_23() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___currPos_23)); }
	inline Vector3_t2243707580  get_currPos_23() const { return ___currPos_23; }
	inline Vector3_t2243707580 * get_address_of_currPos_23() { return &___currPos_23; }
	inline void set_currPos_23(Vector3_t2243707580  value)
	{
		___currPos_23 = value;
	}

	inline static int32_t get_offset_of_playerPos_24() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___playerPos_24)); }
	inline Vector3_t2243707580  get_playerPos_24() const { return ___playerPos_24; }
	inline Vector3_t2243707580 * get_address_of_playerPos_24() { return &___playerPos_24; }
	inline void set_playerPos_24(Vector3_t2243707580  value)
	{
		___playerPos_24 = value;
	}

	inline static int32_t get_offset_of_playerDir_25() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___playerDir_25)); }
	inline Vector3_t2243707580  get_playerDir_25() const { return ___playerDir_25; }
	inline Vector3_t2243707580 * get_address_of_playerDir_25() { return &___playerDir_25; }
	inline void set_playerDir_25(Vector3_t2243707580  value)
	{
		___playerDir_25 = value;
	}

	inline static int32_t get_offset_of_offset_26() { return static_cast<int32_t>(offsetof(AssassinShip_t2748391195, ___offset_26)); }
	inline Vector2_t2243707579  get_offset_26() const { return ___offset_26; }
	inline Vector2_t2243707579 * get_address_of_offset_26() { return &___offset_26; }
	inline void set_offset_26(Vector2_t2243707579  value)
	{
		___offset_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
