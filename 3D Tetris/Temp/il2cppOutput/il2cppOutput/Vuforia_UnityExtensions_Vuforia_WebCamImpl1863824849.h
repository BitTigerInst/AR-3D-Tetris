#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera[]
struct CameraU5BU5D_t458432999;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t1767179727;
// Vuforia.TextureRenderer
struct TextureRenderer_t3221472244;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "mscorlib_System_Object837106420.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video4206825832.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid267285774.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1845074131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamImpl
struct  WebCamImpl_t1863824849  : public Il2CppObject
{
public:
	// UnityEngine.Camera[] Vuforia.WebCamImpl::mARCameras
	CameraU5BU5D_t458432999* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCamImpl::mOriginalCameraCullMask
	Int32U5BU5D_t1809983122* ___mOriginalCameraCullMask_1;
	// Vuforia.WebCamTexAdaptor Vuforia.WebCamImpl::mWebCamTexture
	WebCamTexAdaptor_t1767179727 * ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::mVideoModeData
	VideoModeData_t4206825832  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::mVideoTextureInfo
	VideoTextureInfo_t267285774  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCamImpl::mTextureRenderer
	TextureRenderer_t3221472244 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCamImpl::mBufferReadTexture
	Texture2D_t2509538522 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCamImpl::mReadPixelsRect
	Rect_t1525428817  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamImpl::mWebCamProfile
	ProfileData_t1845074131  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCamImpl::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCamImpl::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCamImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCamImpl::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCamImpl::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCamImpl::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_mARCameras_0() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mARCameras_0)); }
	inline CameraU5BU5D_t458432999* get_mARCameras_0() const { return ___mARCameras_0; }
	inline CameraU5BU5D_t458432999** get_address_of_mARCameras_0() { return &___mARCameras_0; }
	inline void set_mARCameras_0(CameraU5BU5D_t458432999* value)
	{
		___mARCameras_0 = value;
		Il2CppCodeGenWriteBarrier(&___mARCameras_0, value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_1() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mOriginalCameraCullMask_1)); }
	inline Int32U5BU5D_t1809983122* get_mOriginalCameraCullMask_1() const { return ___mOriginalCameraCullMask_1; }
	inline Int32U5BU5D_t1809983122** get_address_of_mOriginalCameraCullMask_1() { return &___mOriginalCameraCullMask_1; }
	inline void set_mOriginalCameraCullMask_1(Int32U5BU5D_t1809983122* value)
	{
		___mOriginalCameraCullMask_1 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginalCameraCullMask_1, value);
	}

	inline static int32_t get_offset_of_mWebCamTexture_2() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mWebCamTexture_2)); }
	inline WebCamTexAdaptor_t1767179727 * get_mWebCamTexture_2() const { return ___mWebCamTexture_2; }
	inline WebCamTexAdaptor_t1767179727 ** get_address_of_mWebCamTexture_2() { return &___mWebCamTexture_2; }
	inline void set_mWebCamTexture_2(WebCamTexAdaptor_t1767179727 * value)
	{
		___mWebCamTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWebCamTexture_2, value);
	}

	inline static int32_t get_offset_of_mVideoModeData_3() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mVideoModeData_3)); }
	inline VideoModeData_t4206825832  get_mVideoModeData_3() const { return ___mVideoModeData_3; }
	inline VideoModeData_t4206825832 * get_address_of_mVideoModeData_3() { return &___mVideoModeData_3; }
	inline void set_mVideoModeData_3(VideoModeData_t4206825832  value)
	{
		___mVideoModeData_3 = value;
	}

	inline static int32_t get_offset_of_mVideoTextureInfo_4() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mVideoTextureInfo_4)); }
	inline VideoTextureInfo_t267285774  get_mVideoTextureInfo_4() const { return ___mVideoTextureInfo_4; }
	inline VideoTextureInfo_t267285774 * get_address_of_mVideoTextureInfo_4() { return &___mVideoTextureInfo_4; }
	inline void set_mVideoTextureInfo_4(VideoTextureInfo_t267285774  value)
	{
		___mVideoTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_5() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mTextureRenderer_5)); }
	inline TextureRenderer_t3221472244 * get_mTextureRenderer_5() const { return ___mTextureRenderer_5; }
	inline TextureRenderer_t3221472244 ** get_address_of_mTextureRenderer_5() { return &___mTextureRenderer_5; }
	inline void set_mTextureRenderer_5(TextureRenderer_t3221472244 * value)
	{
		___mTextureRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTextureRenderer_5, value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_6() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mBufferReadTexture_6)); }
	inline Texture2D_t2509538522 * get_mBufferReadTexture_6() const { return ___mBufferReadTexture_6; }
	inline Texture2D_t2509538522 ** get_address_of_mBufferReadTexture_6() { return &___mBufferReadTexture_6; }
	inline void set_mBufferReadTexture_6(Texture2D_t2509538522 * value)
	{
		___mBufferReadTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___mBufferReadTexture_6, value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_7() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mReadPixelsRect_7)); }
	inline Rect_t1525428817  get_mReadPixelsRect_7() const { return ___mReadPixelsRect_7; }
	inline Rect_t1525428817 * get_address_of_mReadPixelsRect_7() { return &___mReadPixelsRect_7; }
	inline void set_mReadPixelsRect_7(Rect_t1525428817  value)
	{
		___mReadPixelsRect_7 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_8() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mWebCamProfile_8)); }
	inline ProfileData_t1845074131  get_mWebCamProfile_8() const { return ___mWebCamProfile_8; }
	inline ProfileData_t1845074131 * get_address_of_mWebCamProfile_8() { return &___mWebCamProfile_8; }
	inline void set_mWebCamProfile_8(ProfileData_t1845074131  value)
	{
		___mWebCamProfile_8 = value;
	}

	inline static int32_t get_offset_of_mFlipHorizontally_9() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mFlipHorizontally_9)); }
	inline bool get_mFlipHorizontally_9() const { return ___mFlipHorizontally_9; }
	inline bool* get_address_of_mFlipHorizontally_9() { return &___mFlipHorizontally_9; }
	inline void set_mFlipHorizontally_9(bool value)
	{
		___mFlipHorizontally_9 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_10() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mIsDirty_10)); }
	inline bool get_mIsDirty_10() const { return ___mIsDirty_10; }
	inline bool* get_address_of_mIsDirty_10() { return &___mIsDirty_10; }
	inline void set_mIsDirty_10(bool value)
	{
		___mIsDirty_10 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_11() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mLastFrameIdx_11)); }
	inline int32_t get_mLastFrameIdx_11() const { return ___mLastFrameIdx_11; }
	inline int32_t* get_address_of_mLastFrameIdx_11() { return &___mLastFrameIdx_11; }
	inline void set_mLastFrameIdx_11(int32_t value)
	{
		___mLastFrameIdx_11 = value;
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_12() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mRenderTextureLayer_12)); }
	inline int32_t get_mRenderTextureLayer_12() const { return ___mRenderTextureLayer_12; }
	inline int32_t* get_address_of_mRenderTextureLayer_12() { return &___mRenderTextureLayer_12; }
	inline void set_mRenderTextureLayer_12(int32_t value)
	{
		___mRenderTextureLayer_12 = value;
	}

	inline static int32_t get_offset_of_mWebcamPlaying_13() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___mWebcamPlaying_13)); }
	inline bool get_mWebcamPlaying_13() const { return ___mWebcamPlaying_13; }
	inline bool* get_address_of_mWebcamPlaying_13() { return &___mWebcamPlaying_13; }
	inline void set_mWebcamPlaying_13(bool value)
	{
		___mWebcamPlaying_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebCamImpl_t1863824849, ___U3CIsTextureSizeAvailableU3Ek__BackingField_14)); }
	inline bool get_U3CIsTextureSizeAvailableU3Ek__BackingField_14() const { return ___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return &___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline void set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(bool value)
	{
		___U3CIsTextureSizeAvailableU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
