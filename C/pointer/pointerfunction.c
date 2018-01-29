#include <stdio.h>

void	vset(int,	int);
void	rset(int*,	int);

int	main(void)
{
	int	x, *p;
	
	x = 0;
	p = &x;

	vset(x, 1);
	printf("x = %d\n", x);
	rset(p, 1);
	printf("x = %d\n", x);

	return (0);
}

void	vset(int	x, int		y)
{
	x = y;
}

void	rset(int	*p, int		y)
{
	*p = y;
}
