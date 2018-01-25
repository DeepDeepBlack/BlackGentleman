#include <stdio.h>

int	main(void)
{
	int	i, j, k, a[5][5];

	k = 0;

	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			k++;
	printf("a[5][5] = %d\n", k);

	return (0);
}
