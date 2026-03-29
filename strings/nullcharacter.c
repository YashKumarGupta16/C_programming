//  \0 is known as null character.its ascii value is zero.moreover it does not get printed.
#include <stdio.h>
int main()
{
    char ch='\0';
    printf("%c",ch);
    printf("\n");
    printf("%d",ch);
    return 0;
}