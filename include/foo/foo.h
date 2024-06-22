#pragma once

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

int FAPI foo_sum(int x, int y);
int FAPI foo_sub(int x, int y);
int FAPI foo_mul(int x, int y);
int FAPI foo_div(int x, int y);