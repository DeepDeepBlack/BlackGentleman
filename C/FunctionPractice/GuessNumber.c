#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int	answer;
	int	left, right;

	left = 1;
	right = 10000;

	srand(time(NULL));
	answer = rand( ) % 10000;
	while(1)
	{
		int	guess;

		printf("%d ~ %d, enter a number:", left, right);
		scanf("%d", &guess);
		if(guess > right || guess < left)
			exit(1);
		if(guess == answer)
			break;
		else
		{
			if(guess > answer)
				right = guess;
			else
				left = guess;
		}
	}
	printf("BINGO!!!\n");

	return (0);
}
