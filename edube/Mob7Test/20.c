#include <stdio.h>

int main(void)
{
    FILE *f = fopen("file", "w");
    int i = fputs(f, "Hello!");
//fput need (char , file pointer)
    printf("%d", i != EOF);
    fclose(f);
    return 0;
}