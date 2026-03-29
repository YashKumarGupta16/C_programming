//given is an array of marks.print index of those whose got less than or equal to 35
#include <stdio.h>
int main()
{
    int marks[10]={23,45,67,34,35,46,57,12,24,43};
    printf("index of those who got less than 35 marks is :");
    for(int i=0;i<=9;i++)
    {
        if(marks[i]<=35)
        printf("%d ",i);
    }
    return 0;
}