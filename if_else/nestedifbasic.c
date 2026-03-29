#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    if (x % 3 == 0)
    {
        if (x % 5 == 0)
        {
            printf("It is divisible by 5 and 3");
        }
        else
        {
            printf("It is not divisible by 5 and 3");
        }
        
    }
    else
    {
        printf("It is not divisible by 5 and 3");
    }
}