#ifndef TYPES_H
#define TYPES_H

#include "stdbool.h"
#include "inttypes.h"

// unsigned integer types
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// signed integer types
typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;

// floating point types
typedef float    f32;
typedef double   f64;

// boolean types
typedef bool     b8;
typedef uint32_t b32;

// assertions
#if defined(__clang__) || defined(__gcc__)
#   define STATIC_ASSERT _Static_assert
#else 
#   define STATIC_ASSERT static_assert
#endif

// API export / import
#ifdef FOO_EXPORT
#   if defined(_WIN32) || defined(_WIN64)
#       define FAPI __declspec(dllexport)
#   else
#       define FAPI __attribute__((visibility("default")))
#   endif
#else
#   if defined(_WIN32) || defined(_WIN64) 
#       if defined(__clang__) || defined(__GNUC__)
#           define FAPI 
#       else 
#           define FAPI __declspec(dllimport)
#       endif
#   else 
#       define FAPI
#   endif
#endif 

#endif // TYPES_H