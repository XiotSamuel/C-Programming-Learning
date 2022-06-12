#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *t = (int *)malloc(sizeof(int) + sizeof(int));
    printf("sizeof(t): %d\n", sizeof(t));
    t++;
    printf("*t: %d\n", *t);
    *t = 8;
    printf("*t: %d\n", *t);
    t[1] = *t / 2;
    printf("t[1]: %d\n", t[1]);
    t--;
    printf("*t: %d\n", *t);
    t[1] = *t / 2;
    printf("t[0]: %d\n", t[0]);
    printf("t[1]: %d\n", t[1]);
    printf("*t: %d\n", *t);
    free(t);
    return 0;
}