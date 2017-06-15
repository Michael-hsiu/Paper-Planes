#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// MissileBoss
struct MissileBoss_t3625044575;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissileBossMS
struct  MissileBossMS_t1520441901  : public MonoBehaviour_t1158329972
{
public:
	// Direction MissileBossMS::direction
	int32_t ___direction_2;
	// System.Single MissileBossMS::DIST_TO_CIRCLE
	float ___DIST_TO_CIRCLE_3;
	// System.Single MissileBossMS::CIRCLE_RADIUS
	float ___CIRCLE_RADIUS_4;
	// System.Single MissileBossMS::ANGLE_CHANGE
	float ___ANGLE_CHANGE_5;
	// System.Single MissileBossMS::displInterval
	float ___displInterval_6;
	// System.Single MissileBossMS::angleChange
	float ___angleChange_7;
	// System.Boolean MissileBossMS::rotSetOnce
	bool ___rotSetOnce_8;
	// System.Boolean MissileBossMS::startedWander
	bool ___startedWander_9;
	// System.Boolean MissileBossMS::shouldWander
	bool ___shouldWander_10;
	// System.Boolean MissileBossMS::behaviorChangedOnce
	bool ___behaviorChangedOnce_11;
	// System.Single MissileBossMS::wanderAngle
	float ___wanderAngle_12;
	// UnityEngine.Vector3 MissileBossMS::vel
	Vector3_t2243707580  ___vel_13;
	// UnityEngine.Vector3 MissileBossMS::circleCenter
	Vector3_t2243707580  ___circleCenter_14;
	// UnityEngine.Vector3 MissileBossMS::displacement
	Vector3_t2243707580  ___displacement_15;
	// UnityEngine.Vector3 MissileBossMS::oldVel
	Vector3_t2243707580  ___oldVel_16;
	// UnityEngine.Quaternion MissileBossMS::desiredRotation
	Quaternion_t4030073918  ___desiredRotation_17;
	// System.Boolean MissileBossMS::shouldRotate
	bool ___shouldRotate_18;
	// System.Single MissileBossMS::maxHeadingChange
	float ___maxHeadingChange_19;
	// System.Boolean MissileBossMS::reversingDirection
	bool ___reversingDirection_20;
	// MissileBoss MissileBossMS::missileBoss
	MissileBoss_t3625044575 * ___missileBoss_21;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_DIST_TO_CIRCLE_3() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___DIST_TO_CIRCLE_3)); }
	inline float get_DIST_TO_CIRCLE_3() const { return ___DIST_TO_CIRCLE_3; }
	inline float* get_address_of_DIST_TO_CIRCLE_3() { return &___DIST_TO_CIRCLE_3; }
	inline void set_DIST_TO_CIRCLE_3(float value)
	{
		___DIST_TO_CIRCLE_3 = value;
	}

	inline static int32_t get_offset_of_CIRCLE_RADIUS_4() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___CIRCLE_RADIUS_4)); }
	inline float get_CIRCLE_RADIUS_4() const { return ___CIRCLE_RADIUS_4; }
	inline float* get_address_of_CIRCLE_RADIUS_4() { return &___CIRCLE_RADIUS_4; }
	inline void set_CIRCLE_RADIUS_4(float value)
	{
		___CIRCLE_RADIUS_4 = value;
	}

	inline static int32_t get_offset_of_ANGLE_CHANGE_5() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___ANGLE_CHANGE_5)); }
	inline float get_ANGLE_CHANGE_5() const { return ___ANGLE_CHANGE_5; }
	inline float* get_address_of_ANGLE_CHANGE_5() { return &___ANGLE_CHANGE_5; }
	inline void set_ANGLE_CHANGE_5(float value)
	{
		___ANGLE_CHANGE_5 = value;
	}

	inline static int32_t get_offset_of_displInterval_6() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___displInterval_6)); }
	inline float get_displInterval_6() const { return ___displInterval_6; }
	inline float* get_address_of_displInterval_6() { return &___displInterval_6; }
	inline void set_displInterval_6(float value)
	{
		___displInterval_6 = value;
	}

	inline static int32_t get_offset_of_angleChange_7() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___angleChange_7)); }
	inline float get_angleChange_7() const { return ___angleChange_7; }
	inline float* get_address_of_angleChange_7() { return &___angleChange_7; }
	inline void set_angleChange_7(float value)
	{
		___angleChange_7 = value;
	}

	inline static int32_t get_offset_of_rotSetOnce_8() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___rotSetOnce_8)); }
	inline bool get_rotSetOnce_8() const { return ___rotSetOnce_8; }
	inline bool* get_address_of_rotSetOnce_8() { return &___rotSetOnce_8; }
	inline void set_rotSetOnce_8(bool value)
	{
		___rotSetOnce_8 = value;
	}

	inline static int32_t get_offset_of_startedWander_9() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___startedWander_9)); }
	inline bool get_startedWander_9() const { return ___startedWander_9; }
	inline bool* get_address_of_startedWander_9() { return &___startedWander_9; }
	inline void set_startedWander_9(bool value)
	{
		___startedWander_9 = value;
	}

	inline static int32_t get_offset_of_shouldWander_10() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___shouldWander_10)); }
	inline bool get_shouldWander_10() const { return ___shouldWander_10; }
	inline bool* get_address_of_shouldWander_10() { return &___shouldWander_10; }
	inline void set_shouldWander_10(bool value)
	{
		___shouldWander_10 = value;
	}

	inline static int32_t get_offset_of_behaviorChangedOnce_11() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___behaviorChangedOnce_11)); }
	inline bool get_behaviorChangedOnce_11() const { return ___behaviorChangedOnce_11; }
	inline bool* get_address_of_behaviorChangedOnce_11() { return &___behaviorChangedOnce_11; }
	inline void set_behaviorChangedOnce_11(bool value)
	{
		___behaviorChangedOnce_11 = value;
	}

	inline static int32_t get_offset_of_wanderAngle_12() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___wanderAngle_12)); }
	inline float get_wanderAngle_12() const { return ___wanderAngle_12; }
	inline float* get_address_of_wanderAngle_12() { return &___wanderAngle_12; }
	inline void set_wanderAngle_12(float value)
	{
		___wanderAngle_12 = value;
	}

	inline static int32_t get_offset_of_vel_13() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___vel_13)); }
	inline Vector3_t2243707580  get_vel_13() const { return ___vel_13; }
	inline Vector3_t2243707580 * get_address_of_vel_13() { return &___vel_13; }
	inline void set_vel_13(Vector3_t2243707580  value)
	{
		___vel_13 = value;
	}

	inline static int32_t get_offset_of_circleCenter_14() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___circleCenter_14)); }
	inline Vector3_t2243707580  get_circleCenter_14() const { return ___circleCenter_14; }
	inline Vector3_t2243707580 * get_address_of_circleCenter_14() { return &___circleCenter_14; }
	inline void set_circleCenter_14(Vector3_t2243707580  value)
	{
		___circleCenter_14 = value;
	}

	inline static int32_t get_offset_of_displacement_15() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___displacement_15)); }
	inline Vector3_t2243707580  get_displacement_15() const { return ___displacement_15; }
	inline Vector3_t2243707580 * get_address_of_displacement_15() { return &___displacement_15; }
	inline void set_displacement_15(Vector3_t2243707580  value)
	{
		___displacement_15 = value;
	}

	inline static int32_t get_offset_of_oldVel_16() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___oldVel_16)); }
	inline Vector3_t2243707580  get_oldVel_16() const { return ___oldVel_16; }
	inline Vector3_t2243707580 * get_address_of_oldVel_16() { return &___oldVel_16; }
	inline void set_oldVel_16(Vector3_t2243707580  value)
	{
		___oldVel_16 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_17() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___desiredRotation_17)); }
	inline Quaternion_t4030073918  get_desiredRotation_17() const { return ___desiredRotation_17; }
	inline Quaternion_t4030073918 * get_address_of_desiredRotation_17() { return &___desiredRotation_17; }
	inline void set_desiredRotation_17(Quaternion_t4030073918  value)
	{
		___desiredRotation_17 = value;
	}

	inline static int32_t get_offset_of_shouldRotate_18() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___shouldRotate_18)); }
	inline bool get_shouldRotate_18() const { return ___shouldRotate_18; }
	inline bool* get_address_of_shouldRotate_18() { return &___shouldRotate_18; }
	inline void set_shouldRotate_18(bool value)
	{
		___shouldRotate_18 = value;
	}

	inline static int32_t get_offset_of_maxHeadingChange_19() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___maxHeadingChange_19)); }
	inline float get_maxHeadingChange_19() const { return ___maxHeadingChange_19; }
	inline float* get_address_of_maxHeadingChange_19() { return &___maxHeadingChange_19; }
	inline void set_maxHeadingChange_19(float value)
	{
		___maxHeadingChange_19 = value;
	}

	inline static int32_t get_offset_of_reversingDirection_20() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___reversingDirection_20)); }
	inline bool get_reversingDirection_20() const { return ___reversingDirection_20; }
	inline bool* get_address_of_reversingDirection_20() { return &___reversingDirection_20; }
	inline void set_reversingDirection_20(bool value)
	{
		___reversingDirection_20 = value;
	}

	inline static int32_t get_offset_of_missileBoss_21() { return static_cast<int32_t>(offsetof(MissileBossMS_t1520441901, ___missileBoss_21)); }
	inline MissileBoss_t3625044575 * get_missileBoss_21() const { return ___missileBoss_21; }
	inline MissileBoss_t3625044575 ** get_address_of_missileBoss_21() { return &___missileBoss_21; }
	inline void set_missileBoss_21(MissileBoss_t3625044575 * value)
	{
		___missileBoss_21 = value;
		Il2CppCodeGenWriteBarrier(&___missileBoss_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
