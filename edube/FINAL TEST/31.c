#include <stdio.h>

char *f(char *p)
{
    printf("*f %c\n", *p);
    return p++;
}

char *g(char *p)
{
    printf("*g %c\n", *p);
    return p += 2;
}

int main(void)
{
    char *s = "ABCDEFGHIJ";
    char q = *f(f(s));
    printf("q %c\n", q);
    char p = *f(g(f(s + 6)));
    printf("%c\n", p);
    printf("%d", p - 'A');
    return 0;
}