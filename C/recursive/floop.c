#include <stdio.h>

int	f(int	n)
{
	int	i, sum, pre, fi;

	pre = 0;
	fi = 1;

	for(i = 1; i < n; i++)
	{
		sum = pre + fi;
		pre = fi;
		fi = sum;
	}

	return (fi);
}

int	main(void)
{
	int	n;

	printf("Input n:");
	scanf("%d", &n);
	printf("f(%d) = %d\n", n, f(n));

	return (0);
}
