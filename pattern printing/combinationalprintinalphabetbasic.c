//                A
//print         A B
//            A B C
//          A B C D
#include <stdio.h>
int main()
{int r;
printf("Enter the number of rows:");
scanf("%d",&r);
for(int i=1;i<=r;i++)
{
    for(int j=1;j<=r-i;j++)
    {
        printf("  ");
    }
    int p=65;
    for(int k=1;k<=i;k++)
    {
       printf("%c ",p);
       p++; 
    }
    printf("\n");
}

}