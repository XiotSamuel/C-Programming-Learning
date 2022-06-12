#include <stdio.h>

int main(void)
{
    char *t1[10];
    char(*t2)[10];
    printf("sizeof(t1): %d\n", sizeof(t1));
    printf("sizeof(t2): %d\n", sizeof(t2));
    printf("sizeof(t1[0]): %d\n", sizeof(t1[5]));
    printf("sizeof(t2[0]): %d\n", sizeof(t2[5]));
    printf("%d\n", (sizeof(t1) == sizeof(t2)) + sizeof(t1[0]));
    return 0;
}