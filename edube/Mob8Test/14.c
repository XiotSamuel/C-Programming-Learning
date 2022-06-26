#include <stdio.h>
#define ALPHA -1
#define BETA -ALPHA

int main(void)
{
    int i = ALPHA + BETA * ALPHA * BETA;
    printf("ALPHA: %d\n", ALPHA);
    printf("BETA: %d\n", BETA);
    printf("%d", i);
    return 0;
}