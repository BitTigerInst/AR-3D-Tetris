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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t2427445838;
// Vuforia.Trackable
struct Trackable_t1174201883;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t2602716514;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C"  int32_t TrackableBehaviour_get_CurrentStatus_m1220010064 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C"  Il2CppObject * TrackableBehaviour_get_Trackable_m164939878 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m2597268552 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Vuforia.TrackableBehaviour::get_TimeStamp()
extern "C"  double TrackableBehaviour_get_TimeStamp_m1755866542 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::set_TimeStamp(System.Double)
extern "C"  void TrackableBehaviour_set_TimeStamp_m1820909477 (TrackableBehaviour_t2427445838 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m1526298110 (TrackableBehaviour_t2427445838 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m4062845907 (TrackableBehaviour_t2427445838 * __this, Il2CppObject * ___trackableEventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void TrackableBehaviour_OnTrackerUpdate_m3112331439 (TrackableBehaviour_t2427445838 * __this, int32_t ___newStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void TrackableBehaviour_OnFrameIndexUpdate_m4268592732 (TrackableBehaviour_t2427445838 * __this, int32_t ___newFrameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C"  void TrackableBehaviour_Start_m2188501638 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C"  void TrackableBehaviour_OnDisable_m164522733 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScale()
extern "C"  bool TrackableBehaviour_CorrectScale_m636913840 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::UnregisterTrackable()
extern "C"  void TrackableBehaviour_UnregisterTrackable_m3370327917 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C"  bool TrackableBehaviour_CorrectScaleImpl_m4251279216 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::EnforceUniformScaling()
extern "C"  bool TrackableBehaviour_EnforceUniformScaling_m4137852839 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.TrackableBehaviour::SetScaleFromWidth(System.Single,System.Single)
extern "C"  float TrackableBehaviour_SetScaleFromWidth_m2969168804 (TrackableBehaviour_t2427445838 * __this, float ___width0, float ___aspectRatio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.TrackableBehaviour::SetScaleFromHeight(System.Single,System.Single)
extern "C"  float TrackableBehaviour_SetScaleFromHeight_m2004404045 (TrackableBehaviour_t2427445838 * __this, float ___height0, float ___aspectRatio1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.TrackableBehaviour::SetScale(System.Single,System.Single,System.Single)
extern "C"  float TrackableBehaviour_SetScale_m265160803 (TrackableBehaviour_t2427445838 * __this, float ___length0, float ___aspectRatio11, float ___aspectRatio22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m3241363846 (TrackableBehaviour_t2427445838 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
