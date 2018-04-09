#include <stdio.h>
#define     MAX(a, b, c)        (a > b) ? (a > c) ? a : c : (b > c) ? b : c

int     main(void)
{
    printf("9, 12 , 31, the largest number is %d\n", MAX(9, 12, 31));

    return (0);
}
