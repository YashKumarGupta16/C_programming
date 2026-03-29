#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates: ");
    scanf("%d %d",&x,&y);
    if (x==0 && y==0)
    {
        printf("The point lies on origin");
    }
    else if (x==0)
    {
        printf("the point lies on y axis");
    }
    else if (y==0)
    {
        printf("The point lies on x axis");
    }
    else
    {
        printf("The point does not lie on any of the axis");
    }

    
   return 0; 
    
    
}