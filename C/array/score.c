#include <stdio.h>

int	main(void)
{
	int	i, StuScore[10], total;

	total = 0;

	for(i = 0; i < 10; i++)
	{
		printf("Student %d score:", i + 1);
		scanf("%d", &StuScore[i]);
	}
	for(i = 0; i < 10; i++)
		total += StuScore[i];
	printf("Average Score: %.2f\n", (double)total/10);

	return (0);
}
