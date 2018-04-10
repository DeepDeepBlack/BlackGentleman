#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef     struct      card{
    int     flower;
    int     num;
}CARD;

int     main(void)
{
    char    *fl[] = {"spades", "hearts", "diamonds", "clubs"};
    int     choice;
    CARD    player, banker;
    printf("You want see who is 1)bigger or 2)smaller ? ");
    scanf("%d", &choice);
    while(choice != 0)
    {
        printf("Dealing...\n");
        player.flower = rand(  ) % 4;
        player.num = rand(  ) % 13;
        banker.flower = rand(  ) % 4;
        banker.num = rand(  ) % 13;

        if(player.num == 12)
        {
            printf("You get %s A\n", fl[player.flower]);
        }
        else
        {
            printf("You get %s %d\n", fl[player.flower], player.num + 2);
        }
        if(banker.num == 12)
        {
            printf("Computer gets %s A\n", fl[banker.flower]);
        }
        else
        {
            printf("Computer gets %s %d\n", fl[banker.flower], banker.num + 2);
        }
        if(choice == 1)
        {
            if((player.num * 10 + player.flower) > (banker.num * 10 + banker.flower))
            {
                printf("You win!\n");
            }
            else
            {
                printf("You lose!\n");
            }
        }
        else
        {
            if((player.num * 10 + player.flower) > (banker.num * 10 + banker.flower))
            {
                printf("You lose!\n");
            }
            else
            {
                printf("You win!\n");
            }
        }
        printf("Play again? 1)bigger 2)smaller 0)over : ");
        scanf("%d", &choice);
    }

    return (0);
}
