#include <stdio.h>
#include <string.h>

int main(void)
{

    char tt[20] = "0123456789";
    printf("%s\n", tt);
    strcat(tt + 11, "123");
    printf("%s\n", tt);
    printf("%d\n", strlen(tt));
    printf("%d\n", tt[8]);
    printf("%d\n", strlen(tt) - tt[8] + '0');
    return 0;
}