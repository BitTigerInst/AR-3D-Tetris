#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTr4008517455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTr3521081518.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalPlayModeDeviceTrackerImpl
struct  RotationalPlayModeDeviceTrackerImpl_t1421621208  : public RotationalDeviceTracker_t4008517455
{
public:
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mRotation
	Vector3_t3525329789  ___mRotation_1;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrectionTransform
	Vector3_t3525329789  ___mModelCorrectionTransform_2;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrection
	int32_t ___mModelCorrection_3;

public:
	inline static int32_t get_offset_of_mRotation_1() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t1421621208, ___mRotation_1)); }
	inline Vector3_t3525329789  get_mRotation_1() const { return ___mRotation_1; }
	inline Vector3_t3525329789 * get_address_of_mRotation_1() { return &___mRotation_1; }
	inline void set_mRotation_1(Vector3_t3525329789  value)
	{
		___mRotation_1 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionTransform_2() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t1421621208, ___mModelCorrectionTransform_2)); }
	inline Vector3_t3525329789  get_mModelCorrectionTransform_2() const { return ___mModelCorrectionTransform_2; }
	inline Vector3_t3525329789 * get_address_of_mModelCorrectionTransform_2() { return &___mModelCorrectionTransform_2; }
	inline void set_mModelCorrectionTransform_2(Vector3_t3525329789  value)
	{
		___mModelCorrectionTransform_2 = value;
	}

	inline static int32_t get_offset_of_mModelCorrection_3() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t1421621208, ___mModelCorrection_3)); }
	inline int32_t get_mModelCorrection_3() const { return ___mModelCorrection_3; }
	inline int32_t* get_address_of_mModelCorrection_3() { return &___mModelCorrection_3; }
	inline void set_mModelCorrection_3(int32_t value)
	{
		___mModelCorrection_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
