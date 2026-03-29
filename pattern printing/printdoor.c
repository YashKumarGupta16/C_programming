//      * * * * * * *
//      * * *   * * *   by entering the number of rows
//      * *       * * 
//      *           *

#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(int i=1;i<=2*r-1;i++)
    {
        printf("* ");
    }
    printf("\n");
    int nst=r-1;
    int nsp=1;
    for(int j=1;j<=r-1;j++)
    {
        for(int k=1;k<=nst;k++)
        {
            printf("* ");
        }
        for(int m=1;m<=nsp;m++)
        {
            printf("  ");
        }
         for(int k=1;k<=nst;k++)
        {
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}