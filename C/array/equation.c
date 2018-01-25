#include <stdio.h>

int	S(int	x, int	n)
{
	int	i, tmp;

	tmp = x;

	if(n == 0)
		return (1);
	for(i = 1; i < n; i++)
		x *= tmp;

	return (x);
}

int	main(void)
{
	int	i, f[5], x, ans;

	ans = 0;

	for(i = 0; i < 5; i++)
	{
		printf("%d ^ 0:", i);
		scanf("%d", &f[i]);
	}
	printf("enter function number:");
	scanf("%d", &x);
	for(i = 0; i < 5; i++)
	{
		ans += S(x, i) * f[i];
	}
	printf("f[%d] = %d\n", x, ans);

	return (0);
}
