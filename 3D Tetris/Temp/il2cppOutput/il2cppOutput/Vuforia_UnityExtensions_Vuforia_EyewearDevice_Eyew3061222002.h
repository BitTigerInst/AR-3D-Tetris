#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading
struct  EyewearCalibrationReading_t3061222002 
{
public:
	// System.Single[] Vuforia.EyewearDevice/EyewearCalibrationReading::pose
	SingleU5BU5D_t1219431280* ___pose_0;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.EyewearDevice/EyewearCalibrationReading::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3061222002, ___pose_0)); }
	inline SingleU5BU5D_t1219431280* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_t1219431280** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_t1219431280* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier(&___pose_0, value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3061222002, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3061222002, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3061222002, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t3061222002, ___unused_4)); }
	inline int32_t get_unused_4() const { return ___unused_4; }
	inline int32_t* get_address_of_unused_4() { return &___unused_4; }
	inline void set_unused_4(int32_t value)
	{
		___unused_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.EyewearDevice/EyewearCalibrationReading
#pragma pack(push, tp, 1)
struct EyewearCalibrationReading_t3061222002_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___unused_4;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.EyewearDevice/EyewearCalibrationReading
#pragma pack(push, tp, 1)
struct EyewearCalibrationReading_t3061222002_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___unused_4;
};
#pragma pack(pop, tp)
