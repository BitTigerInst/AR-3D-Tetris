#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType1180610848.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdImpl
struct  InstanceIdImpl_t1180271622  : public Il2CppObject
{
public:
	// Vuforia.InstanceIdType Vuforia.InstanceIdImpl::mDataType
	int32_t ___mDataType_0;
	// System.Byte[] Vuforia.InstanceIdImpl::mBuffer
	ByteU5BU5D_t58506160* ___mBuffer_1;
	// System.UInt64 Vuforia.InstanceIdImpl::mNumericValue
	uint64_t ___mNumericValue_2;
	// System.UInt32 Vuforia.InstanceIdImpl::mDataLength
	uint32_t ___mDataLength_3;
	// System.String Vuforia.InstanceIdImpl::mCachedStringValue
	String_t* ___mCachedStringValue_4;

public:
	inline static int32_t get_offset_of_mDataType_0() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t1180271622, ___mDataType_0)); }
	inline int32_t get_mDataType_0() const { return ___mDataType_0; }
	inline int32_t* get_address_of_mDataType_0() { return &___mDataType_0; }
	inline void set_mDataType_0(int32_t value)
	{
		___mDataType_0 = value;
	}

	inline static int32_t get_offset_of_mBuffer_1() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t1180271622, ___mBuffer_1)); }
	inline ByteU5BU5D_t58506160* get_mBuffer_1() const { return ___mBuffer_1; }
	inline ByteU5BU5D_t58506160** get_address_of_mBuffer_1() { return &___mBuffer_1; }
	inline void set_mBuffer_1(ByteU5BU5D_t58506160* value)
	{
		___mBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___mBuffer_1, value);
	}

	inline static int32_t get_offset_of_mNumericValue_2() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t1180271622, ___mNumericValue_2)); }
	inline uint64_t get_mNumericValue_2() const { return ___mNumericValue_2; }
	inline uint64_t* get_address_of_mNumericValue_2() { return &___mNumericValue_2; }
	inline void set_mNumericValue_2(uint64_t value)
	{
		___mNumericValue_2 = value;
	}

	inline static int32_t get_offset_of_mDataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t1180271622, ___mDataLength_3)); }
	inline uint32_t get_mDataLength_3() const { return ___mDataLength_3; }
	inline uint32_t* get_address_of_mDataLength_3() { return &___mDataLength_3; }
	inline void set_mDataLength_3(uint32_t value)
	{
		___mDataLength_3 = value;
	}

	inline static int32_t get_offset_of_mCachedStringValue_4() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t1180271622, ___mCachedStringValue_4)); }
	inline String_t* get_mCachedStringValue_4() const { return ___mCachedStringValue_4; }
	inline String_t** get_address_of_mCachedStringValue_4() { return &___mCachedStringValue_4; }
	inline void set_mCachedStringValue_4(String_t* value)
	{
		___mCachedStringValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCachedStringValue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
