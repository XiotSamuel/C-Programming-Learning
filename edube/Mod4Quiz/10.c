#include <stdio.h>
#include <string.h>

int main(void)
{
    char t[20] = "ABCDEFGHIJK";
    int s = strlen(t);
    t[3] = '\0';
    printf("\n");
    int length = sizeof(t) / sizeof(t[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", t[i]);
    }
    s += strlen(t);
    strcpy(t, "ABCDEF");
    printf("\n");
    length = sizeof(t) / sizeof(t[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", t[i]);
    }
    s += strlen(t);
    strcat(t, "ABC");
    printf("\n");
    length = sizeof(t) / sizeof(t[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", t[i]);
    }
    s += strlen(t);
    printf("\n");
    printf("s: %d, strlen(t):%lu", s, strlen(t));
    return 0;
}