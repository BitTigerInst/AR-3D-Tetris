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

// Vuforia.WordListImpl
struct WordListImpl_t3607607870;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Stora1142306869.h"
#include "Vuforia_UnityExtensions_Vuforia_WordFilterMode2162328859.h"

// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C"  bool WordListImpl_LoadWordListFile_m2307897848 (WordListImpl_t3607607870 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadWordListFile_m1533454665 (WordListImpl_t3607607870 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m2013765658 (WordListImpl_t3607607870 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m3903335 (WordListImpl_t3607607870 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C"  bool WordListImpl_AddWord_m481103829 (WordListImpl_t3607607870 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C"  bool WordListImpl_RemoveWord_m318576884 (WordListImpl_t3607607870 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C"  bool WordListImpl_ContainsWord_m2333678393 (WordListImpl_t3607607870 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C"  bool WordListImpl_UnloadAllLists_m330436851 (WordListImpl_t3607607870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C"  int32_t WordListImpl_GetFilterMode_m1305152987 (WordListImpl_t3607607870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C"  bool WordListImpl_SetFilterMode_m2543973710 (WordListImpl_t3607607870 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C"  bool WordListImpl_LoadFilterListFile_m3227039498 (WordListImpl_t3607607870 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadFilterListFile_m3467449975 (WordListImpl_t3607607870 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C"  bool WordListImpl_AddWordToFilterList_m2177311876 (WordListImpl_t3607607870 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C"  bool WordListImpl_RemoveWordFromFilterList_m1852731412 (WordListImpl_t3607607870 * __this, String_t* ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C"  bool WordListImpl_ClearFilterList_m3087649893 (WordListImpl_t3607607870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C"  int32_t WordListImpl_GetFilterListWordCount_m216750291 (WordListImpl_t3607607870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C"  String_t* WordListImpl_GetFilterListWord_m3487467672 (WordListImpl_t3607607870 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordListImpl::.ctor()
extern "C"  void WordListImpl__ctor_m43526102 (WordListImpl_t3607607870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
