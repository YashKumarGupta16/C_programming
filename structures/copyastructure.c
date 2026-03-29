#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct company{
        int employee;
        char tier;
        char country[20];
    }company;
    company paytm,graviton;
    paytm.employee=2745;
    paytm.tier='A';
    strcpy(paytm.country,"India");
    graviton=paytm; //deep copy has been created
    return 0;
}