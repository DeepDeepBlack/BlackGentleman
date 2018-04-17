#include <stdio.h>
#include <stdlib.h>

int     f(int,  int []);
int     main(void)
{
    int     i, n, *cache;
    scanf("%d", &n);
    cache = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
        cache[i] = 0;
    printf("f(%d) = %d\n", n, f(n - 1, cache));
    free(cache);
    return (0);
}

int     f(int   n,int   cache[])
{
    if(cache[n] == 0)
    {
        if(n == 0 || n == 1)
            return (1);
        else
            cache[n] = f(n - 1, cache) + f(n - 2, cache);
    }
    return(cache[n]);
}
