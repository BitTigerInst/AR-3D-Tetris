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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t1523661069;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t2482537770;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t2880150149;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t871527606;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_InitS1735211329.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Updat1083332904.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Filter440195419.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Targe3905350710.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C"  void TargetFinderImpl__ctor_m3826560103 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C"  void TargetFinderImpl_Finalize_m132564635 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C"  bool TargetFinderImpl_StartInit_m829099001 (TargetFinderImpl_t1523661069 * __this, String_t* ___userAuth0, String_t* ___secretAuth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C"  int32_t TargetFinderImpl_GetInitState_m1980557134 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C"  bool TargetFinderImpl_Deinit_m3415407488 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C"  bool TargetFinderImpl_StartRecognition_m2429647332 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C"  bool TargetFinderImpl_Stop_m3606795697 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C"  bool TargetFinderImpl_IsRequesting_m444178604 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C"  int32_t TargetFinderImpl_Update_m1035707941 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C"  int32_t TargetFinderImpl_Update_m3291419686 (TargetFinderImpl_t1523661069 * __this, int32_t ___filterMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C"  Il2CppObject* TargetFinderImpl_GetResults_m2868206731 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C"  ImageTargetAbstractBehaviour_t2880150149 * TargetFinderImpl_EnableTracking_m1896926741 (TargetFinderImpl_t1523661069 * __this, TargetSearchResult_t3905350710  ___result0, String_t* ___gameObjectName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t2880150149 * TargetFinderImpl_EnableTracking_m1030718917 (TargetFinderImpl_t1523661069 * __this, TargetSearchResult_t3905350710  ___result0, GameObject_t4012695102 * ___gameObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C"  void TargetFinderImpl_ClearTrackables_m3239354711 (TargetFinderImpl_t1523661069 * __this, bool ___destroyGameObjects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C"  Il2CppObject* TargetFinderImpl_GetImageTargets_m2587103862 (TargetFinderImpl_t1523661069 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
