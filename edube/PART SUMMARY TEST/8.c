#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 1;
    j = 3;

    if (j)
    {
        j--;
    }
    else
    {
        i++;
    }

    if (i)
        i--;
    else
        j++;

    k = i + j;
    printf("%d", k);
    return 0;
}