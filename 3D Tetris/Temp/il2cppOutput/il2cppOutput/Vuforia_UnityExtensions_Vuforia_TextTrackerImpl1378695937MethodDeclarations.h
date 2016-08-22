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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t1378695937;
// Vuforia.WordList
struct WordList_t2827786238;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleIntData1378372864.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video4206825832.h"
#include "Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_Up2384658180.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C"  WordList_t2827786238 * TextTrackerImpl_get_WordList_m1802248881 (TextTrackerImpl_t1378695937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C"  bool TextTrackerImpl_Start_m240157903 (TextTrackerImpl_t1378695937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C"  void TextTrackerImpl_Stop_m229906313 (TextTrackerImpl_t1378695937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool TextTrackerImpl_SetRegionOfInterest_m990503106 (TextTrackerImpl_t1378695937 * __this, Rect_t1525428817  ___detectionRegion0, Rect_t1525428817  ___trackingRegion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C"  bool TextTrackerImpl_GetRegionOfInterest_m230577648 (TextTrackerImpl_t1378695937 * __this, Rect_t1525428817 * ___detectionRegion0, Rect_t1525428817 * ___trackingRegion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Rect_t1525428817  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m2330466 (TextTrackerImpl_t1378695937 * __this, RectangleIntData_t1378372864  ___camSpaceRectData0, Rect_t1525428817  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t4206825832  ___videoModeData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C"  int32_t TextTrackerImpl_get_CurrentUpDirection_m194809308 (TextTrackerImpl_t1378695937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C"  void TextTrackerImpl__ctor_m3872193949 (TextTrackerImpl_t1378695937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
