#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_PoolObject202793199.h"

// PowerupScriptableObject
struct PowerupScriptableObject_t1415146708;
// PlayerShip
struct PlayerShip_t2635532215;
// System.Collections.Generic.Stack`1<ShotSpawn>
struct Stack_1_t597025727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Powerup
struct  Powerup_t2065360972  : public PoolObject_t202793199
{
public:
	// PowerupScriptableObject Powerup::powerupData
	PowerupScriptableObject_t1415146708 * ___powerupData_2;
	// PlayerShip Powerup::player
	PlayerShip_t2635532215 * ___player_3;
	// System.Collections.Generic.Stack`1<ShotSpawn> Powerup::prevSS
	Stack_1_t597025727 * ___prevSS_4;
	// System.Single Powerup::powerDuration
	float ___powerDuration_5;
	// System.Single Powerup::endTime
	float ___endTime_6;
	// System.Single Powerup::timeObtained
	float ___timeObtained_7;
	// System.Boolean Powerup::isVisible
	bool ___isVisible_8;

public:
	inline static int32_t get_offset_of_powerupData_2() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___powerupData_2)); }
	inline PowerupScriptableObject_t1415146708 * get_powerupData_2() const { return ___powerupData_2; }
	inline PowerupScriptableObject_t1415146708 ** get_address_of_powerupData_2() { return &___powerupData_2; }
	inline void set_powerupData_2(PowerupScriptableObject_t1415146708 * value)
	{
		___powerupData_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerupData_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___player_3)); }
	inline PlayerShip_t2635532215 * get_player_3() const { return ___player_3; }
	inline PlayerShip_t2635532215 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(PlayerShip_t2635532215 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_prevSS_4() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___prevSS_4)); }
	inline Stack_1_t597025727 * get_prevSS_4() const { return ___prevSS_4; }
	inline Stack_1_t597025727 ** get_address_of_prevSS_4() { return &___prevSS_4; }
	inline void set_prevSS_4(Stack_1_t597025727 * value)
	{
		___prevSS_4 = value;
		Il2CppCodeGenWriteBarrier(&___prevSS_4, value);
	}

	inline static int32_t get_offset_of_powerDuration_5() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___powerDuration_5)); }
	inline float get_powerDuration_5() const { return ___powerDuration_5; }
	inline float* get_address_of_powerDuration_5() { return &___powerDuration_5; }
	inline void set_powerDuration_5(float value)
	{
		___powerDuration_5 = value;
	}

	inline static int32_t get_offset_of_endTime_6() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___endTime_6)); }
	inline float get_endTime_6() const { return ___endTime_6; }
	inline float* get_address_of_endTime_6() { return &___endTime_6; }
	inline void set_endTime_6(float value)
	{
		___endTime_6 = value;
	}

	inline static int32_t get_offset_of_timeObtained_7() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___timeObtained_7)); }
	inline float get_timeObtained_7() const { return ___timeObtained_7; }
	inline float* get_address_of_timeObtained_7() { return &___timeObtained_7; }
	inline void set_timeObtained_7(float value)
	{
		___timeObtained_7 = value;
	}

	inline static int32_t get_offset_of_isVisible_8() { return static_cast<int32_t>(offsetof(Powerup_t2065360972, ___isVisible_8)); }
	inline bool get_isVisible_8() const { return ___isVisible_8; }
	inline bool* get_address_of_isVisible_8() { return &___isVisible_8; }
	inline void set_isVisible_8(bool value)
	{
		___isVisible_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
