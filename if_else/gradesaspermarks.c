#include <stdio.h>
int main()
{   float m;
    printf("Enter percentage: ");
    scanf("%f",&m);
    if (m>=80)
    {
        printf("A Grade");
    }
    else if (m>=50)
    {
        printf("B Grade");
    }
    else
    {
        printf("C Grade");
    }
    
    
    
    
    return 0;
}