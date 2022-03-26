
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

    printf("%d\n", i);
    return 0;
}

// the program outputs 123

// #include <stdio.h>
// int main(void)
// {
//     FILE *f;
//     int i;

//     f = fopen("f", "wb");
//     fclose(f);
//     f = fopen("f", "rb");
//     fseek(f, 0, SEEK_END);
//     i = ftell(f);
//     fclose(f);
//     printf("%d", i);
//     return 0;
// }