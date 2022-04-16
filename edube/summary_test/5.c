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
    printf("%d", Z);
    return 0;
}