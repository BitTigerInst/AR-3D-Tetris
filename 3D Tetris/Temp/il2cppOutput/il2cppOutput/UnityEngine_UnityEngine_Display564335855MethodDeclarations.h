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

// UnityEngine.Display
struct Display_t564335855;
// System.IntPtr[]
struct IntPtrU5BU5D_t2131596413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_RenderBuffer1942909411.h"

// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m923501527 (Display_t564335855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m3179075037 (Display_t564335855 * __this, IntPtr_t ___nativeDisplay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
extern "C"  void Display__cctor_m2376647350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern "C"  RenderBuffer_t1942909411  Display_get_colorBuffer_m571436881 (Display_t564335855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern "C"  RenderBuffer_t1942909411  Display_get_depthBuffer_m301443761 (Display_t564335855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Display UnityEngine.Display::get_main()
extern "C"  Display_t564335855 * Display_get_main_m2668877991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C"  void Display_RecreateDisplayList_m581883884 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t2131596413* ___nativeDisplay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C"  void Display_FireDisplaysUpdated_m3581134697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C"  void Display_GetRenderingBuffersImpl_m31000264 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativeDisplay0, RenderBuffer_t1942909411 * ___color1, RenderBuffer_t1942909411 * ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
