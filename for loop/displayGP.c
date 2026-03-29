//display gp 1,2,4,8,16...upto n terms
#include <stdio.h>
int main()
{   int n;
    printf("Display GP upto how many terms: ");
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++)
    {
       printf("%d  ",a);
       a=a*2;
    }
    
    return 0;
}