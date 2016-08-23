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

// Vuforia.MixedRealityController
struct MixedRealityController_t1021010055;
// Vuforia.IViewerParameters
struct IViewerParameters_t703877403;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_MixedRealityControlle2403779.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst1132636358.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceTr3521081518.h"

// Vuforia.MixedRealityController Vuforia.MixedRealityController::get_Instance()
extern "C"  MixedRealityController_t1021010055 * MixedRealityController_get_Instance_m2508582003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetMode(Vuforia.MixedRealityController/Mode)
extern "C"  void MixedRealityController_SetMode_m1421074253 (MixedRealityController_t1021010055 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerParameters(Vuforia.IViewerParameters)
extern "C"  void MixedRealityController_SetViewerParameters_m3691422224 (MixedRealityController_t1021010055 * __this, Il2CppObject * ___viewerParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::ConfigureForDifferentStereoFramework(Vuforia.DigitalEyewearAbstractBehaviour/StereoFramework,UnityEngine.Transform,UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void MixedRealityController_ConfigureForDifferentStereoFramework_m3364130068 (MixedRealityController_t1021010055 * __this, int32_t ___stereoFramework0, Transform_t284553113 * ___centralAnchorPoint1, Camera_t3533968274 * ___leftCamera2, Camera_t3533968274 * ___RightCamera3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MixedRealityController::get_AutoStopCameraIfNotRequired()
extern "C"  bool MixedRealityController_get_AutoStopCameraIfNotRequired_m2864190639 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::set_AutoStopCameraIfNotRequired(System.Boolean)
extern "C"  void MixedRealityController_set_AutoStopCameraIfNotRequired_m416696164 (MixedRealityController_t1021010055 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::ResolveMembers()
extern "C"  void MixedRealityController_ResolveMembers_m137238660 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetVideoBackgroundEnabled(System.Boolean)
extern "C"  void MixedRealityController_SetVideoBackgroundEnabled_m4176991804 (MixedRealityController_t1021010055 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewer(System.Boolean)
extern "C"  void MixedRealityController_SetViewer_m1295097174 (MixedRealityController_t1021010055 * __this, bool ___viewerPresent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetTargetFPS(System.Boolean)
extern "C"  void MixedRealityController_SetTargetFPS_m3455457348 (MixedRealityController_t1021010055 * __this, bool ___isVR0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StopDeviceTracker()
extern "C"  void MixedRealityController_StopDeviceTracker_m1162371883 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StartDeviceTracker(System.Boolean,Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE)
extern "C"  void MixedRealityController_StartDeviceTracker_m2844113294 (MixedRealityController_t1021010055 * __this, bool ___videoBackground0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StopCameraAndTrackersIfNotRequired()
extern "C"  void MixedRealityController_StopCameraAndTrackersIfNotRequired_m532823489 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::StartCameraAndTrackersIfStopped()
extern "C"  void MixedRealityController_StartCameraAndTrackersIfStopped_m1782390000 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetHandheldAR()
extern "C"  void MixedRealityController_SetHandheldAR_m2765143202 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetRotationalHandheldAR()
extern "C"  void MixedRealityController_SetRotationalHandheldAR_m1405079659 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetHandheldVR()
extern "C"  void MixedRealityController_SetHandheldVR_m2765768813 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerAR()
extern "C"  void MixedRealityController_SetViewerAR_m4278483600 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetRotationalViewerAR()
extern "C"  void MixedRealityController_SetRotationalViewerAR_m554167449 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::SetViewerVR()
extern "C"  void MixedRealityController_SetViewerVR_m4279109211 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::.ctor()
extern "C"  void MixedRealityController__ctor_m530818541 (MixedRealityController_t1021010055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MixedRealityController::.cctor()
extern "C"  void MixedRealityController__cctor_m3088376672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
