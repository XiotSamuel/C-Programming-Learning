#include <stdio.h>

int main(void)
{
    FILE *f;
    int i;

    f = fopen("f", "w+b");
    fputs("123", f);
    rewind(f);
    fputs("3", f);
    fclose(f);
    f = fopen("f", "rt");
    fscanf(f, "%d", &i);
    fclose(f);

    printf("%d", i);
    return 0;
}

// the program outputs 323