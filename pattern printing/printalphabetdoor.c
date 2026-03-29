//                  A B C D E F G
//      print       A B C   E F G       by entering the number of rows.
//                  A B       F G
//                  A           G
#include <stdio.h>
int main()
{
    int r;
    printf("enter the number of rows: ");
    scanf("%d", &r);
    int p = 65;
    int nsp = 1;
    int b = r - 1;
    for (int i = 1; i <= 2 * r - 1; i++)
    {
        printf("%c ", p);
        p++;
    }
    printf("\n");
    for (int j = 1; j <= r - 1; j++)
    {
        char ch = 'A';
        for (int g = 1; g <= b; g++)
        {
            printf("%c ", ch);
            ch++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            ch++;
        }
        nsp += 2;
        for (int m = 1; m <= b; m++)
        {
            printf("%c ", ch);
            ch++;
        }
        b--;
        printf("\n");
    }
    return 0;
}