#include <stdio.h>

int main(void)
{
    int i = 1, j = -1;
    for (;;)
    {
        i *= 2;
        j++;
        if (i >= 16)
            break;
    }
    printf("%d", j);
    return 0;
}