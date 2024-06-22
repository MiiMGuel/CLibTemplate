#ifndef FOO_H
#define FOO_H

#include "../types.h"

i32 FAPI foo_sum(i32 x, i32 y);
i32 FAPI foo_sub(i32 x, i32 y);
i32 FAPI foo_mul(i32 x, i32 y);
i32 FAPI foo_div(i32 x, i32 y);
i32 FAPI foo_version_major(void);
i32 FAPI foo_version_minor(void);
i32 FAPI foo_version_patch(void);
i32 FAPI foo_version_tweak(void);

#endif // FOO_H