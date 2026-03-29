// WAP to print sum of even digits of a number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter thre number: ");
    scanf("%d", &n);
    int sum = 0;
    int r;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
          { sum = sum + r;}
    }
    printf("the sum of even digits of the entered number is %d", sum);
    return 0;
}
