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

// Vuforia.MarkerTrackerImpl
struct MarkerTrackerImpl_t492206548;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1462758039;
// System.String
struct String_t;
// Vuforia.Marker
struct Marker_t737566064;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t3609720420;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Boolean Vuforia.MarkerTrackerImpl::Start()
extern "C"  bool MarkerTrackerImpl_Start_m21391772 (MarkerTrackerImpl_t492206548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::Stop()
extern "C"  void MarkerTrackerImpl_Stop_m3893006492 (MarkerTrackerImpl_t492206548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.MarkerTrackerImpl::CreateMarker(System.Int32,System.String,System.Single)
extern "C"  MarkerAbstractBehaviour_t1462758039 * MarkerTrackerImpl_CreateMarker_m4104555044 (MarkerTrackerImpl_t492206548 * __this, int32_t ___markerID0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerTrackerImpl::DestroyMarker(Vuforia.Marker,System.Boolean)
extern "C"  bool MarkerTrackerImpl_DestroyMarker_m2182932885 (MarkerTrackerImpl_t492206548 * __this, Il2CppObject * ___marker0, bool ___destroyGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker> Vuforia.MarkerTrackerImpl::GetMarkers()
extern "C"  Il2CppObject* MarkerTrackerImpl_GetMarkers_m85309073 (MarkerTrackerImpl_t492206548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::GetMarkerByMarkerID(System.Int32)
extern "C"  Il2CppObject * MarkerTrackerImpl_GetMarkerByMarkerID_m2515052490 (MarkerTrackerImpl_t492206548 * __this, int32_t ___markerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::InternalCreateMarker(System.Int32,System.String,System.Single)
extern "C"  Il2CppObject * MarkerTrackerImpl_InternalCreateMarker_m738137354 (MarkerTrackerImpl_t492206548 * __this, int32_t ___markerID0, String_t* ___name1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::DestroyAllMarkers(System.Boolean)
extern "C"  void MarkerTrackerImpl_DestroyAllMarkers_m1695413041 (MarkerTrackerImpl_t492206548 * __this, bool ___destroyGameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerTrackerImpl::RegisterMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t MarkerTrackerImpl_RegisterMarker_m181167997 (MarkerTrackerImpl_t492206548 * __this, int32_t ___markerID0, String_t* ___trackableName1, float ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::.ctor()
extern "C"  void MarkerTrackerImpl__ctor_m1464182506 (MarkerTrackerImpl_t492206548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
