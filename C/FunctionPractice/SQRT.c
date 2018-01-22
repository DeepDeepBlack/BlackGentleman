#include <stdio.h>

int	SQRT(int	n)
{
	int	i;

	if(n < 1)
		return (-1);	/* error input */
	for(i = 1; i < n; i++)
	{
		if((i * i) > n)
			break;
	}

	return ((i * i - n) < (n - (i - 1) * (i - 1)) ? i : (i - 1));
}

int	main()
{
	int	n;
	
	scanf("%d", &n);
	printf("%d\n", SQRT(n));

	return(0);
}
