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
// Vuforia.WebCamImpl
struct WebCamImpl_t1863824849;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamAbstractBehaviour
struct  WebCamAbstractBehaviour_t1322977558  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 Vuforia.WebCamAbstractBehaviour::RenderTextureLayer
	int32_t ___RenderTextureLayer_2;
	// System.String Vuforia.WebCamAbstractBehaviour::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_3;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mFlipHorizontally
	bool ___mFlipHorizontally_4;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mTurnOffWebCam
	bool ___mTurnOffWebCam_5;
	// Vuforia.WebCamImpl Vuforia.WebCamAbstractBehaviour::mWebCamImpl
	WebCamImpl_t1863824849 * ___mWebCamImpl_6;
	// UnityEngine.Camera Vuforia.WebCamAbstractBehaviour::mBackgroundCameraInstance
	Camera_t3533968274 * ___mBackgroundCameraInstance_7;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_2() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1322977558, ___RenderTextureLayer_2)); }
	inline int32_t get_RenderTextureLayer_2() const { return ___RenderTextureLayer_2; }
	inline int32_t* get_address_of_RenderTextureLayer_2() { return &___RenderTextureLayer_2; }
	inline void set_RenderTextureLayer_2(int32_t value)
	{
		___RenderTextureLayer_2 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_3() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1322977558, ___mDeviceNameSetInEditor_3)); }
	inline String_t* get_mDeviceNameSetInEditor_3() const { return ___mDeviceNameSetInEditor_3; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_3() { return &___mDeviceNameSetInEditor_3; }
	inline void set_mDeviceNameSetInEditor_3(String_t* value)
	{
		___mDeviceNameSetInEditor_3 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceNameSetInEditor_3, value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_4() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1322977558, ___mFlipHorizontally_4)); }
	inline bool get_mFlipHorizontally_4() const { return ___mFlipHorizontally_4; }
	inline bool* get_address_of_mFlipHorizontally_4() { return &___mFlipHorizontally_4; }
	inline void set_mFlipHorizontally_4(bool value)
	{
		___mFlipHorizontally_4 = value;
	}

	inline static int32_t get_offset_of_mTurnOffWebCam_5() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1322977558, ___mTurnOffWebCam_5)); }
	inline bool get_mTurnOffWebCam_5() const { return ___mTurnOffWebCam_5; }
	inline bool* get_address_of_mTurnOffWebCam_5() { return &___mTurnOffWebCam_5; }
	inline void set_mTurnOffWebCam_5(bool value)
	{
		___mTurnOffWebCam_5 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_6() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1322977558, ___mWebCamImpl_6)); }
	inline WebCamImpl_t1863824849 * get_mWebCamImpl_6() const { return ___mWebCamImpl_6; }
	inline WebCamImpl_t1863824849 ** get_address_of_mWebCamImpl_6() { return &___mWebCamImpl_6; }
	inline void set_mWebCamImpl_6(WebCamImpl_t1863824849 * value)
	{
		___mWebCamImpl_6 = value;
		Il2CppCodeGenWriteBarrier(&___mWebCamImpl_6, value);
	}

	inline static int32_t get_offset_of_mBackgroundCameraInstance_7() { return static_cast<int32_t>(offsetof(WebCamAbstractBehaviour_t1322977558, ___mBackgroundCameraInstance_7)); }
	inline Camera_t3533968274 * get_mBackgroundCameraInstance_7() const { return ___mBackgroundCameraInstance_7; }
	inline Camera_t3533968274 ** get_address_of_mBackgroundCameraInstance_7() { return &___mBackgroundCameraInstance_7; }
	inline void set_mBackgroundCameraInstance_7(Camera_t3533968274 * value)
	{
		___mBackgroundCameraInstance_7 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundCameraInstance_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
