#include <stdio.h>

int main(void)
{
    FILE *f = fopen("file", "w");
    int i;
    fputs("12A", f);
    fclose(f);

    f = fopen("file", "r");
    fseek(f, 0, SEEK_END);
    i = ftell(f);
    fclose(f);

    printf("%d", i);
    return 0;
}

// int f(char t[])
// {
//     return t[0] - t[-1];
// }

// int main(void)
// {
//     int i = 2;
//     i -= f("ABDGK" + 1);
//     printf("%d", i);
//     return 0;
// }