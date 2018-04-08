#include <stdio.h>
#include <string.h>

int     main(void)
{
    char    s[] = "string is fun!";
    char    key;
    printf("The string is 'string is fun!'. Which Character?");
    scanf("%c", &key);
    if(strchr(s, key))
    {
        printf("Found %c in string! The address is %d\n", key, strchr(s, key));
    }
    else
    {
        printf("Can't find %c in string!\n", key);
    }
    return (0);
}
