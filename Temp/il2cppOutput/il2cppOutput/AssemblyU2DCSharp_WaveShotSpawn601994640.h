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

// WaveShotSpawn
struct  WaveShotSpawn_t601994640  : public ShotSpawn_t3804264869
{
public:
	// UnityEngine.GameObject WaveShotSpawn::waveShot
	GameObject_t1756533147 * ___waveShot_4;
	// UnityEngine.GameObject WaveShotSpawn::straightMissile
	GameObject_t1756533147 * ___straightMissile_5;
	// System.Boolean WaveShotSpawn::waveShotEnabled
	bool ___waveShotEnabled_6;
	// System.Int32 WaveShotSpawn::waveShotCounter
	int32_t ___waveShotCounter_7;

public:
	inline static int32_t get_offset_of_waveShot_4() { return static_cast<int32_t>(offsetof(WaveShotSpawn_t601994640, ___waveShot_4)); }
	inline GameObject_t1756533147 * get_waveShot_4() const { return ___waveShot_4; }
	inline GameObject_t1756533147 ** get_address_of_waveShot_4() { return &___waveShot_4; }
	inline void set_waveShot_4(GameObject_t1756533147 * value)
	{
		___waveShot_4 = value;
		Il2CppCodeGenWriteBarrier(&___waveShot_4, value);
	}

	inline static int32_t get_offset_of_straightMissile_5() { return static_cast<int32_t>(offsetof(WaveShotSpawn_t601994640, ___straightMissile_5)); }
	inline GameObject_t1756533147 * get_straightMissile_5() const { return ___straightMissile_5; }
	inline GameObject_t1756533147 ** get_address_of_straightMissile_5() { return &___straightMissile_5; }
	inline void set_straightMissile_5(GameObject_t1756533147 * value)
	{
		___straightMissile_5 = value;
		Il2CppCodeGenWriteBarrier(&___straightMissile_5, value);
	}

	inline static int32_t get_offset_of_waveShotEnabled_6() { return static_cast<int32_t>(offsetof(WaveShotSpawn_t601994640, ___waveShotEnabled_6)); }
	inline bool get_waveShotEnabled_6() const { return ___waveShotEnabled_6; }
	inline bool* get_address_of_waveShotEnabled_6() { return &___waveShotEnabled_6; }
	inline void set_waveShotEnabled_6(bool value)
	{
		___waveShotEnabled_6 = value;
	}

	inline static int32_t get_offset_of_waveShotCounter_7() { return static_cast<int32_t>(offsetof(WaveShotSpawn_t601994640, ___waveShotCounter_7)); }
	inline int32_t get_waveShotCounter_7() const { return ___waveShotCounter_7; }
	inline int32_t* get_address_of_waveShotCounter_7() { return &___waveShotCounter_7; }
	inline void set_waveShotCounter_7(int32_t value)
	{
		___waveShotCounter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
