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

// Vuforia.StencilHideExcessAreaClipping
struct StencilHideExcessAreaClipping_t401016120;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t3998140498;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"

// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C"  GameObject_t4012695102 * StencilHideExcessAreaClipping_CreateQuad_m1357798536 (StencilHideExcessAreaClipping_t401016120 * __this, GameObject_t4012695102 * ___parent0, String_t* ___name1, Vector3_t3525329789  ___position2, Quaternion_t1891715979  ___rotation3, Vector3_t3525329789  ___scale4, int32_t ___layer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::HasCalculationDataChanged()
extern "C"  bool StencilHideExcessAreaClipping_HasCalculationDataChanged_m797995377 (StencilHideExcessAreaClipping_t401016120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C"  void StencilHideExcessAreaClipping__ctor_m88523436 (StencilHideExcessAreaClipping_t401016120 * __this, GameObject_t4012695102 * ___gameObject0, Shader_t3998140498 * ___matteShader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C"  void StencilHideExcessAreaClipping_SetPlanesRenderingActive_m825268558 (StencilHideExcessAreaClipping_t401016120 * __this, bool ___activeflag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C"  bool StencilHideExcessAreaClipping_IsPlanesRenderingActive_m303678439 (StencilHideExcessAreaClipping_t401016120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPreCull()
extern "C"  void StencilHideExcessAreaClipping_OnPreCull_m3192938106 (StencilHideExcessAreaClipping_t401016120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPostRender()
extern "C"  void StencilHideExcessAreaClipping_OnPostRender_m1775310675 (StencilHideExcessAreaClipping_t401016120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Start()
extern "C"  void StencilHideExcessAreaClipping_Start_m654464390 (StencilHideExcessAreaClipping_t401016120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDestroy()
extern "C"  void StencilHideExcessAreaClipping_OnDestroy_m3166166655 (StencilHideExcessAreaClipping_t401016120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C"  void StencilHideExcessAreaClipping_Update_m449879346 (StencilHideExcessAreaClipping_t401016120 * __this, Vector3_t3525329789  ___planeOffset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
