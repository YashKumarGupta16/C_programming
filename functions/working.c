#include <stdio.h>
void england()
{
    printf("You are an english\n");  //6
    return;  //7
}
void australia()
{
    printf("You are an australian\n"); //4
    england();  //5
    return;  //8
}
void india()
{
    printf("You are an Indian\n"); //2
    australia(); //3
    return;  //9
}
int main()
{ india();  //1
  return 0;  //10
}