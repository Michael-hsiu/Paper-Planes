#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ShotSpawn3804264869.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EMPWaveShotSPawn
struct  EMPWaveShotSPawn_t3273819302  : public ShotSpawn_t3804264869
{
public:
	// UnityEngine.GameObject EMPWaveShotSPawn::waveShot
	GameObject_t1756533147 * ___waveShot_4;
	// System.Boolean EMPWaveShotSPawn::waveShotEnabled
	bool ___waveShotEnabled_5;
	// System.Int32 EMPWaveShotSPawn::waveShotCounter
	int32_t ___waveShotCounter_6;

public:
	inline static int32_t get_offset_of_waveShot_4() { return static_cast<int32_t>(offsetof(EMPWaveShotSPawn_t3273819302, ___waveShot_4)); }
	inline GameObject_t1756533147 * get_waveShot_4() const { return ___waveShot_4; }
	inline GameObject_t1756533147 ** get_address_of_waveShot_4() { return &___waveShot_4; }
	inline void set_waveShot_4(GameObject_t1756533147 * value)
	{
		___waveShot_4 = value;
		Il2CppCodeGenWriteBarrier(&___waveShot_4, value);
	}

	inline static int32_t get_offset_of_waveShotEnabled_5() { return static_cast<int32_t>(offsetof(EMPWaveShotSPawn_t3273819302, ___waveShotEnabled_5)); }
	inline bool get_waveShotEnabled_5() const { return ___waveShotEnabled_5; }
	inline bool* get_address_of_waveShotEnabled_5() { return &___waveShotEnabled_5; }
	inline void set_waveShotEnabled_5(bool value)
	{
		___waveShotEnabled_5 = value;
	}

	inline static int32_t get_offset_of_waveShotCounter_6() { return static_cast<int32_t>(offsetof(EMPWaveShotSPawn_t3273819302, ___waveShotCounter_6)); }
	inline int32_t get_waveShotCounter_6() const { return ___waveShotCounter_6; }
	inline int32_t* get_address_of_waveShotCounter_6() { return &___waveShotCounter_6; }
	inline void set_waveShotCounter_6(int32_t value)
	{
		___waveShotCounter_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
