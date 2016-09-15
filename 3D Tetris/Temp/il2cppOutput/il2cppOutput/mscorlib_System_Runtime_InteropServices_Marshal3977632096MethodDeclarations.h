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

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m156400721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
extern "C"  IntPtr_t Marshal_AllocHGlobal_m4158965793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C"  IntPtr_t Marshal_AllocHGlobal_m2766529508 (Il2CppObject * __this /* static, unused */, int32_t ___cb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_copy_to_unmanaged_m1909563134 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___source0, int32_t ___startIndex1, IntPtr_t ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m1711077603 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, int32_t ___startIndex1, Il2CppArray * ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_Copy_m2999277726 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___source0, int32_t ___startIndex1, IntPtr_t ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1690250234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, ByteU5BU5D_t58506160* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1390445676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, CharU5BU5D_t3416858730* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Int32[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1302030046 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, Int32U5BU5D_t1809983122* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m3135186426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, SingleU5BU5D_t1219431280* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C"  void Marshal_FreeHGlobal_m1353395547 (Il2CppObject * __this /* static, unused */, IntPtr_t ___hglobal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringAnsi_m1193920512 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringUni_m1806311251 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C"  Il2CppObject * Marshal_PtrToStructure_m4218753760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, Type_t * ___structureType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m3705434677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr)
extern "C"  int32_t Marshal_ReadInt32_m3089941918 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr,System.Int32)
extern "C"  int32_t Marshal_ReadInt32_m4051757049 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m1295785213 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalUni(System.String)
extern "C"  IntPtr_t Marshal_StringToHGlobalUni_m2198927700 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C"  void Marshal_StructureToPtr_m1569179651 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___structure0, IntPtr_t ___ptr1, bool ___fDeleteOld2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m4239949353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
