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

// Vuforia.VuforiaManagerImpl/IdPair
struct  IdPair_t2184759989 
{
public:
	// System.Int32 Vuforia.VuforiaManagerImpl/IdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/IdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(IdPair_t2184759989, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(IdPair_t2184759989, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/IdPair
struct IdPair_t2184759989_marshaled_pinvoke
{
	int32_t ___TrackableId_0;
	int32_t ___ResultId_1;
};
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/IdPair
struct IdPair_t2184759989_marshaled_com
{
	int32_t ___TrackableId_0;
	int32_t ___ResultId_1;
};
