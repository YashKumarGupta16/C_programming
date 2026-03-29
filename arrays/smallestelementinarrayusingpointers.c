#include <stdio.h>
int main()
{
    int arr[]={4,2,5,1,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int *min=arr;
   for(int i=0;i<size;i++)
   {
    if (arr[i]<*min)
    {
        *min=arr[i];
    }
   }
   printf("%d",*min);
    return 0;
}