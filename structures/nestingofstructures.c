#include <stdio.h>
int main()
{
    typedef struct city{
        char tier;
        int area;
        char name[20];
    }city;
    typedef struct metrocity{
        city normal;
        int mall;
    }metrocity;
    metrocity jaipur;
    jaipur.normal.area=100;
    printf("%d",jaipur.normal.area);
    return 0;

}