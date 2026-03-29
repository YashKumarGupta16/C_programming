// insert r at second index in string college that is corllege
#include <stdio.h>
int main()
{
    char s1[20]="college";
    for(int i=6;i>=2;i--)
    {
        s1[i+1]=s1[i];
    }
    s1[2]='r';
    puts(s1);
    return 0;
}