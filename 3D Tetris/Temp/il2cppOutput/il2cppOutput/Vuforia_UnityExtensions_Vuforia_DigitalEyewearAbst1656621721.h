#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters
struct SerializableViewerParameters_t2033497307;
// UnityEngine.Camera
struct Camera_t3533968274;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t2427322319;
// Vuforia.DistortionRenderingBehaviour
struct DistortionRenderingBehaviour_t28016708;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "Vuforia_UnityExtensions_Vuforia_DistortionRenderin4184246696.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst3956292714.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst1132636358.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearAbstractBehaviour
struct  DigitalEyewearAbstractBehaviour_t1656621721  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_8;
	// UnityEngine.Transform Vuforia.DigitalEyewearAbstractBehaviour::mCentralAnchorPoint
	Transform_t284553113 * ___mCentralAnchorPoint_9;
	// UnityEngine.Transform Vuforia.DigitalEyewearAbstractBehaviour::mParentAnchorPoint
	Transform_t284553113 * ___mParentAnchorPoint_10;
	// Vuforia.DistortionRenderingMode Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingMode
	int32_t ___mDistortionRenderingMode_11;
	// System.Int32 Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_12;
	// Vuforia.DigitalEyewearAbstractBehaviour/EyewearType Vuforia.DigitalEyewearAbstractBehaviour::mEyewearType
	int32_t ___mEyewearType_13;
	// Vuforia.DigitalEyewearAbstractBehaviour/StereoFramework Vuforia.DigitalEyewearAbstractBehaviour::mStereoFramework
	int32_t ___mStereoFramework_14;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour::mViewerName
	String_t* ___mViewerName_15;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour::mViewerManufacturer
	String_t* ___mViewerManufacturer_16;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mUseCustomViewer
	bool ___mUseCustomViewer_17;
	// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters Vuforia.DigitalEyewearAbstractBehaviour::mCustomViewer
	SerializableViewerParameters_t2033497307 * ___mCustomViewer_18;
	// UnityEngine.Camera Vuforia.DigitalEyewearAbstractBehaviour::mPrimaryCamera
	Camera_t3533968274 * ___mPrimaryCamera_19;
	// UnityEngine.Rect Vuforia.DigitalEyewearAbstractBehaviour::mPrimaryCameraOriginalRect
	Rect_t1525428817  ___mPrimaryCameraOriginalRect_20;
	// UnityEngine.Camera Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCamera
	Camera_t3533968274 * ___mSecondaryCamera_21;
	// UnityEngine.Rect Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCameraOriginalRect
	Rect_t1525428817  ___mSecondaryCameraOriginalRect_22;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_23;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.DigitalEyewearAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t2427322319 * ___mVuforiaBehaviour_24;
	// Vuforia.DistortionRenderingBehaviour Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingBhvr
	DistortionRenderingBehaviour_t28016708 * ___mDistortionRenderingBhvr_25;

