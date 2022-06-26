#include <stdio.h>
#define ALPHA(x) 2 * -x

int main(void)
{
    int i = ALPHA(1 - 1);
    printf("i: %d\n", i);
    return 0;
}