#include <stdio.h>

int main(void)
{
    int i = 2, j = 1, k;
    k = i >> j;
    k <<= i;
    printf("%d", k);
    return 0;
}