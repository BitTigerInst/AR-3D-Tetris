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

// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t2828848869;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3068329980;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t3768668179;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1377534133;
// System.Action
struct Action_t437523947;
// Vuforia.Trackable
struct Trackable_t1174201883;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "System_Core_System_Action437523947.h"

// Vuforia.VuMarkTemplate Vuforia.VuMarkAbstractBehaviour::get_VuMarkTemplate()
extern "C"  Il2CppObject * VuMarkAbstractBehaviour_get_VuMarkTemplate_m743052689 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTarget Vuforia.VuMarkAbstractBehaviour::get_VuMarkTarget()
extern "C"  Il2CppObject * VuMarkAbstractBehaviour_get_VuMarkTarget_m2434230015 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::get_Origin()
extern "C"  Vector2_t3525329788  VuMarkAbstractBehaviour_get_Origin_m314534239 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::.ctor()
extern "C"  void VuMarkAbstractBehaviour__ctor_m3267171641 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool VuMarkAbstractBehaviour_CorrectScaleImpl_m4040316857 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void VuMarkAbstractBehaviour_InternalUnregisterTrackable_m1478218019 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void VuMarkAbstractBehaviour_CalculateDefaultOccluderBounds_m351721618 (VuMarkAbstractBehaviour_t2828848869 * __this, Vector3_t3525329789 * ___boundsMin0, Vector3_t3525329789 * ___boundsMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void VuMarkAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m2049428483 (VuMarkAbstractBehaviour_t2828848869 * __this, Il2CppObject * ___reconstructionFromTarget0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuMarkAbstractBehaviour::GetSize()
extern "C"  Vector2_t3525329788  VuMarkAbstractBehaviour_GetSize_m1100928553 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::SetWidth(System.Single)
extern "C"  void VuMarkAbstractBehaviour_SetWidth_m3006965916 (VuMarkAbstractBehaviour_t2828848869 * __this, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::SetHeight(System.Single)
extern "C"  void VuMarkAbstractBehaviour_SetHeight_m1172678763 (VuMarkAbstractBehaviour_t2828848869 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::RegisterVuMarkTargetAssignedCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_RegisterVuMarkTargetAssignedCallback_m1925239967 (VuMarkAbstractBehaviour_t2828848869 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::UnregisterVuMarkTargetAssignedCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_UnregisterVuMarkTargetAssignedCallback_m2370079718 (VuMarkAbstractBehaviour_t2828848869 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::RegisterVuMarkTargetLostCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_RegisterVuMarkTargetLostCallback_m1185740169 (VuMarkAbstractBehaviour_t2828848869 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::UnregisterVuMarkTargetLostCallback(System.Action)
extern "C"  void VuMarkAbstractBehaviour_UnregisterVuMarkTargetLostCallback_m1539663952 (VuMarkAbstractBehaviour_t2828848869 * __this, Action_t437523947 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::UnregisterVuMarkTarget()
extern "C"  void VuMarkAbstractBehaviour_UnregisterVuMarkTarget_m574900580 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::RegisterVuMarkTarget(Vuforia.VuMarkTarget)
extern "C"  void VuMarkAbstractBehaviour_RegisterVuMarkTarget_m233662690 (VuMarkAbstractBehaviour_t2828848869 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkAbstractBehaviour::get_VuMarkResultId()
extern "C"  int32_t VuMarkAbstractBehaviour_get_VuMarkResultId_m796017356 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::set_VuMarkResultId(System.Int32)
extern "C"  void VuMarkAbstractBehaviour_set_VuMarkResultId_m1954477149 (VuMarkAbstractBehaviour_t2828848869 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkAbstractBehaviour::InitializeTarget(Vuforia.Trackable,System.Boolean)
extern "C"  bool VuMarkAbstractBehaviour_InitializeTarget_m3392893886 (VuMarkAbstractBehaviour_t2828848869 * __this, Il2CppObject * ___trackable0, bool ___applyTargetScaleToBehaviour1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkAbstractBehaviour::OnValidate()
extern "C"  void VuMarkAbstractBehaviour_OnValidate_m3006660672 (VuMarkAbstractBehaviour_t2828848869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
