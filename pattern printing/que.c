#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the number of rows: ");
    scanf("%d",&r);
    printf("enter the number of coloumns: ");
    scanf("%d",&c);
    for ( int i=1;i<=r; i++)
    {
        for (int j=1;j<=c; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
    
}
//loop ke andar loop ho to variable i,j maano