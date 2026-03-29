#include <stdio.h>
int minimum(int p,int q)
{ int min;
    if(p<=q)
    return p;
    else return q;
   }
 int main()
{int a,b,x,y=0;
printf("enter numbers: ");
scanf("%d %d",&a,&b);
for(int i=2;i<=minimum(a,b);i++)
{ if(a%i==0 && b%i==0)
 { x=i;
 y++;}}
 if(y==0)
 { printf("hcf is 1");}
 else
 {printf("hcf is %d",x);}
 return 0;
}
