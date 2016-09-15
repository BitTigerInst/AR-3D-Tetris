#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigur2841223222.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_t35716836  : public BaseCameraConfiguration_t2841223222
{
public:
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t3533968274 * ___mPrimaryCamera_12;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortWidth
	int32_t ___mCameraViewPortWidth_13;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortHeight
	int32_t ___mCameraViewPortHeight_14;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_15;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_16;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFoV
	float ___mLastAppliedFoV_17;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_12() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t35716836, ___mPrimaryCamera_12)); }
	inline Camera_t3533968274 * get_mPrimaryCamera_12() const { return ___mPrimaryCamera_12; }
	inline Camera_t3533968274 ** get_address_of_mPrimaryCamera_12() { return &___mPrimaryCamera_12; }
	inline void set_mPrimaryCamera_12(Camera_t3533968274 * value)
	{
		___mPrimaryCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_12, value);
	}

	inline static int32_t get_offset_of_mCameraViewPortWidth_13() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t35716836, ___mCameraViewPortWidth_13)); }
	inline int32_t get_mCameraViewPortWidth_13() const { return ___mCameraViewPortWidth_13; }
	inline int32_t* get_address_of_mCameraViewPortWidth_13() { return &___mCameraViewPortWidth_13; }
	inline void set_mCameraViewPortWidth_13(int32_t value)
	{
		___mCameraViewPortWidth_13 = value;
	}

	inline static int32_t get_offset_of_mCameraViewPortHeight_14() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t35716836, ___mCameraViewPortHeight_14)); }
	inline int32_t get_mCameraViewPortHeight_14() const { return ___mCameraViewPortHeight_14; }
	inline int32_t* get_address_of_mCameraViewPortHeight_14() { return &___mCameraViewPortHeight_14; }
	inline void set_mCameraViewPortHeight_14(int32_t value)
	{
		___mCameraViewPortHeight_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_15() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t35716836, ___mLastAppliedNearClipPlane_15)); }
	inline float get_mLastAppliedNearClipPlane_15() const { return ___mLastAppliedNearClipPlane_15; }
	inline float* get_address_of_mLastAppliedNearClipPlane_15() { return &___mLastAppliedNearClipPlane_15; }
	inline void set_mLastAppliedNearClipPlane_15(float value)
	{
		___mLastAppliedNearClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_16() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t35716836, ___mLastAppliedFarClipPlane_16)); }
	inline float get_mLastAppliedFarClipPlane_16() const { return ___mLastAppliedFarClipPlane_16; }
	inline float* get_address_of_mLastAppliedFarClipPlane_16() { return &___mLastAppliedFarClipPlane_16; }
	inline void set_mLastAppliedFarClipPlane_16(float value)
	{
		___mLastAppliedFarClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFoV_17() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t35716836, ___mLastAppliedFoV_17)); }
	inline float get_mLastAppliedFoV_17() const { return ___mLastAppliedFoV_17; }
	inline float* get_address_of_mLastAppliedFoV_17() { return &___mLastAppliedFoV_17; }
	inline void set_mLastAppliedFoV_17(float value)
	{
		___mLastAppliedFoV_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
