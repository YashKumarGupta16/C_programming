#include <stdio.h>
int main()
{
    int arr[7]={13,2,17,4,9,6,17};
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<=6;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(int i=0;i<=6;i++)
    {
        if(arr[i]!=max && smax<arr[i])
        {
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}