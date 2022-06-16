#include <stdio.h>
#define ALPHA(x, y) x##2 - y
#define BETA(x) x##2

int main(void)
{
    int i = 1;
    int i2 = -2;

    printf("%d\n", BETA(i));
    printf("%d\n", ALPHA(i, i2));
    return 0;
}