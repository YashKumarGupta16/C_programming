// print       1
//             0 1
//             1 0 1
//             0 1 0 1....
#include <stdio.h>
int main()
{
    int r;
    printf("enter the no of rows:");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0 && j % 2 != 0)
            {
                printf("1 ");
            }
            else if (i % 2 == 0 && j % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
//other logics: 1)if (i+j)%2==0 print 1 else print 0
//              2)for alternation if(a==0){a=1;}else a=0;  something this type code
