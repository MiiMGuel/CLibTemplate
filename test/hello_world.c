#include <stdio.h>
#include <stdbool.h>

#include "foo/foo.h"

int main(void) {
    printf("Hello, World! \n");
    printf("sum(5, 2) : %d \n", foo_sum(5, 2));
    printf("sub(5, 2) : %d \n", foo_sub(5, 2));
    printf("mul(5, 2) : %d \n", foo_mul(5, 2));
    printf("div(5, 2) : %d \n", foo_div(5, 2));

    return 0;
}