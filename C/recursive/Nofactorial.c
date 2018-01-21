#include <stdio.h>

int	Nofactorial(int		n)
{
	int	i, fac;

	fac = 1;

	for(i = 1; i <= n; i++)
	{
		fac *= i;
	}
	
	return (fac);
}

int	main(void)
{
	int	n;

	printf("Input n:");
	scanf("%d", &n);
	printf("%d! = %d\n", n, Nofactorial(n));

	return(0);
}
