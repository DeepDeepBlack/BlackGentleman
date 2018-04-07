#include <stdio.h>

int     main(void)
{
    int     i;
    char    s[] = "This is a string";

    for(i = 0; s[i] != '\0'; i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return (0);
}
