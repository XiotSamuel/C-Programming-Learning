#include <stdio.h>

int main(void)
{
    char a = 'A', *b = &a, **c = &b;
    **c = a + (a == *b);
    printf("%c", a);
    return 0;
}