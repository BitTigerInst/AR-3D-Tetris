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

// Vuforia.PropImpl
struct PropImpl_t1805668697;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t892409423;
// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo4001652202.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void PropImpl__ctor_m1220119179 (PropImpl_t1805668697 * __this, int32_t ___id0, Il2CppObject * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C"  OrientedBoundingBox3D_t4001652202  PropImpl_get_BoundingBox_m2243121388 (PropImpl_t1805668697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C"  void PropImpl_SetMesh_m1254043081 (PropImpl_t1805668697 * __this, int32_t ___meshRev0, Mesh_t1525280346 * ___mesh1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C"  void PropImpl_SetObb_m193801012 (PropImpl_t1805668697 * __this, OrientedBoundingBox3D_t4001652202  ___obb3D0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
