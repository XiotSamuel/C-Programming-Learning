#include <stdio.h>
#include <string.h>

int main(void)
{
    char t[20] = "ABCDEFGHIJK";
    int s = strlen(t);
    t[3] = '\0';
    printf("t[0]: %d\n", t[0]);
    printf("t[1]: %d\n", t[2]);
    printf("t[3]: %d\n", t[3]);
    printf("t[8]: %d\n", t[8]);
    printf("s: %d\n", s);
    s += strlen(t);
    printf("s: %d strlen(t): %lu", s, strlen(t));
    return 0;
}