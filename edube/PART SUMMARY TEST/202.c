
#include <stdio.h>

int main(void)
{
    int X = 1;
    int Y = X + 2;
    Y++;
    int Z = Y;
    --X;
    Y--;
    Z = X / Y * X * Y;
    printf("X: %d\n", X);
    printf("Y: %d\n", Y);
    printf("Z: %d\n", Z);
    return 0;
}