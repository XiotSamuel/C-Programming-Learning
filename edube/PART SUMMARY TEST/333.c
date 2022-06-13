#include <stdio.h>
#include <string.h>

char *f(int p, char *s)
{
    printf("char *f char *s %s\n", s);
    s[p + 2] = '\0';
    printf("s[p+2] %s\n", s);
    return s - 1;
}

int main(void)
{
    char s[] = "ABCDEF";
    printf("int i = strlen( %s\n", f(1, s + 2));
    int i = strlen(f(1, s + 2));
    printf("%d\n", i);
    return 0;
}