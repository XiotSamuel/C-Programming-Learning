#include <stdio.h>
#define ALPHA(x) -x

int main(void)
{
    int i = ALPHA(2 - 1);
    printf("%d", i);
    return 0;
}