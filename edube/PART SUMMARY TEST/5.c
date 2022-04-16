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

//     int X = 8;

//     X = X - X / 2;
//     X = X * X / 4;
//     X = X + 2 * X;
//     printf("%d", X);
//     return 0;
// }

#include <stdio.h>

char *f(char *p)
{
    return p += 2;
}

char *g(char *p)
{
    return --p;
}

int main(void)
{
    char *s = "ABCDEFGHIJ";
    char p = *f(g(f(s + 1)));
    printf("%d", p - 'A');
    return 0;
}