#pragma once

// unsigned int types
typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

// signed int types
typedef signed char        i8;
typedef signed short       i16;
typedef signed int         i32;
typedef signed long long   i64;

// floating point types
typedef float              f32;
typedef double             f64;

// boolean types
typedef char               b8;
typedef int                b32;

// boolean values
#define TRUE  1
#define FALSE 0

// assertions
#if defined(__clang__) || defined(__gcc__)
#   define STATIC_ASSERT _Static_assert
#else // __clang__ || __gcc__
#   define STATIC_ASSERT static_assert
#endif // __clang__ || __gcc__

// assert sizes
STATIC_ASSERT(sizeof(u8)  == 1, "size of u8 is not 1 bytes!");
STATIC_ASSERT(sizeof(u16) == 2, "size of u16 is not 2 bytes!");
STATIC_ASSERT(sizeof(u32) == 4, "size of u32 is not 4 bytes!");
STATIC_ASSERT(sizeof(u64) == 8, "size of u64 is not 8 bytes!");
STATIC_ASSERT(sizeof(i8)  == 1, "size of i8 is not 1 bytes!");
STATIC_ASSERT(sizeof(i16) == 2, "size of i16 is not 2 bytes!");
STATIC_ASSERT(sizeof(i32) == 4, "size of i32 is not 4 bytes!");
STATIC_ASSERT(sizeof(i64) == 8, "size of i64 is not 8 bytes!");
STATIC_ASSERT(sizeof(f32) == 4, "size of f32 is not 4 bytes!");
STATIC_ASSERT(sizeof(f64) == 8, "size of f64 is not 8 bytes!");
STATIC_ASSERT(sizeof(b8)  == 1, "size of b8 is not 1 bytes!");
STATIC_ASSERT(sizeof(b32) == 4, "size of b32 is not 4 bytes!");

// API export / import
#ifdef FOO_EXPORT
#   if defined(_WIN32) || defined(_WIN64)
#       define FAPI __declspec(dllexport)
#   else
#       define FAPI __attribute__((visibility("default")))
#   endif
#else // FOO_EXPORT
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