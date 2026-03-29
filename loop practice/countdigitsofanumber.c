//WAP to count the digits of a number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int count=0;
    
    while (n!=0)
    {   n=n/10;
        count =count +1;
        
        
    }
    printf("The number of digits in the entered number is %d",count);
    
    return 0;
}