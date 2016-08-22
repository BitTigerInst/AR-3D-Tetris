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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t35716836;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera)
extern "C"  void MonoCameraConfiguration__ctor_m130471486 (MonoCameraConfiguration_t35716836 * __this, Camera_t3533968274 * ___leftCamera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C"  void MonoCameraConfiguration_ConfigureVideoBackground_m3910487789 (MonoCameraConfiguration_t35716836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool MonoCameraConfiguration_CheckForSurfaceChanges_m697577622 (MonoCameraConfiguration_t35716836 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void MonoCameraConfiguration_UpdateStereoDepth_m1400866851 (MonoCameraConfiguration_t35716836 * __this, Transform_t284553113 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C"  bool MonoCameraConfiguration_IsStereo_m3526193466 (MonoCameraConfiguration_t35716836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m3276191480 (MonoCameraConfiguration_t35716836 * __this, Matrix4x4_t277289660  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void MonoCameraConfiguration_SetSkewFrustum_m1554251223 (MonoCameraConfiguration_t35716836 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection()
extern "C"  void MonoCameraConfiguration_UpdateProjection_m382227042 (MonoCameraConfiguration_t35716836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m1662095709 (MonoCameraConfiguration_t35716836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C"  bool MonoCameraConfiguration_CameraParameterChanged_m2259629000 (MonoCameraConfiguration_t35716836 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
