#include <stdio.h>

int	main(void)
{
	int	i, array[10];

	for(i = 0; i < 10; i++)
	{
		array[i] = i;
		printf("%d\n", array[i]);
	}

	return (0);
}
