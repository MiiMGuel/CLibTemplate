#include <stdio.h>

#include "foo/foo.h"

int main(void) {
    printf("Hello, World! \n");
    printf("foo version : %d.%d.%d.%d \n", 
        foo_version_major(),
        foo_version_minor(),
        foo_version_patch(),
        foo_version_tweak()    
    );

    printf("sum(5, 2) : %d \n", foo_sum(5, 2));
    printf("sub(5, 2) : %d \n", foo_sub(5, 2));
    printf("mul(5, 2) : %d \n", foo_mul(5, 2));
    printf("div(5, 2) : %d \n", foo_div(5, 2));

    return 0;
}