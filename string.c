#include<stdio.h>
int main(){
    char arr[20] = "hello world\0";
    arr[1] = 98;
    int i = 0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}