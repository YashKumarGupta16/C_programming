//rotate an array of x elements by k steps
#include <stdio.h>
void reverse( int a[],int p,int q)
{
    int m=p;
    int n=q;
    while(m<=n)
    {
        int temp=a[m];
        a[m]=a[n];
        a[n]=temp;
        m++;
        n--;
    }
    return;
}
int main()
{   int x;
    printf("enter the number of elements in array: ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<=x-1;i++)
    {
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Rotate the array by steps: ");
    scanf("%d",&k);
    reverse(arr,0,x-1);
    reverse(arr,0,k-1);
    reverse(arr,k,x-1);
    for(int r=0;r<=x-1;r++)
    {
        printf("%d ",arr[r]);
    }
    return 0;
}