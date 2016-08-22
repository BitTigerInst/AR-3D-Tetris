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

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t518518778;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionImpl__ctor_m3164033338 (ReconstructionImpl_t518518778 * __this, IntPtr_t ___nativeReconstructionPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C"  IntPtr_t ReconstructionImpl_get_NativePtr_m2885521233 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C"  bool ReconstructionImpl_SetMaximumArea_m1714654892 (ReconstructionImpl_t518518778 * __this, Rect_t1525428817  ___maximumArea0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C"  bool ReconstructionImpl_GetMaximumArea_m2049013396 (ReconstructionImpl_t518518778 * __this, Rect_t1525428817 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C"  bool ReconstructionImpl_Stop_m1356856798 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C"  bool ReconstructionImpl_Start_m3395058408 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C"  bool ReconstructionImpl_IsReconstructing_m3468609028 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C"  void ReconstructionImpl_SetNavMeshPadding_m657919248 (ReconstructionImpl_t518518778 * __this, float ___padding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C"  float ReconstructionImpl_get_NavMeshPadding_m2823305024 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C"  void ReconstructionImpl_StartNavMeshUpdates_m874173748 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C"  void ReconstructionImpl_StopNavMeshUpdates_m3242697606 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C"  bool ReconstructionImpl_IsNavMeshUpdating_m2320583442 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C"  bool ReconstructionImpl_Reset_m2094353557 (ReconstructionImpl_t518518778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
