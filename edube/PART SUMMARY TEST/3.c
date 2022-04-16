// #include <stdio.h>

// int main(void)
// {
//     int i = 2, j = 0;
//     switch (i + 5)
//     {
//     case 1:
//         j++;
//     case 2:
//         j++;
//     default:
//         j = 5;
//     case 0:
//         j++;
//         break;
//     }
//     printf("%d", j);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int i = 1, j;

//     for (j = 0; j; j--)
//         i *= 2;

//     printf("%d", i + j);
//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int i = 3, j = i - 2 * i;
    switch (i)
    {
    case 1:
        j++;
    case 2:
        j--;
    case 0:
        j++;
        break;
    default:
        j = 0;
    }
    printf("%d", ++j);
    return 0;
}