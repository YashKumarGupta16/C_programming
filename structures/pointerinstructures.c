#include <stdio.h>
int main()
{
    typedef struct pokemon{
        int power;
        int hp;
    }pokemon;
 // int* x--stores the address of integer
 pokemon a;
 a.power=4;
 pokemon* x =&a;  //here address of a is same as address of a.power
 printf("%p",x); 
 printf("\n%p",&a.power); 
    return 0;
}