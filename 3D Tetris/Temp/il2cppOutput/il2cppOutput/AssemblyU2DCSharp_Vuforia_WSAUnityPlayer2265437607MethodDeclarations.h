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

// Vuforia.WSAUnityPlayer
struct WSAUnityPlayer_t2265437607;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitE1722238648.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"

// System.Void Vuforia.WSAUnityPlayer::.ctor()
extern "C"  void WSAUnityPlayer__ctor_m2093984094 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::LoadNativeLibraries()
extern "C"  void WSAUnityPlayer_LoadNativeLibraries_m3999867576 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::InitializePlatform()
extern "C"  void WSAUnityPlayer_InitializePlatform_m617154249 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.WSAUnityPlayer::Start(System.String)
extern "C"  int32_t WSAUnityPlayer_Start_m3832918649 (WSAUnityPlayer_t2265437607 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::Update()
extern "C"  void WSAUnityPlayer_Update_m2215859567 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::Dispose()
extern "C"  void WSAUnityPlayer_Dispose_m2172302875 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::OnPause()
extern "C"  void WSAUnityPlayer_OnPause_m2467503443 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::OnResume()
extern "C"  void WSAUnityPlayer_OnResume_m1868749202 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::OnDestroy()
extern "C"  void WSAUnityPlayer_OnDestroy_m1607573335 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::InitializeSurface()
extern "C"  void WSAUnityPlayer_InitializeSurface_m3212671417 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::SetUnityScreenOrientation()
extern "C"  void WSAUnityPlayer_SetUnityScreenOrientation_m2951489677 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.WSAUnityPlayer::GetActualScreenOrientation()
extern "C"  int32_t WSAUnityPlayer_GetActualScreenOrientation_m2851262476 (WSAUnityPlayer_t2265437607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::setPlatFormNative()
extern "C"  void WSAUnityPlayer_setPlatFormNative_m2585429672 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WSAUnityPlayer::initVuforiaWSA(System.String)
extern "C"  int32_t WSAUnityPlayer_initVuforiaWSA_m825364155 (Il2CppObject * __this /* static, unused */, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WSAUnityPlayer::setSurfaceOrientationWSA(System.Int32)
extern "C"  void WSAUnityPlayer_setSurfaceOrientationWSA_m2576672695 (Il2CppObject * __this /* static, unused */, int32_t ___screenOrientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
