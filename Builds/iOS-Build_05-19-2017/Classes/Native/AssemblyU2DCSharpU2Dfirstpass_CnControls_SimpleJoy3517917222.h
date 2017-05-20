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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// CnControls.VirtualAxis
struct VirtualAxis_t639041308;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_ControlMo2481721487.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SimpleJoystick
struct  SimpleJoystick_t3517917222  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera CnControls.SimpleJoystick::<CurrentEventCamera>k__BackingField
	Camera_t189460977 * ___U3CCurrentEventCameraU3Ek__BackingField_2;
	// System.Single CnControls.SimpleJoystick::MovementRange
	float ___MovementRange_3;
	// System.String CnControls.SimpleJoystick::HorizontalAxisName
	String_t* ___HorizontalAxisName_4;
	// System.String CnControls.SimpleJoystick::VerticalAxisName
	String_t* ___VerticalAxisName_5;
	// System.Boolean CnControls.SimpleJoystick::HideOnRelease
	bool ___HideOnRelease_6;
	// System.Boolean CnControls.SimpleJoystick::MoveBase
	bool ___MoveBase_7;
	// System.Boolean CnControls.SimpleJoystick::SnapsToFinger
	bool ___SnapsToFinger_8;
	// CnControls.ControlMovementDirection CnControls.SimpleJoystick::JoystickMoveAxis
	int32_t ___JoystickMoveAxis_9;
	// UnityEngine.UI.Image CnControls.SimpleJoystick::JoystickBase
	Image_t2042527209 * ___JoystickBase_10;
	// UnityEngine.UI.Image CnControls.SimpleJoystick::Stick
	Image_t2042527209 * ___Stick_11;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::TouchZone
	RectTransform_t3349966182 * ___TouchZone_12;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_initialStickPosition
	Vector2_t2243707579  ____initialStickPosition_13;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_intermediateStickPosition
	Vector2_t2243707579  ____intermediateStickPosition_14;
	// UnityEngine.Vector2 CnControls.SimpleJoystick::_initialBasePosition
	Vector2_t2243707579  ____initialBasePosition_15;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::_baseTransform
	RectTransform_t3349966182 * ____baseTransform_16;
	// UnityEngine.RectTransform CnControls.SimpleJoystick::_stickTransform
	RectTransform_t3349966182 * ____stickTransform_17;
	// System.Single CnControls.SimpleJoystick::_oneOverMovementRange
	float ____oneOverMovementRange_18;
	// CnControls.VirtualAxis CnControls.SimpleJoystick::HorizintalAxis
	VirtualAxis_t639041308 * ___HorizintalAxis_19;
	// CnControls.VirtualAxis CnControls.SimpleJoystick::VerticalAxis
	VirtualAxis_t639041308 * ___VerticalAxis_20;

