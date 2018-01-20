#include <stdio.h>

int	main()
{
	register int	i;

	for(i = 0; i < 10000; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	return(0);
}
