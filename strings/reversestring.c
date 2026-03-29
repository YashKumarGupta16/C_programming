#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("enter a string:");
    gets(str);
    puts("the reverse is:");
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
        k++;
        size++;
    }
    int j=size-1,i=0;
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    puts(str);
    return 0;
}