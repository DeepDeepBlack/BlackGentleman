#include <stdio.h>
#define     A(r)    (double)(r) * (r) * 3.1415

int     main(void)
{
    int     r;
    scanf("%d", &r);
    printf("%lf\n", A(r));

    return (0);
}
