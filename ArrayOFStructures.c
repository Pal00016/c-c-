#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;

    pokemon arr[3];
    arr[0].attack = 150;
    arr[0].hp = 150;
    arr[0].speed = 250;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"charizard");

    arr[1].attack = 50;
    arr[1].hp = 50;
    arr[1].speed = 50;
    arr[1].tier = 'S';
    strcpy(arr[1].name,"mewtwo");

    arr[2].attack = 50;
    arr[2].hp = 50;
    arr[2].speed = 50;
    arr[2].tier = 'B';
    strcpy(arr[2].name,"pikachu");

    for(int i=0;i<3;i++){
        printf("Name : %s\n",arr[i].name);
        printf("HP : %d\n",arr[i].hp);
        printf("Attack : %d\n",arr[i].attack);
        printf("Tier : %c\n",arr[i].tier);
        printf("Speed : %d\n",arr[i].speed);
    }
    
 

return 0;
}