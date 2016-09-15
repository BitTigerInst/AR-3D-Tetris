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

// Vuforia.DedicatedEyewearCameraConfiguration
struct DedicatedEyewearCameraConfiguration_t1344567494;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Vuforia.DedicatedEyewearCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void DedicatedEyewearCameraConfiguration__ctor_m1125978766 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, Camera_t3533968274 * ___leftCamera0, Camera_t3533968274 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::Init()
extern "C"  void DedicatedEyewearCameraConfiguration_Init_m2275763804 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ConfigureVideoBackground()
extern "C"  void DedicatedEyewearCameraConfiguration_ConfigureVideoBackground_m2085257551 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool DedicatedEyewearCameraConfiguration_CheckForSurfaceChanges_m217315064 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateStereoDepth_m3870549765 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, Transform_t284553113 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::IsStereo()
extern "C"  bool DedicatedEyewearCameraConfiguration_IsStereo_m2889368220 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyCorrectedProjectionMatrix_m250203866 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, Matrix4x4_t277289660  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void DedicatedEyewearCameraConfiguration_ResolveVideoBackgroundBehaviours_m287785407 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CameraParameterChanged()
extern "C"  bool DedicatedEyewearCameraConfiguration_CameraParameterChanged_m2398548394 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateProjection()
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateProjection_m532612804 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyMatrix_m1887059901 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, Camera_t3533968274 * ___cam0, Matrix4x4_t277289660  ___inputMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_SetSkewFrustum_m324349753 (DedicatedEyewearCameraConfiguration_t1344567494 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
