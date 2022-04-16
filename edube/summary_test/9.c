// #include <stdio.h>

// int main(void)
// {
//     int i = -1, j = 1;
//     for (i++; i++; i++)
//     {
//         j++;
//         printf("%d", j);
//     }

//     printf("%d", i);
//     printf("%d", j);
//     printf("%d", i + j);
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