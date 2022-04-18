#include <stdio.h>

char *f(char *p)
{
    return p += 2;
}

char *g(char *p)
{
    return --p;
}

int main(void)
{
    char *s = "ABCDEFGIJ";
    printf("%s\n", s + 1);
    printf("%s\n", f(s + 1));
    printf("%s\n", g(f(s + 1)));
    printf("%s\n", f(g(f(s + 1))));
    char p = *f(g(f(s + 1)));
    printf("%c\n", *f(g(f(s + 1))));
    printf("%d", p - 'A');
    return 0;
}