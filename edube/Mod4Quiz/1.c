#include <stdio.h>

int main(void)
{
    int i, j = 0;
    for (i = 0; i < 10; i += 2)
    {
        switch (i)
        {
        case 0:
            j++;
            printf("case 0 %d\n", j);
            break;
        case 2:
            j++;
            printf("case 2 %d\n", j);
        case 4:
            j++;
            printf("case 4 %d\n", j);
            break;
        default:
            j--;
            printf("deaf %d\n", j);
        }
    }
    printf("%d\n", j);
    return 0;
}