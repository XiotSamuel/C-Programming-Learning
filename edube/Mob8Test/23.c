#include <stdio.h>
#define ALPHA(x, y) x + y

int main(void)
{
    int i = -1;
    int i2 = -2;
    printf("%d", -ALPHA(i, i2));
    return 0;
}