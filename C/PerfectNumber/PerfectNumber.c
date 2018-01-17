#include <stdio.h>

int	main()
{
	int	i, j, k;

	for(i = 1; i < 10000; i++)
	{
		k = 0;
		for(j = 1; j < i; j++)
		{
			if(!(i % j))
				k += j;
		}
		if(i == k)
			printf("%5d is a perfect number\n", i);
	}

	return(0);
}
