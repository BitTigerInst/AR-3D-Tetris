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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>
struct Transform_1_t1221029018;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21102353480.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1123011399.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1144553620_gshared (Transform_1_t1221029018 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1144553620(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1221029018 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1144553620_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1102353480  Transform_1_Invoke_m3560777828_gshared (Transform_1_t1221029018 * __this, int32_t ___key0, VirtualButtonData_t1123011399  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3560777828(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1102353480  (*) (Transform_1_t1221029018 *, int32_t, VirtualButtonData_t1123011399 , const MethodInfo*))Transform_1_Invoke_m3560777828_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m213156111_gshared (Transform_1_t1221029018 * __this, int32_t ___key0, VirtualButtonData_t1123011399  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m213156111(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1221029018 *, int32_t, VirtualButtonData_t1123011399 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m213156111_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1102353480  Transform_1_EndInvoke_m3783856550_gshared (Transform_1_t1221029018 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3783856550(__this, ___result0, method) ((  KeyValuePair_2_t1102353480  (*) (Transform_1_t1221029018 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3783856550_gshared)(__this, ___result0, method)
