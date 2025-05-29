#include<stdio.h>
int main(){
   struct pokemon{ //user defined data type
    int hp;
    int speed;
    int attack;
    char tier;
   }pikachu, charizard;
   
   printf("enter attack of pikachu : ");
   scanf("%d",&pikachu.attack);
   //pikachu.attack = 60;
   pikachu.hp = 50;
   pikachu.speed = 100;
   pikachu.tier = 'A';
   printf("%d",pikachu.attack);
   
   //struct pokemon charizard;
   charizard.attack = 180;
   charizard.hp = 100;
   charizard.speed = 50;
   charizard.tier = 'S';
    return 0;
}