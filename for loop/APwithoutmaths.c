//print AP 4,7,10,13...withou maths
#include <stdio.h>
int main()
{   int n;
printf("Print AP upto how many terms: ");
scanf("%d",&n);
 int a=4;
for (int i=1;i<=n;i++)
{
   
    printf("%d  ",a);
    a=a+3;
}

    return 0;
}