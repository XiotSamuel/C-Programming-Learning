#include <stdio.h>

int main(void)
{

    int var;
    var = 3;
    var = var * var;
    printf("%d\n", var);
    var = var / var;
    printf("%d\n", var);
    var = var % var;
    printf("%d\n", var);
    var = var - 1;
    printf("%d\n", var);
    //     int i = 3;
    //     int j = i - 1 / i;
    //     switch (i - j)
    //     {
    //     case 1:
    //         j--;
    //         printf("case 1\n");
    //     case 2:
    //         j++;
    //         printf("case 2\n");
    //     case 0:
    //         j++;
    //         printf("case 0\n");
    //         break;
    //     default:
    //         j = -1;
    //         printf("case default\n");
    //     }
    //     printf("%d", --j);
    //     return 0;
}