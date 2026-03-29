#include <stdio.h>
int main()
{   int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x%2==0)
    {
       printf("It is an even number");
    }
    if (x%2!=0) // != means not equal to zero
    {
       printf("It is an odd number");
    }
    
}