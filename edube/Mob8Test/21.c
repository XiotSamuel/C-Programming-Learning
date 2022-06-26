#include <stdio.h>
#define X 1
#define Y 2

int main(void)
{
    int i =

#if X >> Y > 0
        -X
#else
        -Y
#endif
        ;
    printf("X>>Y: %d\n", X >> 1);
    printf("X: %d\n", X);
    printf("Y: %d\n", Y);
    printf("%d\n", i);
    return 0;
}