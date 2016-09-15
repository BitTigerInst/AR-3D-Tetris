#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec282528459.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t4108995630 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::position
	Vec2I_t82528459  ___position_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::size
	Vec2I_t82528459  ___size_1;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::enabled
	int32_t ___enabled_2;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::reflectionInteger
	int32_t ___reflectionInteger_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t4108995630, ___position_0)); }
	inline Vec2I_t82528459  get_position_0() const { return ___position_0; }
	inline Vec2I_t82528459 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_t82528459  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t4108995630, ___size_1)); }
	inline Vec2I_t82528459  get_size_1() const { return ___size_1; }
	inline Vec2I_t82528459 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_t82528459  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t4108995630, ___enabled_2)); }
	inline int32_t get_enabled_2() const { return ___enabled_2; }
	inline int32_t* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(int32_t value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_reflectionInteger_3() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t4108995630, ___reflectionInteger_3)); }
	inline int32_t get_reflectionInteger_3() const { return ___reflectionInteger_3; }
	inline int32_t* get_address_of_reflectionInteger_3() { return &___reflectionInteger_3; }
	inline void set_reflectionInteger_3(int32_t value)
	{
		___reflectionInteger_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct VideoBGCfgData_t4108995630_marshaled_pinvoke
{
	Vec2I_t82528459_marshaled_pinvoke ___position_0;
	Vec2I_t82528459_marshaled_pinvoke ___size_1;
	int32_t ___enabled_2;
	int32_t ___reflectionInteger_3;
};
#pragma pack(pop, tp)
// Native definition for marshalling of: Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct VideoBGCfgData_t4108995630_marshaled_com
{
	Vec2I_t82528459_marshaled_com ___position_0;
	Vec2I_t82528459_marshaled_com ___size_1;
	int32_t ___enabled_2;
	int32_t ___reflectionInteger_3;
};
#pragma pack(pop, tp)
