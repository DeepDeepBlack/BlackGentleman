#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define     SIZE    20
int     main(void)
{
    int     a[SIZE];
    int     i, j, num, temp;
    srand(time(NULL));
    printf("How many number do you want? (less than %d)", SIZE);
    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
        a[i] = rand() % 100;
    }
    for(i = 0; i < num; i++)
    {
        for(j = 1; j < num - i; j++)
        {
            if(a[j - 1] > a[j])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0; i < num; i++)
        printf("%d ", a[i]);
    printf("\n");

    return(0);
}
