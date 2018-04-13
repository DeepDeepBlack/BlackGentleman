#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    int     i;
    FILE    *fp;
    char    f[10], buf[80];
    scanf("%s", f);
    if((fp = fopen(f, "r")) == NULL)
    {
        exit(1);
    }
    while(fgets(buf, 80, fp) != NULL)
    {
        fputs(buf, stdout);
    }
    printf("\n");
    rewind(fp);
    for(i = 0;;i++)
    {
        if(fscanf(fp, "%s", buf)  == EOF)
        {
            break;
        }
    }
    printf("%s have %d words\n", f, i);
    fclose(fp);
    return(0);
}
