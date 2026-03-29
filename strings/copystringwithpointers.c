#include <stdio.h>
int main()
{
    char* s1="physicswallah";
    char* s2;
    s2=s1;  //s2 becomes a deep copy
    puts(s1);
   
    puts(s2);
    s1="unacademy";
    puts(s1);
    puts(s2);
    return 0;
}