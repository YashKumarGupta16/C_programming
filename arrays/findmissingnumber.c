//given an array containing element from 1 to 10.except one elment in the range is missing.find the missing no
#include <stdio.h>
int main()
{
    int arr[9]={1,2,3,4,5,7,8,9,10};
     int sum1=(10*11)/2;
    int sum2=0;
    for(int i=0;i<=8;i++)
    {
        sum2=sum2+arr[i];
    }
    int missing=sum1-sum2;
    printf("missing element in the array is %d",missing);
    return 0;
}