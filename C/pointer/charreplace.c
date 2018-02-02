#include <stdio.h>

void	sub(char*, char, char);

int	main(void)
{
	char	a, b, s[ ] = "This is fun!";

	puts(s);
	scanf("%c %c", &a, &b);
	sub(s, a, b);
	puts(s);
	
	return (0);
}

void	sub(char	*s, char	a, char		b)
{
	while(*s != '\0')
	{
		if(*s == a)
			*s = b;
		s++;
	}
}
