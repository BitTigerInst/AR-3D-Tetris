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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t2740816320;
// System.Action
struct Action_t437523947;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t1322977558;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3616713278.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4253260020.h"
#include "System_Core_System_Action437523947.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamAbstractBeha1322977558.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C"  void NullCameraConfiguration_Init_m3999178198 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void NullCameraConfiguration_InitCameraDevice_m3456827712 (NullCameraConfiguration_t2740816320 * __this, int32_t ___cameraDeviceMode0, int32_t ___mirrorVideoBackground1, Action_t437523947 * ___onVideoBackgroundConfigChanged2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C"  void NullCameraConfiguration_ConfigureVideoBackground_m707213257 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C"  void NullCameraConfiguration_UpdatePlayModeParameters_m867822451 (NullCameraConfiguration_t2740816320 * __this, WebCamAbstractBehaviour_t1322977558 * ___webCamBehaviour0, float ___cameraOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool NullCameraConfiguration_CheckForSurfaceChanges_m4276254578 (NullCameraConfiguration_t2740816320 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void NullCameraConfiguration_UpdateStereoDepth_m4088053759 (NullCameraConfiguration_t2740816320 * __this, Transform_t284553113 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C"  bool NullCameraConfiguration_IsStereo_m327455254 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void NullCameraConfiguration_ResetBackgroundPlane_m1568451644 (NullCameraConfiguration_t2740816320 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m27850223 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void NullCameraConfiguration_set_VideoBackgroundMirrored_m2521420302 (NullCameraConfiguration_t2740816320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m1873923284 (NullCameraConfiguration_t2740816320 * __this, Matrix4x4_t277289660  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void NullCameraConfiguration_SetSkewFrustum_m2124290227 (NullCameraConfiguration_t2740816320 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t1525428817  NullCameraConfiguration_get_VideoBackgroundViewportRect_m3080033222 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m967747732 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m2940574117 (NullCameraConfiguration_t2740816320 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetCameraParameterChanged()
extern "C"  void NullCameraConfiguration_SetCameraParameterChanged_m1312883950 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C"  void NullCameraConfiguration__ctor_m922837182 (NullCameraConfiguration_t2740816320 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
