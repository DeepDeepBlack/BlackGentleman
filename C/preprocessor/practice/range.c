#include <stdio.h>
#define     RANGE(a, b, x)      (x > a && x < b) ? 1 : 0

int     main(void)
{
    if(RANGE(0, 10, 5))
        puts("5 is between 0 ~ 10");

    return(0);
}
