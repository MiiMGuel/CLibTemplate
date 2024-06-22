#include "foo/foo.h"
#include "foo_config.h"

i32 foo_sum(i32 x, i32 y) { return x + y; }
i32 foo_sub(i32 x, i32 y) { return x - y; }
i32 foo_mul(i32 x, i32 y) { return x * y; }
i32 foo_div(i32 x, i32 y) { return x / y; }
i32 foo_version_major(void) { return foo_VERSION_MAJOR; }
i32 foo_version_minor(void) { return foo_VERSION_MINOR; }
i32 foo_version_patch(void) { return foo_VERSION_PATCH; }
i32 foo_version_tweak(void) { return foo_VERSION_TWEAK; }