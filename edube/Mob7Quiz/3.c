#include <stdio.h>

int main(void)
{
    FILE *f;
    char s[] = "Mary had a little lamb", *p = s + 2;
    p[4] = '\0';

    f = fopen("f", "wb");
    fputs(s, f);
    fclose(f);
    return 0;
}

// #include <stdio.h>

// int main(void)
// {
//     FILE *f;
//     char s[] = "ABC";
//     char *p = "DEF";
//     int i = 123;
//     char c = '\'';

//     f = fopen("f", "wb");
//     fprintf(f, "%d %s %s %c", i, s, p, c);
//     fclose(f);

//     return 0;
// }