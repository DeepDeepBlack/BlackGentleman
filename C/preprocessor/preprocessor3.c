#include <stdio.h>
#define     SWAP(x, y, t)       (t = x, x = y, y = t)

int     main(void)
{
    int     x = 3, y = 4, temp;
    SWAP(x, y, temp);
    printf("x = %d, y = %d\n", x, y);

    return (0);
}
