#include <stdio.h>
#include <string.h>

int     main(void)
{
    int     i, len;
    char    str[80];
    
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("%s is not palindrome\n", str);
            break;
        }
    } 
    if (i >= len / 2)
    {
        printf("%s is palindrome\n", str);
    }

    return (0);
}
