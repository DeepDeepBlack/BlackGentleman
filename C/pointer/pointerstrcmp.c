#include <stdio.h>

int	ft_strcmp(char		*, char		*);

int	main(void)
{
	int	result;
	char	word1[ ] = "I like C";		//word1
	char	word2[ ] = "This is fun";	//word2

	result = ft_strcmp(word1, word2);
	if(!result)
		printf("word1 equal word2\n");
	else
		printf("word1 does not equal word2\n");

	return (0);
}

int	ft_strcmp(char		*str1, char		*str2)
{
	int	i;

	for(i = 0; !(*(str1 + i) == '\0' && *(str2 + i) == '\0'); i++)
	{
		if(*(str1 + i) != *(str2 + i))
			return (-1);
	}

	return (0);
}
