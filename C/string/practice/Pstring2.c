#include <stdio.h>
#include <string.h>

void    exclude(char*, char*);

int     main(void)
{
    char    str1[] = "What a wonderful world!";
    char    str2[] = "wonderful";
    exclude(str1, str2);
    puts(str1);

    return (0);
}

void    exclude(char* s1, char* s2)
{
    int     i, s2_len = strlen(s2);
    for(i = 0; i < (int)strlen(s1) - s2_len; i++)
    {
        if(!strncmp(s1 + i, s2, s2_len))
        {
            strcpy(s1 + i, s1 + i + s2_len);
            i--;
        }
    }
}
