#include <stdio.h>

int	main()
{
	int	i, j, k, l, m;

	printf("Enter two numbers: ");
	scanf("%d %d", &i, &j);
	for(k = 1; k < i && k < j; k++)
	{
		if(!(i % k) && !(j % k))
			l = k;
	}
	k = i < j ? i : j;
	while(1)
	{
		if(!(k % i) && !(k % j))
		{
			m = k;
			break;
		}
		k++;
	}
	printf("greatest common divisor : %d\n", l);
	printf("lowest common multiple : %d\n", m);

	return (0);
}
