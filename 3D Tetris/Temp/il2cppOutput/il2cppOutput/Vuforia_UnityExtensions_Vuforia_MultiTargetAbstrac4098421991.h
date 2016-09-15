#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.MultiTarget
struct MultiTarget_t4153944352;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MultiTargetAbstractBehaviour
struct  MultiTargetAbstractBehaviour_t4098421991  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::mMultiTarget
	Il2CppObject * ___mMultiTarget_20;

public:
	inline static int32_t get_offset_of_mMultiTarget_20() { return static_cast<int32_t>(offsetof(MultiTargetAbstractBehaviour_t4098421991, ___mMultiTarget_20)); }
	inline Il2CppObject * get_mMultiTarget_20() const { return ___mMultiTarget_20; }
	inline Il2CppObject ** get_address_of_mMultiTarget_20() { return &___mMultiTarget_20; }
	inline void set_mMultiTarget_20(Il2CppObject * value)
	{
		___mMultiTarget_20 = value;
		Il2CppCodeGenWriteBarrier(&___mMultiTarget_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
