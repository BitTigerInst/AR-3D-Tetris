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

// Vuforia.ViewerParametersList
struct ViewerParametersList_t3857115536;
// System.String
struct String_t;
// Vuforia.IViewerParameters
struct IViewerParameters_t703877403;
// System.Collections.Generic.IEnumerable`1<Vuforia.IViewerParameters>
struct IEnumerable_1_t3576031759;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// Vuforia.ViewerParametersList Vuforia.ViewerParametersList::get_ListForAuthoringTools()
extern "C"  ViewerParametersList_t3857115536 * ViewerParametersList_get_ListForAuthoringTools_m3729641139 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParametersList::.ctor(System.IntPtr)
extern "C"  void ViewerParametersList__ctor_m357677328 (ViewerParametersList_t3857115536 * __this, IntPtr_t ___intPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParametersList::SetSDKFilter(System.String)
extern "C"  void ViewerParametersList_SetSDKFilter_m3479872242 (ViewerParametersList_t3857115536 * __this, String_t* ___filter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ViewerParametersList::Size()
extern "C"  int32_t ViewerParametersList_Size_m2775745037 (ViewerParametersList_t3857115536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.ViewerParametersList::Get(System.Int32)
extern "C"  Il2CppObject * ViewerParametersList_Get_m3360162447 (ViewerParametersList_t3857115536 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.ViewerParametersList::Get(System.String,System.String)
extern "C"  Il2CppObject * ViewerParametersList_Get_m2279942848 (ViewerParametersList_t3857115536 * __this, String_t* ___name0, String_t* ___manufacturer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.IViewerParameters> Vuforia.ViewerParametersList::GetAllViewers()
extern "C"  Il2CppObject* ViewerParametersList_GetAllViewers_m3528598899 (ViewerParametersList_t3857115536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
