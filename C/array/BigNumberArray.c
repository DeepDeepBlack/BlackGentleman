#include <stdio.h>

int	main(void)
{
	short	a[200];
	int	m, k, i, carry;

	m = 0;
	carry = 0;

	for(i = 0; i < 200; i++)
	{
		a[i] = 0;
	}
	a[m] = 1;
	for(k = 2; k <= 50; k++)
	{
		for(i = 0; i <= m; i++)
		{
			a[i] *= k;
			a[i] += carry;
			carry = a[i] / 10;
			if(carry != 0 && i == m)
				m++;
			a[i] %= 10;
		}
	}
	printf("50! = ");
	for(i = m; i >= 0; i--)
		printf("%d", a[i]);
	printf("\n");

	return (0);
}
