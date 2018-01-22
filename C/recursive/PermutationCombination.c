#include <stdio.h>

int	C(int	n, int	r)
{
	if(n < r || n < 0)
		return (-1);
	if(n == r || r == 0)
		return (1);

	return (C(n - 1, r) + C(n - 1, r - 1));
}

int	main(void)
{
	int	n, r;
	printf("Permutation Combination (Input two numbers, first number needs greater or equal second number):");
	scanf("%d %d", &n, &r);
	printf("C(%d, %d) = %d\n", n, r, C(n, r));

	return (0);
}
