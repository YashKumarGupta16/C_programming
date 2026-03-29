#include <stdio.h>
int main()
{int p,q,r;
printf("Enter the first number: ");
scanf("%d",&p);
printf("Enter the second number: ");
scanf("%d",&q);
printf("Enter the third number: ");
scanf("%d",&r);
if (p>q)
{
    if (p>r)
    {
       printf("%d is greatest",p);
    }
    else
    {
        printf("%d is greatest",r);
    }
    
 }
 else
 {
    if (q>r)
    {
       printf("%d is greatest",q);
    }
    else
    {
        printf("%d is greatest",r);
    }
    
    
 }
 return 0;
 
}   

