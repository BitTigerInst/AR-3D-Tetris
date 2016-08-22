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
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetSearchResult
struct  TargetSearchResult_t3905350710 
{
public:
	// System.String Vuforia.TargetFinder/TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder/TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.Single Vuforia.TargetFinder/TargetSearchResult::TargetSize
	float ___TargetSize_2;
	// System.String Vuforia.TargetFinder/TargetSearchResult::MetaData
	String_t* ___MetaData_3;
	// System.Byte Vuforia.TargetFinder/TargetSearchResult::TrackingRating
	uint8_t ___TrackingRating_4;
	// System.IntPtr Vuforia.TargetFinder/TargetSearchResult::TargetSearchResultPtr
	IntPtr_t ___TargetSearchResultPtr_5;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3905350710, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier(&___TargetName_0, value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3905350710, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier(&___UniqueTargetId_1, value);
	}

	inline static int32_t get_offset_of_TargetSize_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3905350710, ___TargetSize_2)); }
	inline float get_TargetSize_2() const { return ___TargetSize_2; }
	inline float* get_address_of_TargetSize_2() { return &___TargetSize_2; }
	inline void set_TargetSize_2(float value)
	{
		___TargetSize_2 = value;
	}

	inline static int32_t get_offset_of_MetaData_3() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3905350710, ___MetaData_3)); }
	inline String_t* get_MetaData_3() const { return ___MetaData_3; }
	inline String_t** get_address_of_MetaData_3() { return &___MetaData_3; }
	inline void set_MetaData_3(String_t* value)
	{
		___MetaData_3 = value;
		Il2CppCodeGenWriteBarrier(&___MetaData_3, value);
	}

	inline static int32_t get_offset_of_TrackingRating_4() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3905350710, ___TrackingRating_4)); }
	inline uint8_t get_TrackingRating_4() const { return ___TrackingRating_4; }
	inline uint8_t* get_address_of_TrackingRating_4() { return &___TrackingRating_4; }
	inline void set_TrackingRating_4(uint8_t value)
	{
		___TrackingRating_4 = value;
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_5() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3905350710, ___TargetSearchResultPtr_5)); }
	inline IntPtr_t get_TargetSearchResultPtr_5() const { return ___TargetSearchResultPtr_5; }
	inline IntPtr_t* get_address_of_TargetSearchResultPtr_5() { return &___TargetSearchResultPtr_5; }
	inline void set_TargetSearchResultPtr_5(IntPtr_t value)
	{
		___TargetSearchResultPtr_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t3905350710_marshaled_pinvoke
{
	char* ___TargetName_0;
	char* ___UniqueTargetId_1;
	float ___TargetSize_2;
	char* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
// Native definition for marshalling of: Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t3905350710_marshaled_com
{
	uint16_t* ___TargetName_0;
	uint16_t* ___UniqueTargetId_1;
	float ___TargetSize_2;
	uint16_t* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
