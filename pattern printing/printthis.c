//print  1
//       2 3
//       4 5 6          by entering no of rows
//       7 8 9 10
#include <stdio.h>
int main()
{
    int r,a=1;
    printf("enter the no of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
//    int a=1;(dont define variable here)
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}


