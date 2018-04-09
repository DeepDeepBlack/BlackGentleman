#include <stdio.h>
#define     add(x, y)       ((x) + (y))
#define     minus(x, y)     ((x) - (y))
#define     multiply(x, y)  ((x) * (y))
#define     divide(x, y)    ((double)(x) / (y))

int     main(void)
{
    int     a, b;
    char    c;
    printf("Calculator:");
    scanf("%d %c %d", &a, &c, &b);

    switch(c)
    {
        case '+':printf("%d + %d = %d\n", a, b, add(a, b));
                 break;
        case '-':printf("%d - %d = %d\n", a, b, minus(a, b));
                 break;
        case '*':printf("%d * %d = %d\n",a, b, multiply(a, b));
                 break;
        case '/':printf("%d / %d = %lf\n", a, b, divide(a, b));
                 break;
        default:break;
    }

    return (0);
}
