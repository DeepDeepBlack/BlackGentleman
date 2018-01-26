#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int	search(int	a[ ], int	from, int	size, int	key)
{
	int	i;

	for(i = from; i < size; i++)
		if(a[i] == key)
			return i;

	return (-1);
}

int	main(void)
{
	int	i, a[SIZE], from, key;

	from = 0;

	srand(time(NULL));
	for(i = 0; i < SIZE; i++)
		a[i] = rand( ) % 10 + 1;
	printf("Enter a number you want to search(1 ~ 10):");
	scanf("%d", &key);
	while(from < SIZE)
	{
		int	ans;
		ans = search(a, from, SIZE, key);
		if(ans == -1)
		{
			if(!(from))
			{
				printf("%d not found\n", key);
			}
			break;
		}
		else
		{
			printf("%d found at a[%d] = %d\n", key, ans, a[ans]);
			from = ans + 1;
		}
	}
	
	return (0);
}
