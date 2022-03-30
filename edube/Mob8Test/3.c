#include <stdio.h>

int main(void)
{
    int X = 200;
    int a = X;
    a += X;

#define X 200
    a += X;

#undef X
    printf("%d", a);
    return 0;
}