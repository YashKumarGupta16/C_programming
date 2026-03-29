//display ap 100,97,94...upto positive terms
#include <stdio.h>
int main()
{   int n;
    printf("print AP upto how many terms: ");
    scanf("%d",&n);
    int a=100;
    for (int i=1;i<=n;i++)
    {
      printf("%d  ",a);
      a=a-3; 
    }
    
    return 0;
}