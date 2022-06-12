#include <stdio.h>
#include <string.h>

int main(void)
{
    char tt[20] = "0123456789";
    strcat(tt + 2, "987");
    printf("tt: %s\n", tt);
    printf("strlen(tt): %d\n", strlen(tt));
    printf("tt[5]: %c\n", tt[5]);
    printf("%d\n", strlen(tt) - tt[5] + '0');
    return 0;
}