//wap to find sum of series 1-2+3-4+...upto n terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }   }
        printf("the sum of this sequence is %d",sum);
        
        
    
}