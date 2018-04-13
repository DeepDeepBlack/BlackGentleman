#include <stdio.h>
#include <stdlib.h>
#define     LIST    "test1.txt"
typedef     struct      friend{
    char    name[10];
    char    phone[15];
    char    birth[15];
}FRIEND;

void    show(char*);
void    enter(char*);

int     main(void)
{
    char    ch;
    while(1)
    {
        printf("Do you want to 1)output profile 2)add friend : ");
        scanf("%c", &ch);
        if(ch == '1')
        {
            show(LIST);
        }
        else if(ch == '2')
        {
            enter(LIST);
        }
        fflush(stdin);
    }
    return(0);
}

void    show(char*  fn)
{
    FRIEND      f;
    FILE        *fp;
    if((fp = fopen(fn, "r")) == NULL)
    {
        printf("error!\n");
        return ;
    }
    while(fscanf(fp, "%s", f.name) != EOF)
    {
        fscanf(fp, "%s", f.phone);
        fscanf(fp, "%s", f.birth);
        printf("============================\n");
        printf("%10s phone: %-15s\n", f.name, f.phone);
        printf("%10s birthday: %-15s\n", f.name, f.birth);
    }
    printf("===========================\n");
    fclose(fp);
}

void    enter(char  *fn)
{
    FRIEND      new;
    FILE        *fp;
    fp = fopen(fn, "a");
    printf("enter name : ");
    scanf("%s", new.name);
    fprintf(fp, "%s ", new.name);
    printf("enter phone : ");
    scanf("%s", new.phone);
    fprintf(fp, "%s ", new.phone);
    printf("enter birthday : ");
    scanf("%s", new.birth);
    fprintf(fp, "%s\n", new.birth);
    fclose(fp);
}
