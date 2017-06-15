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

// ShotSpawn
struct  ShotSpawn_t3804264869  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShotSpawn::targetRotation
	GameObject_t1756533147 * ___targetRotation_2;
	// System.Boolean ShotSpawn::multiFire
	bool ___multiFire_3;

public:
	inline static int32_t get_offset_of_targetRotation_2() { return static_cast<int32_t>(offsetof(ShotSpawn_t3804264869, ___targetRotation_2)); }
	inline GameObject_t1756533147 * get_targetRotation_2() const { return ___targetRotation_2; }
	inline GameObject_t1756533147 ** get_address_of_targetRotation_2() { return &___targetRotation_2; }
	inline void set_targetRotation_2(GameObject_t1756533147 * value)
	{
		___targetRotation_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetRotation_2, value);
	}

	inline static int32_t get_offset_of_multiFire_3() { return static_cast<int32_t>(offsetof(ShotSpawn_t3804264869, ___multiFire_3)); }
	inline bool get_multiFire_3() const { return ___multiFire_3; }
	inline bool* get_address_of_multiFire_3() { return &___multiFire_3; }
	inline void set_multiFire_3(bool value)
	{
		___multiFire_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
