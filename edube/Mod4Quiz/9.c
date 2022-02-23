#include <stdio.h>
#include <string.h>

int main(void)
{
    char t[10] = "";
    int length = sizeof(t) / sizeof(t[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", t[i]);
    }
    int s;

    s = strlen(t);
    printf("\ns: %d\n", s);
    strcat(t, "ABCDEF");

    length = sizeof(t) / sizeof(t[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", t[i]);
    }

    s += strlen(t);
    printf("\ns: %d, strlen(t): %lu\n", s, strlen(t));
    return 0;
}