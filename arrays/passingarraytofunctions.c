//when we pass an array to a function it is by default passed by reference so no need of pointers.
// like we could also swap two numbers by making arrays
#include <stdio.h>
void fun(int a[])
{
    a[1]=10;
    return;
}
int main()
{
    int arr[5]={0,1,2,3,4};
    printf("%d\n",arr[1]);
    fun(arr);
    printf("%d\n",arr[1]);
    return 0;


}