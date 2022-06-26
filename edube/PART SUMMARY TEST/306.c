#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float *t = 1 + (float *)malloc(sizeof(float) * sizeof(float));

    printf("*t\n");
    printf("%f\n", *t);
    printf("t[-2] %f\n", t[-2]);
    printf("t[-1] %f\n", t[-1]);
    printf("t[0] %f\n", t[0]);
    printf("t[1] %f\n", t[1]);
    printf("t[2] %f\n", t[2]);
    printf("\n");

    t--;
    printf("t-- %f\n", *t);
    printf("t[-2] %f\n", t[-2]);
    printf("t[-1] %f\n", t[-1]);
    printf("t[0] %f\n", t[0]);
    printf("t[1] %f\n", t[1]);
    printf("t[2] %f\n", t[2]);
    printf("t-- %f\n", t);
    printf("\n");
    *t = 8.0;
    printf("*t %f\n", *t);
    printf("t[-2] %f\n", t[-2]);
    printf("t[-1] %f\n", t[-1]);
    printf("t[0] %f\n", t[0]);
    printf("t[1] %f\n", t[1]);
    printf("t[2] %f\n", t[2]);
    printf("*t %f\n", t);
    printf("\n");
    t[1] = *t / 4.0;
    printf("t[1] %f\n", *t);
    printf("t[-2] %f\n", t[-2]);
    printf("t[-1] %f\n", t[-1]);
    printf("t[0] %f\n", t[0]);
    printf("t[1] %f\n", t[1]);
    printf("t[2] %f\n", t[2]);
    printf("t %f\n", t);
    printf("\n");
    t++;
    printf("t++ %f\n", *t);
    printf("t[-2] %f\n", t[-2]);
    printf("t[-1] %f\n", t[-1]);
    printf("t[0] %f\n", t[0]);
    printf("t[1] %f\n", t[1]);
    printf("t[2] %f\n", t[2]);
    printf("t++ %f\n", t);
    printf("\n");
    t[-1] = *t / 2.0;
    printf("\n");
    printf("t[-1]\n");
    printf("t[-2] %f\n", t[-2]);
    printf("t[-1] %f\n", t[-1]);
    printf("t[0] %f\n", t[0]);
    printf("t[1] %f\n", t[1]);
    printf("t[2] %f\n", t[2]);
    printf("t %f\n", t);
    printf("\n");

    // printf("&t %p\n", &t[-1]);
    // printf("t %f\n", t[-1]);
    free(--t);
    return 0;
}