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