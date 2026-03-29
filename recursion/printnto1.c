// print n to 1 using recursion
#include <stdio.h>
int print(int m)
{   if(m==1) {
    printf("1");
    return 0;
}
    printf("%d ",m);
    return print(m-1);
}
int main()
{   int n;
    printf("enter the number:");
    scanf("%d",&n);
    print(n);
    return 0;
}