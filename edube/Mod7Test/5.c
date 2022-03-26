// unix / linux system treat the following file names :

//     JohnDoe and JohnDoe

//         as :

//     identical file names

#include <stdio.h>

int main(void)
{
    FILE f;
    f = fopen("file", "wb");

    printf("%d", f != NULL);
    fclose(f);
    return 0;
}