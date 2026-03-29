#include <stdio.h>
int main()
{
    int r;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {

        for(int j=0;j<=r-i+1;j++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}