#include <stdio.h>
int swap(int a[][],int b[][])
{
    a[][]=a[][]+b[][];
    b[][]=a[][]-b[][];
    a[][]=a[][]-b[][];
    return a[][],b[][];
}
int main()
{
    int r,c;
    printf("enter the number of rows: ");
    scanf("%d",&r);
    printf("enter the number of coloumns: ");
    scanf("%d",&c);
    int arr[r],[c];
    printf("enter the elements: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        scanf("%d",&arr[r][c]);
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}