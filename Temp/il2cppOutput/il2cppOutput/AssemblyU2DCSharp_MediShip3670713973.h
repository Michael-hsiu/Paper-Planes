#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Ship1116303770.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Collider[]
struct ColliderU5BU5D_t462843629;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject>
struct Func_2_t3035764824;




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
	float ___buffRange_20;
	// System.Single MediShip::healRange
	float ___healRange_21;
	// System.Single MediShip::followDistance
	float ___followDistance_22;
	// UnityEngine.Collider[] MediShip::hitColliders
	ColliderU5BU5D_t462843629* ___hitColliders_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MediShip::currTargets
	List_1_t1125654279 * ___currTargets_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MediShip::prevTargets
	List_1_t1125654279 * ___prevTargets_25;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MediShip::toDebuff
	List_1_t1125654279 * ___toDebuff_26;
	// UnityEngine.Vector2 MediShip::offset
	Vector2_t2243707579  ___offset_27;

public:
	inline static int32_t get_offset_of_buffRange_20() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___buffRange_20)); }
	inline float get_buffRange_20() const { return ___buffRange_20; }
	inline float* get_address_of_buffRange_20() { return &___buffRange_20; }
	inline void set_buffRange_20(float value)
	{
		___buffRange_20 = value;
	}

	inline static int32_t get_offset_of_healRange_21() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___healRange_21)); }
	inline float get_healRange_21() const { return ___healRange_21; }
	inline float* get_address_of_healRange_21() { return &___healRange_21; }
	inline void set_healRange_21(float value)
	{
		___healRange_21 = value;
	}

	inline static int32_t get_offset_of_followDistance_22() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___followDistance_22)); }
	inline float get_followDistance_22() const { return ___followDistance_22; }
	inline float* get_address_of_followDistance_22() { return &___followDistance_22; }
	inline void set_followDistance_22(float value)
	{
		___followDistance_22 = value;
	}

	inline static int32_t get_offset_of_hitColliders_23() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___hitColliders_23)); }
	inline ColliderU5BU5D_t462843629* get_hitColliders_23() const { return ___hitColliders_23; }
	inline ColliderU5BU5D_t462843629** get_address_of_hitColliders_23() { return &___hitColliders_23; }
	inline void set_hitColliders_23(ColliderU5BU5D_t462843629* value)
	{
		___hitColliders_23 = value;
		Il2CppCodeGenWriteBarrier(&___hitColliders_23, value);
	}

	inline static int32_t get_offset_of_currTargets_24() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___currTargets_24)); }
	inline List_1_t1125654279 * get_currTargets_24() const { return ___currTargets_24; }
	inline List_1_t1125654279 ** get_address_of_currTargets_24() { return &___currTargets_24; }
	inline void set_currTargets_24(List_1_t1125654279 * value)
	{
		___currTargets_24 = value;
		Il2CppCodeGenWriteBarrier(&___currTargets_24, value);
	}

	inline static int32_t get_offset_of_prevTargets_25() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___prevTargets_25)); }
	inline List_1_t1125654279 * get_prevTargets_25() const { return ___prevTargets_25; }
	inline List_1_t1125654279 ** get_address_of_prevTargets_25() { return &___prevTargets_25; }
	inline void set_prevTargets_25(List_1_t1125654279 * value)
	{
		___prevTargets_25 = value;
		Il2CppCodeGenWriteBarrier(&___prevTargets_25, value);
	}

	inline static int32_t get_offset_of_toDebuff_26() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___toDebuff_26)); }
	inline List_1_t1125654279 * get_toDebuff_26() const { return ___toDebuff_26; }
	inline List_1_t1125654279 ** get_address_of_toDebuff_26() { return &___toDebuff_26; }
	inline void set_toDebuff_26(List_1_t1125654279 * value)
	{
		___toDebuff_26 = value;
		Il2CppCodeGenWriteBarrier(&___toDebuff_26, value);
	}

	inline static int32_t get_offset_of_offset_27() { return static_cast<int32_t>(offsetof(MediShip_t3670713973, ___offset_27)); }
	inline Vector2_t2243707579  get_offset_27() const { return ___offset_27; }
	inline Vector2_t2243707579 * get_address_of_offset_27() { return &___offset_27; }
	inline void set_offset_27(Vector2_t2243707579  value)
	{
		___offset_27 = value;
	}
};

struct MediShip_t3670713973_StaticFields
{
public:
	// System.Func`2<UnityEngine.Collider,UnityEngine.GameObject> MediShip::<>f__am$cache0
	Func_2_t3035764824 * ___U3CU3Ef__amU24cache0_28;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_28() { return static_cast<int32_t>(offsetof(MediShip_t3670713973_StaticFields, ___U3CU3Ef__amU24cache0_28)); }
	inline Func_2_t3035764824 * get_U3CU3Ef__amU24cache0_28() const { return ___U3CU3Ef__amU24cache0_28; }
	inline Func_2_t3035764824 ** get_address_of_U3CU3Ef__amU24cache0_28() { return &___U3CU3Ef__amU24cache0_28; }
	inline void set_U3CU3Ef__amU24cache0_28(Func_2_t3035764824 * value)
	{
		___U3CU3Ef__amU24cache0_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
