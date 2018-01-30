#include <stdio.h>

int	add(int, int);

int	main(void)
{
	int	ans, (*p)(int		x, int		y);

	p = add;
	ans = (*p)(3, 4);
	printf("%d\n", ans);

	return (0);
}

int	add(int		x, int		y)
{
	return (x + y);
}
