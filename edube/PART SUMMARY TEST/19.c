#include <stdio.h>

int main(void)
{
    int i = 3;
    int j = i - 1 / i;

    switch (i - j)
    {
    case 1:
        j--;
    case 2:
        j++;
    case 0:
        j++;
        break;
    default:
        j = -1;
    }

    printf("%d", --j);
    return 0;
}