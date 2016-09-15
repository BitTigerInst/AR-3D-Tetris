#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t1123011399 
{
public:
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t1123011399, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t1123011399, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct VirtualButtonData_t1123011399_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___isPressed_1;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct VirtualButtonData_t1123011399_marshaled_com
{
	int32_t ___id_0;
	int32_t ___isPressed_1;
};
#pragma pack(pop, tp)
