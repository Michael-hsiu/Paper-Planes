#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// System.String
struct String_t;
// CnControls.VirtualAxis
struct VirtualAxis_t639041308;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_ControlMo2481721487.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.Touchpad
struct  Touchpad_t4018445730  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera CnControls.Touchpad::<CurrentEventCamera>k__BackingField
	Camera_t189460977 * ___U3CCurrentEventCameraU3Ek__BackingField_2;
	// System.String CnControls.Touchpad::HorizontalAxisName
	String_t* ___HorizontalAxisName_3;
	// System.String CnControls.Touchpad::VerticalAxisName
	String_t* ___VerticalAxisName_4;
	// System.Boolean CnControls.Touchpad::PreserveInertia
	bool ___PreserveInertia_5;
	// System.Single CnControls.Touchpad::Friction
	float ___Friction_6;
	// CnControls.VirtualAxis CnControls.Touchpad::_horizintalAxis
	VirtualAxis_t639041308 * ____horizintalAxis_7;
	// CnControls.VirtualAxis CnControls.Touchpad::_verticalAxis
	VirtualAxis_t639041308 * ____verticalAxis_8;
	// System.Int32 CnControls.Touchpad::_lastDragFrameNumber
	int32_t ____lastDragFrameNumber_9;
	// System.Boolean CnControls.Touchpad::_isCurrentlyTweaking
	bool ____isCurrentlyTweaking_10;
	// CnControls.ControlMovementDirection CnControls.Touchpad::ControlMoveAxis
	int32_t ___ControlMoveAxis_11;

public:
	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ___U3CCurrentEventCameraU3Ek__BackingField_2)); }
	inline Camera_t189460977 * get_U3CCurrentEventCameraU3Ek__BackingField_2() const { return ___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline Camera_t189460977 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return &___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_2(Camera_t189460977 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentEventCameraU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_HorizontalAxisName_3() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ___HorizontalAxisName_3)); }
	inline String_t* get_HorizontalAxisName_3() const { return ___HorizontalAxisName_3; }
	inline String_t** get_address_of_HorizontalAxisName_3() { return &___HorizontalAxisName_3; }
	inline void set_HorizontalAxisName_3(String_t* value)
	{
		___HorizontalAxisName_3 = value;
		Il2CppCodeGenWriteBarrier(&___HorizontalAxisName_3, value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_4() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ___VerticalAxisName_4)); }
	inline String_t* get_VerticalAxisName_4() const { return ___VerticalAxisName_4; }
	inline String_t** get_address_of_VerticalAxisName_4() { return &___VerticalAxisName_4; }
	inline void set_VerticalAxisName_4(String_t* value)
	{
		___VerticalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalAxisName_4, value);
	}

	inline static int32_t get_offset_of_PreserveInertia_5() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ___PreserveInertia_5)); }
	inline bool get_PreserveInertia_5() const { return ___PreserveInertia_5; }
	inline bool* get_address_of_PreserveInertia_5() { return &___PreserveInertia_5; }
	inline void set_PreserveInertia_5(bool value)
	{
		___PreserveInertia_5 = value;
	}

	inline static int32_t get_offset_of_Friction_6() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ___Friction_6)); }
	inline float get_Friction_6() const { return ___Friction_6; }
	inline float* get_address_of_Friction_6() { return &___Friction_6; }
	inline void set_Friction_6(float value)
	{
		___Friction_6 = value;
	}

	inline static int32_t get_offset_of__horizintalAxis_7() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ____horizintalAxis_7)); }
	inline VirtualAxis_t639041308 * get__horizintalAxis_7() const { return ____horizintalAxis_7; }
	inline VirtualAxis_t639041308 ** get_address_of__horizintalAxis_7() { return &____horizintalAxis_7; }
	inline void set__horizintalAxis_7(VirtualAxis_t639041308 * value)
	{
		____horizintalAxis_7 = value;
		Il2CppCodeGenWriteBarrier(&____horizintalAxis_7, value);
	}

	inline static int32_t get_offset_of__verticalAxis_8() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ____verticalAxis_8)); }
	inline VirtualAxis_t639041308 * get__verticalAxis_8() const { return ____verticalAxis_8; }
	inline VirtualAxis_t639041308 ** get_address_of__verticalAxis_8() { return &____verticalAxis_8; }
	inline void set__verticalAxis_8(VirtualAxis_t639041308 * value)
	{
		____verticalAxis_8 = value;
		Il2CppCodeGenWriteBarrier(&____verticalAxis_8, value);
	}

	inline static int32_t get_offset_of__lastDragFrameNumber_9() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ____lastDragFrameNumber_9)); }
	inline int32_t get__lastDragFrameNumber_9() const { return ____lastDragFrameNumber_9; }
	inline int32_t* get_address_of__lastDragFrameNumber_9() { return &____lastDragFrameNumber_9; }
	inline void set__lastDragFrameNumber_9(int32_t value)
	{
		____lastDragFrameNumber_9 = value;
	}

	inline static int32_t get_offset_of__isCurrentlyTweaking_10() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ____isCurrentlyTweaking_10)); }
	inline bool get__isCurrentlyTweaking_10() const { return ____isCurrentlyTweaking_10; }
	inline bool* get_address_of__isCurrentlyTweaking_10() { return &____isCurrentlyTweaking_10; }
	inline void set__isCurrentlyTweaking_10(bool value)
	{
		____isCurrentlyTweaking_10 = value;
	}

	inline static int32_t get_offset_of_ControlMoveAxis_11() { return static_cast<int32_t>(offsetof(Touchpad_t4018445730, ___ControlMoveAxis_11)); }
	inline int32_t get_ControlMoveAxis_11() const { return ___ControlMoveAxis_11; }
	inline int32_t* get_address_of_ControlMoveAxis_11() { return &___ControlMoveAxis_11; }
	inline void set_ControlMoveAxis_11(int32_t value)
	{
		___ControlMoveAxis_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
