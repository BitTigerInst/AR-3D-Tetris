#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t1377534133;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t730550669;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct  ReconstructionFromTargetAbstractBehaviour_t2363955698  : public MonoBehaviour_t3012272455
{
public:
	// Vuforia.ReconstructionFromTarget Vuforia.ReconstructionFromTargetAbstractBehaviour::mReconstructionFromTarget
	Il2CppObject * ___mReconstructionFromTarget_2;
	// Vuforia.ReconstructionAbstractBehaviour Vuforia.ReconstructionFromTargetAbstractBehaviour::mReconstructionBehaviour
	ReconstructionAbstractBehaviour_t730550669 * ___mReconstructionBehaviour_3;

public:
	inline static int32_t get_offset_of_mReconstructionFromTarget_2() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetAbstractBehaviour_t2363955698, ___mReconstructionFromTarget_2)); }
	inline Il2CppObject * get_mReconstructionFromTarget_2() const { return ___mReconstructionFromTarget_2; }
	inline Il2CppObject ** get_address_of_mReconstructionFromTarget_2() { return &___mReconstructionFromTarget_2; }
	inline void set_mReconstructionFromTarget_2(Il2CppObject * value)
	{
		___mReconstructionFromTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionFromTarget_2, value);
	}

	inline static int32_t get_offset_of_mReconstructionBehaviour_3() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetAbstractBehaviour_t2363955698, ___mReconstructionBehaviour_3)); }
	inline ReconstructionAbstractBehaviour_t730550669 * get_mReconstructionBehaviour_3() const { return ___mReconstructionBehaviour_3; }
	inline ReconstructionAbstractBehaviour_t730550669 ** get_address_of_mReconstructionBehaviour_3() { return &___mReconstructionBehaviour_3; }
	inline void set_mReconstructionBehaviour_3(ReconstructionAbstractBehaviour_t730550669 * value)
	{
		___mReconstructionBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionBehaviour_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
