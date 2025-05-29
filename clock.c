#include<stdio.h>
#include<time.h> //for sleep function
#include<unistd.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int hour, minute, second;
    hour = minute = second = 0;
    while(1){ //acts as an infinite loop that runs unit broken
    system("cls"); //clear output screem
    printf("%02d : %02d : %02d", hour,minute,second);
    fflush(stdout); //clear output buffer in gcc
    second ++ ; //increase second
    if(second == 60){
        minute+=1;
        second = 0;
    }
    if(minute == 60){
        hour+=1;
        minute=0;
        second=0;
    }
    sleep(1); //wait till one second
    }
    return 0;

}