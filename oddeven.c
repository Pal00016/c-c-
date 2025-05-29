#include<stdio.h>
int main(){
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("this is a even number");
    }
    else{
        printf("this is a odd number");
    }

    return 0;
}