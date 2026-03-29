//                          1
//      print             1 2 3         by the number of rows
//                      1 2 3 4 5
//                    1 2 3 4 5 6 7
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
