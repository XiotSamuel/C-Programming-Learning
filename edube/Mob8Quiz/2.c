#include <stdio.h>

#define F1(X) X *X
#define F2(X) ((X) * (X))
#define F3(X) ((X)*X)

int main(void)
{
    int i = 1;
    int j = 2;
    int k = 3;
    int s;
    s = F1(i + j) + F2(i - j) + F3(i + k);
    printf("%d\n", F1(i + j));
    printf("%d\n", F2(i - j));
    printf("%d\n", F3(i + k));

    // 3 * 3 + -1 * -1 + 4 * 4
    // 9 + 1 + 16
    printf("%d", s);
    return 0;
}