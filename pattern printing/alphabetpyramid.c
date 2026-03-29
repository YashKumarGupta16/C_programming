//                         A
//  print                A B C      by entering the number of rows
//                     A B C D E
//                   A B C D E F G
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            printf("  ");
        }
        char ch='A';
        for(int k=1;k<=2*i-1;k++)
        {   
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}