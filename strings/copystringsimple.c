#include <stdio.h>
int main()
{
    char s1[]="physics wallah";
    int i=0;
    int size=0;
    while(s1[i]!='\0')
    {
        size++;
        i++;
    }
    char s2[size+1];
    for(int j=0;j<=size;j++)
    {
        s2[j]=s1[j];
    }
   puts("the string s2 is");
    puts(s2);
    return 0;
}