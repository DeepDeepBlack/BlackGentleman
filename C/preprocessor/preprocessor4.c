#include <stdio.h>
#define     RICE
#undef      NOODLE

int     main(void)
{
#ifdef      RICE
    printf("I like rice the best!\n");
#endif

#ifdef      NOODLE
    printf("I like noodle the best!\n");
#endif

    return (0);
}
