#include <stdio.h>

int	f(int	n)
{
	if(n == 1 || n ==2)
		return (1);

	return (f(n - 1) + f(n - 2));
}

int	main(void)
{
	int	n;

	printf("Input n:");
	scanf("%d", &n);
	printf("f(%d) = %d\n", n, f(n));

	return (0);
}
