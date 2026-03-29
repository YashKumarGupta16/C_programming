#include <stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,2};
    int check=0;
    for(int i=0;i<=6;i++)
    {
        for(int j=i+1;j<=6;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is duplicate",arr[i]);
                check=1;
            }
        }
    }
    if(check==0)
    {
        printf("there is no duplicate element");
    }
    return 0;
}