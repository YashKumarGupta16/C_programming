//rotate a n*n matrix by 90 degrees clockwise
//  1  2  3  4
//  5  6  7  8
//  9  10 11 12   
//  13 14 15 16
#include <stdio.h>
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for(int i=0;i<4;i++)
    {
        for(int j=3;j>=0;j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}