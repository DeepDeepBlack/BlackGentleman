#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    s1[] = "Hello, ";
    char    s2[10];
    printf("What's your name?\n");
    fgets(s2, sizeof(s2), stdin);
    strncat(s1, s2, 10);
    printf("%s\n", s1);

    return (0);
}
