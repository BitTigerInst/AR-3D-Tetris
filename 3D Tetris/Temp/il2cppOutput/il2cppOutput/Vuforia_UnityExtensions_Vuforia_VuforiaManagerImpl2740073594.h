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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/InstanceIdData
#pragma pack(push, tp, 1)
struct  InstanceIdData_t2740073594 
{
public:
	// System.UInt64 Vuforia.VuforiaManagerImpl/InstanceIdData::numericValue
	uint64_t ___numericValue_0;
	// System.IntPtr Vuforia.VuforiaManagerImpl/InstanceIdData::buffer
	IntPtr_t ___buffer_1;
	// System.IntPtr Vuforia.VuforiaManagerImpl/InstanceIdData::reserved
	IntPtr_t ___reserved_2;
	// System.UInt32 Vuforia.VuforiaManagerImpl/InstanceIdData::dataLength
	uint32_t ___dataLength_3;
	// System.Int32 Vuforia.VuforiaManagerImpl/InstanceIdData::dataType
	int32_t ___dataType_4;

public:
	inline static int32_t get_offset_of_numericValue_0() { return static_cast<int32_t>(offsetof(InstanceIdData_t2740073594, ___numericValue_0)); }
	inline uint64_t get_numericValue_0() const { return ___numericValue_0; }
	inline uint64_t* get_address_of_numericValue_0() { return &___numericValue_0; }
	inline void set_numericValue_0(uint64_t value)
	{
		___numericValue_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(InstanceIdData_t2740073594, ___buffer_1)); }
	inline IntPtr_t get_buffer_1() const { return ___buffer_1; }
	inline IntPtr_t* get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(IntPtr_t value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(InstanceIdData_t2740073594, ___reserved_2)); }
	inline IntPtr_t get_reserved_2() const { return ___reserved_2; }
	inline IntPtr_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(IntPtr_t value)
	{
		___reserved_2 = value;
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdData_t2740073594, ___dataLength_3)); }
	inline uint32_t get_dataLength_3() const { return ___dataLength_3; }
	inline uint32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(uint32_t value)
	{
		___dataLength_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(InstanceIdData_t2740073594, ___dataType_4)); }
	inline int32_t get_dataType_4() const { return ___dataType_4; }
	inline int32_t* get_address_of_dataType_4() { return &___dataType_4; }
	inline void set_dataType_4(int32_t value)
	{
		___dataType_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/InstanceIdData
#pragma pack(push, tp, 1)
struct InstanceIdData_t2740073594_marshaled_pinvoke
{
	uint64_t ___numericValue_0;
	intptr_t ___buffer_1;
	intptr_t ___reserved_2;
	uint32_t ___dataLength_3;
	int32_t ___dataType_4;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/InstanceIdData
#pragma pack(push, tp, 1)
struct InstanceIdData_t2740073594_marshaled_com
{
	uint64_t ___numericValue_0;
	intptr_t ___buffer_1;
	intptr_t ___reserved_2;
	uint32_t ___dataLength_3;
	int32_t ___dataType_4;
};
#pragma pack(pop, tp)
