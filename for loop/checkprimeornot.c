//WAP to check whether a number is prime or not
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number you want to check: ");
    scanf("%d",&x);
    int a=0;
    for (int i=2;i<=x-1;i++)
    {
        if (x%i==0)
        {
           a=1;
           break; 
        }
        
    }
    if(x==1)
    printf("1 is neither prime nor composite");
  else if (a==0)
    
        printf("The given number is prime");
    
    else
    
        printf("The given number is composite");
    

    return 0;
}    
    
    
    
