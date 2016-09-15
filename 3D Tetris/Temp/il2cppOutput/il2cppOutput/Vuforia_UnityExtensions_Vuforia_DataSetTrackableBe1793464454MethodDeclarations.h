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

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t1793464454;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t2363955698;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_ReconstructionFrom2363955698.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C"  void DataSetTrackableBehaviour_OnDrawGizmos_m3391848104 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnValidate()
extern "C"  void DataSetTrackableBehaviour_OnValidate_m2180573537 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void DataSetTrackableBehaviour_OnTrackerUpdate_m3064034173 (DataSetTrackableBehaviour_t1793464454 * __this, int32_t ___newStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C"  bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m1247101433 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::SetDefaultOccluderBounds()
extern "C"  void DataSetTrackableBehaviour_SetDefaultOccluderBounds_m1512640441 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::get_DataSetPath()
extern "C"  String_t* DataSetTrackableBehaviour_get_DataSetPath_m1345169645 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::get_DataSetName()
extern "C"  String_t* DataSetTrackableBehaviour_get_DataSetName_m1287699923 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::GetDataSetName(System.String)
extern "C"  String_t* DataSetTrackableBehaviour_GetDataSetName_m1331929580 (Il2CppObject * __this /* static, unused */, String_t* ___datasetPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_ExtendedTracking()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_ExtendedTracking_m2606391637 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_ExtendedTracking(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_ExtendedTracking_m1785827698 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_InitializeSmartTerrain()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_InitializeSmartTerrain_m684748065 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_InitializeSmartTerrain(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_InitializeSmartTerrain_m2106221502 (DataSetTrackableBehaviour_t1793464454 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_ReconstructionToInitialize()
extern "C"  ReconstructionFromTargetAbstractBehaviour_t2363955698 * DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_ReconstructionToInitialize_m3588938851 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_ReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_ReconstructionToInitialize_m36878184 (DataSetTrackableBehaviour_t1793464454 * __this, ReconstructionFromTargetAbstractBehaviour_t2363955698 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C"  Vector3_t3525329789  DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_SmartTerrainOccluderBoundsMin_m1652889565 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_SmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_SmartTerrainOccluderBoundsMin_m3361267210 (DataSetTrackableBehaviour_t1793464454 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C"  Vector3_t3525329789  DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_get_SmartTerrainOccluderBoundsMax_m1652660847 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditDataSetBehaviour.set_SmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditDataSetBehaviour_set_SmartTerrainOccluderBoundsMax_m3087359544 (DataSetTrackableBehaviour_t1793464454 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C"  void DataSetTrackableBehaviour__ctor_m795032440 (DataSetTrackableBehaviour_t1793464454 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
