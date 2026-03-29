#include <stdio.h>
void reverse(int a[])
{
    int i=0;
    int j=6;
    while (i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return; 
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    printf("%d ",arr[0]);
    printf("%d ",arr[1]);
    printf("%d ",arr[2]);
    printf("%d ",arr[3]);
    printf("%d ",arr[4]);
    printf("%d ",arr[5]);
    printf("%d ",arr[6]);
    return 0;
}