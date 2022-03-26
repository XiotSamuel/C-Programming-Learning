#include <stdio.h>

int main(void)
{
    FILE *f;
    int i;

    f = fopen("f", "wb");
    fputs("123", f);
    fclose(f);
    f = fopen("f", "rt");
    fscanf(f, "%d", &i);
    fclose(f);

    printf("%d", i);
    return 0;
}