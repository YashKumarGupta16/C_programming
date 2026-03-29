#include<stdio.h>
void sum(int p,int s)
{   if(p==0)
{
    printf("%d",s);
    return;
}

    sum(p-1,s+p);
    return;
}
int main()
{   int n;
     printf("enter the number:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}