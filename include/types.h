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
typedef int                b32;
typedef char               b8;

#define TRUE 1
#define FALSE 0

#if defined(__clang__) || defined(__gcc__)
#   define STATIC_ASSERT _Static_assert
#else // __clang__ || __gcc__
#   define STATIC_ASSERT static_assert
#endif // __clang__ || __gcc__

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