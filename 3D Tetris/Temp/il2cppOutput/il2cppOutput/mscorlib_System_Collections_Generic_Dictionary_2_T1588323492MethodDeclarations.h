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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t1588323492;
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
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3232215024.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1125870871_gshared (Transform_1_t1588323492 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1125870871(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1588323492 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1125870871_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m3623346821_gshared (Transform_1_t1588323492 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3623346821(__this, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t1588323492 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3623346821_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1690945380_gshared (Transform_1_t1588323492 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1690945380(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1588323492 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1690945380_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m899442917_gshared (Transform_1_t1588323492 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m899442917(__this, ___result0, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t1588323492 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m899442917_gshared)(__this, ___result0, method)
