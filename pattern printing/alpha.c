//                      A
//  print             A B A     by no of rows
//                  A B C B A
//                A B C D C B A

#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            printf("  ");
        }
        int p=65;
        for(int k=1;k<=i;k++)
        {
            printf("%c ",p);
            p++;
        }
        int a=63+i;
        for(int m=1;m<=i-1;m++)
        {
            printf("%c ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}