#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int     search(int  [], int, int);

int     main(void)
{
    int     i, a[30], key, result;
    printf("Search : ");
    scanf("%d", &key);
    srand(time(NULL));
    for(i = 0; i < 30; i++)
        a[i] = rand() % 10;
    result = search(a, 30, key);
    if(result == -1)
        printf("Not found!\n");
    else
        printf("Found in index %d\n", result);
    return(0);
}

int     search(int      a[], int    n, int      key)
{
    int     i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            return (i);
    }
    return (-1);
}
