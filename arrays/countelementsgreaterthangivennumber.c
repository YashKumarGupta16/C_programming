#include <stdio.h>
int main()
{
    int arr[7]={13,4,56,74,24,32,1};
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    int c=0;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]>x)
        {
            c=c+1;
        }
    }
    printf("the numbers in array greater than %d is %d",x,c);
    return 0;
}