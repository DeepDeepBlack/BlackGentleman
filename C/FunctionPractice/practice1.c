#include <stdio.h>

int	f(int	x, int	n)
{
	int	i, j;

	j = x;

	for(i = 1; i < n; i++)
		x *= j;

	return (x);
}

int	main()
{
	int	x, n;

	printf("enter two numbers: ");
	scanf("%d %d", &x, &n);
	printf("%d ^ %d = %d\n", x, n, f(x, n));

	return(0);
}
