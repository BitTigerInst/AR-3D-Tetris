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

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t10167658;
// Vuforia.CylinderTarget
struct CylinderTarget_t3460838973;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1377534133;
// Vuforia.Trackable
struct Trackable_t1174201883;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C"  Il2CppObject * CylinderTargetAbstractBehaviour_get_CylinderTarget_m101371096 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C"  float CylinderTargetAbstractBehaviour_get_SideLength_m2844581834 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_TopDiameter_m367556631 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_BottomDiameter_m356456389 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetSideLength_m2699342216 (CylinderTargetAbstractBehaviour_t10167658 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetTopDiameter_m2372041837 (CylinderTargetAbstractBehaviour_t10167658 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m3179314669 (CylinderTargetAbstractBehaviour_t10167658 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m803441742 (CylinderTargetAbstractBehaviour_t10167658 * __this, int32_t ___newFrameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m3559612606 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m1409299710 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1033445357 (CylinderTargetAbstractBehaviour_t10167658 * __this, Vector3_t3525329789 * ___boundsMin0, Vector3_t3525329789 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m398628936 (CylinderTargetAbstractBehaviour_t10167658 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool CylinderTargetAbstractBehaviour_InitializeTarget_m342304963 (CylinderTargetAbstractBehaviour_t10167658 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C"  float CylinderTargetAbstractBehaviour_GetScale_m1950537336 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetScale_m246521573 (CylinderTargetAbstractBehaviour_t10167658 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C"  void CylinderTargetAbstractBehaviour_ApplyScale_m699935103 (CylinderTargetAbstractBehaviour_t10167658 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnValidate()
extern "C"  void CylinderTargetAbstractBehaviour_OnValidate_m1566334725 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C"  void CylinderTargetAbstractBehaviour__ctor_m1041092436 (CylinderTargetAbstractBehaviour_t10167658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
