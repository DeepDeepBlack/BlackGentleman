#include <stdio.h>

typedef     struct      friend{
    char    name[10];
    char    phone[15];
    char    birth[15];
}FRIEND;

void    show(FRIEND [  ], int);
FRIEND  enter(void);

int     main(void)
{
    int     now = 0;
    char    ch;
    FRIEND  f[20];
    while(1)
    {
        printf("1)Output friend's profile 2)add friend 0)exit : ");
        scanf("%c", &ch);
        if(ch == '1')
        {
            if(now != 0)
            {
                show(f, now);
            }
            else
            {
                printf("No friend's profile\n");
            }
        }
        else if(ch == '2')
        {
            if(now >= 20)
            {
                printf("NO SPACE!\n");
            }
            else
            {
                f[now] = enter(  );
                now++;
            }
        }
        else if(ch == '0')
        {
            break;
        }
        fflush(stdin);
    }

    return (0);
}

void    show(FRIEND f[  ], int size)
{
    int     i;

    for(i = 0; i < size; i++)
    {
        printf("===================================================================\n");
        printf("%10s phone : %15s\n", f[i].name, f[i].phone);
        printf("%10s birthday: %15s\n", f[i].name, f[i].birth);
    }
    printf("===================================================================\n");
}

FRIEND  enter(void)
{
    FRIEND new;
    printf("enter name : ");
    scanf("%s", new.name);
    printf("enter phone : ");
    scanf("%s", new.phone);
    printf("enter birthday : ");
    scanf("%s", new.birth);

    return (new);
}
