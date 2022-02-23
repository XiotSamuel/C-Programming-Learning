#include <stdio.h>
int main(void)
{
    int i = 1, j = 2, *p;
    p = &i;
    printf("p: %p\n", p);
    *p = j;
    printf("*p: %d\n", *p);
    *p = 2 * j;
    printf("*p: %d\n", *p);
    i = *p;
    printf("i: %d\n", i);
    printf("%d\n", i);
    return 0;
}