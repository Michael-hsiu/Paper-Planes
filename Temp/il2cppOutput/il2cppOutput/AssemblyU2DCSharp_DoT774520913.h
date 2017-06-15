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

// DoT
struct  DoT_t774520913  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DoT::go
	GameObject_t1756533147 * ___go_2;
	// System.Int32 DoT::damage
	int32_t ___damage_3;
	// System.Single DoT::damageDelay
	float ___damageDelay_4;

public:
	inline static int32_t get_offset_of_go_2() { return static_cast<int32_t>(offsetof(DoT_t774520913, ___go_2)); }
	inline GameObject_t1756533147 * get_go_2() const { return ___go_2; }
	inline GameObject_t1756533147 ** get_address_of_go_2() { return &___go_2; }
	inline void set_go_2(GameObject_t1756533147 * value)
	{
		___go_2 = value;
		Il2CppCodeGenWriteBarrier(&___go_2, value);
	}

	inline static int32_t get_offset_of_damage_3() { return static_cast<int32_t>(offsetof(DoT_t774520913, ___damage_3)); }
	inline int32_t get_damage_3() const { return ___damage_3; }
	inline int32_t* get_address_of_damage_3() { return &___damage_3; }
	inline void set_damage_3(int32_t value)
	{
		___damage_3 = value;
	}

	inline static int32_t get_offset_of_damageDelay_4() { return static_cast<int32_t>(offsetof(DoT_t774520913, ___damageDelay_4)); }
	inline float get_damageDelay_4() const { return ___damageDelay_4; }
	inline float* get_address_of_damageDelay_4() { return &___damageDelay_4; }
	inline void set_damageDelay_4(float value)
	{
		___damageDelay_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
