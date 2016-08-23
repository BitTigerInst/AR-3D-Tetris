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

// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3374395064;
struct AsyncOperation_t3374395064_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t3878351788 * Resources_Load_m2187391845 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t3878351788 * Resources_Load_m3601699608 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C"  AsyncOperation_t3374395064 * Resources_UnloadUnusedAssets_m3831138427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
