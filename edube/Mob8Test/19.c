#include <stdio.h>
#define A(x) ((x) ? -1 : 0)

int main(void)
{
    int i = 2;
    int i2 = A(i) * i;
    printf("%d", i2);
    return 0;
}