#include <stdio.h>
#include <stdlib.h>

int     compare(char, char, char);
int     main(void)
{
    int     i, j, num;
    char    table[3][3], ch;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            table[i][j] = ' ';
        }
    }
    for(i = 0;;i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("+-+-+-+\n");
            printf("|%c|%c|%c|\n", table[j][0], table[j][1], table[j][2]);
        }
        printf("+-+-+-+\n");
        ch = !(i % 2) ? 'A' : 'B';
        printf("User %c stage : ", ch);
        scanf("%d", &num);
        if(table[num / 3][num % 3 - 1] == ' ')
        {
            table[num / 3][num % 3 - 1] = !(i % 2) ? 'O' : 'X';
        }
        else
        {
            printf("Already passed!\n");
            i--;
            continue;
        }
        if(i >= 4)
        {
            for(j = 0; j < 3; j++)
            {
                if((compare(table[j][0], table[j][1], table[j][2]) || compare(table[0][j], table[1][j], table[2][j]) || compare (table[0][0], table[1][1], table[2][2]) || compare(table[2][0], table[1][1], table[0][2])))
                   {
                        printf("User %c win!\n", ch);
                        j = -1;
                        break;
                   }
            }
        }
        if(j == -1)
        {
            break;
        }
        if(i == 8)
        {
            printf("End in a draw!\n");
            break;
        }
    }
    return (0);
}

int     compare(char    a, char     b, char     c)
{
    if(a == b && a == c && a != ' ')
    {
        return (1);
    }
    return(0);
}
