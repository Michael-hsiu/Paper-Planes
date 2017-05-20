#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject>
struct Func_2_t3035764824;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PromotionArea
struct  PromotionArea_t1239961636  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PromotionArea::attrRadius
	float ___attrRadius_2;
	// System.Single PromotionArea::smooth
	float ___smooth_3;
	// System.Int32 PromotionArea::quota
	int32_t ___quota_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PromotionArea::minibosses
	List_1_t1125654279 * ___minibosses_5;
	// UnityEngine.UI.Text PromotionArea::quotaText
	Text_t356221433 * ___quotaText_6;

public:
	inline static int32_t get_offset_of_attrRadius_2() { return static_cast<int32_t>(offsetof(PromotionArea_t1239961636, ___attrRadius_2)); }
	inline float get_attrRadius_2() const { return ___attrRadius_2; }
	inline float* get_address_of_attrRadius_2() { return &___attrRadius_2; }
	inline void set_attrRadius_2(float value)
	{
		___attrRadius_2 = value;
	}

	inline static int32_t get_offset_of_smooth_3() { return static_cast<int32_t>(offsetof(PromotionArea_t1239961636, ___smooth_3)); }
	inline float get_smooth_3() const { return ___smooth_3; }
	inline float* get_address_of_smooth_3() { return &___smooth_3; }
	inline void set_smooth_3(float value)
	{
		___smooth_3 = value;
	}

	inline static int32_t get_offset_of_quota_4() { return static_cast<int32_t>(offsetof(PromotionArea_t1239961636, ___quota_4)); }
	inline int32_t get_quota_4() const { return ___quota_4; }
	inline int32_t* get_address_of_quota_4() { return &___quota_4; }
	inline void set_quota_4(int32_t value)
	{
		___quota_4 = value;
	}

	inline static int32_t get_offset_of_minibosses_5() { return static_cast<int32_t>(offsetof(PromotionArea_t1239961636, ___minibosses_5)); }
	inline List_1_t1125654279 * get_minibosses_5() const { return ___minibosses_5; }
	inline List_1_t1125654279 ** get_address_of_minibosses_5() { return &___minibosses_5; }
	inline void set_minibosses_5(List_1_t1125654279 * value)
	{
		___minibosses_5 = value;
		Il2CppCodeGenWriteBarrier(&___minibosses_5, value);
	}

	inline static int32_t get_offset_of_quotaText_6() { return static_cast<int32_t>(offsetof(PromotionArea_t1239961636, ___quotaText_6)); }
	inline Text_t356221433 * get_quotaText_6() const { return ___quotaText_6; }
	inline Text_t356221433 ** get_address_of_quotaText_6() { return &___quotaText_6; }
	inline void set_quotaText_6(Text_t356221433 * value)
	{
		___quotaText_6 = value;
		Il2CppCodeGenWriteBarrier(&___quotaText_6, value);
	}
};

struct PromotionArea_t1239961636_StaticFields
{
public:
	// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject> PromotionArea::<>f__am$cache0
	Func_2_t3035764824 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(PromotionArea_t1239961636_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_2_t3035764824 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_2_t3035764824 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_2_t3035764824 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
