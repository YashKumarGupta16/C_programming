#include <stdio.h>
int main()
{
    char str[] = "hello priya";
    printf("%p\n", &str[0]);
    printf("%p\n", str);
    char *ptr = str; // ptr now points to address of str[0]
    
    *ptr = 't';
    puts(str);
    ptr++; // in character arrays address differs by 1,now ptr points to address of str[1]
    *ptr = 'i';

    puts(str);
    return 0;
}