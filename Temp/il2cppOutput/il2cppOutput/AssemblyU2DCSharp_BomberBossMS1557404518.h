#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Direction4219104283.h"

// BomberBoss
struct BomberBoss_t2837930630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BomberBossMS
struct  BomberBossMS_t1557404518  : public MonoBehaviour_t1158329972
{
public:
	// Direction BomberBossMS::direction
	int32_t ___direction_2;
	// Direction BomberBossMS::<Direction>k__BackingField
	int32_t ___U3CDirectionU3Ek__BackingField_3;
	// BomberBoss BomberBossMS::bomberBoss
	BomberBoss_t2837930630 * ___bomberBoss_4;

public:
	inline static int32_t get_offset_of_direction_2() { return static_cast<int32_t>(offsetof(BomberBossMS_t1557404518, ___direction_2)); }
	inline int32_t get_direction_2() const { return ___direction_2; }
	inline int32_t* get_address_of_direction_2() { return &___direction_2; }
	inline void set_direction_2(int32_t value)
	{
		___direction_2 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BomberBossMS_t1557404518, ___U3CDirectionU3Ek__BackingField_3)); }
	inline int32_t get_U3CDirectionU3Ek__BackingField_3() const { return ___U3CDirectionU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDirectionU3Ek__BackingField_3() { return &___U3CDirectionU3Ek__BackingField_3; }
	inline void set_U3CDirectionU3Ek__BackingField_3(int32_t value)
	{
		___U3CDirectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_bomberBoss_4() { return static_cast<int32_t>(offsetof(BomberBossMS_t1557404518, ___bomberBoss_4)); }
	inline BomberBoss_t2837930630 * get_bomberBoss_4() const { return ___bomberBoss_4; }
	inline BomberBoss_t2837930630 ** get_address_of_bomberBoss_4() { return &___bomberBoss_4; }
	inline void set_bomberBoss_4(BomberBoss_t2837930630 * value)
	{
		___bomberBoss_4 = value;
		Il2CppCodeGenWriteBarrier(&___bomberBoss_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
