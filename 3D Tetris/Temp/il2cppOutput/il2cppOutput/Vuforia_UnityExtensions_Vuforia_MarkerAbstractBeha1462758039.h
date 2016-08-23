#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Marker
struct Marker_t737566064;

#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour2427445838.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MarkerAbstractBehaviour
struct  MarkerAbstractBehaviour_t1462758039  : public TrackableBehaviour_t2427445838
{
public:
	// System.Int32 Vuforia.MarkerAbstractBehaviour::mMarkerID
	int32_t ___mMarkerID_10;
	// Vuforia.Marker Vuforia.MarkerAbstractBehaviour::mMarker
	Il2CppObject * ___mMarker_11;

public:
	inline static int32_t get_offset_of_mMarkerID_10() { return static_cast<int32_t>(offsetof(MarkerAbstractBehaviour_t1462758039, ___mMarkerID_10)); }
	inline int32_t get_mMarkerID_10() const { return ___mMarkerID_10; }
	inline int32_t* get_address_of_mMarkerID_10() { return &___mMarkerID_10; }
	inline void set_mMarkerID_10(int32_t value)
	{
		___mMarkerID_10 = value;
	}

	inline static int32_t get_offset_of_mMarker_11() { return static_cast<int32_t>(offsetof(MarkerAbstractBehaviour_t1462758039, ___mMarker_11)); }
	inline Il2CppObject * get_mMarker_11() const { return ___mMarker_11; }
	inline Il2CppObject ** get_address_of_mMarker_11() { return &___mMarker_11; }
	inline void set_mMarker_11(Il2CppObject * value)
	{
		___mMarker_11 = value;
		Il2CppCodeGenWriteBarrier(&___mMarker_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
