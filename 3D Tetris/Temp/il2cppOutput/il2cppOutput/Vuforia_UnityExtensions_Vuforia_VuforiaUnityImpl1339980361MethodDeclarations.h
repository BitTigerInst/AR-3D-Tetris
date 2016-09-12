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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Vufori259515849.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"

// System.Void Vuforia.VuforiaUnityImpl::Deinit()
extern "C"  void VuforiaUnityImpl_Deinit_m2728048650 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::IsRendererDirty()
extern "C"  bool VuforiaUnityImpl_IsRendererDirty_m759441116 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C"  bool VuforiaUnityImpl_SetHint_m3788413296 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnityImpl::SetHint(System.UInt32,System.Int32)
extern "C"  bool VuforiaUnityImpl_SetHint_m1421592637 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VuforiaUnityImpl::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t277289660  VuforiaUnityImpl_GetProjectionGL_m2228692855 (Il2CppObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, int32_t ___screenOrientation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::SetApplicationEnvironment()
extern "C"  void VuforiaUnityImpl_SetApplicationEnvironment_m1842864174 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::OnPause()
extern "C"  void VuforiaUnityImpl_OnPause_m1989567328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::OnResume()
extern "C"  void VuforiaUnityImpl_OnResume_m4232598821 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::SetRendererDirty()
extern "C"  void VuforiaUnityImpl_SetRendererDirty_m584315270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaUnityImpl::GetVuforiaLibraryVersion()
extern "C"  String_t* VuforiaUnityImpl_GetVuforiaLibraryVersion_m1582628901 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnityImpl::.cctor()
extern "C"  void VuforiaUnityImpl__cctor_m1099862626 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
