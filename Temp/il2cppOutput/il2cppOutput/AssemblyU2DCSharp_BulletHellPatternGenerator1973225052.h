#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<BulletHellShotSpawnListWrapper>
struct List_1_t1893047355;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletHellPatternGenerator
struct  BulletHellPatternGenerator_t1973225052  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<BulletHellShotSpawnListWrapper> BulletHellPatternGenerator::listOfListOfBulletHellShotSpawns
	List_1_t1893047355 * ___listOfListOfBulletHellShotSpawns_2;
	// System.Single BulletHellPatternGenerator::generatedRotationAngle
	float ___generatedRotationAngle_3;
	// System.Int32 BulletHellPatternGenerator::numAnglesGenerated
	int32_t ___numAnglesGenerated_4;

public:
	inline static int32_t get_offset_of_listOfListOfBulletHellShotSpawns_2() { return static_cast<int32_t>(offsetof(BulletHellPatternGenerator_t1973225052, ___listOfListOfBulletHellShotSpawns_2)); }
	inline List_1_t1893047355 * get_listOfListOfBulletHellShotSpawns_2() const { return ___listOfListOfBulletHellShotSpawns_2; }
	inline List_1_t1893047355 ** get_address_of_listOfListOfBulletHellShotSpawns_2() { return &___listOfListOfBulletHellShotSpawns_2; }
	inline void set_listOfListOfBulletHellShotSpawns_2(List_1_t1893047355 * value)
	{
		___listOfListOfBulletHellShotSpawns_2 = value;
		Il2CppCodeGenWriteBarrier(&___listOfListOfBulletHellShotSpawns_2, value);
	}

	inline static int32_t get_offset_of_generatedRotationAngle_3() { return static_cast<int32_t>(offsetof(BulletHellPatternGenerator_t1973225052, ___generatedRotationAngle_3)); }
	inline float get_generatedRotationAngle_3() const { return ___generatedRotationAngle_3; }
	inline float* get_address_of_generatedRotationAngle_3() { return &___generatedRotationAngle_3; }
	inline void set_generatedRotationAngle_3(float value)
	{
		___generatedRotationAngle_3 = value;
	}

	inline static int32_t get_offset_of_numAnglesGenerated_4() { return static_cast<int32_t>(offsetof(BulletHellPatternGenerator_t1973225052, ___numAnglesGenerated_4)); }
	inline int32_t get_numAnglesGenerated_4() const { return ___numAnglesGenerated_4; }
	inline int32_t* get_address_of_numAnglesGenerated_4() { return &___numAnglesGenerated_4; }
	inline void set_numAnglesGenerated_4(int32_t value)
	{
		___numAnglesGenerated_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
