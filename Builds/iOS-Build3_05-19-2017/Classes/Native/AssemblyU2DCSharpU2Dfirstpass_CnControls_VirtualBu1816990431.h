#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.VirtualButton
struct  VirtualButton_t1816990431  : public Il2CppObject
{
public:
	// System.String CnControls.VirtualButton::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean CnControls.VirtualButton::<IsPressed>k__BackingField
	bool ___U3CIsPressedU3Ek__BackingField_1;
	// System.Int32 CnControls.VirtualButton::_lastPressedFrame
	int32_t ____lastPressedFrame_2;
	// System.Int32 CnControls.VirtualButton::_lastReleasedFrame
	int32_t ____lastReleasedFrame_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualButton_t1816990431, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CIsPressedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VirtualButton_t1816990431, ___U3CIsPressedU3Ek__BackingField_1)); }
	inline bool get_U3CIsPressedU3Ek__BackingField_1() const { return ___U3CIsPressedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsPressedU3Ek__BackingField_1() { return &___U3CIsPressedU3Ek__BackingField_1; }
	inline void set_U3CIsPressedU3Ek__BackingField_1(bool value)
	{
		___U3CIsPressedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of__lastPressedFrame_2() { return static_cast<int32_t>(offsetof(VirtualButton_t1816990431, ____lastPressedFrame_2)); }
	inline int32_t get__lastPressedFrame_2() const { return ____lastPressedFrame_2; }
	inline int32_t* get_address_of__lastPressedFrame_2() { return &____lastPressedFrame_2; }
	inline void set__lastPressedFrame_2(int32_t value)
	{
		____lastPressedFrame_2 = value;
	}

	inline static int32_t get_offset_of__lastReleasedFrame_3() { return static_cast<int32_t>(offsetof(VirtualButton_t1816990431, ____lastReleasedFrame_3)); }
	inline int32_t get__lastReleasedFrame_3() const { return ____lastReleasedFrame_3; }
	inline int32_t* get_address_of__lastReleasedFrame_3() { return &____lastReleasedFrame_3; }
	inline void set__lastReleasedFrame_3(int32_t value)
	{
		____lastReleasedFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
