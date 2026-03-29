#include <stdio.h>
int main()
{
    int arr[7] = {1, 7, 3, 4, 3, 7, 1};
    int check2 = 0;
    for (int i = 0; i <= 6; i++)
    {
        int check = 0;
        for (int j = i+1; j <= 6; j++)
        {
            if ((arr[i] != arr[j]))
            {
                check = check + 1;
            }
        }
        if (check == 6)
        {
            printf("unique element is %d\n", arr[i]);
            check2 = 1;
        }
    }
    if (check2 == 0)
    {
        printf("there is no unique element");
    }

    return 0;
}
