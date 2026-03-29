#include<stdio.h>
int main()
{
    int a,b,r;
    printf("enter dividend:");
    scanf("%d",&a);
    printf("enter divisor;");
    scanf("%d",&b);
    r=a%b;
    printf("the remainder when %d is divided by %d is %d",a,b,r);
    return 0;
}