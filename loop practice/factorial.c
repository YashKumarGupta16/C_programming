// wap to print the factorial of a number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i=n;
    while (i-1>=1)
    {
        n = n * (i - 1);
        i--;
    }
    printf("the factorial of entered number is %d", n);
    return 0;
}