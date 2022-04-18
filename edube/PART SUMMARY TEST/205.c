#include <stdio.h>

int main(void)
{
    int i = 3, j = i - 2 * i;
    switch (i)
    {
    case 1:
        j++;
        printf("case 1\n");
    case 2:
        j--;
        printf("case 2\n");
    case 0:
        j++;
        printf("case 0\n");
        break;
    default:
        j = 0;
        printf("default\n");
    }
    printf("%d", ++j);
    return 0;
}