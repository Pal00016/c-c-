#include<stdio.h> //nCr
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
     int r;
    printf("enter r : ");
    scanf("%d",&r);

    int nCr = combination(n,r);
    printf("%d",nCr);
    return 0;

}