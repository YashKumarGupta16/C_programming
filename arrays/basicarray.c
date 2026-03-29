#include <stdio.h>
int main()
{   int arr[5] = {2,4,6,8,1};
    printf("%d",arr[3]);
     arr[2]=100; //array is updated {2,4,100,8,1}
    printf("\n%d",arr[2]);
    float array[2]={1.2,4.5};
    printf("\n%f",array[0]);
    char a[4]={'a','B','&','$'};
    printf("\n%c",a[3]);
    return 0;
}
//similarly we can create arrays of decimal and character