//  print  1
//         1 2          by entering number of rows
//         1 2 3    
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
