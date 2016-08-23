#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct ProfileData_t1845074131;
struct ProfileData_t1845074131_marshaled_pinvoke;

extern "C" void ProfileData_t1845074131_marshal_pinvoke(const ProfileData_t1845074131& unmarshaled, ProfileData_t1845074131_marshaled_pinvoke& marshaled);
extern "C" void ProfileData_t1845074131_marshal_pinvoke_back(const ProfileData_t1845074131_marshaled_pinvoke& marshaled, ProfileData_t1845074131& unmarshaled);
extern "C" void ProfileData_t1845074131_marshal_pinvoke_cleanup(ProfileData_t1845074131_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ProfileData_t1845074131;
struct ProfileData_t1845074131_marshaled_com;

extern "C" void ProfileData_t1845074131_marshal_com(const ProfileData_t1845074131& unmarshaled, ProfileData_t1845074131_marshaled_com& marshaled);
extern "C" void ProfileData_t1845074131_marshal_com_back(const ProfileData_t1845074131_marshaled_com& marshaled, ProfileData_t1845074131& unmarshaled);
extern "C" void ProfileData_t1845074131_marshal_com_cleanup(ProfileData_t1845074131_marshaled_com& marshaled);
