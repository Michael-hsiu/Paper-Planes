#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AttackStatus977837830.h"
#include "AssemblyU2DCSharp_FiringMode2712036264.h"

// BomberBoss
struct BomberBoss_t2837930630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BomberBossFS
struct  BomberBossFS_t1557404523  : public MonoBehaviour_t1158329972
{
public:
	// AttackStatus BomberBossFS::attackStatus
	int32_t ___attackStatus_2;
	// BomberBoss BomberBossFS::bomberBoss
	BomberBoss_t2837930630 * ___bomberBoss_3;
	// FiringMode BomberBossFS::<Mode>k__BackingField
	int32_t ___U3CModeU3Ek__BackingField_4;
	// System.Single BomberBossFS::endTime
	float ___endTime_5;
	// System.Boolean BomberBossFS::bulletHellActive
	bool ___bulletHellActive_6;
	// System.Single BomberBossFS::bulletHellDuration
	float ___bulletHellDuration_7;

public:
	inline static int32_t get_offset_of_attackStatus_2() { return static_cast<int32_t>(offsetof(BomberBossFS_t1557404523, ___attackStatus_2)); }
	inline int32_t get_attackStatus_2() const { return ___attackStatus_2; }
	inline int32_t* get_address_of_attackStatus_2() { return &___attackStatus_2; }
	inline void set_attackStatus_2(int32_t value)
	{
		___attackStatus_2 = value;
	}

	inline static int32_t get_offset_of_bomberBoss_3() { return static_cast<int32_t>(offsetof(BomberBossFS_t1557404523, ___bomberBoss_3)); }
	inline BomberBoss_t2837930630 * get_bomberBoss_3() const { return ___bomberBoss_3; }
	inline BomberBoss_t2837930630 ** get_address_of_bomberBoss_3() { return &___bomberBoss_3; }
	inline void set_bomberBoss_3(BomberBoss_t2837930630 * value)
	{
		___bomberBoss_3 = value;
		Il2CppCodeGenWriteBarrier(&___bomberBoss_3, value);
	}

	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BomberBossFS_t1557404523, ___U3CModeU3Ek__BackingField_4)); }
	inline int32_t get_U3CModeU3Ek__BackingField_4() const { return ___U3CModeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CModeU3Ek__BackingField_4() { return &___U3CModeU3Ek__BackingField_4; }
	inline void set_U3CModeU3Ek__BackingField_4(int32_t value)
	{
		___U3CModeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_endTime_5() { return static_cast<int32_t>(offsetof(BomberBossFS_t1557404523, ___endTime_5)); }
	inline float get_endTime_5() const { return ___endTime_5; }
	inline float* get_address_of_endTime_5() { return &___endTime_5; }
	inline void set_endTime_5(float value)
	{
		___endTime_5 = value;
	}

	inline static int32_t get_offset_of_bulletHellActive_6() { return static_cast<int32_t>(offsetof(BomberBossFS_t1557404523, ___bulletHellActive_6)); }
	inline bool get_bulletHellActive_6() const { return ___bulletHellActive_6; }
	inline bool* get_address_of_bulletHellActive_6() { return &___bulletHellActive_6; }
	inline void set_bulletHellActive_6(bool value)
	{
		___bulletHellActive_6 = value;
	}

	inline static int32_t get_offset_of_bulletHellDuration_7() { return static_cast<int32_t>(offsetof(BomberBossFS_t1557404523, ___bulletHellDuration_7)); }
	inline float get_bulletHellDuration_7() const { return ___bulletHellDuration_7; }
	inline float* get_address_of_bulletHellDuration_7() { return &___bulletHellDuration_7; }
	inline void set_bulletHellDuration_7(float value)
	{
		___bulletHellDuration_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
