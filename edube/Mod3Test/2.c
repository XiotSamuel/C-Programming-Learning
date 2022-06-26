#include <stdio.h>

int main(void)
{
    int i = 1, j = -2, k;

    k = (i >= 0) || (j >= 00) && (i <= 0) || (j <= 0);

    printf("%d\n", i >= 0);
    printf("%d\n", j >= 00);
    printf("%d\n", i <= 0);
    printf("%d\n", j <= 0);

    printf("%d\n", k);
    return 0;
}