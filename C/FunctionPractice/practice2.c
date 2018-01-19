#include <stdio.h>

int	z;

int	f(int	x)
{
	z = 10000;

	return (x * x);
}

int	main()
{
	int	x, y;

	x = 10;
	y = f(x);

	printf("x = %d, y = %d, z = %d\n", x, y, z);

	return (0);
}
