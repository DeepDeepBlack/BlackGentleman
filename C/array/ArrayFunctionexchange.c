#include <stdio.h>

int func(int	a[])
{
	int	tmp;
	
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
}

int	main(void)
{
	int	a[2] = {3, 6};

	printf("a[0] = %d 	a[1] = %d\n", a[0], a[1]);
	func(a);
	printf("a[0] = %d	a[1] = %d\n", a[0], a[1]);

	return (0);
}
