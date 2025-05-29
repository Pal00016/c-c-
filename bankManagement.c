#include<stdio.h>
#include<stdlib.h>
char name[20];
int dip_amt,amt=10000,acc_no;
void menu(){
    printf("MAIN MENU\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Transfer Money");
    printf("4.Account Details\n");
    printf("5.Transaction details\n");
    printf("6.Exit\n");
}

void deposit_money(){
    printf("DEPOSITING MONEY");
    printf("Enter the amount : ");
    scanf("%d", &dip_amt);
    amt+=dip_amt;
    printf("MONEY DEPOSITED SUCCESSFULLY");
    printf("Current balence %d",amt);
}



int main(){
    int choice;
    printf("ENTER YOUR NAME : ");
    gets(name);

    printf("Enter your account number : ");
    scanf("%d",&acc_no);

    menu();
    printf("Enter ypur choice : ");
    scanf("%d",&choice);

    switch (choice){
    case 1:
        deposit_money();
        break;
    case 2:
        withdraw_money();
        break;
    case 3:
        Transfer_money();
        break;
    case 4:
        account_details();
        break;
    case 5:
        transaction_details();
        break;
    case 6:
        last_details();
        exit(0);
        break;
    default:
        printf("INVALID CHOICE");
        break;
    }

    return 0;
}

