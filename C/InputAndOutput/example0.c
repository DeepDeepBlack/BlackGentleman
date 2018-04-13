#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	ch;
	FILE	*fp;
	if((fp = fopen("test.txt", "r")) == NULL)
	{
		exit(1);
	}
	while((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
	}
	fclose(fp);

	return(0);
}
