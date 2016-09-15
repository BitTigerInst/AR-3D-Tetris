#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.WebCamImpl
struct WebCamImpl_t1863824849;
// UnityEngine.Camera[]
struct CameraU5BU5D_t458432999;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec282528459.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video4206825832.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid267285774.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamImpl_get_DidUpdateThisFrame_m4030324579 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C"  bool WebCamImpl_get_IsPlaying_m2461884746 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C"  int32_t WebCamImpl_get_ActualWidth_m1312422244 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C"  int32_t WebCamImpl_get_ActualHeight_m2534198251 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C"  bool WebCamImpl_get_IsTextureSizeAvailable_m2409999475 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCamImpl_set_IsTextureSizeAvailable_m1477906284 (WebCamImpl_t1863824849 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C"  bool WebCamImpl_get_FlipHorizontally_m1965651450 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C"  Vec2I_t82528459  WebCamImpl_get_ResampledTextureSize_m650702685 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C"  void WebCamImpl_ComputeResampledTextureSize_m1471781933 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C"  void WebCamImpl__ctor_m1358302127 (WebCamImpl_t1863824849 * __this, CameraU5BU5D_t458432999* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C"  void WebCamImpl_StartCamera_m1402035688 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C"  void WebCamImpl_StopCamera_m3295160456 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C"  void WebCamImpl_ResetPlaying_m3807672480 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t1677970742* WebCamImpl_GetPixels32AndBufferFrame_m4011341747 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C"  void WebCamImpl_RenderFrame_m640962185 (WebCamImpl_t1863824849 * __this, int32_t ___frameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C"  VideoModeData_t4206825832  WebCamImpl_GetVideoMode_m1883006628 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t267285774  WebCamImpl_GetVideoTextureInfo_m2959686126 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C"  bool WebCamImpl_IsRendererDirty_m3655792916 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C"  void WebCamImpl_OnDestroy_m2520584156 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C"  void WebCamImpl_Update_m1367882506 (WebCamImpl_t1863824849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
