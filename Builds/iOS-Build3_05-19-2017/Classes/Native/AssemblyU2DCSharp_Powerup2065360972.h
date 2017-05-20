#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerShip
struct PlayerShip_t2635532215;
// System.Collections.Generic.Stack`1<ShotSpawn>
struct Stack_1_t597025727;

#include "AssemblyU2DCSharp_PoolObject202793199.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Powerup
struct  Powerup_t2065360972  : public PoolObject_t202793199
{
public:
	// PlayerShip Powerup::player
	PlayerShip_t2635532215 * ___player_2;
	// System.Collections.Generic.Stack`1<ShotSpawn> Powerup::prevSS
	Stack_1_t597025727 * ___prevSS_3;
	// System.Single Powerup::powerDuration
	float ___powerDuration_4;
	// System.Single Powerup::endTime
	float ___endTime_5;
	// System.Single Powerup::timeObtained
	float ___timeObtained_6;
	// System.Boolean Powerup::isVisible
	bool ___isVisible_7;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___player_2)); }
	inline PlayerShip_t2635532215 * get_player_2() const { return ___player_2; }
	inline PlayerShip_t2635532215 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(PlayerShip_t2635532215 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_prevSS_3() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___prevSS_3)); }
	inline Stack_1_t597025727 * get_prevSS_3() const { return ___prevSS_3; }
	inline Stack_1_t597025727 ** get_address_of_prevSS_3() { return &___prevSS_3; }
	inline void set_prevSS_3(Stack_1_t597025727 * value)
	{
		___prevSS_3 = value;
		Il2CppCodeGenWriteBarrier(&___prevSS_3, value);
	}

	inline static int32_t get_offset_of_powerDuration_4() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___powerDuration_4)); }
	inline float get_powerDuration_4() const { return ___powerDuration_4; }
	inline float* get_address_of_powerDuration_4() { return &___powerDuration_4; }
	inline void set_powerDuration_4(float value)
	{
		___powerDuration_4 = value;
	}

	inline static int32_t get_offset_of_endTime_5() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___endTime_5)); }
	inline float get_endTime_5() const { return ___endTime_5; }
	inline float* get_address_of_endTime_5() { return &___endTime_5; }
	inline void set_endTime_5(float value)
	{
		___endTime_5 = value;
	}

	inline static int32_t get_offset_of_timeObtained_6() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___timeObtained_6)); }
	inline float get_timeObtained_6() const { return ___timeObtained_6; }
	inline float* get_address_of_timeObtained_6() { return &___timeObtained_6; }
	inline void set_timeObtained_6(float value)
	{
		___timeObtained_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
