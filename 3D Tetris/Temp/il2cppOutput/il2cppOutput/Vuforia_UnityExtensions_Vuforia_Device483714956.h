#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Device
struct Device_t483714956;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device
struct  Device_t483714956  : public Il2CppObject
{
public:

public:
};

struct Device_t483714956_StaticFields
{
public:
	// Vuforia.Device Vuforia.Device::mInstance
	Device_t483714956 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(Device_t483714956_StaticFields, ___mInstance_0)); }
	inline Device_t483714956 * get_mInstance_0() const { return ___mInstance_0; }
	inline Device_t483714956 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(Device_t483714956 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
