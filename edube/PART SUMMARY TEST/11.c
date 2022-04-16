// int var;

// var = 9;
// var = var / 2;

// #include <stdio.h>
// #include <string.h>

// char *f(int p, char *s)
// {
//     s[p + 2] = '\0';
//     return s - 1;
// }

// int main(void)
// {
//     char s[] = "ABCDEF";
//     int i = strlen(f(1, s + 2));
//     printf("%d\n", i);
//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int i = 1, j = 0;
    do
    {
        i *= 2;
        j += i / 2;
    } while (j < 1);
    printf("%d", i + j);
    return 0;
}