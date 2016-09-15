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

// UnityEngine.Mesh
struct Mesh_t1525280346;
// Vuforia.MeshUtils
struct MeshUtils_t2973348794;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3886489431.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "mscorlib_System_IntPtr676692020.h"

// UnityEngine.Mesh Vuforia.MeshUtils::UpdateMesh(Vuforia.VuforiaManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean,System.Boolean)
extern "C"  Mesh_t1525280346 * MeshUtils_UpdateMesh_m2007138526 (Il2CppObject * __this /* static, unused */, MeshData_t3886489431  ___meshData0, Mesh_t1525280346 * ___oldMesh1, bool ___setNormalsUpwards2, bool ___swapYZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyPositions(System.IntPtr,System.Int32,UnityEngine.Mesh,System.Boolean)
extern "C"  void MeshUtils_CopyPositions_m1590742581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___positionsArray0, int32_t ___numVertexValues1, Mesh_t1525280346 * ___mesh2, bool ___swapYZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyNormals(System.IntPtr,System.Int32,UnityEngine.Mesh,System.Boolean)
extern "C"  void MeshUtils_CopyNormals_m3645177399 (Il2CppObject * __this /* static, unused */, IntPtr_t ___normalsArray0, int32_t ___numVertexValues1, Mesh_t1525280346 * ___mesh2, bool ___swapYZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyTexCoords(System.IntPtr,System.Int32,UnityEngine.Mesh)
extern "C"  void MeshUtils_CopyTexCoords_m55301485 (Il2CppObject * __this /* static, unused */, IntPtr_t ___texCoordsArray0, int32_t ___numTexCoordValues1, Mesh_t1525280346 * ___mesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::CopyTriangles(System.IntPtr,System.Int32,UnityEngine.Mesh)
extern "C"  void MeshUtils_CopyTriangles_m2527538919 (Il2CppObject * __this /* static, unused */, IntPtr_t ___triangleIdxArray0, int32_t ___numTriangleIndices1, Mesh_t1525280346 * ___mesh2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MeshUtils::.ctor()
extern "C"  void MeshUtils__ctor_m2953340100 (MeshUtils_t2973348794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
