#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int NoOfMatches;
        float average;
    }cricketer ;

    //3 cricketers
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].NoOfMatches);
        scanf("%f",&arr[i].average);
    }

    for(int i=0;i<3;i++){
        printf("Name : %s\n",arr[i].name);
        printf("age : %d\n",arr[i].age);
        printf("Number of matches played : %d\n",arr[i].NoOfMatches);
        printf("Average runs : %f\n",arr[i].average);
    }


    return 0;
}