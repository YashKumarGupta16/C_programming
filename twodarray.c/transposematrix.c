// 1 2 3
// 4 5 6
#include <stdio.h>
int main()
{
    int matrix[2][3]={{1,2,3},{4,5,6}};
    int transpose[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            transpose[i][j]=matrix[j][i];
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}