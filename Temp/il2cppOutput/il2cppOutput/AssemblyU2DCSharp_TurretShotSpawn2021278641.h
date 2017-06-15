#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurretShotSpawn
struct  TurretShotSpawn_t2021278641  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TurretShotSpawn::targetRotation
	GameObject_t1756533147 * ___targetRotation_2;
	// System.Boolean TurretShotSpawn::multiFire
	bool ___multiFire_3;
	// System.Boolean TurretShotSpawn::armed
	bool ___armed_4;
	// UnityEngine.GameObject TurretShotSpawn::shotContainer
	GameObject_t1756533147 * ___shotContainer_5;

public:
	inline static int32_t get_offset_of_targetRotation_2() { return static_cast<int32_t>(offsetof(TurretShotSpawn_t2021278641, ___targetRotation_2)); }
	inline GameObject_t1756533147 * get_targetRotation_2() const { return ___targetRotation_2; }
	inline GameObject_t1756533147 ** get_address_of_targetRotation_2() { return &___targetRotation_2; }
	inline void set_targetRotation_2(GameObject_t1756533147 * value)
	{
		___targetRotation_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetRotation_2, value);
	}

	inline static int32_t get_offset_of_multiFire_3() { return static_cast<int32_t>(offsetof(TurretShotSpawn_t2021278641, ___multiFire_3)); }
	inline bool get_multiFire_3() const { return ___multiFire_3; }
	inline bool* get_address_of_multiFire_3() { return &___multiFire_3; }
	inline void set_multiFire_3(bool value)
	{
		___multiFire_3 = value;
	}

	inline static int32_t get_offset_of_armed_4() { return static_cast<int32_t>(offsetof(TurretShotSpawn_t2021278641, ___armed_4)); }
	inline bool get_armed_4() const { return ___armed_4; }
	inline bool* get_address_of_armed_4() { return &___armed_4; }
	inline void set_armed_4(bool value)
	{
		___armed_4 = value;
	}

	inline static int32_t get_offset_of_shotContainer_5() { return static_cast<int32_t>(offsetof(TurretShotSpawn_t2021278641, ___shotContainer_5)); }
	inline GameObject_t1756533147 * get_shotContainer_5() const { return ___shotContainer_5; }
	inline GameObject_t1756533147 ** get_address_of_shotContainer_5() { return &___shotContainer_5; }
	inline void set_shotContainer_5(GameObject_t1756533147 * value)
	{
		___shotContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___shotContainer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
