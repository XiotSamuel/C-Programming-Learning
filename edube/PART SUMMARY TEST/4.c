#include <stdio.h>

int main(void)
{
    int i, t[4];

    t[3] = 0;

    for (i = 1; i >= 0; i--)
    {
        t[i] = t[3] * i;
    }
    printf("%d", t[1]);
    return 0;
}