#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t1438973871;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t4029173993;
// Vuforia.IWebCam
struct IWebCam_t1390295706;

#include "Vuforia_UnityExtensions_Vuforia_CameraDevice1522683665.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3423851962.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3616713278.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video4206825832.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDeviceImpl
struct  CameraDeviceImpl_t2056630225  : public CameraDevice_t1522683665
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::mCameraImages
	Dictionary_2_t1438973871 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDeviceImpl::mForcedCameraFormats
	List_1_t4029173993 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDeviceImpl::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDeviceImpl::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDeviceImpl::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::mVideoModeData
	VideoModeData_t4206825832  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDeviceImpl::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDeviceImpl::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDeviceImpl::mCameraActive
	bool ___mCameraActive_12;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mCameraImages_1)); }
	inline Dictionary_2_t1438973871 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t1438973871 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t1438973871 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier(&___mCameraImages_1, value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mForcedCameraFormats_2)); }
	inline List_1_t4029173993 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t4029173993 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t4029173993 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier(&___mForcedCameraFormats_2, value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mVideoModeData_9)); }
	inline VideoModeData_t4206825832  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t4206825832 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t4206825832  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}
};

struct CameraDeviceImpl_t2056630225_StaticFields
{
public:
	// Vuforia.IWebCam Vuforia.CameraDeviceImpl::mWebCam
	Il2CppObject * ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDeviceImpl_t2056630225_StaticFields, ___mWebCam_3)); }
	inline Il2CppObject * get_mWebCam_3() const { return ___mWebCam_3; }
	inline Il2CppObject ** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(Il2CppObject * value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWebCam_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
