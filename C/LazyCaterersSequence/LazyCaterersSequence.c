#include <stdio.h>

int	main()
{
	int	i, j, sum;

	i = 1;
	j = 1;
	sum = 0;

	while (i <= 106)
	{
		sum += i;
		printf("i = %d sum = %d\n", i, sum);
		i += j;
		j += 1;
	}
	printf("sum = %d\n", sum);

	return(0);
}
