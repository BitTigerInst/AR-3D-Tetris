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

// Vuforia.BaseStereoViewerCameraConfiguration
struct  BaseStereoViewerCameraConfiguration_t784120108  : public BaseCameraConfiguration_t2841223222
{
public:
	// UnityEngine.Camera Vuforia.BaseStereoViewerCameraConfiguration::mPrimaryCamera
	Camera_t3533968274 * ___mPrimaryCamera_11;
	// UnityEngine.Camera Vuforia.BaseStereoViewerCameraConfiguration::mSecondaryCamera
	Camera_t3533968274 * ___mSecondaryCamera_12;
	// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::mSkewFrustum
	bool ___mSkewFrustum_13;
	// System.Int32 Vuforia.BaseStereoViewerCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_14;
	// System.Int32 Vuforia.BaseStereoViewerCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_15;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_11() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t784120108, ___mPrimaryCamera_11)); }
	inline Camera_t3533968274 * get_mPrimaryCamera_11() const { return ___mPrimaryCamera_11; }
	inline Camera_t3533968274 ** get_address_of_mPrimaryCamera_11() { return &___mPrimaryCamera_11; }
	inline void set_mPrimaryCamera_11(Camera_t3533968274 * value)
	{
		___mPrimaryCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_11, value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_12() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t784120108, ___mSecondaryCamera_12)); }
	inline Camera_t3533968274 * get_mSecondaryCamera_12() const { return ___mSecondaryCamera_12; }
	inline Camera_t3533968274 ** get_address_of_mSecondaryCamera_12() { return &___mSecondaryCamera_12; }
	inline void set_mSecondaryCamera_12(Camera_t3533968274 * value)
	{
		___mSecondaryCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_12, value);
	}

	inline static int32_t get_offset_of_mSkewFrustum_13() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t784120108, ___mSkewFrustum_13)); }
	inline bool get_mSkewFrustum_13() const { return ___mSkewFrustum_13; }
	inline bool* get_address_of_mSkewFrustum_13() { return &___mSkewFrustum_13; }
	inline void set_mSkewFrustum_13(bool value)
	{
		___mSkewFrustum_13 = value;
	}

	inline static int32_t get_offset_of_mScreenWidth_14() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t784120108, ___mScreenWidth_14)); }
	inline int32_t get_mScreenWidth_14() const { return ___mScreenWidth_14; }
	inline int32_t* get_address_of_mScreenWidth_14() { return &___mScreenWidth_14; }
	inline void set_mScreenWidth_14(int32_t value)
	{
		___mScreenWidth_14 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_15() { return static_cast<int32_t>(offsetof(BaseStereoViewerCameraConfiguration_t784120108, ___mScreenHeight_15)); }
	inline int32_t get_mScreenHeight_15() const { return ___mScreenHeight_15; }
	inline int32_t* get_address_of_mScreenHeight_15() { return &___mScreenHeight_15; }
	inline void set_mScreenHeight_15(int32_t value)
	{
		___mScreenHeight_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
