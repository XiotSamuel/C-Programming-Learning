#include <stdio.h>

int main(void)
{
    FILE *f;
    char s[] = "To be or not to be";
    long i;

    f = fopen("f", "w+b");
    fputs(s, f);
    fseek(f, -2, SEEK_END);
    i = ftell(f);
    fclose(f);

    printf("%d", i);
    return 0;
}