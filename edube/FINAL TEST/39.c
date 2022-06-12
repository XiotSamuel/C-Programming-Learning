#include <stdio.h>
#include <string.h>

int main(void)
{
    char tt[20] = "0123456789";
    strcpy(tt, tt + 2);
    // printf("tt: %s\n", tt);
    // printf("strlen(tt): %d\n", strlen(tt));
    // printf("tt[5]: %c\n", tt[9]);
    printf("%lu\n", strlen(tt) - tt[9] + '5');
    return 0;
}