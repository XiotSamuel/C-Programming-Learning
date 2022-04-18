#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *t = 1 + (float *)malloc(sizeof(float) * sizeof(float));

    t--;

    *t = 8.0;
    printf("step 3\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %p\n", t);
    t[1] = *t / 4.0;

    printf("step t[1]\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %f\n", t[1]);
    t++;

    printf("step t++\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %f\n", t);
    t[-1] = *t / 2.0;
    printf("step 4\n");
    printf("%f\n", *t);
    free(--t);
    return 0;
}