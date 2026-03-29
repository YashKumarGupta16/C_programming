//          1 2 3 4 5 6 7
//          1 2 3   5 6 7
//          1 2       6 7
//          1           7
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(int i=1;i<=2*r-1;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    int nsp=1;
    int s=r-1;
    int a=r+1;
    for(int j=1;j<=r-1;j++)
    {
        for(int k=1;k<=s;k++)
        {
            printf("%d ",k);
        }
        s--;
        for(int m=1;m<=nsp;m++)
        {
            printf("  ");
        }
        nsp+=2;
        for(int b=a;b<=2*r-1;b++)
        {
            printf("%d ",b);
        }
        a++;
        printf("\n");
    }
    return 0;
}