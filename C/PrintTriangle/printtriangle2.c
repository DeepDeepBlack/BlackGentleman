#include <stdio.h>

int	main()
{
	int	i, j, k;

	for(i = 1; i < 6; i++)
	{
		for(j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		for(k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return (0);
}
