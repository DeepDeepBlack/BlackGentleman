#include <stdio.h>

int     main(void)
{
    char s1[20], *s2;

    printf("Enter a string:");
    s2 = fgets(s1, sizeof(s1), stdin);
    printf("%s", s2);

    return (0);
}
