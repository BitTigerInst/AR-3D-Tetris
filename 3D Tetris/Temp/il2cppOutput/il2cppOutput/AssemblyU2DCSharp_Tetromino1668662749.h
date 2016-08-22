#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tetromino
struct  Tetromino_t1668662749  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Tetromino::fall
	float ___fall_2;
	// System.Single Tetromino::fallSpeed
	float ___fallSpeed_3;
	// System.Int32 Tetromino::individualScore
	int32_t ___individualScore_4;
	// System.Single Tetromino::individualScoreTime
	float ___individualScoreTime_5;

public:
	inline static int32_t get_offset_of_fall_2() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___fall_2)); }
	inline float get_fall_2() const { return ___fall_2; }
	inline float* get_address_of_fall_2() { return &___fall_2; }
	inline void set_fall_2(float value)
	{
		___fall_2 = value;
	}

	inline static int32_t get_offset_of_fallSpeed_3() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___fallSpeed_3)); }
	inline float get_fallSpeed_3() const { return ___fallSpeed_3; }
	inline float* get_address_of_fallSpeed_3() { return &___fallSpeed_3; }
	inline void set_fallSpeed_3(float value)
	{
		___fallSpeed_3 = value;
	}

	inline static int32_t get_offset_of_individualScore_4() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___individualScore_4)); }
	inline int32_t get_individualScore_4() const { return ___individualScore_4; }
	inline int32_t* get_address_of_individualScore_4() { return &___individualScore_4; }
	inline void set_individualScore_4(int32_t value)
	{
		___individualScore_4 = value;
	}

	inline static int32_t get_offset_of_individualScoreTime_5() { return static_cast<int32_t>(offsetof(Tetromino_t1668662749, ___individualScoreTime_5)); }
	inline float get_individualScoreTime_5() const { return ___individualScoreTime_5; }
	inline float* get_address_of_individualScoreTime_5() { return &___individualScoreTime_5; }
	inline void set_individualScoreTime_5(float value)
	{
		___individualScoreTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
