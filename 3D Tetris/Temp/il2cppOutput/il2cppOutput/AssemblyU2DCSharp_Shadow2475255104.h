#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shadow
struct  Shadow_t2475255104  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Shadow::liveTetro
	GameObject_t4012695102 * ___liveTetro_2;

public:
	inline static int32_t get_offset_of_liveTetro_2() { return static_cast<int32_t>(offsetof(Shadow_t2475255104, ___liveTetro_2)); }
	inline GameObject_t4012695102 * get_liveTetro_2() const { return ___liveTetro_2; }
	inline GameObject_t4012695102 ** get_address_of_liveTetro_2() { return &___liveTetro_2; }
	inline void set_liveTetro_2(GameObject_t4012695102 * value)
	{
		___liveTetro_2 = value;
		Il2CppCodeGenWriteBarrier(&___liveTetro_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
