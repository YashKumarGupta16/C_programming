//      * * * * 
//        * * *
//          * *
//            *
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number f rows: ");
    scanf("%d",&r);
    int nsp=0;
    int nst=r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=nst;j++)
        {
            printf("* ");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}

