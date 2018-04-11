#include <stdio.h>

typedef     struct      staff{
    int     id;
    char    arrive[10];
    char    leave[10];
}STAFF;

int     main(void)
{
    int     id, now = 0;
    char    ch;
    STAFF   s[3];

    while(1)
    {
        printf("1)punching 2)search 0)exit : ");
        scanf("%c", &ch);

        if(ch == '1')
        {
            printf("Enter your ID : ");
            scanf("%d", &s[now].id);
            printf("Working Time : ");
            scanf("%s", s[now].arrive);
            printf("Off time : ");
            scanf("%s", s[now].leave);
            printf("Thank you, next...\n");
            now++;
        }
        else if(ch == '2')
        {
            int     i;
            printf("Enter ID : ");
            scanf("%d", &id);
            for(i = 0; i < now; i++)
            {
                if(id == s[i].id)
                {
                    printf("Last arrival time : %s\n", s[i].arrive);
                    printf("Last time left : %s\n", s[i].leave);
                    break;
                }
            }
            if(i >= now)
            {
                printf("This ID doesn't exist");
            }
        }
        else if(ch =='0')
        {
            break;
        }
    }
    fflush(stdin);
}
