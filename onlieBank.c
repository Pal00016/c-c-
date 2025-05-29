#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct user{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main(){
    struct user usr,usr1;
    FILE *fp; //use to hold information
    char filename[50],phone[50],pword[50];
    int opt,choice;
    char cont = 'y';
    float amount;

    printf("\nWhat do you want to do?");
    printf("\n1.REgister an account");
    printf("\n2.Login to an account");

    printf("\n\nYour choice : \n");
    scanf("%d",&opt);

    if(opt == 1){
        system("cls");
        printf("Enter your account number : ");
        scanf("%s",usr.ac);
        printf("\nEnter your phone number : ");
        scanf("%s",usr.phone);
        printf("Enter your password : ");
        scanf("%s",usr.password);
        usr.balance = 0;
        strcpy(filename,usr.phone);
        fp = fopen(strcat(filename,".dat"),"w");//fopen is use to open a file and .dat is a text file you read strings from it strcat is use to combine two strings(concatinate them)
        fwrite(&usr,sizeof(struct user),1,fp);//fwrite is use to creatr a file for data storage,updation,insertion and deletion
        if(fwrite != 0){
            printf("account successfully registered");
        }
        else{
            printf("something went wrong please try again");
        }
        fclose(fp);
    }   
    if(opt==2){
      system("cls");
      printf("\nEnter your phone number : ");
      scanf("%s",phone);
      printf("\nEnter your password : ");
      scanf("%s",pword);
      strcpy(filename,phone);
      fp = fopen(strcat(filename,".dat"),"r");
      if(fp == NULL){
        printf("\n Account not registered");
      }
      else{
      fread(&usr,sizeof(struct user),1,fp);
      fclose(fp);
      if(!strcmp(pword,usr.password)){
        printf("\n\t\tWelcome %s",usr.phone);
        while(cont == 'y'){
        
           printf("\n\nPress 1 for balance inquiry");
           printf("\n\nPress2 for depositing cash");
           printf("\n\nPress 3 for cash withdrawl");
           printf("\n\nPress 4 for online transfer");
           printf("\n\nPress 5 to change password");
           printf("\n\nYour choice is : ");
           scanf("%d",&choice);

           switch(choice){
            case 1:
            printf("\nYour current balence is Rs.%.2f",usr.balance);
              break;
            case 2:
            printf("\nEnter the amount : ");
            scanf("%f",&amount);
            usr.balance += amount;
            fp = fopen(filename,"w");
           fwrite(&usr,sizeof(struct user),1,fp);
           if(fwrite != NULL) printf("\nsuccessfully registered");
           fclose(fp);
           break;
           case 3:
            printf("\nEnter the amount : ");
            scanf("%f",&amount);
            usr.balance -= amount;
            fp = fopen(filename,"w");
           fwrite(&usr,sizeof(struct user),1,fp);
           if(fwrite != NULL) printf("\nYou have withdrawn Rs.%.2f",amount);
           fclose(fp);
            break;
          case 4:
            printf("\nPlease enter the phone number to transfer the balance to : ");
            scanf("%s",phone);
            printf("\nplease enter amount to transfer : ");
            scanf("%f",&amount);
           if(amount > usr.balance) printf("\nInsufficient balance");
           else{
            strcpy(filename,phone);
            fp=fopen(strcat(filename,".dat"),"r");
            fread(&usr1,sizeof(struct user),1,fp);
            fclose(fp);
            fp = fopen(filename,"w");
            usr1.balance += amount;
            fwrite(&usr1,sizeof(struct user),1,fp);
            fclose(fp);
            if(fwrite != NULL){
              printf("\nYou have successfully transfered Rs.%.2f to %s",amount,phone);
              strcpy(filename,usr.phone);
              fp = fopen(strcat(filename,".dat"),"w");
              usr.balance -= amount;
              fwrite(&usr,sizeof(struct user),1,fp);
              fclose(fp);
              
            }
           }
           break;
        }
       printf("\nDo you want to continue transaction [y/n] :");
           scanf("%s",&cont);
      }
      }
      else{
        printf("\nIncorrect password");
      }
    }
    }

   return 0;
}
;


