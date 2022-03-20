#include <stdio.h>

int main(void)
{
    int i = 2, j = 0;
    switch (i + 5)
    {
    case 1:
        j++;
    case 2:
        j++;
    default:
        j = 5;
    case 0:
        j++;
        break;
    }
    printf("%d", j);
    return 0;
}