#include<stdio.h>
int fact( int m)
{   if(m==1||m==0)return 1;
    return m*fact(m-1);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int p=fact(n);
    printf("%d",p);
    return 0;
}