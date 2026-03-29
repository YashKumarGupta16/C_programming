#include <stdio.h>
int fibo(int m)
{
    if (m==1 || m==2)
    {return 1;}
    return fibo(m-1)+fibo(m-2);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}