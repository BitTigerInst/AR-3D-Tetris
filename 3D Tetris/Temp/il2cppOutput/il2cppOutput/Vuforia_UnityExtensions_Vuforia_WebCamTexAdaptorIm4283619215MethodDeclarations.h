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

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t4283619215;
// UnityEngine.Texture
struct Texture_t1769722184;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec282528459.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m65760993 (WebCamTexAdaptorImpl_t4283619215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C"  bool WebCamTexAdaptorImpl_get_IsPlaying_m304794636 (WebCamTexAdaptorImpl_t4283619215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C"  Texture_t1769722184 * WebCamTexAdaptorImpl_get_Texture_m2250335110 (WebCamTexAdaptorImpl_t4283619215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void WebCamTexAdaptorImpl__ctor_m3831789841 (WebCamTexAdaptorImpl_t4283619215 * __this, String_t* ___deviceName0, int32_t ___requestedFPS1, Vec2I_t82528459  ___requestedTextureSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C"  void WebCamTexAdaptorImpl_Play_m666699827 (WebCamTexAdaptorImpl_t4283619215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C"  void WebCamTexAdaptorImpl_Stop_m760383873 (WebCamTexAdaptorImpl_t4283619215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::CheckPermissions()
extern "C"  void WebCamTexAdaptorImpl_CheckPermissions_m1681819739 (WebCamTexAdaptorImpl_t4283619215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
