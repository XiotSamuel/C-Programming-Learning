#include <stdio.h>

int main(void)
{
    FILE *f = fopen("file", "w");
    char c;
    fputs("12A", f);
    fclose(f);
    f = fopen("file", "r");
    fscanf(f, "%c", &c);
    fclose(f);

    printf("%c", c);
    return 0;
}