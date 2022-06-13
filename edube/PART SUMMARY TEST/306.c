#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *t = 1 + (float *)malloc(sizeof(float) * sizeof(float));

    printf("*t\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %p\n", t);

    t--;
    printf("\n");
    printf("t--\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %p\n", t);

    *t = 8.0;
    printf("\n");
    printf("*t\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %p\n", t);

    t[1] = *t / 4.0;
    printf("\n");
    printf("t[1] = *t / 4.0\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t[1]);
    printf("t %f\n", t[1]);

    t = t + 1;
    printf("\n");
    printf("t++\n");
    printf("*t %f\n", *t);
    printf("&t %p\n", &t);
    printf("t %f\n", t);
    printf("t+1 %f\n", t + 1);
    t[-1] = *t / 2.0;
    printf("\n");
    printf("t[-1]\n");
    printf("%f\n", *t);
    printf("&t %p\n", &t);
    printf("t %f\n", t);
    // printf("&t %p\n", &t[-1]);
    // printf("t %f\n", t[-1]);
    free(--t);
    return 0;
}