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

// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3908005046;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t3096477957;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "System_Core_System_Action437523947.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_807317499.h"

// System.Void Vuforia.DeviceTrackingManager::RecenterPose(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void DeviceTrackingManager_RecenterPose_m4061326267 (DeviceTrackingManager_t3908005046 * __this, Transform_t284553113 * ___cameraTransform0, Vector3_t3525329789  ___modelCorrectionTransform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UpdateCamera(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C"  void DeviceTrackingManager_UpdateCamera_m4018074714 (DeviceTrackingManager_t3908005046 * __this, Transform_t284553113 * ___cameraTransform0, TrackableResultDataU5BU5D_t3096477957* ___trackableResultDataArray1, int32_t ___deviceTrackableID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::RegisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackingManager_RegisterBeforeDevicePoseUpdateCallback_m2828372522 (DeviceTrackingManager_t3908005046 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UnregisterBeforeDevicePoseUpdateCallback(System.Action)
extern "C"  void DeviceTrackingManager_UnregisterBeforeDevicePoseUpdateCallback_m1777447921 (DeviceTrackingManager_t3908005046 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::RegisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackingManager_RegisterDevicePoseUpdatedCallback_m1646535521 (DeviceTrackingManager_t3908005046 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::UnregisterDevicePoseUpdatedCallback(System.Action)
extern "C"  void DeviceTrackingManager_UnregisterDevicePoseUpdatedCallback_m665368890 (DeviceTrackingManager_t3908005046 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::PositionCamera(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void DeviceTrackingManager_PositionCamera_m527299058 (DeviceTrackingManager_t3908005046 * __this, Vector3_t3525329789  ___localRefPosition0, Quaternion_t1891715979  ___localRefRotation1, Transform_t284553113 * ___cameraTransform2, PoseData_t807317499  ___camToTargetPose3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DeviceTrackingManager::.ctor()
extern "C"  void DeviceTrackingManager__ctor_m3101136840 (DeviceTrackingManager_t3908005046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
