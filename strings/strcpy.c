#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="google";
    char s2[7];
    strcpy(s2,s1); //copy(deep copy) the contents of string s1 to s2
    puts(s2);
    return 0;
}