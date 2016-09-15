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
struct SimpleTargetData_t3053968739;
struct SimpleTargetData_t3053968739_marshaled_pinvoke;

extern "C" void SimpleTargetData_t3053968739_marshal_pinvoke(const SimpleTargetData_t3053968739& unmarshaled, SimpleTargetData_t3053968739_marshaled_pinvoke& marshaled);
extern "C" void SimpleTargetData_t3053968739_marshal_pinvoke_back(const SimpleTargetData_t3053968739_marshaled_pinvoke& marshaled, SimpleTargetData_t3053968739& unmarshaled);
extern "C" void SimpleTargetData_t3053968739_marshal_pinvoke_cleanup(SimpleTargetData_t3053968739_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SimpleTargetData_t3053968739;
struct SimpleTargetData_t3053968739_marshaled_com;

extern "C" void SimpleTargetData_t3053968739_marshal_com(const SimpleTargetData_t3053968739& unmarshaled, SimpleTargetData_t3053968739_marshaled_com& marshaled);
extern "C" void SimpleTargetData_t3053968739_marshal_com_back(const SimpleTargetData_t3053968739_marshaled_com& marshaled, SimpleTargetData_t3053968739& unmarshaled);
extern "C" void SimpleTargetData_t3053968739_marshal_com_cleanup(SimpleTargetData_t3053968739_marshaled_com& marshaled);
