#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"
#include "AssemblyU2DCSharp_EnemyType756400788.h"

// IMoveState
struct IMoveState_t587483389;
// IFireState
struct IFireState_t3386544712;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AbstractShip
struct  AbstractShip_t2730254364  : public PoolObject_t202793199
{
public:
	// EnemyType AbstractShip::enemyType
	int32_t ___enemyType_2;
	// IMoveState AbstractShip::moveState
	Il2CppObject * ___moveState_3;
	// IFireState AbstractShip::fireState
	Il2CppObject * ___fireState_4;

public:
	inline static int32_t get_offset_of_enemyType_2() { return static_cast<int32_t>(offsetof(AbstractShip_t2730254364, ___enemyType_2)); }
	inline int32_t get_enemyType_2() const { return ___enemyType_2; }
	inline int32_t* get_address_of_enemyType_2() { return &___enemyType_2; }
	inline void set_enemyType_2(int32_t value)
	{
		___enemyType_2 = value;
	}

	inline static int32_t get_offset_of_moveState_3() { return static_cast<int32_t>(offsetof(AbstractShip_t2730254364, ___moveState_3)); }
	inline Il2CppObject * get_moveState_3() const { return ___moveState_3; }
	inline Il2CppObject ** get_address_of_moveState_3() { return &___moveState_3; }
	inline void set_moveState_3(Il2CppObject * value)
	{
		___moveState_3 = value;
		Il2CppCodeGenWriteBarrier(&___moveState_3, value);
	}

	inline static int32_t get_offset_of_fireState_4() { return static_cast<int32_t>(offsetof(AbstractShip_t2730254364, ___fireState_4)); }
	inline Il2CppObject * get_fireState_4() const { return ___fireState_4; }
	inline Il2CppObject ** get_address_of_fireState_4() { return &___fireState_4; }
	inline void set_fireState_4(Il2CppObject * value)
	{
		___fireState_4 = value;
		Il2CppCodeGenWriteBarrier(&___fireState_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
