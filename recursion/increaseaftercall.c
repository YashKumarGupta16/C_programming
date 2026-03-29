#include <stdio.h>
int fun(int p)
{   if(p==0)return 0;
    fun(p-1);
    printf("%d ",p);
}
int main()
{   int n;
    printf("enter the number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}