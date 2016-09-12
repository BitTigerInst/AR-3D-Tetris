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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t3736698843;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4108995630.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid267285774.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Fp1015667440.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Rend45746743.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRendererImpl_16348804.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4253260020.h"

// UnityEngine.Texture Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C"  Texture_t1769722184 * VuforiaRendererImpl_get_VideoBackgroundTexture_m3937828173 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C"  VideoBGCfgData_t4108995630  VuforiaRendererImpl_GetVideoBackgroundConfig_m2814355455 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C"  void VuforiaRendererImpl_ClearVideoBackgroundConfig_m509017663 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfig_m1687765126 (VuforiaRendererImpl_t3736698843 * __this, VideoBGCfgData_t4108995630  ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaRendererImpl::createNativeTexture(System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t VuforiaRendererImpl_createNativeTexture_m3972105487 (VuforiaRendererImpl_t3736698843 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture,System.Int32)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexture_m1881419728 (VuforiaRendererImpl_t3736698843 * __this, Texture_t1769722184 * ___texture0, int32_t ___nativeTextureID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexturePtr(UnityEngine.Texture,System.IntPtr)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexturePtr_m3654359475 (VuforiaRendererImpl_t3736698843 * __this, Texture_t1769722184 * ___texture0, IntPtr_t ___nativeTexturePtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C"  bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m1965806571 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t267285774  VuforiaRendererImpl_GetVideoTextureInfo_m2693589276 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C"  void VuforiaRendererImpl_Pause_m4047968846 (VuforiaRendererImpl_t3736698843 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C"  int32_t VuforiaRendererImpl_GetRecommendedFps_m558349319 (VuforiaRendererImpl_t3736698843 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/RendererAPI Vuforia.VuforiaRendererImpl::GetRendererAPI()
extern "C"  int32_t VuforiaRendererImpl_GetRendererAPI_m1985364528 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C"  void VuforiaRendererImpl_UnityRenderEvent_m3471473204 (VuforiaRendererImpl_t3736698843 * __this, int32_t ___renderEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C"  bool VuforiaRendererImpl_HasBackgroundTextureChanged_m3556831924 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m1085124963 (VuforiaRendererImpl_t3736698843 * __this, VideoBGCfgData_t4108995630  ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C"  int32_t VuforiaRendererImpl_GetLastSetReflection_m4136322765 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C"  void VuforiaRendererImpl__ctor_m3794776963 (VuforiaRendererImpl_t3736698843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
