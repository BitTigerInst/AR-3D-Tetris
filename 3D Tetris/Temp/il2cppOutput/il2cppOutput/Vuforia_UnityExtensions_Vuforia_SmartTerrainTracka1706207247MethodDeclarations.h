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

// Vuforia.SmartTerrainTrackableImpl
struct SmartTerrainTrackableImpl_t1706207247;
// System.String
struct String_t;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t892409423;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>
struct IEnumerable_1_t3764563779;
// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_807317499.h"

// System.Void Vuforia.SmartTerrainTrackableImpl::.ctor(System.String,System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl__ctor_m62689667 (SmartTerrainTrackableImpl_t1706207247 * __this, String_t* ___name0, int32_t ___id1, Il2CppObject * ___parent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::get_Children()
extern "C"  Il2CppObject* SmartTerrainTrackableImpl_get_Children_m587683268 (SmartTerrainTrackableImpl_t1706207247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.SmartTerrainTrackableImpl::get_MeshRevision()
extern "C"  int32_t SmartTerrainTrackableImpl_get_MeshRevision_m1149308026 (SmartTerrainTrackableImpl_t1706207247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::get_Parent()
extern "C"  Il2CppObject * SmartTerrainTrackableImpl_get_Parent_m1137449154 (SmartTerrainTrackableImpl_t1706207247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::set_Parent(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_set_Parent_m2587264681 (SmartTerrainTrackableImpl_t1706207247 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::GetMesh()
extern "C"  Mesh_t1525280346 * SmartTerrainTrackableImpl_GetMesh_m2553516967 (SmartTerrainTrackableImpl_t1706207247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.SmartTerrainTrackableImpl::get_LocalPosition()
extern "C"  Vector3_t3525329789  SmartTerrainTrackableImpl_get_LocalPosition_m1064778738 (SmartTerrainTrackableImpl_t1706207247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::SetLocalPose(Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void SmartTerrainTrackableImpl_SetLocalPose_m1515154928 (SmartTerrainTrackableImpl_t1706207247 * __this, PoseData_t807317499  ___localPose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::DestroyMesh()
extern "C"  void SmartTerrainTrackableImpl_DestroyMesh_m439001460 (SmartTerrainTrackableImpl_t1706207247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::AddChild(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_AddChild_m672752981 (SmartTerrainTrackableImpl_t1706207247 * __this, Il2CppObject * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::RemoveChild(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_RemoveChild_m2011997152 (SmartTerrainTrackableImpl_t1706207247 * __this, Il2CppObject * ___removedChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