public:
	inline static int32_t get_offset_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___U3CCurrentEventCameraU3Ek__BackingField_2)); }
	inline Camera_t189460977 * get_U3CCurrentEventCameraU3Ek__BackingField_2() const { return ___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline Camera_t189460977 ** get_address_of_U3CCurrentEventCameraU3Ek__BackingField_2() { return &___U3CCurrentEventCameraU3Ek__BackingField_2; }
	inline void set_U3CCurrentEventCameraU3Ek__BackingField_2(Camera_t189460977 * value)
	{
		___U3CCurrentEventCameraU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentEventCameraU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_MovementRange_3() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___MovementRange_3)); }
	inline float get_MovementRange_3() const { return ___MovementRange_3; }
	inline float* get_address_of_MovementRange_3() { return &___MovementRange_3; }
	inline void set_MovementRange_3(float value)
	{
		___MovementRange_3 = value;
	}

	inline static int32_t get_offset_of_HorizontalAxisName_4() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___HorizontalAxisName_4)); }
	inline String_t* get_HorizontalAxisName_4() const { return ___HorizontalAxisName_4; }
	inline String_t** get_address_of_HorizontalAxisName_4() { return &___HorizontalAxisName_4; }
	inline void set_HorizontalAxisName_4(String_t* value)
	{
		___HorizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier(&___HorizontalAxisName_4, value);
	}

	inline static int32_t get_offset_of_VerticalAxisName_5() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___VerticalAxisName_5)); }
	inline String_t* get_VerticalAxisName_5() const { return ___VerticalAxisName_5; }
	inline String_t** get_address_of_VerticalAxisName_5() { return &___VerticalAxisName_5; }
	inline void set_VerticalAxisName_5(String_t* value)
	{
		___VerticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalAxisName_5, value);
	}

	inline static int32_t get_offset_of_HideOnRelease_6() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___HideOnRelease_6)); }
	inline bool get_HideOnRelease_6() const { return ___HideOnRelease_6; }
	inline bool* get_address_of_HideOnRelease_6() { return &___HideOnRelease_6; }
	inline void set_HideOnRelease_6(bool value)
	{
		___HideOnRelease_6 = value;
	}

	inline static int32_t get_offset_of_MoveBase_7() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___MoveBase_7)); }
	inline bool get_MoveBase_7() const { return ___MoveBase_7; }
	inline bool* get_address_of_MoveBase_7() { return &___MoveBase_7; }
	inline void set_MoveBase_7(bool value)
	{
		___MoveBase_7 = value;
	}

	inline static int32_t get_offset_of_SnapsToFinger_8() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___SnapsToFinger_8)); }
	inline bool get_SnapsToFinger_8() const { return ___SnapsToFinger_8; }
	inline bool* get_address_of_SnapsToFinger_8() { return &___SnapsToFinger_8; }
	inline void set_SnapsToFinger_8(bool value)
	{
		___SnapsToFinger_8 = value;
	}

	inline static int32_t get_offset_of_JoystickMoveAxis_9() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___JoystickMoveAxis_9)); }
	inline int32_t get_JoystickMoveAxis_9() const { return ___JoystickMoveAxis_9; }
	inline int32_t* get_address_of_JoystickMoveAxis_9() { return &___JoystickMoveAxis_9; }
	inline void set_JoystickMoveAxis_9(int32_t value)
	{
		___JoystickMoveAxis_9 = value;
	}

	inline static int32_t get_offset_of_JoystickBase_10() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___JoystickBase_10)); }
	inline Image_t2042527209 * get_JoystickBase_10() const { return ___JoystickBase_10; }
	inline Image_t2042527209 ** get_address_of_JoystickBase_10() { return &___JoystickBase_10; }
	inline void set_JoystickBase_10(Image_t2042527209 * value)
	{
		___JoystickBase_10 = value;
		Il2CppCodeGenWriteBarrier(&___JoystickBase_10, value);
	}

	inline static int32_t get_offset_of_Stick_11() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___Stick_11)); }
	inline Image_t2042527209 * get_Stick_11() const { return ___Stick_11; }
	inline Image_t2042527209 ** get_address_of_Stick_11() { return &___Stick_11; }
	inline void set_Stick_11(Image_t2042527209 * value)
	{
		___Stick_11 = value;
		Il2CppCodeGenWriteBarrier(&___Stick_11, value);
	}

	inline static int32_t get_offset_of_TouchZone_12() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___TouchZone_12)); }
	inline RectTransform_t3349966182 * get_TouchZone_12() const { return ___TouchZone_12; }
	inline RectTransform_t3349966182 ** get_address_of_TouchZone_12() { return &___TouchZone_12; }
	inline void set_TouchZone_12(RectTransform_t3349966182 * value)
	{
		___TouchZone_12 = value;
		Il2CppCodeGenWriteBarrier(&___TouchZone_12, value);
	}

	inline static int32_t get_offset_of__initialStickPosition_13() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ____initialStickPosition_13)); }
	inline Vector2_t2243707579  get__initialStickPosition_13() const { return ____initialStickPosition_13; }
	inline Vector2_t2243707579 * get_address_of__initialStickPosition_13() { return &____initialStickPosition_13; }
	inline void set__initialStickPosition_13(Vector2_t2243707579  value)
	{
		____initialStickPosition_13 = value;
	}

	inline static int32_t get_offset_of__intermediateStickPosition_14() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ____intermediateStickPosition_14)); }
	inline Vector2_t2243707579  get__intermediateStickPosition_14() const { return ____intermediateStickPosition_14; }
	inline Vector2_t2243707579 * get_address_of__intermediateStickPosition_14() { return &____intermediateStickPosition_14; }
	inline void set__intermediateStickPosition_14(Vector2_t2243707579  value)
	{
		____intermediateStickPosition_14 = value;
	}

	inline static int32_t get_offset_of__initialBasePosition_15() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ____initialBasePosition_15)); }
	inline Vector2_t2243707579  get__initialBasePosition_15() const { return ____initialBasePosition_15; }
	inline Vector2_t2243707579 * get_address_of__initialBasePosition_15() { return &____initialBasePosition_15; }
	inline void set__initialBasePosition_15(Vector2_t2243707579  value)
	{
		____initialBasePosition_15 = value;
	}

	inline static int32_t get_offset_of__baseTransform_16() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ____baseTransform_16)); }
	inline RectTransform_t3349966182 * get__baseTransform_16() const { return ____baseTransform_16; }
	inline RectTransform_t3349966182 ** get_address_of__baseTransform_16() { return &____baseTransform_16; }
	inline void set__baseTransform_16(RectTransform_t3349966182 * value)
	{
		____baseTransform_16 = value;
		Il2CppCodeGenWriteBarrier(&____baseTransform_16, value);
	}

	inline static int32_t get_offset_of__stickTransform_17() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ____stickTransform_17)); }
	inline RectTransform_t3349966182 * get__stickTransform_17() const { return ____stickTransform_17; }
	inline RectTransform_t3349966182 ** get_address_of__stickTransform_17() { return &____stickTransform_17; }
	inline void set__stickTransform_17(RectTransform_t3349966182 * value)
	{
		____stickTransform_17 = value;
		Il2CppCodeGenWriteBarrier(&____stickTransform_17, value);
	}

	inline static int32_t get_offset_of__oneOverMovementRange_18() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ____oneOverMovementRange_18)); }
	inline float get__oneOverMovementRange_18() const { return ____oneOverMovementRange_18; }
	inline float* get_address_of__oneOverMovementRange_18() { return &____oneOverMovementRange_18; }
	inline void set__oneOverMovementRange_18(float value)
	{
		____oneOverMovementRange_18 = value;
	}

	inline static int32_t get_offset_of_HorizintalAxis_19() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___HorizintalAxis_19)); }
	inline VirtualAxis_t639041308 * get_HorizintalAxis_19() const { return ___HorizintalAxis_19; }
	inline VirtualAxis_t639041308 ** get_address_of_HorizintalAxis_19() { return &___HorizintalAxis_19; }
	inline void set_HorizintalAxis_19(VirtualAxis_t639041308 * value)
	{
		___HorizintalAxis_19 = value;
		Il2CppCodeGenWriteBarrier(&___HorizintalAxis_19, value);
	}

	inline static int32_t get_offset_of_VerticalAxis_20() { return static_cast<int32_t>(offsetof(SimpleJoystick_t3517917222, ___VerticalAxis_20)); }
	inline VirtualAxis_t639041308 * get_VerticalAxis_20() const { return ___VerticalAxis_20; }
	inline VirtualAxis_t639041308 ** get_address_of_VerticalAxis_20() { return &___VerticalAxis_20; }
	inline void set_VerticalAxis_20(VirtualAxis_t639041308 * value)
	{
		___VerticalAxis_20 = value;
		Il2CppCodeGenWriteBarrier(&___VerticalAxis_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
