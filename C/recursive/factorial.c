#include <stdio.h>

int	factorial(int	n)
{
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

int	main(void)
{
	int	n;

	printf("Input n:");
	scanf("%d", &n);
	printf("%d! = %d\n", n, factorial(n));

	return (0);
}
