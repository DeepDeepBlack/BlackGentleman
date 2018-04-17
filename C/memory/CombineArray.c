#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     main(void)
{
    int     i = 0, j = 0;
    char    s1[80], s2[80], *p;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    p = (char*)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
    while(*(s1 + i) && *(s1 + i) != '\n')
    {
        *(p + i) = *(s1 + i);
        i++;
    }

    while(*(s2 +j) && *(s2 + j) != '\n')
    {
        *(p + i) = *(s2 + j);
        i++;
        j++;
    }
    *(p + i) = '\0';
    puts(p);
    free(p);
    fclose(stdin);
    return (0);
}
