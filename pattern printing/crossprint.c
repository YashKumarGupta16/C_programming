//print cross of order n(odd)
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows(odd):");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r;j++)
        {
            if(i==j||i+j==6)
            {
                printf("* ");
            }
            else{printf("  ");}
        }
        printf("\n");
    }
    return 0;
}