#include <stdio.h>
int main(void)
{
    FILE *f;
    char s[] = "ABC";
    char *p = "DEF";
    int i = 123;
    char c = '\'';

    f = fopen("f", "wb");
    fprintf(f, "%d %s %s %c", i, s, p, c);
    fclose(f);
    return 0;
}

// no idea