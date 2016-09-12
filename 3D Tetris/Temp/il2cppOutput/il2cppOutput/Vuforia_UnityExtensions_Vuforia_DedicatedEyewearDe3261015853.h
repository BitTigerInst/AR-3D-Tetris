#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t191344692;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t561372210;

#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice3209895068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearDevice
struct  DedicatedEyewearDevice_t3261015853  : public EyewearDevice_t3209895068
{
public:
	// Vuforia.EyewearCalibrationProfileManager Vuforia.DedicatedEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_t191344692 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.DedicatedEyewearDevice::mCalibrator
	EyewearUserCalibrator_t561372210 * ___mCalibrator_2;

public:
	inline static int32_t get_offset_of_mProfileManager_1() { return static_cast<int32_t>(offsetof(DedicatedEyewearDevice_t3261015853, ___mProfileManager_1)); }
	inline EyewearCalibrationProfileManager_t191344692 * get_mProfileManager_1() const { return ___mProfileManager_1; }
	inline EyewearCalibrationProfileManager_t191344692 ** get_address_of_mProfileManager_1() { return &___mProfileManager_1; }
	inline void set_mProfileManager_1(EyewearCalibrationProfileManager_t191344692 * value)
	{
		___mProfileManager_1 = value;
		Il2CppCodeGenWriteBarrier(&___mProfileManager_1, value);
	}

	inline static int32_t get_offset_of_mCalibrator_2() { return static_cast<int32_t>(offsetof(DedicatedEyewearDevice_t3261015853, ___mCalibrator_2)); }
	inline EyewearUserCalibrator_t561372210 * get_mCalibrator_2() const { return ___mCalibrator_2; }
	inline EyewearUserCalibrator_t561372210 ** get_address_of_mCalibrator_2() { return &___mCalibrator_2; }
	inline void set_mCalibrator_2(EyewearUserCalibrator_t561372210 * value)
	{
		___mCalibrator_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCalibrator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
