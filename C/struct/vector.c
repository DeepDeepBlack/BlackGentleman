#include <stdio.h>

typedef     struct      vector{
    double  x;
    double  y;
    double  z;
}V;
void    enter(V*);
void    vput(V*, V*, char);
V       vadd(V*, V*);
double  vdot(V*, V*);
V       vcross(V*, V*);

int     main(void)
{
    double  d;
    V       a, b, v;
    enter(&a);
    enter(&b);
    vput(&a, &b, '+');
    v = vadd(&a, &b);
    printf("(%.2lf, %.2lf, %.2lf)\n", v.x, v.y, v.z);
    vput(&a, &b, '.');
    d = vdot(&a, &b);
    printf("%.2lf\n", d);
    vput(&a, &b, 'x');
    v = vcross(&a, &b);
    printf("(%.2lf, %.2lf, %.2lf)\n", v.x, v.y, v.z);

    return(0);
}

void    vput(V*     a, V*       b, char     ch)
{
    printf("(%.2lf, %.2lf, %.2lf) %c (%.2lf, %.2lf, %.2lf) = ", a -> x, a -> y, a -> z, ch, b -> x, b -> y, b -> z);
}

void    enter(V*    v)
{
    printf("enter a vector(x, y, z) : ");
    scanf("%lf %lf %lf", &v -> x, &v -> y, &v -> z);
}

V       vadd(V*     a, V*       b)
{
    V   v;
    v.x = a -> x + b -> x;
    v.y = a -> y + b -> y;
    v.z = a -> z + b -> z;

    return (v);
}

double  vdot(V*     a, V*       b)
{
    return (a -> x * b -> x + a -> y * b -> y + a -> z * b -> z);
}

V       vcross(V*   a, V*       b)
{
    V   v;
    v.x = a -> y * b -> z - b -> y * a -> z;
    v.y = a -> z * b -> x - b -> z * a -> x;
    v.z = a -> x * b -> y - b -> x * a -> y;
    return (v);
}
