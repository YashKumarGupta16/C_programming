//tell if given number is divisibke by 3 or 5but not by 15
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    if (x%3==0 || x%5==0)
    {
        if (x%15!=0)
        {
            printf("The entered number is divisible by 3 or 5 but not by 15");
        }
        else
        {
            printf("The number is divisible by 15");
        }
        
        
    }
    else
    {
        printf("the number is not divisible by 3 or 5");
    }
    return 0;
    
    
}