#include <stdio.h>

int main(void)
{
    int i;
    i = fprintf(stderr, "Hello!");
    printf("\n%d", i == EOF);
    return 0;
}