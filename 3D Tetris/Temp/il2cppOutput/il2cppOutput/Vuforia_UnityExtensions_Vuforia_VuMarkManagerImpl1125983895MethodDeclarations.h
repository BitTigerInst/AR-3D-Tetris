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

// Vuforia.VuMarkManagerImpl
struct VuMarkManagerImpl_t1125983895;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkTarget>
struct IEnumerable_1_t2345855239;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour>
struct IEnumerable_1_t1406035929;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t3768668179;
// System.Action`1<Vuforia.VuMarkTarget>
struct Action_1_t3917120884;
// System.Action`1<Vuforia.VuMarkAbstractBehaviour>
struct Action_1_t2977301574;
// Vuforia.VuforiaManagerImpl/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t1038867134;
// Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2036418093;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.VuMarkAbstractBehaviour
struct VuMarkAbstractBehaviour_t2828848869;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t2427445838;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1251136162;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3068329980;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t4135184539;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkAbstractBeha2828848869.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1679888455.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManagerImpl::GetActiveVuMarks()
extern "C"  Il2CppObject* VuMarkManagerImpl_GetActiveVuMarks_m2029526201 (VuMarkManagerImpl_t1125983895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::GetActiveBehaviours(Vuforia.VuMarkTarget)
extern "C"  Il2CppObject* VuMarkManagerImpl_GetActiveBehaviours_m318694333 (VuMarkManagerImpl_t1125983895 * __this, Il2CppObject * ___vuMark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::GetActiveBehaviours()
extern "C"  Il2CppObject* VuMarkManagerImpl_GetActiveBehaviours_m1639230566 (VuMarkManagerImpl_t1125983895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkAbstractBehaviour> Vuforia.VuMarkManagerImpl::GetAllBehaviours()
extern "C"  Il2CppObject* VuMarkManagerImpl_GetAllBehaviours_m1676353615 (VuMarkManagerImpl_t1125983895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RegisterVuMarkDetectedCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_RegisterVuMarkDetectedCallback_m3327911968 (VuMarkManagerImpl_t1125983895 * __this, Action_1_t3917120884 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UnregisterVuMarkDetectedCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_UnregisterVuMarkDetectedCallback_m3807985703 (VuMarkManagerImpl_t1125983895 * __this, Action_1_t3917120884 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RegisterVuMarkLostCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_RegisterVuMarkLostCallback_m2026662334 (VuMarkManagerImpl_t1125983895 * __this, Action_1_t3917120884 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UnregisterVuMarkLostCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C"  void VuMarkManagerImpl_UnregisterVuMarkLostCallback_m2305613125 (VuMarkManagerImpl_t1125983895 * __this, Action_1_t3917120884 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::RegisterVuMarkBehaviourDetectedCallback(System.Action`1<Vuforia.VuMarkAbstractBehaviour>)
extern "C"  void VuMarkManagerImpl_RegisterVuMarkBehaviourDetectedCallback_m2904781865 (VuMarkManagerImpl_t1125983895 * __this, Action_1_t2977301574 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UnregisterVuMarkBehaviourDetectedCallback(System.Action`1<Vuforia.VuMarkAbstractBehaviour>)
extern "C"  void VuMarkManagerImpl_UnregisterVuMarkBehaviourDetectedCallback_m1171489456 (VuMarkManagerImpl_t1125983895 * __this, Action_1_t2977301574 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateVuMarks(Vuforia.VuforiaManagerImpl/VuMarkTargetData[],Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  void VuMarkManagerImpl_UpdateVuMarks_m4212517884 (VuMarkManagerImpl_t1125983895 * __this, VuMarkTargetDataU5BU5D_t1038867134* ___newVuMarks0, VuMarkTargetResultDataU5BU5D_t2036418093* ___vuMarkResults1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateVuMarkPoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[],System.Int32)
extern "C"  void VuMarkManagerImpl_UpdateVuMarkPoses_m3588565150 (VuMarkManagerImpl_t1125983895 * __this, Transform_t284553113 * ___arCameraTransform0, VuMarkTargetResultDataU5BU5D_t2036418093* ___vuMarkResults1, int32_t ___originTrackableResultId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkManagerImpl::AddTemplateBehaviour(Vuforia.VuMarkAbstractBehaviour)
extern "C"  bool VuMarkManagerImpl_AddTemplateBehaviour_m588638978 (VuMarkManagerImpl_t1125983895 * __this, VuMarkAbstractBehaviour_t2828848869 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkManagerImpl::ContainsVuMarkTemplate(System.Int32)
extern "C"  bool VuMarkManagerImpl_ContainsVuMarkTemplate_m1461146433 (VuMarkManagerImpl_t1125983895 * __this, int32_t ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::ClearBehaviours()
extern "C"  void VuMarkManagerImpl_ClearBehaviours_m1049054824 (VuMarkManagerImpl_t1125983895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::DestroyBehaviourCopies()
extern "C"  void VuMarkManagerImpl_DestroyBehaviourCopies_m1094831347 (VuMarkManagerImpl_t1125983895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkManagerImpl::IsBehaviourMarkedForDeletion(Vuforia.TrackableBehaviour)
extern "C"  bool VuMarkManagerImpl_IsBehaviourMarkedForDeletion_m4110824927 (VuMarkManagerImpl_t1125983895 * __this, TrackableBehaviour_t2427445838 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateNewVuMarks(Vuforia.VuforiaManagerImpl/VuMarkTargetData[])
extern "C"  void VuMarkManagerImpl_UpdateNewVuMarks_m1113942692 (VuMarkManagerImpl_t1125983895 * __this, VuMarkTargetDataU5BU5D_t1038867134* ___newVuMarks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateLostVuMarks(System.Collections.Generic.HashSet`1<System.Int32>)
extern "C"  void VuMarkManagerImpl_UpdateLostVuMarks_m3032560214 (VuMarkManagerImpl_t1125983895 * __this, HashSet_1_t1251136162 * ___trackedIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTarget Vuforia.VuMarkManagerImpl::CreateVuMarkTarget(Vuforia.VuforiaManagerImpl/VuMarkTargetData)
extern "C"  Il2CppObject * VuMarkManagerImpl_CreateVuMarkTarget_m2959590191 (VuMarkManagerImpl_t1125983895 * __this, VuMarkTargetData_t1679888455  ___newVuMark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::CreateOrGetUnusedBehaviour(System.Int32)
extern "C"  VuMarkAbstractBehaviour_t2828848869 * VuMarkManagerImpl_CreateOrGetUnusedBehaviour_m51404654 (VuMarkManagerImpl_t1125983895 * __this, int32_t ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkManagerImpl::GetVuMarkTemplate(System.Int32)
extern "C"  Il2CppObject * VuMarkManagerImpl_GetVuMarkTemplate_m1881843835 (VuMarkManagerImpl_t1125983895 * __this, int32_t ___templateId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::CopyGameObject(Vuforia.VuMarkAbstractBehaviour)
extern "C"  VuMarkAbstractBehaviour_t2828848869 * VuMarkManagerImpl_CopyGameObject_m1671998940 (VuMarkManagerImpl_t1125983895 * __this, VuMarkAbstractBehaviour_t2828848869 * ___bhvr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::MarkBehaviourUntracked(Vuforia.VuMarkAbstractBehaviour)
extern "C"  void VuMarkManagerImpl_MarkBehaviourUntracked_m836440721 (VuMarkManagerImpl_t1125983895 * __this, VuMarkAbstractBehaviour_t2828848869 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::AssociateTargetWithBehaviour(Vuforia.VuMarkTarget,Vuforia.VuMarkAbstractBehaviour)
extern "C"  void VuMarkManagerImpl_AssociateTargetWithBehaviour_m2396762053 (VuMarkManagerImpl_t1125983895 * __this, Il2CppObject * ___vuMark0, VuMarkAbstractBehaviour_t2828848869 * ___bhvr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::UpdateVuMarkResults(Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  void VuMarkManagerImpl_UpdateVuMarkResults_m2021333294 (VuMarkManagerImpl_t1125983895 * __this, VuMarkTargetResultDataU5BU5D_t2036418093* ___vuMarkResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkAbstractBehaviour Vuforia.VuMarkManagerImpl::GetActiveBehaviour(System.Int32,System.Int32)
extern "C"  VuMarkAbstractBehaviour_t2828848869 * VuMarkManagerImpl_GetActiveBehaviour_m195817240 (VuMarkManagerImpl_t1125983895 * __this, int32_t ___targetId0, int32_t ___resultId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTarget Vuforia.VuMarkManagerImpl::GetVuMarkTarget(System.Int32)
extern "C"  Il2CppObject * VuMarkManagerImpl_GetVuMarkTarget_m1599887067 (VuMarkManagerImpl_t1125983895 * __this, int32_t ___targetId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Vuforia.VuMarkManagerImpl::GroupResultsByTargetId(Vuforia.VuforiaManagerImpl/VuMarkTargetResultData[])
extern "C"  Dictionary_2_t4135184539 * VuMarkManagerImpl_GroupResultsByTargetId_m2203083531 (VuMarkManagerImpl_t1125983895 * __this, VuMarkTargetResultDataU5BU5D_t2036418093* ___vuMarkResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkManagerImpl::.ctor()
extern "C"  void VuMarkManagerImpl__ctor_m3157370247 (VuMarkManagerImpl_t1125983895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
