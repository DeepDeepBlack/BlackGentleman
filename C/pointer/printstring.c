#include <stdio.h>

void	ft_print(char*);

int	main(void)
{
	char	*str = "pointer is fun!";
	ft_print(str);

	return (0);
}

void	ft_print(char *s)
{
	while(*s != '\0')
	{
		printf("%c", *s);
		s++;
	}

	printf("\n");
}
