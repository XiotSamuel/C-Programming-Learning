
#include <stdio.h>

int main(void)
{
    FILE *f = fopen("file", "w");
    int i = fputs("Hello!", f);
    printf("%d", i != EOF);
    return 0;
}