#include <stdio.h>

int	main()
{
	int	i, j, k;

	for(i = 2; i < 101; i++)
	{
		k = 1;
		for(j = 2; j < i; j++)
		{
			if(!(i % j))
				k = 0;
		}
		if(k)
		{
			printf("%3d", i);
		}
	}
	printf("\n");

	return(0);
}
