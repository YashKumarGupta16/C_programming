#include <stdio.h>
int main()
{int n;
printf("how many terms you wanna print");
scanf("%d",&n);
float a=100;
for(int i=1;i<=n;i++)
{printf("%f  ",a);
a=a*0.5;}
return 0;
}