// the following string :

//     JohnDoe

//         is a valid file name in :

//     linux and ms windows

#include <stdio.h>

int main(void)
{
    FILE *f = fopen("file", "w");
    float f;
    fputs("12A", f);
    fclose(f);
    f = fopen("file", "r");
    fscanf(f, "%f", &f);
    fclose(f);
    printf("%f", f);
    return 0;
}