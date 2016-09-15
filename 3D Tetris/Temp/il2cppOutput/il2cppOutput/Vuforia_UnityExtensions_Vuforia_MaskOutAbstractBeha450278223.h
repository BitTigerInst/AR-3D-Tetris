#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MaskOutAbstractBehaviour
struct  MaskOutAbstractBehaviour_t450278223  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material Vuforia.MaskOutAbstractBehaviour::maskMaterial
	Material_t1886596500 * ___maskMaterial_2;

public:
	inline static int32_t get_offset_of_maskMaterial_2() { return static_cast<int32_t>(offsetof(MaskOutAbstractBehaviour_t450278223, ___maskMaterial_2)); }
	inline Material_t1886596500 * get_maskMaterial_2() const { return ___maskMaterial_2; }
	inline Material_t1886596500 ** get_address_of_maskMaterial_2() { return &___maskMaterial_2; }
	inline void set_maskMaterial_2(Material_t1886596500 * value)
	{
		___maskMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___maskMaterial_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
