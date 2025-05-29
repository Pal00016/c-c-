#include<stdio.h>
#include<string.h>
int main(){
//    char str[] = "Hello World";
//    puts(str); //printf("%s",str) this will also give the right answer
     char str[40];
    //  scanf("%s",str);  //only the first word will be considered
    gets(str);
     printf("your input is : %s",str);
    return 0;
}
