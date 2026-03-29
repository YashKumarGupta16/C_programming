//Write a function to find the value of ncr...
#include <stdio.h>
int factorial(int x)
{   int fact=1;
    for(int i=2;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    printf("Enter the values of n and r:");
    scanf("%d  %d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}