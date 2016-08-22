#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t4293105551;
// Vuforia.PropBehaviour
struct PropBehaviour_t1737965968;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t2994986950;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t3708828403  : public MonoBehaviour_t3012272455
{
public:
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t4293105551 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t1737965968 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t2994986950 * ___SurfaceTemplate_4;

public:
	inline static int32_t get_offset_of_mReconstructionBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultSmartTerrainEventHandler_t3708828403, ___mReconstructionBehaviour_2)); }
	inline ReconstructionBehaviour_t4293105551 * get_mReconstructionBehaviour_2() const { return ___mReconstructionBehaviour_2; }
	inline ReconstructionBehaviour_t4293105551 ** get_address_of_mReconstructionBehaviour_2() { return &___mReconstructionBehaviour_2; }
	inline void set_mReconstructionBehaviour_2(ReconstructionBehaviour_t4293105551 * value)
	{
		___mReconstructionBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionBehaviour_2, value);
	}

	inline static int32_t get_offset_of_PropTemplate_3() { return static_cast<int32_t>(offsetof(DefaultSmartTerrainEventHandler_t3708828403, ___PropTemplate_3)); }
	inline PropBehaviour_t1737965968 * get_PropTemplate_3() const { return ___PropTemplate_3; }
	inline PropBehaviour_t1737965968 ** get_address_of_PropTemplate_3() { return &___PropTemplate_3; }
	inline void set_PropTemplate_3(PropBehaviour_t1737965968 * value)
	{
		___PropTemplate_3 = value;
		Il2CppCodeGenWriteBarrier(&___PropTemplate_3, value);
	}

	inline static int32_t get_offset_of_SurfaceTemplate_4() { return static_cast<int32_t>(offsetof(DefaultSmartTerrainEventHandler_t3708828403, ___SurfaceTemplate_4)); }
	inline SurfaceBehaviour_t2994986950 * get_SurfaceTemplate_4() const { return ___SurfaceTemplate_4; }
	inline SurfaceBehaviour_t2994986950 ** get_address_of_SurfaceTemplate_4() { return &___SurfaceTemplate_4; }
	inline void set_SurfaceTemplate_4(SurfaceBehaviour_t2994986950 * value)
	{
		___SurfaceTemplate_4 = value;
		Il2CppCodeGenWriteBarrier(&___SurfaceTemplate_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
