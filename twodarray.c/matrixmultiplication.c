#include <stdio.h>
int main()
{
    int m,n,p,q;
    printf("enter the  number of rows in first matrix: ");
    scanf("%d",&m);
    printf("enter the  number of coloumns in first matrix: ");
    scanf("%d",&n);
    printf("enter the  number of rows in second matrix: ");
    scanf("%d",&p);
    printf("enter the  number of coloumn in first matrix: ");
    scanf("%d",&q);
    int matrix1[m][n],matrix2[p][q];
    printf("enter the elements in first matrix: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the elements in second matrix: ");
     for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    if(n!=p)
    {
        printf("product between these matrices is not possible");
    }
    else
    {
        int matrix3[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {   matrix3[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
                printf("%d ",matrix3[i][j]);
            }
            printf("\n");
        }
    }
  
    return 0;
}