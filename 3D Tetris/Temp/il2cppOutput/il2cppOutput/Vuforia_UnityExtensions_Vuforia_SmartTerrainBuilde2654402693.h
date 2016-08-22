#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>
struct List_1_t1527509638;

#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainBuilder590090693.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainBuilderImpl
struct  SmartTerrainBuilderImpl_t2654402693  : public SmartTerrainBuilder_t590090693
{
public:
	// System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::mReconstructionBehaviours
	List_1_t1527509638 * ___mReconstructionBehaviours_0;
	// System.Boolean Vuforia.SmartTerrainBuilderImpl::mIsInitialized
	bool ___mIsInitialized_1;

public:
	inline static int32_t get_offset_of_mReconstructionBehaviours_0() { return static_cast<int32_t>(offsetof(SmartTerrainBuilderImpl_t2654402693, ___mReconstructionBehaviours_0)); }
	inline List_1_t1527509638 * get_mReconstructionBehaviours_0() const { return ___mReconstructionBehaviours_0; }
	inline List_1_t1527509638 ** get_address_of_mReconstructionBehaviours_0() { return &___mReconstructionBehaviours_0; }
	inline void set_mReconstructionBehaviours_0(List_1_t1527509638 * value)
	{
		___mReconstructionBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionBehaviours_0, value);
	}

	inline static int32_t get_offset_of_mIsInitialized_1() { return static_cast<int32_t>(offsetof(SmartTerrainBuilderImpl_t2654402693, ___mIsInitialized_1)); }
	inline bool get_mIsInitialized_1() const { return ___mIsInitialized_1; }
	inline bool* get_address_of_mIsInitialized_1() { return &___mIsInitialized_1; }
	inline void set_mIsInitialized_1(bool value)
	{
		___mIsInitialized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
