#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void    sort(int    [], int);
int     main(void)
{
    int     i, a[30];
    srand(time(NULL));
    for(i = 0; i < 30; i++)
        a[i] = rand() % 100;
    for(i = 0; i < 30; i++)
        printf("%d ", a[i]);
    printf("\n");
    sort(a, 30);
    for(i = 0; i < 30; i++)
        printf("%d ", a[i]);
    printf("\n");
    return (0);
}

void    sort(int    a[], int    n)
{
    int     i, j, now;
    for(i = 1; i < n; i++)
    {
        now = a[i];
        for(j = i - 1;j >= 0 && now < a[j]; j--)
            a[j + 1] = a[j];
        a[j + 1] = now;
    }
}
