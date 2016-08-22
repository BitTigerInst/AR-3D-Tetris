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
// Vuforia.EyewearDevice
struct EyewearDevice_t3209895068;

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigur2841223222.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration
struct  DedicatedEyewearCameraConfiguration_t1344567494  : public BaseCameraConfiguration_t2841223222
{
public:
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mPrimaryCamera
	Camera_t3533968274 * ___mPrimaryCamera_12;
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mSecondaryCamera
	Camera_t3533968274 * ___mSecondaryCamera_13;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_14;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_15;
	// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_16;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_17;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_18;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedVirtualFoV
	float ___mLastAppliedVirtualFoV_19;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewNearClipPlane
	float ___mNewNearClipPlane_20;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewFarClipPlane
	float ___mNewFarClipPlane_21;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewVirtualFoV
	float ___mNewVirtualFoV_22;
	// Vuforia.EyewearDevice Vuforia.DedicatedEyewearCameraConfiguration::mEyewearDevice
	EyewearDevice_t3209895068 * ___mEyewearDevice_23;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_12() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mPrimaryCamera_12)); }
	inline Camera_t3533968274 * get_mPrimaryCamera_12() const { return ___mPrimaryCamera_12; }
	inline Camera_t3533968274 ** get_address_of_mPrimaryCamera_12() { return &___mPrimaryCamera_12; }
	inline void set_mPrimaryCamera_12(Camera_t3533968274 * value)
	{
		___mPrimaryCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_12, value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_13() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mSecondaryCamera_13)); }
	inline Camera_t3533968274 * get_mSecondaryCamera_13() const { return ___mSecondaryCamera_13; }
	inline Camera_t3533968274 ** get_address_of_mSecondaryCamera_13() { return &___mSecondaryCamera_13; }
	inline void set_mSecondaryCamera_13(Camera_t3533968274 * value)
	{
		___mSecondaryCamera_13 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_13, value);
	}

	inline static int32_t get_offset_of_mScreenWidth_14() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mScreenWidth_14)); }
	inline int32_t get_mScreenWidth_14() const { return ___mScreenWidth_14; }
	inline int32_t* get_address_of_mScreenWidth_14() { return &___mScreenWidth_14; }
	inline void set_mScreenWidth_14(int32_t value)
	{
		___mScreenWidth_14 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_15() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mScreenHeight_15)); }
	inline int32_t get_mScreenHeight_15() const { return ___mScreenHeight_15; }
	inline int32_t* get_address_of_mScreenHeight_15() { return &___mScreenHeight_15; }
	inline void set_mScreenHeight_15(int32_t value)
	{
		___mScreenHeight_15 = value;
	}

	inline static int32_t get_offset_of_mNeedToCheckStereo_16() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mNeedToCheckStereo_16)); }
	inline bool get_mNeedToCheckStereo_16() const { return ___mNeedToCheckStereo_16; }
	inline bool* get_address_of_mNeedToCheckStereo_16() { return &___mNeedToCheckStereo_16; }
	inline void set_mNeedToCheckStereo_16(bool value)
	{
		___mNeedToCheckStereo_16 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_17() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mLastAppliedNearClipPlane_17)); }
	inline float get_mLastAppliedNearClipPlane_17() const { return ___mLastAppliedNearClipPlane_17; }
	inline float* get_address_of_mLastAppliedNearClipPlane_17() { return &___mLastAppliedNearClipPlane_17; }
	inline void set_mLastAppliedNearClipPlane_17(float value)
	{
		___mLastAppliedNearClipPlane_17 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_18() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mLastAppliedFarClipPlane_18)); }
	inline float get_mLastAppliedFarClipPlane_18() const { return ___mLastAppliedFarClipPlane_18; }
	inline float* get_address_of_mLastAppliedFarClipPlane_18() { return &___mLastAppliedFarClipPlane_18; }
	inline void set_mLastAppliedFarClipPlane_18(float value)
	{
		___mLastAppliedFarClipPlane_18 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedVirtualFoV_19() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mLastAppliedVirtualFoV_19)); }
	inline float get_mLastAppliedVirtualFoV_19() const { return ___mLastAppliedVirtualFoV_19; }
	inline float* get_address_of_mLastAppliedVirtualFoV_19() { return &___mLastAppliedVirtualFoV_19; }
	inline void set_mLastAppliedVirtualFoV_19(float value)
	{
		___mLastAppliedVirtualFoV_19 = value;
	}

	inline static int32_t get_offset_of_mNewNearClipPlane_20() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mNewNearClipPlane_20)); }
	inline float get_mNewNearClipPlane_20() const { return ___mNewNearClipPlane_20; }
	inline float* get_address_of_mNewNearClipPlane_20() { return &___mNewNearClipPlane_20; }
	inline void set_mNewNearClipPlane_20(float value)
	{
		___mNewNearClipPlane_20 = value;
	}

	inline static int32_t get_offset_of_mNewFarClipPlane_21() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mNewFarClipPlane_21)); }
	inline float get_mNewFarClipPlane_21() const { return ___mNewFarClipPlane_21; }
	inline float* get_address_of_mNewFarClipPlane_21() { return &___mNewFarClipPlane_21; }
	inline void set_mNewFarClipPlane_21(float value)
	{
		___mNewFarClipPlane_21 = value;
	}

	inline static int32_t get_offset_of_mNewVirtualFoV_22() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mNewVirtualFoV_22)); }
	inline float get_mNewVirtualFoV_22() const { return ___mNewVirtualFoV_22; }
	inline float* get_address_of_mNewVirtualFoV_22() { return &___mNewVirtualFoV_22; }
	inline void set_mNewVirtualFoV_22(float value)
	{
		___mNewVirtualFoV_22 = value;
	}

	inline static int32_t get_offset_of_mEyewearDevice_23() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t1344567494, ___mEyewearDevice_23)); }
	inline EyewearDevice_t3209895068 * get_mEyewearDevice_23() const { return ___mEyewearDevice_23; }
	inline EyewearDevice_t3209895068 ** get_address_of_mEyewearDevice_23() { return &___mEyewearDevice_23; }
	inline void set_mEyewearDevice_23(EyewearDevice_t3209895068 * value)
	{
		___mEyewearDevice_23 = value;
		Il2CppCodeGenWriteBarrier(&___mEyewearDevice_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
