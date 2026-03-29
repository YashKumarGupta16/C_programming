#include<stdio.h>
int main()
{   int a,b,q,r;
    printf("enter the number a and b");
    scanf("%d%d",&a,&b);
    q=a/b;
    printf("the quotient is:%d\n
    ",q);
    r=a-b*q;
    printf("the remainder is:%d",r);

    return 0;
}