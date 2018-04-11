#include <stdio.h>

typedef     struct      grade{
    int     co_num;
    int     g[10];
    double  average;
}GD;

typedef     struct      student{
    char    name[10];
    GD      gd;
}STU;

int     main(void)
{
    int     i;
    STU     s;
    printf("Enter your name : ");
    scanf("%s", s.name);
    printf("Enter how many subjects : ");
    scanf("%d", &s.gd.co_num);
    for(i = 0; i < s.gd.co_num; i++)
    {
        printf("Enter your %dst grade : ", i + 1);
        scanf("%d",&s.gd.g[i]);
    }
    s.gd.average = 0;
    for(i = 0; i < s.gd.co_num; i++)
    {
        s.gd.average += s.gd.g[i];
    }
    s.gd.average /= s.gd.co_num;
    printf("%s's average grade is : %.2lf\n", s.name, s.gd.average);

    return (0);
}
