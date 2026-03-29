//                      1
//  print             1 2 1     by entering no of rows
//                  1 2 3 2 1
//                1 2 3 4 3 2 1
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {printf("  ");}
        for(int m=1;m<=i;m++)
        {
            printf("%d ",m);
        }
        for(int k=i-1;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}