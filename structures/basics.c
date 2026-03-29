#include <stdio.h>
int main()
{
    struct pokemon{ //user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
        int power;
        char colour[20];
    };
    struct pokemon pikachu;  //  here int x = pokemon pikachu 
    pikachu.hp=20;
    pikachu.speed=40;
    pikachu.attack=100;
    pikachu.tier='A';
    strcpy(pikachu.colour,"yellow");
    
    printf("enter power:");
    scanf("%d",&pikachu.power);

    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    printf("%d\n",pikachu.power);
    printf("%s\n",pikachu.colour);
    return 0;
}

// structure are used to store multiple attributes(of different data type) of particular things