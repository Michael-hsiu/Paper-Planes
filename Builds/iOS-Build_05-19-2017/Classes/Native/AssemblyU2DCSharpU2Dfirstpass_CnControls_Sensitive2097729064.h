#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;

#include "AssemblyU2DCSharpU2Dfirstpass_CnControls_SimpleJoy3517917222.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CnControls.SensitiveJoystick
struct  SensitiveJoystick_t2097729064  : public SimpleJoystick_t3517917222
{
public:
	// UnityEngine.AnimationCurve CnControls.SensitiveJoystick::SensitivityCurve
	AnimationCurve_t3306541151 * ___SensitivityCurve_21;

public:
	inline static int32_t get_offset_of_SensitivityCurve_21() { return static_cast<int32_t>(offsetof(SensitiveJoystick_t2097729064, ___SensitivityCurve_21)); }
	inline AnimationCurve_t3306541151 * get_SensitivityCurve_21() const { return ___SensitivityCurve_21; }
	inline AnimationCurve_t3306541151 ** get_address_of_SensitivityCurve_21() { return &___SensitivityCurve_21; }
	inline void set_SensitivityCurve_21(AnimationCurve_t3306541151 * value)
	{
		___SensitivityCurve_21 = value;
		Il2CppCodeGenWriteBarrier(&___SensitivityCurve_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
