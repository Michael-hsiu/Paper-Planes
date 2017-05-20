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
// CnControls.VirtualButton
struct VirtualButton_t1816990431;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SimpleButton
struct  SimpleButton_t3445824566  : public MonoBehaviour_t1158329972
{
public:
	// System.String CnControls.SimpleButton::ButtonName
	String_t* ___ButtonName_2;
	// CnControls.VirtualButton CnControls.SimpleButton::_virtualButton
	VirtualButton_t1816990431 * ____virtualButton_3;

public:
	inline static int32_t get_offset_of_ButtonName_2() { return static_cast<int32_t>(offsetof(SimpleButton_t3445824566, ___ButtonName_2)); }
	inline String_t* get_ButtonName_2() const { return ___ButtonName_2; }
	inline String_t** get_address_of_ButtonName_2() { return &___ButtonName_2; }
	inline void set_ButtonName_2(String_t* value)
	{
		___ButtonName_2 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonName_2, value);
	}

	inline static int32_t get_offset_of__virtualButton_3() { return static_cast<int32_t>(offsetof(SimpleButton_t3445824566, ____virtualButton_3)); }
	inline VirtualButton_t1816990431 * get__virtualButton_3() const { return ____virtualButton_3; }
	inline VirtualButton_t1816990431 ** get_address_of__virtualButton_3() { return &____virtualButton_3; }
	inline void set__virtualButton_3(VirtualButton_t1816990431 * value)
	{
		____virtualButton_3 = value;
		Il2CppCodeGenWriteBarrier(&____virtualButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
