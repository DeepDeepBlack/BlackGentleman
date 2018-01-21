#include <stdio.h>

int	f(void)
{
	static int	x;

	x = 0;

	return (x++);
}

int	main(void)
{
	int	i;

	for(i = 1; i < 5; i++)
		printf("x = %d\n", f( ));

	return (0);
}
