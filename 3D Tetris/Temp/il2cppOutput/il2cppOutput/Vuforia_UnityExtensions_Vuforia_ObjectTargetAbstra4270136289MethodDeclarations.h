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

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t4270136289;
// Vuforia.ObjectTarget
struct ObjectTarget_t1628866278;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1377534133;
// Vuforia.Trackable
struct Trackable_t1174201883;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C"  void ObjectTargetAbstractBehaviour__ctor_m2769949693 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C"  Il2CppObject * ObjectTargetAbstractBehaviour_get_ObjectTarget_m3816047201 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C"  void ObjectTargetAbstractBehaviour_OnDrawGizmos_m2442000003 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m3135116277 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m3514803431 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m692000342 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Vector3_t3525329789 * ___boundsMin0, Vector3_t3525329789 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m3036105151 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ObjectTargetAbstractBehaviour_SetBoundingBox_m936914112 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Vector3_t3525329789  ___minBBox0, Vector3_t3525329789  ___maxBBox1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C"  Vector3_t3525329789  ObjectTargetAbstractBehaviour_GetSize_m1409366476 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetLength_m2431470216 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetWidth_m2850660192 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetHeight_m622168615 (ObjectTargetAbstractBehaviour_t4270136289 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool ObjectTargetAbstractBehaviour_InitializeTarget_m2498183162 (ObjectTargetAbstractBehaviour_t4270136289 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnValidate()
extern "C"  void ObjectTargetAbstractBehaviour_OnValidate_m2814221308 (ObjectTargetAbstractBehaviour_t4270136289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
