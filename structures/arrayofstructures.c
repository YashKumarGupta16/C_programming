#include <stdio.h>
int main()
{
  typedef struct pokemon{
        int power;
        char tier;
        char colour[15];
    }pokemon;
    pokemon arr[3];
    arr[0].power =3;
    arr[0].tier ='a';
    strcpy(arr[0].colour,"yellow");
    arr[1].power =4;
    arr[1].tier ='c';
    strcpy(arr[1].colour,"blue");
    arr[2].power =1;
    arr[2].tier ='b';
    strcpy(arr[2].colour,"orange");
    for(int i=0;i<3;i++)
    {
        printf("power: %d\n",arr[i].power);
        printf("tir: %c\n",arr[i].tier);
        printf("colour: %s\n",arr[i].colour);
    }
    return 0;
}