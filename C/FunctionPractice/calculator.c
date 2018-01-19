#include <stdio.h>

int	add(int		a, int		b)
{
	return (a + b);
}

int	minus(int	a, int		b)
{
	return (a - b);
}

int	multiply(int	a, int		b)
{
	return (a * b);
}

int	divide(int	a, int		b)
{
	return (a / b);
}

int	main()
{
	int	a, b;
	char	c;

	printf("calculator:");
	scanf("%d %c %d", &a, &c, &b);
	switch(c)
	{
		case '+':
			printf("%d + %d = %d\n", a, b, add(a, b));
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, minus(a, b));
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, multiply(a, b));
			break;
		case '/':
			printf("%d / %d = %d\n", a, b, divide(a, b));
			break;
		default:
			break;
	}

	return (0);
}
