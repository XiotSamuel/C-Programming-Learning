#include <stdio.h>

int main(void)
{
    char *t1[10];
    char(*t2)[10];

    printf("%d", (sizeof(t1) == sizeof(t2) + sizeof(t1[0])));
    return 0;
}