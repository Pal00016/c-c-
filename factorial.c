#include<stdio.h>
int factorial(int x){
    if(x == 1) return 1;
    return x * factorial(x-1);
}
int main(){
    int x;
    printf("Enter the factorial : ");
    scanf("%d",&x);
    int answer = factorial(x);
    printf("%d",answer);
    return 0;
}