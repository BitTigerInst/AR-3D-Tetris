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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t2999658851;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t892409423;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void SurfaceImpl__ctor_m3425646059 (SurfaceImpl_t2999658851 * __this, int32_t ___id0, Il2CppObject * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C"  void SurfaceImpl_SetID_m652978983 (SurfaceImpl_t2999658851 * __this, int32_t ___trackableID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C"  void SurfaceImpl_SetMesh_m3984958716 (SurfaceImpl_t2999658851 * __this, int32_t ___meshRev0, Mesh_t1525280346 * ___mesh1, Mesh_t1525280346 * ___navMesh2, Int32U5BU5D_t1809983122* ___meshBoundaries3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C"  void SurfaceImpl_SetBoundingBox_m3169987635 (SurfaceImpl_t2999658851 * __this, Rect_t1525428817  ___boundingBox0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C"  Mesh_t1525280346 * SurfaceImpl_GetNavMesh_m1818929516 (SurfaceImpl_t2999658851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C"  Int32U5BU5D_t1809983122* SurfaceImpl_GetMeshBoundaries_m3370102350 (SurfaceImpl_t2999658851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C"  Rect_t1525428817  SurfaceImpl_get_BoundingBox_m449936631 (SurfaceImpl_t2999658851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C"  float SurfaceImpl_GetArea_m2063500008 (SurfaceImpl_t2999658851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
