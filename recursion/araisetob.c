#include <stdio.h>
int power(int p,int q)
{   
    if(q==0) return 1;
    return p*power(p,q-1);   
}
int main()
{   int a,b;
    printf("enter a,b:");
    scanf("%d %d",&a,&b);
    int k=power(a,b);
    printf("%d",k);
    return 0;
}