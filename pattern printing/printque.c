// print 64 65 67
//       64 65 67
//       64 65 67     insertion of count is important

#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        int count = 1;
        for (int j = 1; j <= r; j++)
        {
            printf("%d ", count + 64);
            count = count + 1;
        }
        printf("\n");
    }
    return 0;
}
