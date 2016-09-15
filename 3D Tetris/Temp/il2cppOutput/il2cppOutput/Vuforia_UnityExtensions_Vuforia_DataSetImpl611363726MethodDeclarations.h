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

// Vuforia.DataSetImpl
struct DataSetImpl_t611363726;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t4046356239;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t1793464454;
// Vuforia.TrackableSource
struct TrackableSource_t3766919830;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Vuforia.Trackable
struct Trackable_t1174201883;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stora1142306869.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableSource3766919830.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C"  IntPtr_t DataSetImpl_get_DataSetPtr_m702847870 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetImpl::get_Path()
extern "C"  String_t* DataSetImpl_get_Path_m252670271 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::get_FileStorageType()
extern "C"  int32_t DataSetImpl_get_FileStorageType_m1717595796 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::.ctor(System.IntPtr)
extern "C"  void DataSetImpl__ctor_m1079557156 (DataSetImpl_t611363726 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String)
extern "C"  bool DataSetImpl_Load_m217939194 (DataSetImpl_t611363726 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool DataSetImpl_Load_m1715261063 (DataSetImpl_t611363726 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSetImpl::GetTrackables()
extern "C"  Il2CppObject* DataSetImpl_GetTrackables_m2799232375 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,System.String)
extern "C"  DataSetTrackableBehaviour_t1793464454 * DataSetImpl_CreateTrackable_m1140363572 (DataSetImpl_t611363726 * __this, TrackableSource_t3766919830 * ___trackableSource0, String_t* ___gameObjectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C"  DataSetTrackableBehaviour_t1793464454 * DataSetImpl_CreateTrackable_m1148704134 (DataSetImpl_t611363726 * __this, TrackableSource_t3766919830 * ___trackableSource0, GameObject_t4012695102 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Destroy(Vuforia.Trackable,System.Boolean)
extern "C"  bool DataSetImpl_Destroy_m82160766 (DataSetImpl_t611363726 * __this, Il2CppObject * ___trackable0, bool ___destroyGameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::HasReachedTrackableLimit()
extern "C"  bool DataSetImpl_HasReachedTrackableLimit_m1866338992 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Contains(Vuforia.Trackable)
extern "C"  bool DataSetImpl_Contains_m3788224184 (DataSetImpl_t611363726 * __this, Il2CppObject * ___trackable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::DestroyAllTrackables(System.Boolean)
extern "C"  void DataSetImpl_DestroyAllTrackables_m2918725152 (DataSetImpl_t611363726 * __this, bool ___destroyGameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::ExistsImpl(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool DataSetImpl_ExistsImpl_m1331025277 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateImageTargets()
extern "C"  bool DataSetImpl_CreateImageTargets_m2019448677 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateMultiTargets()
extern "C"  bool DataSetImpl_CreateMultiTargets_m693282119 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateCylinderTargets()
extern "C"  bool DataSetImpl_CreateCylinderTargets_m3481844784 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateVuMarkTemplates()
extern "C"  bool DataSetImpl_CreateVuMarkTemplates_m1147414033 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateObjectTargets()
extern "C"  bool DataSetImpl_CreateObjectTargets_m2276778919 (DataSetImpl_t611363726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
