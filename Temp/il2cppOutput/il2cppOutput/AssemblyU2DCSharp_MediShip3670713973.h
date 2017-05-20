#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider[]
struct ColliderU5BU5D_t462843629;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject>
struct Func_2_t3035764824;

#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediShip
struct  MediShip_t3670713973  : public Ship_t1116303770
{
public:
	// System.Single MediShip::buffRange
	float ___buffRange_15;
	// System.Single MediShip::healRange
	float ___healRange_16;
	// System.Single MediShip::followDistance
	float ___followDistance_17;
	// UnityEngine.Collider[] MediShip::hitColliders
	ColliderU5BU5D_t462843629* ___hitColliders_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MediShip::currTargets
	List_1_t1125654279 * ___currTargets_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MediShip::prevTargets
	List_1_t1125654279 * ___prevTargets_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MediShip::toDebuff
	List_1_t1125654279 * ___toDebuff_21;
	// UnityEngine.Vector2 MediShip::offset
	Vector2_t2243707579  ___offset_22;

public:
	inline static int32_t get_offset_of_buffRange_15() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___buffRange_15)); }
	inline float get_buffRange_15() const { return ___buffRange_15; }
	inline float* get_address_of_buffRange_15() { return &___buffRange_15; }
	inline void set_buffRange_15(float value)
	{
		___buffRange_15 = value;
	}

	inline static int32_t get_offset_of_healRange_16() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___healRange_16)); }
	inline float get_healRange_16() const { return ___healRange_16; }
	inline float* get_address_of_healRange_16() { return &___healRange_16; }
	inline void set_healRange_16(float value)
	{
		___healRange_16 = value;
	}

	inline static int32_t get_offset_of_followDistance_17() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___followDistance_17)); }
	inline float get_followDistance_17() const { return ___followDistance_17; }
	inline float* get_address_of_followDistance_17() { return &___followDistance_17; }
	inline void set_followDistance_17(float value)
	{
		___followDistance_17 = value;
	}

	inline static int32_t get_offset_of_hitColliders_18() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___hitColliders_18)); }
	inline ColliderU5BU5D_t462843629* get_hitColliders_18() const { return ___hitColliders_18; }
	inline ColliderU5BU5D_t462843629** get_address_of_hitColliders_18() { return &___hitColliders_18; }
	inline void set_hitColliders_18(ColliderU5BU5D_t462843629* value)
	{
		___hitColliders_18 = value;
		Il2CppCodeGenWriteBarrier(&___hitColliders_18, value);
	}

	inline static int32_t get_offset_of_currTargets_19() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___currTargets_19)); }
	inline List_1_t1125654279 * get_currTargets_19() const { return ___currTargets_19; }
	inline List_1_t1125654279 ** get_address_of_currTargets_19() { return &___currTargets_19; }
	inline void set_currTargets_19(List_1_t1125654279 * value)
	{
		___currTargets_19 = value;
		Il2CppCodeGenWriteBarrier(&___currTargets_19, value);
	}

	inline static int32_t get_offset_of_prevTargets_20() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___prevTargets_20)); }
	inline List_1_t1125654279 * get_prevTargets_20() const { return ___prevTargets_20; }
	inline List_1_t1125654279 ** get_address_of_prevTargets_20() { return &___prevTargets_20; }
	inline void set_prevTargets_20(List_1_t1125654279 * value)
	{
		___prevTargets_20 = value;
		Il2CppCodeGenWriteBarrier(&___prevTargets_20, value);
	}

	inline static int32_t get_offset_of_toDebuff_21() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___toDebuff_21)); }
	inline List_1_t1125654279 * get_toDebuff_21() const { return ___toDebuff_21; }
	inline List_1_t1125654279 ** get_address_of_toDebuff_21() { return &___toDebuff_21; }
	inline void set_toDebuff_21(List_1_t1125654279 * value)
	{
		___toDebuff_21 = value;
		Il2CppCodeGenWriteBarrier(&___toDebuff_21, value);
	}

	inline static int32_t get_offset_of_offset_22() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___offset_22)); }
	inline Vector2_t2243707579  get_offset_22() const { return ___offset_22; }
	inline Vector2_t2243707579 * get_address_of_offset_22() { return &___offset_22; }
	inline void set_offset_22(Vector2_t2243707579  value)
	{
		___offset_22 = value;
	}
};

struct MediShip_t3670713973_StaticFields
{
public:
	// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject> MediShip::<>f__am$cache0
	Func_2_t3035764824 * ___U3CU3Ef__amU24cache0_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_23() { return static_cast<int32_t>(offsetof(MediShip_t3670713973_StaticFields, ___U3CU3Ef__amU24cache0_23)); }
	inline Func_2_t3035764824 * get_U3CU3Ef__amU24cache0_23() const { return ___U3CU3Ef__amU24cache0_23; }
	inline Func_2_t3035764824 ** get_address_of_U3CU3Ef__amU24cache0_23() { return &___U3CU3Ef__amU24cache0_23; }
	inline void set_U3CU3Ef__amU24cache0_23(Func_2_t3035764824 * value)
	{
		___U3CU3Ef__amU24cache0_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
