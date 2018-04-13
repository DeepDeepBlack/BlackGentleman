#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    char    ch;
    char    src[] = "Arch Gradient Wine 1440P.jpg";
    char    dst[] = "Arch Gradient Wine 1440P_COPY.jpg";
    FILE    *from, *to;

    if((from = fopen(src, "rb")) == NULL)
    {
        exit(1);
    }
    if((to = fopen(dst, "wb")) == NULL)
    {
        exit(1);
    }
    while(fread(&ch, sizeof(ch), 1, from) != 0)
    {
        fwrite(&ch, sizeof(ch), 1, to);
    }
    fclose(from);
    fclose(to);
    printf("Complete!\n");

    return(0);
}
