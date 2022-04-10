#include <stdio.h>

int main(void)
{
    int X = 200;
    int a = X;
    a += X;
    printf("%d\n", a);
#define X 200
    a += X;
    printf("%d\n", a);
#undef X
    printf("%d\n", a);
    return 0;
}