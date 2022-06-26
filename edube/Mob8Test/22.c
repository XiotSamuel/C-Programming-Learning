#include <stdio.h>
#define A(x) #x

int main(void)
{
    int i = -1;
    char *s = A(i);
    printf("s[0]:%c\n", s[0]);
    i = -(s[0] == 'i');
    printf("%d", i);
    return 0;
}