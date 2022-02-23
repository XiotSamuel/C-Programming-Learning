#include <stdio.h>
int main(void)
{
    int i = 10, j = 20, *p, s = 0;
    p = &i;
    printf("p: %p\n", p);
    i++;
    printf("i: %d\n", i);
    (*p)++;
    printf("p: %p\n", p);
    s = i + j + *p;
    printf("s: %d, i: %d, j: %d, p: %p, *p: %d\n", s, i, j, p, *p);
    printf("s: %d\n", s);
    return 0;
}