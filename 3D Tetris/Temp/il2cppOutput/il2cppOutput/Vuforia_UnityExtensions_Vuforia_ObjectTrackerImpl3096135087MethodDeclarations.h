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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t3096135087;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2343947365;
// Vuforia.TargetFinder
struct TargetFinder_t1976292941;
// Vuforia.DataSet
struct DataSet_t1547874638;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t125061698;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet1547874638.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C"  ImageTargetBuilder_t2343947365 * ObjectTrackerImpl_get_ImageTargetBuilder_m2103646317 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C"  TargetFinder_t1976292941 * ObjectTrackerImpl_get_TargetFinder_m2567935997 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C"  void ObjectTrackerImpl__ctor_m1310261615 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C"  bool ObjectTrackerImpl_Start_m4162438177 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C"  void ObjectTrackerImpl_Stop_m701452663 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C"  DataSet_t1547874638 * ObjectTrackerImpl_CreateDataSet_m3861751600 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C"  bool ObjectTrackerImpl_DestroyDataSet_m1705684856 (ObjectTrackerImpl_t3096135087 * __this, DataSet_t1547874638 * ___dataSet0, bool ___destroyTrackables1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_ActivateDataSet_m3562237090 (ObjectTrackerImpl_t3096135087 * __this, DataSet_t1547874638 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_DeactivateDataSet_m1563794595 (ObjectTrackerImpl_t3096135087 * __this, DataSet_t1547874638 * ___dataSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C"  Il2CppObject* ObjectTrackerImpl_GetActiveDataSets_m3568750844 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C"  Il2CppObject* ObjectTrackerImpl_GetDataSets_m1882917078 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C"  void ObjectTrackerImpl_DestroyAllDataSets_m3423095598 (ObjectTrackerImpl_t3096135087 * __this, bool ___destroyTrackables0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C"  bool ObjectTrackerImpl_PersistExtendedTracking_m1843293434 (ObjectTrackerImpl_t3096135087 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C"  bool ObjectTrackerImpl_ResetExtendedTracking_m125516542 (ObjectTrackerImpl_t3096135087 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
