// print     1
//           A B
//           1 2 3
//           A B C D

#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        int a = 65;
        for (int j = a; j <= a + i - 1; j++)
        {   if(i%2==0)
            printf("%c ", j);
        else{ for(int k=1;k<=i;k++)
            { printf("%d ", k);}
            break;
        }}
        printf("\n");
    }
    return 0;
}