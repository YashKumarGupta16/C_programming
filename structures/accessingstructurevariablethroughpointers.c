#include <stdio.h>
 int main()
 {
    typedef struct pokemon{
        int power;
    }pokemon;
    pokemon a;
    pokemon* x=&a;
    (*x).power=60;  //a.power=60;
    printf("%d",a.power);
    return 0;
 }