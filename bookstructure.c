//create a struct type book with name price and number of pages as its attribute
#include<stdio.h>
#include<string.h>
int main(){
struct book{
    char name[50];
    int noOfPages;
    float price;
}a,b,c;

a.noOfPages = 100;
a.price = 411.5;
//a.name = {"secret seven"}; not correct way instead use this code above strcpy wala
strcpy(a.name,"secret seven");

printf("%s\n",a.name);
printf("%d\n",a.noOfPages);
printf("%f\n",a.price);
return 0;
}