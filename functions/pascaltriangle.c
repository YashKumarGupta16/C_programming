//               1
//               1 1     print this pascal triangle using the no of rows 
//               1 2 1
//               1 3 3 1
//               1 4 6 4 1
#include <stdio.h>
int factorial(int x)
{ int fact=1;
    for(int f=2;f<=x;f++)
    {
        fact=fact*f;
    }
    return fact;
}
int ncr(int n,int r)
{
    int combination=factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}
int main()
{
    int a;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    int p=a-1;
    int h=0;
    for(int i=1;i<=a;i++)
    {
       
        int k=0;
        for(int q=1;q<=i;q++)
        {
            printf("%d ",ncr(h,k));
            k++;
        }
        h++;
        printf("\n");
    }
    return 0;
}