#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	buf[80];
	FILE	*fp;
	if((fp = fopen("test.txt", "r")) == NULL)
	{
		exit(1);
	}
	while(fgets(buf, 80, fp) != NULL)
	{
		fputs(buf, stdout);
	}
	fclose(fp);

	return(0);
}
