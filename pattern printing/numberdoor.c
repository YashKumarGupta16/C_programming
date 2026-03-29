//  1 2 3 4 3 2 1
//  1 2 3   3 2 1
//  1 2       2 1
//  1           1
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int b=1;
    int c=r-1;
    for(int i=1;i<=r;i++)
    {   int a=1;
        for(int j=0;j<=r-i;j++)
        {   
            printf("%d ",a);
            a++;
        }
        if(i!=1)
       { 
        for(int k=1;k<=b;k++)
        {
            printf("  ");
            }
             b+=2;
       }
       if(i==1)
       {
        for(int p=r-1;p>0;p--)
        {
            printf("%d ",p);
        }
       } 
       else{
        for(int a=c;a>0;a--)
        {
            printf("%d ",a);

        }
        c--;
       }
       printf("\n");
    }
    return 0;
}
