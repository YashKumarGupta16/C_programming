//print         *
//              *
//          * * * * *
//              *
//              *

#include <stdio.h>
int main()
{   int r;
    printf("enter rows(odd)");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r;j++)
        {
            if(i==(r+1)/2||j==(r+1)/2)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
