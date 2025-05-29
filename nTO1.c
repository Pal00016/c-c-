#include<stdio.h>
int decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enater n : ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}