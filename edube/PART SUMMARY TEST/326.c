#include <stdio.h>
int main(void)
{
    int X = 8;
    X = X - X / 2;
    printf("%d\n", X);
    X = X * X / 4;
    printf("%d\n", X);
    X = X + 2 * X;
    printf("%d\n", X);
    return 0;
}