public:
	inline static int32_t get_offset_of_mCameraOffset_8() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mCameraOffset_8)); }
	inline float get_mCameraOffset_8() const { return ___mCameraOffset_8; }
	inline float* get_address_of_mCameraOffset_8() { return &___mCameraOffset_8; }
	inline void set_mCameraOffset_8(float value)
	{
		___mCameraOffset_8 = value;
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_9() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mCentralAnchorPoint_9)); }
	inline Transform_t284553113 * get_mCentralAnchorPoint_9() const { return ___mCentralAnchorPoint_9; }
	inline Transform_t284553113 ** get_address_of_mCentralAnchorPoint_9() { return &___mCentralAnchorPoint_9; }
	inline void set_mCentralAnchorPoint_9(Transform_t284553113 * value)
	{
		___mCentralAnchorPoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___mCentralAnchorPoint_9, value);
	}

	inline static int32_t get_offset_of_mParentAnchorPoint_10() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mParentAnchorPoint_10)); }
	inline Transform_t284553113 * get_mParentAnchorPoint_10() const { return ___mParentAnchorPoint_10; }
	inline Transform_t284553113 ** get_address_of_mParentAnchorPoint_10() { return &___mParentAnchorPoint_10; }
	inline void set_mParentAnchorPoint_10(Transform_t284553113 * value)
	{
		___mParentAnchorPoint_10 = value;
		Il2CppCodeGenWriteBarrier(&___mParentAnchorPoint_10, value);
	}

	inline static int32_t get_offset_of_mDistortionRenderingMode_11() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mDistortionRenderingMode_11)); }
	inline int32_t get_mDistortionRenderingMode_11() const { return ___mDistortionRenderingMode_11; }
	inline int32_t* get_address_of_mDistortionRenderingMode_11() { return &___mDistortionRenderingMode_11; }
	inline void set_mDistortionRenderingMode_11(int32_t value)
	{
		___mDistortionRenderingMode_11 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mDistortionRenderingLayer_12)); }
	inline int32_t get_mDistortionRenderingLayer_12() const { return ___mDistortionRenderingLayer_12; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_12() { return &___mDistortionRenderingLayer_12; }
	inline void set_mDistortionRenderingLayer_12(int32_t value)
	{
		___mDistortionRenderingLayer_12 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_13() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mEyewearType_13)); }
	inline int32_t get_mEyewearType_13() const { return ___mEyewearType_13; }
	inline int32_t* get_address_of_mEyewearType_13() { return &___mEyewearType_13; }
	inline void set_mEyewearType_13(int32_t value)
	{
		___mEyewearType_13 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_14() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mStereoFramework_14)); }
	inline int32_t get_mStereoFramework_14() const { return ___mStereoFramework_14; }
	inline int32_t* get_address_of_mStereoFramework_14() { return &___mStereoFramework_14; }
	inline void set_mStereoFramework_14(int32_t value)
	{
		___mStereoFramework_14 = value;
	}

	inline static int32_t get_offset_of_mViewerName_15() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mViewerName_15)); }
	inline String_t* get_mViewerName_15() const { return ___mViewerName_15; }
	inline String_t** get_address_of_mViewerName_15() { return &___mViewerName_15; }
	inline void set_mViewerName_15(String_t* value)
	{
		___mViewerName_15 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerName_15, value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_16() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mViewerManufacturer_16)); }
	inline String_t* get_mViewerManufacturer_16() const { return ___mViewerManufacturer_16; }
	inline String_t** get_address_of_mViewerManufacturer_16() { return &___mViewerManufacturer_16; }
	inline void set_mViewerManufacturer_16(String_t* value)
	{
		___mViewerManufacturer_16 = value;
		Il2CppCodeGenWriteBarrier(&___mViewerManufacturer_16, value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_17() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mUseCustomViewer_17)); }
	inline bool get_mUseCustomViewer_17() const { return ___mUseCustomViewer_17; }
	inline bool* get_address_of_mUseCustomViewer_17() { return &___mUseCustomViewer_17; }
	inline void set_mUseCustomViewer_17(bool value)
	{
		___mUseCustomViewer_17 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_18() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mCustomViewer_18)); }
	inline SerializableViewerParameters_t2033497307 * get_mCustomViewer_18() const { return ___mCustomViewer_18; }
	inline SerializableViewerParameters_t2033497307 ** get_address_of_mCustomViewer_18() { return &___mCustomViewer_18; }
	inline void set_mCustomViewer_18(SerializableViewerParameters_t2033497307 * value)
	{
		___mCustomViewer_18 = value;
		Il2CppCodeGenWriteBarrier(&___mCustomViewer_18, value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_19() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mPrimaryCamera_19)); }
	inline Camera_t3533968274 * get_mPrimaryCamera_19() const { return ___mPrimaryCamera_19; }
	inline Camera_t3533968274 ** get_address_of_mPrimaryCamera_19() { return &___mPrimaryCamera_19; }
	inline void set_mPrimaryCamera_19(Camera_t3533968274 * value)
	{
		___mPrimaryCamera_19 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_19, value);
	}

	inline static int32_t get_offset_of_mPrimaryCameraOriginalRect_20() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mPrimaryCameraOriginalRect_20)); }
	inline Rect_t1525428817  get_mPrimaryCameraOriginalRect_20() const { return ___mPrimaryCameraOriginalRect_20; }
	inline Rect_t1525428817 * get_address_of_mPrimaryCameraOriginalRect_20() { return &___mPrimaryCameraOriginalRect_20; }
	inline void set_mPrimaryCameraOriginalRect_20(Rect_t1525428817  value)
	{
		___mPrimaryCameraOriginalRect_20 = value;
	}

	inline static int32_t get_offset_of_mSecondaryCamera_21() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mSecondaryCamera_21)); }
	inline Camera_t3533968274 * get_mSecondaryCamera_21() const { return ___mSecondaryCamera_21; }
	inline Camera_t3533968274 ** get_address_of_mSecondaryCamera_21() { return &___mSecondaryCamera_21; }
	inline void set_mSecondaryCamera_21(Camera_t3533968274 * value)
	{
		___mSecondaryCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_21, value);
	}

	inline static int32_t get_offset_of_mSecondaryCameraOriginalRect_22() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mSecondaryCameraOriginalRect_22)); }
	inline Rect_t1525428817  get_mSecondaryCameraOriginalRect_22() const { return ___mSecondaryCameraOriginalRect_22; }
	inline Rect_t1525428817 * get_address_of_mSecondaryCameraOriginalRect_22() { return &___mSecondaryCameraOriginalRect_22; }
	inline void set_mSecondaryCameraOriginalRect_22(Rect_t1525428817  value)
	{
		___mSecondaryCameraOriginalRect_22 = value;
	}

	inline static int32_t get_offset_of_mSecondaryCameraDisabledLocally_23() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mSecondaryCameraDisabledLocally_23)); }
	inline bool get_mSecondaryCameraDisabledLocally_23() const { return ___mSecondaryCameraDisabledLocally_23; }
	inline bool* get_address_of_mSecondaryCameraDisabledLocally_23() { return &___mSecondaryCameraDisabledLocally_23; }
	inline void set_mSecondaryCameraDisabledLocally_23(bool value)
	{
		___mSecondaryCameraDisabledLocally_23 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_24() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mVuforiaBehaviour_24)); }
	inline VuforiaAbstractBehaviour_t2427322319 * get_mVuforiaBehaviour_24() const { return ___mVuforiaBehaviour_24; }
	inline VuforiaAbstractBehaviour_t2427322319 ** get_address_of_mVuforiaBehaviour_24() { return &___mVuforiaBehaviour_24; }
	inline void set_mVuforiaBehaviour_24(VuforiaAbstractBehaviour_t2427322319 * value)
	{
		___mVuforiaBehaviour_24 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_24, value);
	}

	inline static int32_t get_offset_of_mDistortionRenderingBhvr_25() { return static_cast<int32_t>(offsetof(DigitalEyewearAbstractBehaviour_t1656621721, ___mDistortionRenderingBhvr_25)); }
	inline DistortionRenderingBehaviour_t28016708 * get_mDistortionRenderingBhvr_25() const { return ___mDistortionRenderingBhvr_25; }
	inline DistortionRenderingBehaviour_t28016708 ** get_address_of_mDistortionRenderingBhvr_25() { return &___mDistortionRenderingBhvr_25; }
	inline void set_mDistortionRenderingBhvr_25(DistortionRenderingBehaviour_t28016708 * value)
	{
		___mDistortionRenderingBhvr_25 = value;
		Il2CppCodeGenWriteBarrier(&___mDistortionRenderingBhvr_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
