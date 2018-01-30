#include <stdio.h>

void	swap(int	*, int		*);

int	main(void)
{
	int	a, b;

	a = 4;
	b = 3;

	swap(&a, &b);
	printf("a = %d		b = %d\n", a, b);

	return (0);
}

void	swap(int	*x, int		*y)
{
	int	tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
