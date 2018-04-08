#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    s1[] = "string is fun!";
    char    s2[] = "string is";
    if(!strcmp(s1, s2))
    {
        printf("s1 and s2 are same(by strcmp)\n");
    }
    if(!strncmp(s1, s2, 5))
    {
        printf("s1 and s2 are same (by strncmp)\n");
    }
    return (0);
}
