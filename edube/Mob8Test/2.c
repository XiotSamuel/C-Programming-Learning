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
    printf("%d", i);
    return 0;
}