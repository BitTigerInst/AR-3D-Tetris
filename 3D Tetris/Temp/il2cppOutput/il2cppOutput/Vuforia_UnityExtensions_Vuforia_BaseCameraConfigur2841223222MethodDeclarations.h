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

// Vuforia.BaseCameraConfiguration
struct BaseCameraConfiguration_t2841223222;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t1953260483;
// System.Action
struct Action_t437523947;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_BackgroundPlaneAbs1953260483.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3616713278.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4253260020.h"
#include "System_Core_System_Action437523947.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void Vuforia.BaseCameraConfiguration::.ctor(Vuforia.BackgroundPlaneAbstractBehaviour)
extern "C"  void BaseCameraConfiguration__ctor_m2064849967 (BaseCameraConfiguration_t2841223222 * __this, BackgroundPlaneAbstractBehaviour_t1953260483 * ___bgpBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void BaseCameraConfiguration_InitCameraDevice_m2258437002 (BaseCameraConfiguration_t2841223222 * __this, int32_t ___cameraDeviceMode0, int32_t ___mirrorVideoBackground1, Action_t437523947 * ___onVideoBackgroundConfigChanged2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::Init()
extern "C"  void BaseCameraConfiguration_Init_m1903156812 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void BaseCameraConfiguration_ResetBackgroundPlane_m3257547314 (BaseCameraConfiguration_t2841223222 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t BaseCameraConfiguration_get_VideoBackgroundMirrored_m669487289 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.BaseCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t1525428817  BaseCameraConfiguration_get_VideoBackgroundViewportRect_m336968080 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::SetCameraParameterChanged()
extern "C"  void BaseCameraConfiguration_SetCameraParameterChanged_m2149304888 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void BaseCameraConfiguration_EnableObjectRenderer_m4003483172 (BaseCameraConfiguration_t2841223222 * __this, GameObject_t4012695102 * ___go0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void BaseCameraConfiguration_ResolveVideoBackgroundBehaviours_m2786029999 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseCameraConfiguration::CameraParameterChanged()
extern "C"  bool BaseCameraConfiguration_CameraParameterChanged_m1869083290 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseCameraConfiguration::IsVideoBackgroundEnabled()
extern "C"  bool BaseCameraConfiguration_IsVideoBackgroundEnabled_m3974125708 (BaseCameraConfiguration_t2841223222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
