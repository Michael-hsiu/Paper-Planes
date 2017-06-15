#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Drawing
struct  Drawing_t2795064638  : public Il2CppObject
{
public:

public:
};

struct Drawing_t2795064638_StaticFields
{
public:
	// UnityEngine.Texture2D Drawing::aaLineTex
	Texture2D_t3542995729 * ___aaLineTex_0;
	// UnityEngine.Texture2D Drawing::lineTex
	Texture2D_t3542995729 * ___lineTex_1;
	// UnityEngine.Material Drawing::blitMaterial
	Material_t193706927 * ___blitMaterial_2;
	// UnityEngine.Material Drawing::blendMaterial
	Material_t193706927 * ___blendMaterial_3;
	// UnityEngine.Rect Drawing::lineRect
	Rect_t3681755626  ___lineRect_4;

public:
	inline static int32_t get_offset_of_aaLineTex_0() { return static_cast<int32_t>(offsetof(Drawing_t2795064638_StaticFields, ___aaLineTex_0)); }
	inline Texture2D_t3542995729 * get_aaLineTex_0() const { return ___aaLineTex_0; }
	inline Texture2D_t3542995729 ** get_address_of_aaLineTex_0() { return &___aaLineTex_0; }
	inline void set_aaLineTex_0(Texture2D_t3542995729 * value)
	{
		___aaLineTex_0 = value;
		Il2CppCodeGenWriteBarrier(&___aaLineTex_0, value);
	}

	inline static int32_t get_offset_of_lineTex_1() { return static_cast<int32_t>(offsetof(Drawing_t2795064638_StaticFields, ___lineTex_1)); }
	inline Texture2D_t3542995729 * get_lineTex_1() const { return ___lineTex_1; }
	inline Texture2D_t3542995729 ** get_address_of_lineTex_1() { return &___lineTex_1; }
	inline void set_lineTex_1(Texture2D_t3542995729 * value)
	{
		___lineTex_1 = value;
		Il2CppCodeGenWriteBarrier(&___lineTex_1, value);
	}

	inline static int32_t get_offset_of_blitMaterial_2() { return static_cast<int32_t>(offsetof(Drawing_t2795064638_StaticFields, ___blitMaterial_2)); }
	inline Material_t193706927 * get_blitMaterial_2() const { return ___blitMaterial_2; }
	inline Material_t193706927 ** get_address_of_blitMaterial_2() { return &___blitMaterial_2; }
	inline void set_blitMaterial_2(Material_t193706927 * value)
	{
		___blitMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___blitMaterial_2, value);
	}

	inline static int32_t get_offset_of_blendMaterial_3() { return static_cast<int32_t>(offsetof(Drawing_t2795064638_StaticFields, ___blendMaterial_3)); }
	inline Material_t193706927 * get_blendMaterial_3() const { return ___blendMaterial_3; }
	inline Material_t193706927 ** get_address_of_blendMaterial_3() { return &___blendMaterial_3; }
	inline void set_blendMaterial_3(Material_t193706927 * value)
	{
		___blendMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___blendMaterial_3, value);
	}

	inline static int32_t get_offset_of_lineRect_4() { return static_cast<int32_t>(offsetof(Drawing_t2795064638_StaticFields, ___lineRect_4)); }
	inline Rect_t3681755626  get_lineRect_4() const { return ___lineRect_4; }
	inline Rect_t3681755626 * get_address_of_lineRect_4() { return &___lineRect_4; }
	inline void set_lineRect_4(Rect_t3681755626  value)
	{
		___lineRect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
