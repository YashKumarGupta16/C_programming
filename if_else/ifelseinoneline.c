#include <stdio.h>
int main() //expression1 ? expression2 :expression3; 
           //no semicolon to be used after after expression 2
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    n%2==0 ? printf("Even number") : printf("Odd number");
    return 0;
}