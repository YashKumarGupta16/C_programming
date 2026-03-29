#include <stdio.h>
int main()
{int n;
printf("enter the number ");
scanf("%d",&n);
int sum=0;
int r;
int p=n;
while(p!=0)
{r=p%10;
p=p/10;
sum=10*sum+r;}

printf("%d",sum+n);
}