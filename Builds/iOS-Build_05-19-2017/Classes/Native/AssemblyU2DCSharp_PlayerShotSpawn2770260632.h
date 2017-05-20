#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_ShotSpawn3804264869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerShotSpawn
struct  PlayerShotSpawn_t2770260632  : public ShotSpawn_t3804264869
{
public:
	// UnityEngine.GameObject PlayerShotSpawn::shot
	GameObject_t1756533147 * ___shot_4;
	// UnityEngine.GameObject PlayerShotSpawn::fasterShot
	GameObject_t1756533147 * ___fasterShot_5;
	// UnityEngine.GameObject PlayerShotSpawn::ultimateShot
	GameObject_t1756533147 * ___ultimateShot_6;
	// UnityEngine.GameObject PlayerShotSpawn::waveShot
	GameObject_t1756533147 * ___waveShot_7;
	// UnityEngine.GameObject PlayerShotSpawn::missile
	GameObject_t1756533147 * ___missile_8;
	// System.Boolean PlayerShotSpawn::ultimateShotEnabled
	bool ___ultimateShotEnabled_9;
	// System.Boolean PlayerShotSpawn::waveShotEnabled
	bool ___waveShotEnabled_10;
	// System.Boolean PlayerShotSpawn::multShotEnabled
	bool ___multShotEnabled_11;
	// System.Int32 PlayerShotSpawn::ultiShotInterval
	int32_t ___ultiShotInterval_12;
	// System.Int32 PlayerShotSpawn::waveShotInterval
	int32_t ___waveShotInterval_13;
	// System.Int32 PlayerShotSpawn::shotCounter
	int32_t ___shotCounter_14;
	// System.Int32 PlayerShotSpawn::waveShotCounter
	int32_t ___waveShotCounter_15;

public:
	inline static int32_t get_offset_of_shot_4() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___shot_4)); }
	inline GameObject_t1756533147 * get_shot_4() const { return ___shot_4; }
	inline GameObject_t1756533147 ** get_address_of_shot_4() { return &___shot_4; }
	inline void set_shot_4(GameObject_t1756533147 * value)
	{
		___shot_4 = value;
		Il2CppCodeGenWriteBarrier(&___shot_4, value);
	}

	inline static int32_t get_offset_of_fasterShot_5() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___fasterShot_5)); }
	inline GameObject_t1756533147 * get_fasterShot_5() const { return ___fasterShot_5; }
	inline GameObject_t1756533147 ** get_address_of_fasterShot_5() { return &___fasterShot_5; }
	inline void set_fasterShot_5(GameObject_t1756533147 * value)
	{
		___fasterShot_5 = value;
		Il2CppCodeGenWriteBarrier(&___fasterShot_5, value);
	}

	inline static int32_t get_offset_of_ultimateShot_6() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___ultimateShot_6)); }
	inline GameObject_t1756533147 * get_ultimateShot_6() const { return ___ultimateShot_6; }
	inline GameObject_t1756533147 ** get_address_of_ultimateShot_6() { return &___ultimateShot_6; }
	inline void set_ultimateShot_6(GameObject_t1756533147 * value)
	{
		___ultimateShot_6 = value;
		Il2CppCodeGenWriteBarrier(&___ultimateShot_6, value);
	}

	inline static int32_t get_offset_of_waveShot_7() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___waveShot_7)); }
	inline GameObject_t1756533147 * get_waveShot_7() const { return ___waveShot_7; }
	inline GameObject_t1756533147 ** get_address_of_waveShot_7() { return &___waveShot_7; }
	inline void set_waveShot_7(GameObject_t1756533147 * value)
	{
		___waveShot_7 = value;
		Il2CppCodeGenWriteBarrier(&___waveShot_7, value);
	}

	inline static int32_t get_offset_of_missile_8() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___missile_8)); }
	inline GameObject_t1756533147 * get_missile_8() const { return ___missile_8; }
	inline GameObject_t1756533147 ** get_address_of_missile_8() { return &___missile_8; }
	inline void set_missile_8(GameObject_t1756533147 * value)
	{
		___missile_8 = value;
		Il2CppCodeGenWriteBarrier(&___missile_8, value);
	}

	inline static int32_t get_offset_of_ultimateShotEnabled_9() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___ultimateShotEnabled_9)); }
	inline bool get_ultimateShotEnabled_9() const { return ___ultimateShotEnabled_9; }
	inline bool* get_address_of_ultimateShotEnabled_9() { return &___ultimateShotEnabled_9; }
	inline void set_ultimateShotEnabled_9(bool value)
	{
		___ultimateShotEnabled_9 = value;
	}

	inline static int32_t get_offset_of_waveShotEnabled_10() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___waveShotEnabled_10)); }
	inline bool get_waveShotEnabled_10() const { return ___waveShotEnabled_10; }
	inline bool* get_address_of_waveShotEnabled_10() { return &___waveShotEnabled_10; }
	inline void set_waveShotEnabled_10(bool value)
	{
		___waveShotEnabled_10 = value;
	}

	inline static int32_t get_offset_of_multShotEnabled_11() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___multShotEnabled_11)); }
	inline bool get_multShotEnabled_11() const { return ___multShotEnabled_11; }
	inline bool* get_address_of_multShotEnabled_11() { return &___multShotEnabled_11; }
	inline void set_multShotEnabled_11(bool value)
	{
		___multShotEnabled_11 = value;
	}

	inline static int32_t get_offset_of_ultiShotInterval_12() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___ultiShotInterval_12)); }
	inline int32_t get_ultiShotInterval_12() const { return ___ultiShotInterval_12; }
	inline int32_t* get_address_of_ultiShotInterval_12() { return &___ultiShotInterval_12; }
	inline void set_ultiShotInterval_12(int32_t value)
	{
		___ultiShotInterval_12 = value;
	}

	inline static int32_t get_offset_of_waveShotInterval_13() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___waveShotInterval_13)); }
	inline int32_t get_waveShotInterval_13() const { return ___waveShotInterval_13; }
	inline int32_t* get_address_of_waveShotInterval_13() { return &___waveShotInterval_13; }
	inline void set_waveShotInterval_13(int32_t value)
	{
		___waveShotInterval_13 = value;
	}

	inline static int32_t get_offset_of_shotCounter_14() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___shotCounter_14)); }
	inline int32_t get_shotCounter_14() const { return ___shotCounter_14; }
	inline int32_t* get_address_of_shotCounter_14() { return &___shotCounter_14; }
	inline void set_shotCounter_14(int32_t value)
	{
		___shotCounter_14 = value;
	}

	inline static int32_t get_offset_of_waveShotCounter_15() { return static_cast<int32_t>(offsetof(PlayerShotSpawn_t2770260632, ___waveShotCounter_15)); }
	inline int32_t get_waveShotCounter_15() const { return ___waveShotCounter_15; }
	inline int32_t* get_address_of_waveShotCounter_15() { return &___waveShotCounter_15; }
	inline void set_waveShotCounter_15(int32_t value)
	{
		___waveShotCounter_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
