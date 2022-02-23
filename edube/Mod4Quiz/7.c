#include <stdio.h>
#include <string.h>

int main(void)
{
    char t[20] = "ABCDEFGHIJK";
    int s = strlen(t);
    t[3] = '\0';
    printf("t[3]: %d\n", t[3]);
    printf("t[4]: %d\n", t[4]);
    printf("t[5]: %d\n", t[5]);
    s = strlen(t);
    printf("s: %d\n", s);
    return 0;
}