#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Surface
struct Surface_t2546426275;

#include "Vuforia_UnityExtensions_Vuforia_SmartTerrainTracka3759975578.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SurfaceAbstractBehaviour
struct  SurfaceAbstractBehaviour_t1477931716  : public SmartTerrainTrackableBehaviour_t3759975578
{
public:
	// Vuforia.Surface Vuforia.SurfaceAbstractBehaviour::mSurface
	Il2CppObject * ___mSurface_14;

public:
	inline static int32_t get_offset_of_mSurface_14() { return static_cast<int32_t>(offsetof(SurfaceAbstractBehaviour_t1477931716, ___mSurface_14)); }
	inline Il2CppObject * get_mSurface_14() const { return ___mSurface_14; }
	inline Il2CppObject ** get_address_of_mSurface_14() { return &___mSurface_14; }
	inline void set_mSurface_14(Il2CppObject * value)
	{
		___mSurface_14 = value;
		Il2CppCodeGenWriteBarrier(&___mSurface_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
