#include <stdio.h>
#include <string.h>

int main(void)
{

    char tt[20] = "0123456789";
    printf("tt %s\n", tt);
    strcat(tt + 11, "123");
    printf("tt %s\n", tt);
    printf("strlen(tt) %d\n", strlen(tt));
    printf("tt[8] %d\n", tt[8]);
    printf("strlen(tt)-tt[8] %d\n", strlen(tt) - tt[8] + '0');
    return 0;
}