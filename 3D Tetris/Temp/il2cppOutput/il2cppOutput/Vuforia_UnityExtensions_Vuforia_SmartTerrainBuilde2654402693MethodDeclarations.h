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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t2654402693;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t3602705025;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t730550669;
// Vuforia.Reconstruction
struct Reconstruction_t2663977914;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t508243212;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t2891671790;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t2621064288;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_ReconstructionAbstr730550669.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C"  bool SmartTerrainBuilderImpl_Init_m3884027177 (SmartTerrainBuilderImpl_t2654402693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C"  bool SmartTerrainBuilderImpl_Deinit_m698289898 (SmartTerrainBuilderImpl_t2654402693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C"  Il2CppObject* SmartTerrainBuilderImpl_GetReconstructions_m1036765421 (SmartTerrainBuilderImpl_t2654402693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_AddReconstruction_m1210136121 (SmartTerrainBuilderImpl_t2654402693 * __this, ReconstructionAbstractBehaviour_t730550669 * ___reconstructionBehaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_RemoveReconstruction_m2112013766 (SmartTerrainBuilderImpl_t2654402693 * __this, ReconstructionAbstractBehaviour_t730550669 * ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C"  bool SmartTerrainBuilderImpl_DestroyReconstruction_m1879288855 (SmartTerrainBuilderImpl_t2654402693 * __this, Il2CppObject * ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m3061671693 (SmartTerrainBuilderImpl_t2654402693 * __this, SmartTerrainRevisionDataU5BU5D_t508243212* ___smartTerrainRevisions0, SurfaceDataU5BU5D_t2891671790* ___updatedSurfaces1, PropDataU5BU5D_t2621064288* ___updatedProps2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C"  void SmartTerrainBuilderImpl__ctor_m3949445017 (SmartTerrainBuilderImpl_t2654402693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
