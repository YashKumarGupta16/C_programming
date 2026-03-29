#include <stdio.h>
int main()
{
    float r;
    printf("enter the radius here\n");
    scanf("%f", &r);
    float pi=3.14;
    float Area=pi*r*r;
    printf("the area is:\n%f",Area);
    return 0;

}