#include <stdio.h>

int main(void)
{
    char *p = "\0\2\1\3\4";
    printf("%d\n", p[2]);
    printf("%d\n", p[p[2]]);
    printf("%d\n", *(p + 1));
    printf("%d\n", p[0]);
    printf("%d\n", p[p[2]] + *(p + 1) + p[0]);
    return 0;
}