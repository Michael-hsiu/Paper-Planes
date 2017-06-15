#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t2243707580  ___offset_2;

public:
	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___offset_2)); }
	inline Vector3_t2243707580  get_offset_2() const { return ___offset_2; }
	inline Vector3_t2243707580 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Vector3_t2243707580  value)
	{
		___offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
