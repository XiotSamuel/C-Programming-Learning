#include <stdio.h>

char *f(char *p)
{
    return p++;
}

char *g(char *p)
{
    return p += 2;
}

int main(void)
{
    char *s = "ABCDEFGHIJ";
    char q = *f(f(s));
    printf("%c\n", q);
    char p = *f(g(f(s + 6)));
    printf("%d", p - 'A');
    return 0;
}