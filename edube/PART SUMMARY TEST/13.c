#include <stdio.h>

int main(void)
{
    int i = 1, j = 1, k = -1;
    k = !i | j;
    k = !k;
    printf("%d", k);
    return 0;
}