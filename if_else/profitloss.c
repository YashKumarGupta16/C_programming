#include <stdio.h>
int main()
{
    float CP,SP,p,l;
    printf("Enter the cost price (in rupees):");
    scanf("%f",&CP);
    printf("Enter the selling price(in rupees):");
    scanf("%f",&SP);
    p=SP-CP; 
    l=CP-SP;
    if (SP>CP)
    {
       printf("It is a profit of rupees %f ",p);
    }
    else
    {
        printf("It is a loss of rupees %f",l);
    }

    return 0;
    

}