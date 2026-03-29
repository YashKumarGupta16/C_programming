#include <stdio.h>
int print(int p,int q)
{   
    printf("%d ",p);
    if(p==q)
{
    return 0;
}
    return print(p+1,q);
}
int main()
{
    int n;
    int a=1;
    printf("enter the number");
    scanf("%d",&n);
    print(a,n);
    return 0;
}