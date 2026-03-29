//write a program to print the reverse of a number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    int r;
    while (n!=0)
    {
        r=n%10;
        n=n/10;
        sum=10*sum+r;
    }
    printf("the reverse of the entered number is %d",sum);
}