#include <stdio.h>
#define A(x) #x

int main(void)
{
    int i = -1;
    char *s = A(i);

    i = -(s[0] == 'i');

    printf("%d", i);
    return 0;
}