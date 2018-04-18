#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define     SWAP(x, y, t)       (t = x, x = y, y = t)
void    sort(int    [], int);
int     binarysearch(int [], int, int, int);
int     main(void)
{
    int     i, a[30], key, result;
    printf("Search : ");
    scanf("%d", &key);
    srand(time(NULL));
    for(i = 0; i < 30; i++)
        a[i] = rand() % 10;
    sort(a, 30);
    result = binarysearch(a, 0, 29, key);
    if(result == -1)
        printf("Not found!\n");
    else
        printf("Found in index %d\n", result);
    return (0);
}

void    sort(int    a[], int    n)
{
    int     i, j, temp, min;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        SWAP(a[i], a[min], temp);
    }
}

int     binarysearch(int    a[], int    left, int   right, int  key)
{
    int     middle = (left + right) / 2;
    if(left > right)
        return (-1);
    if(key == a[middle])
        return (middle);
    else if(key > a[middle])
        return (binarysearch(a, middle + 1, right, key));
    else
        return (binarysearch(a, left, middle, key));
}
