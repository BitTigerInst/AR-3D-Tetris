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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
struct Transform_1_t3098069682;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1845074131.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1893067827_gshared (Transform_1_t3098069682 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1893067827(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3098069682 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1893067827_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::Invoke(TKey,TValue)
extern "C"  ProfileData_t1845074131  Transform_1_Invoke_m3130369385_gshared (Transform_1_t3098069682 * __this, Il2CppObject * ___key0, ProfileData_t1845074131  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3130369385(__this, ___key0, ___value1, method) ((  ProfileData_t1845074131  (*) (Transform_1_t3098069682 *, Il2CppObject *, ProfileData_t1845074131 , const MethodInfo*))Transform_1_Invoke_m3130369385_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m563499720_gshared (Transform_1_t3098069682 * __this, Il2CppObject * ___key0, ProfileData_t1845074131  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m563499720(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3098069682 *, Il2CppObject *, ProfileData_t1845074131 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m563499720_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::EndInvoke(System.IAsyncResult)
extern "C"  ProfileData_t1845074131  Transform_1_EndInvoke_m4167610241_gshared (Transform_1_t3098069682 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4167610241(__this, ___result0, method) ((  ProfileData_t1845074131  (*) (Transform_1_t3098069682 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4167610241_gshared)(__this, ___result0, method)
