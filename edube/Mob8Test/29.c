#include <stdio.h>
#define A(x) ((x) ? -1 : 0)
#define B(a) !(a)

int main(void)
{
    int i = 2;
    int i2 = A(B(i));
    printf("%d", i2);
    return 0;
}