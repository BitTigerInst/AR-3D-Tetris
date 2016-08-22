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

// System.Void Vuforia.VuforiaUnity::Deinit()
extern "C"  void VuforiaUnity_Deinit_m1573043658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::IsRendererDirty()
extern "C"  bool VuforiaUnity_IsRendererDirty_m480776220 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHint(Vuforia.VuforiaUnity/VuforiaHint,System.Int32)
extern "C"  bool VuforiaUnity_SetHint_m1769961520 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaUnity::SetHint(System.UInt32,System.Int32)
extern "C"  bool VuforiaUnity_SetHint_m3471827325 (Il2CppObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VuforiaUnity::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t277289660  VuforiaUnity_GetProjectionGL_m3643695799 (Il2CppObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, int32_t ___screenOrientation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::OnPause()
extern "C"  void VuforiaUnity_OnPause_m544150944 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::OnResume()
extern "C"  void VuforiaUnity_OnResume_m2374363877 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaUnity::SetRendererDirty()
extern "C"  void VuforiaUnity_SetRendererDirty_m788514630 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaUnity::GetVuforiaLibraryVersion()
extern "C"  String_t* VuforiaUnity_GetVuforiaLibraryVersion_m2640297829 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
