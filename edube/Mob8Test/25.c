#include <stdio.h>
#define B
#define C

int main(void)
{
    int i =
#ifdef A
#ifdef C
        -1
#else - 2
#endif
#else
        -3
#endif
        ;
    printf("%d", i);
    return 0;
}