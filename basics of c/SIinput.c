#include <stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter the principal:");//input dalne ke baad it will automatically go to next line \n ki no need
    scanf("%f",&p);
    printf("enter the rate:");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f",&t),
    si=p*r*t/100;
    printf("the interest is%f",si);
    return 0;
}