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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t2427322319;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t2427445838;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1870691353;
// System.Action
struct Action_t437523947;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t3415742645;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t248107270;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t2440735710;
// UnityEngine.Camera
struct Camera_t3533968274;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t2914672579;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3547146410.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4253260020.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3616713278.h"
#include "System_Core_System_Action437523947.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C"  int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m1104129865 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C"  TrackableBehaviour_t2427445838 * VuforiaAbstractBehaviour_get_WorldCenter_m884234570 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m2103405996 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C"  int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m4182492467 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C"  bool VuforiaAbstractBehaviour_get_HasStarted_m2071756033 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C"  String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m3260221878 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m2643638837 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_1_t1870691353 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m2821210172 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_1_t1870691353 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m2694289604 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m1078917835 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m4254930167 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m1944883838 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m1165084811 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m835881380 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m1294751575 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_1_t359458046 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m3958042480 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_1_t359458046 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m2535449903 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m3868288502 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m3494331709 (VuforiaAbstractBehaviour_t2427322319 * __this, Il2CppObject * ___trackerEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m160386898 (VuforiaAbstractBehaviour_t2427322319 * __this, Il2CppObject * ___trackerEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m867081460 (VuforiaAbstractBehaviour_t2427322319 * __this, Il2CppObject * ___videoBgEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m2062139913 (VuforiaAbstractBehaviour_t2427322319 * __this, Il2CppObject * ___videoBgEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenterMode_m4026864551 (VuforiaAbstractBehaviour_t2427322319 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenter_m2148009984 (VuforiaAbstractBehaviour_t2427322319 * __this, TrackableBehaviour_t2427445838 * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C"  void VuforiaAbstractBehaviour_SetAppLicenseKey_m728425190 (VuforiaAbstractBehaviour_t2427322319 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetVideoBackgroundRectInViewPort()
extern "C"  Rect_t1525428817  VuforiaAbstractBehaviour_GetVideoBackgroundRectInViewPort_m3459277889 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C"  int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m3807099542 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateState_m399362363 (VuforiaAbstractBehaviour_t2427322319 * __this, bool ___forceUpdate0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m1765308941 (VuforiaAbstractBehaviour_t2427322319 * __this, Matrix4x4_t277289660  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::get_CameraConfiguration()
extern "C"  Il2CppObject * VuforiaAbstractBehaviour_get_CameraConfiguration_m3172335524 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraConfiguration(Vuforia.ICameraConfiguration)
extern "C"  void VuforiaAbstractBehaviour_set_CameraConfiguration_m911453027 (VuforiaAbstractBehaviour_t2427322319 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::InitCameraConfiguration()
extern "C"  void VuforiaAbstractBehaviour_InitCameraConfiguration_m146900964 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C"  void VuforiaAbstractBehaviour_ConfigureVideoBackground_m568953922 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ResetBackgroundPlane_m1971223925 (VuforiaAbstractBehaviour_t2427322319 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m2447460536 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m137414207 (VuforiaAbstractBehaviour_t2427322319 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m2586472906 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m1640168252 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Awake()
extern "C"  void VuforiaAbstractBehaviour_Awake_m3709322824 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C"  void VuforiaAbstractBehaviour_Start_m2418855397 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C"  void VuforiaAbstractBehaviour_OnEnable_m903294081 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_OnApplicationPause_m665307899 (VuforiaAbstractBehaviour_t2427322319 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C"  void VuforiaAbstractBehaviour_OnDisable_m2673249996 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C"  void VuforiaAbstractBehaviour_OnDestroy_m555814750 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C"  void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m2318915116 (VuforiaAbstractBehaviour_t2427322319 * __this, Il2CppObject * ___implementation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateStatePrivate_m1767959500 (VuforiaAbstractBehaviour_t2427322319 * __this, bool ___forceUpdate0, bool ___reapplyOldState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C"  bool VuforiaAbstractBehaviour_StartVuforia_m1937248597 (VuforiaAbstractBehaviour_t2427322319 * __this, bool ___startObjectTracker0, bool ___startMarkerTracker1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C"  bool VuforiaAbstractBehaviour_StopVuforia_m1542637041 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DisableCameraIfNotNeeded()
extern "C"  void VuforiaAbstractBehaviour_DisableCameraIfNotNeeded_m1167231645 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C"  void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m3517163579 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C"  void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m318572871 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_EnableObjectRenderer_m429461377 (VuforiaAbstractBehaviour_t2427322319 * __this, GameObject_t4012695102 * ___go0, bool ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyMissedProjectionMatrices()
extern "C"  void VuforiaAbstractBehaviour_ApplyMissedProjectionMatrices_m3517795285 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C"  void VuforiaAbstractBehaviour__ctor_m3471717605 (VuforiaAbstractBehaviour_t2427322319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
