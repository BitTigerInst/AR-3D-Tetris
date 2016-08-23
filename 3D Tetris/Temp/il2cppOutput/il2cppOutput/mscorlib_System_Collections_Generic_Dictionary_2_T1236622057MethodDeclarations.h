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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>
struct Transform_1_t1236622057;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2486352914.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2690863605_gshared (Transform_1_t1236622057 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2690863605(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1236622057 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2690863605_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m1056289767_gshared (Transform_1_t1236622057 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1056289767(__this, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t1236622057 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1056289767_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3206908742_gshared (Transform_1_t1236622057 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3206908742(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1236622057 *, int32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3206908742_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.TrackableBehaviour/Status,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m2021869123_gshared (Transform_1_t1236622057 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2021869123(__this, ___result0, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t1236622057 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2021869123_gshared)(__this, ___result0, method)
