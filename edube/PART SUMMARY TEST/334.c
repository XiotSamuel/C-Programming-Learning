#include <stdio.h>

int main(void)
{
    int i = 1, j = 0, k;
    printf("%d\n", i >> j);
    printf("%d\n", j >> i);
    printf("%d\n", i >> i);
    printf("%d\n", j >> j);
    k = (i >> j) + (j >> i) + (i >> i) + (j >> j);
    k <<= i;
    printf("%d", k);
    return 0;
}