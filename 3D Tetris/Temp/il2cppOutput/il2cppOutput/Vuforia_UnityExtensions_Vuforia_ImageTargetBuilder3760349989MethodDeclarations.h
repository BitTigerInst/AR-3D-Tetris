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

// Vuforia.ImageTargetBuilderImpl
struct ImageTargetBuilderImpl_t3760349989;
// System.String
struct String_t;
// Vuforia.TrackableSource
struct TrackableSource_t3766919830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder2671902450.h"

// System.Boolean Vuforia.ImageTargetBuilderImpl::Build(System.String,System.Single)
extern "C"  bool ImageTargetBuilderImpl_Build_m2530953758 (ImageTargetBuilderImpl_t3760349989 * __this, String_t* ___targetName0, float ___sceenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StartScan()
extern "C"  void ImageTargetBuilderImpl_StartScan_m2917998188 (ImageTargetBuilderImpl_t3760349989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::StopScan()
extern "C"  void ImageTargetBuilderImpl_StopScan_m867784244 (ImageTargetBuilderImpl_t3760349989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.ImageTargetBuilderImpl::GetFrameQuality()
extern "C"  int32_t ImageTargetBuilderImpl_GetFrameQuality_m2203601832 (ImageTargetBuilderImpl_t3760349989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableSource Vuforia.ImageTargetBuilderImpl::GetTrackableSource()
extern "C"  TrackableSource_t3766919830 * ImageTargetBuilderImpl_GetTrackableSource_m2216021790 (ImageTargetBuilderImpl_t3760349989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetBuilderImpl::IsScanning()
extern "C"  bool ImageTargetBuilderImpl_IsScanning_m2576018370 (ImageTargetBuilderImpl_t3760349989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetBuilderImpl::.ctor()
extern "C"  void ImageTargetBuilderImpl__ctor_m2490545423 (ImageTargetBuilderImpl_t3760349989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
