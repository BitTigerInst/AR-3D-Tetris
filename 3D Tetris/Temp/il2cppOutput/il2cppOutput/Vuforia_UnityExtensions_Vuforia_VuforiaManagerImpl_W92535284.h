#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/WordData
#pragma pack(push, tp, 1)
struct  WordData_t92535284 
{
public:
	// System.IntPtr Vuforia.VuforiaManagerImpl/WordData::stringValue
	IntPtr_t ___stringValue_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordData::id
	int32_t ___id_1;
	// UnityEngine.Vector2 Vuforia.VuforiaManagerImpl/WordData::size
	Vector2_t3525329788  ___size_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_stringValue_0() { return static_cast<int32_t>(offsetof(WordData_t92535284, ___stringValue_0)); }
	inline IntPtr_t get_stringValue_0() const { return ___stringValue_0; }
	inline IntPtr_t* get_address_of_stringValue_0() { return &___stringValue_0; }
	inline void set_stringValue_0(IntPtr_t value)
	{
		___stringValue_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WordData_t92535284, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(WordData_t92535284, ___size_2)); }
	inline Vector2_t3525329788  get_size_2() const { return ___size_2; }
	inline Vector2_t3525329788 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_t3525329788  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(WordData_t92535284, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/WordData
#pragma pack(push, tp, 1)
struct WordData_t92535284_marshaled_pinvoke
{
	intptr_t ___stringValue_0;
	int32_t ___id_1;
	Vector2_t3525329788_marshaled_pinvoke ___size_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/WordData
#pragma pack(push, tp, 1)
struct WordData_t92535284_marshaled_com
{
	intptr_t ___stringValue_0;
	int32_t ___id_1;
	Vector2_t3525329788_marshaled_com ___size_2;
	int32_t ___unused_3;
};
#pragma pack(pop, tp)
