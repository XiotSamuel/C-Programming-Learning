#include <stdio.h>
#include <string.h>

int main(void)
{
    float X = 2.0;

    X = X + X * 4;
    X = X / X * X;
    X = X / X + X;
    printf("%f", X);
    return 0;
}