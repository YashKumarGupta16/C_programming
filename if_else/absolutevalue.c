#include <stdio.h>
int main()
{
    int x,y;
    printf("enter the number: ");
    scanf("%d",&x);
    if (x<0)
    {
        y=x*(-1);
        printf("the absolute value of the number is: %d",y);
    }
    else
    {
        printf("the absolute value of the entered number is: %d",x);
    } 
        return 0;
}




    
    
