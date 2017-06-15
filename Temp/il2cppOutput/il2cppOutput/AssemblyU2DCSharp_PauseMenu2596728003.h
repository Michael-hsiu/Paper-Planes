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

// PauseMenu
struct  PauseMenu_t2596728003  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_t1756533147 * ___pauseMenu_2;
	// System.Boolean PauseMenu::paused
	bool ___paused_3;

public:
	inline static int32_t get_offset_of_pauseMenu_2() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___pauseMenu_2)); }
	inline GameObject_t1756533147 * get_pauseMenu_2() const { return ___pauseMenu_2; }
	inline GameObject_t1756533147 ** get_address_of_pauseMenu_2() { return &___pauseMenu_2; }
	inline void set_pauseMenu_2(GameObject_t1756533147 * value)
	{
		___pauseMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenu_2, value);
	}

	inline static int32_t get_offset_of_paused_3() { return static_cast<int32_t>(offsetof(PauseMenu_t2596728003, ___paused_3)); }
	inline bool get_paused_3() const { return ___paused_3; }
	inline bool* get_address_of_paused_3() { return &___paused_3; }
	inline void set_paused_3(bool value)
	{
		___paused_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
