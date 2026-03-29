#include<stdio.h>
int main()
{
    int arr[9]={23,34,54,23,26,16,1,45,24};
    int x=50;
    int count=0;
    for(int i=0;i<=8;i++)
    {
        for(int j=i+1;j<=8;j++)
        {
            if(arr[i]+arr[j]==50)
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}