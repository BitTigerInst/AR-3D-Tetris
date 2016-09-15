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

// UnityEngine.WebCamTexture
struct WebCamTexture_t3635181805;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t699707851;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WebCamTexture3635181805.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C"  void WebCamTexture__ctor_m755637529 (WebCamTexture_t3635181805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void WebCamTexture_Internal_CreateWebCamTexture_m384251711 (Il2CppObject * __this /* static, unused */, WebCamTexture_t3635181805 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m2252445503 (WebCamTexture_t3635181805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Play_m3478980075 (Il2CppObject * __this /* static, unused */, WebCamTexture_t3635181805 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m2346129549 (WebCamTexture_t3635181805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Stop_m3733059677 (Il2CppObject * __this /* static, unused */, WebCamTexture_t3635181805 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m1109067512 (WebCamTexture_t3635181805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C"  void WebCamTexture_set_deviceName_m1209257657 (WebCamTexture_t3635181805 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C"  void WebCamTexture_set_requestedFPS_m644257608 (WebCamTexture_t3635181805 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C"  void WebCamTexture_set_requestedWidth_m3687101425 (WebCamTexture_t3635181805 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C"  void WebCamTexture_set_requestedHeight_m3951846656 (WebCamTexture_t3635181805 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t699707851* WebCamTexture_get_devices_m3738445840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C"  bool WebCamTexture_get_didUpdateThisFrame_m2572205429 (WebCamTexture_t3635181805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
