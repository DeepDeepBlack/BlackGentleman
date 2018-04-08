#include <stdio.h>
#include <string.h>

char*   encode(char*);
char*   decode(char*);

int     main(void)
{
    char    ch, str[80];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    printf("You want 1)encode 2)decode :");
    scanf("%c", &ch);
    if (ch == '1')
    {
        puts("After encode : ");
        puts(encode(str));
    }
    else if (ch == '2')
    {
        puts("After decode : ");
        puts(decode(str));
    }
    else
    {
        puts("Unknown input");
    }

    return (0);
}

char*   encode(char* str)
{
    char*   r = str;
    while(*str)
    {
        *str += 13;
        str++;
    }
    return (r);
}

char*   decode(char* str)
{
    char*   r = str;
    while(*str <= '\0')
    {
        *str -= 13;
        str++;
    }
    return(r);
}
