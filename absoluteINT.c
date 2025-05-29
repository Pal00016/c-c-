#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a>=0){
        printf("%d",a);
    }
    else{
        a = a * -1;
        printf("The abs olute value of number is : %d",a);
    }
    return 0;
    }
