#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDeviceImpl/CameraFieldData
struct  CameraFieldData_t1356187135 
{
public:
	// System.String Vuforia.CameraDeviceImpl/CameraFieldData::KeyValue
	String_t* ___KeyValue_0;
	// System.Int32 Vuforia.CameraDeviceImpl/CameraFieldData::DataType
	int32_t ___DataType_1;
	// System.Int32 Vuforia.CameraDeviceImpl/CameraFieldData::Unused
	int32_t ___Unused_2;

public:
	inline static int32_t get_offset_of_KeyValue_0() { return static_cast<int32_t>(offsetof(CameraFieldData_t1356187135, ___KeyValue_0)); }
	inline String_t* get_KeyValue_0() const { return ___KeyValue_0; }
	inline String_t** get_address_of_KeyValue_0() { return &___KeyValue_0; }
	inline void set_KeyValue_0(String_t* value)
	{
		___KeyValue_0 = value;
		Il2CppCodeGenWriteBarrier(&___KeyValue_0, value);
	}

	inline static int32_t get_offset_of_DataType_1() { return static_cast<int32_t>(offsetof(CameraFieldData_t1356187135, ___DataType_1)); }
	inline int32_t get_DataType_1() const { return ___DataType_1; }
	inline int32_t* get_address_of_DataType_1() { return &___DataType_1; }
	inline void set_DataType_1(int32_t value)
	{
		___DataType_1 = value;
	}

	inline static int32_t get_offset_of_Unused_2() { return static_cast<int32_t>(offsetof(CameraFieldData_t1356187135, ___Unused_2)); }
	inline int32_t get_Unused_2() const { return ___Unused_2; }
	inline int32_t* get_address_of_Unused_2() { return &___Unused_2; }
	inline void set_Unused_2(int32_t value)
	{
		___Unused_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.CameraDeviceImpl/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_t1356187135_marshaled_pinvoke
{
	char* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.CameraDeviceImpl/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_t1356187135_marshaled_com
{
	uint16_t* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
