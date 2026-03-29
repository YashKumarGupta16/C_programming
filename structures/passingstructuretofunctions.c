#include <stdio.h>
typedef struct pokemon{
    int power;
}pokemon;
void fun(pokemon p)
{
    p.power=50;
    printf("%d\n",p.power);
    return;
}
int main()
{   pokemon pikachu;
    pikachu.power=45;
    printf("%d\n",pikachu.power);
    fun(pikachu);
     printf("%d\n",pikachu.power);
    return 0;
}
//structures are passed by values.means any change done in void will not reflect in main.