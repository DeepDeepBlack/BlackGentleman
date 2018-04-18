#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define      SWAP(x, y, t)       (t = x, x = y, y = t)

int     partition(int   [], int, int);
void    quicksort(int   [], int, int);

int     main(void)
{
    int     i, a[30];
    srand(time(NULL));
    for(i = 0; i < 30; i++)
        a[i] = rand() % 100;
    for(i = 0; i < 30; i++)
        printf("%d ", a[i]);
    printf("\n");
    quicksort(a, 0, 29);
    for(i = 0; i < 30; i++)
        printf("%d ", a[i]);
    printf("\n");
    return (0);
}

void    quicksort(int   a[], int    left, int   right)
{
    int     p;
    if(left < right)
    {
        p = partition(a, left, right);
        quicksort(a, left, p - 1);
        quicksort(a, p + 1, right);
    }
}

int     partition(int   a[], int    left, int   right)
{
    int     i, j, base, tmp;
    base = a[right];
    j = left - 1;
    for(i = left; i < right; i++)
    {
        if(a[i] <= base)
        {
            j++;
            SWAP(a[i], a[j], tmp);
        }
    }
    SWAP(a[j + 1], a[right], tmp);
    return (j + 1);
}
