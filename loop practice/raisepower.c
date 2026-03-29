#include <stdio.h>
int main()
{
    int a,b;
    printf("a^b ,enter a and b respectively ");
    scanf("%d %d",&a,&b);
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("%d raise to the power %d is %d",a,b,p);
    return 0;
}