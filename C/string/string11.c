#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    s1[] = "string is fun!";
    char    s2[] = "Coding";
    strncpy(s1, s2, 6);
    printf("%s\n", s1);

    return(0);
}
