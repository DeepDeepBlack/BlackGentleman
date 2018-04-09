#include <stdio.h>
#define     round
#define     area
#define     volume
#define     R(r)    (double)2 * (r) * 3.1415
#define     A(r)    (double)(r) * (r) * 3.1415
#define     V(r)    (double)4 / 3 * (r) * (r) * (r) * 3.1415

int     main(void)
{
    int     r;
    scanf("%d", &r);

#if defined round
    printf("%lf\n", R(r));
#endif

#ifndef      area
    printf("%lf\n", A(r));
#endif

#ifdef area
    printf("%lf\n", V(r));
#endif

    return (0);
}
