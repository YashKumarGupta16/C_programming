//1 0 0 0 1
//0 1 1 0 1
//1 1 1 0 1
#include <stdio.h>
int main()
{
    int arr[3][5]={{1,0,0,0,1},{0,1,1,0,1},{1,1,1,0,1}};
   int max=-1;
   int p;
    for(int i=0;i<3;i++)
    { int count=0;
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                count=count+1;
            }
        }
        if(count>max)
        {
            max=count;
             p=i;
        }
    }
    printf("maximum number of one is %d in the row with index %d",max,p);
    return 0;
}