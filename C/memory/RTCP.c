#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define     fn     "testRTCP.txt"
typedef     struct      word{
    char    str[20];
    int     num;
    struct  word    *nxt;
}   WORD;

int     main(void)
{
    char    s[20];
    FILE    *fp;
    WORD    *head, *p;
    fp = fopen(fn, "r");
    p = (WORD*)malloc(sizeof(WORD));
    head = p;
    head -> num = 1;
    head -> nxt = NULL;
    fscanf(fp, "%s", head -> str);
    while(fscanf(fp, "%s", s) != EOF)
    {
        WORD    *cmp = head;
        char    flag = 0;
        while(cmp != NULL)
        {
            if(!strcmp(cmp -> str, s))
            {
                cmp -> num++;
                flag = 1;
                break;
            }
            else
                cmp = cmp -> nxt;
        }
        if(!flag)
        {
            p -> nxt = (WORD*)malloc(sizeof(WORD));
            p -> nxt -> num = 1;
            p -> nxt -> nxt = NULL;
            strcpy(p -> nxt -> str, s);
            p = p -> nxt;
        }
    }
    p = head;
    while(p != NULL)
    {
        printf("%10s : %d times\n", p -> str, p -> num);
        p = p -> nxt;
    }
    while(head != NULL)
    {
        WORD * tmp;
        tmp = head;
        head = head -> nxt;
        free(tmp);
    }
    fclose(fp);
    return(0);
}
