#include "header.h"
#include<stdio.h>
#include<stdlib.h>
void menu(AccountInfo *account, int *numberOfAccounts, char *filename)
{
    int choice=0;
    while(1)
    {
        printf("Press 1 if you want to Register Account.\n");
        printf("Press 2 To Search For Account.\n");
        printf("Press 3 To Sort Accounts.\n");
        printf("Press 4 To Print All Accounts.\n");
        printf("Press 5 To Change Account Balance(Withdraw/Deposit)\n");
        printf("Press 6 To Quit menu.\n");
        printf("Please Enter Your choice: ");
        scanf("%d",&choice);
        if(choice == 1)
        {
            register_account(account,numberOfAccounts);
        }
        if(choice == 2)
        {
            search_account(account,numberOfAccounts);
        }
        if(choice == 3)
        {
            sort_account(account,numberOfAccounts);
        }       
        if(choice == 4)
        {
            print_account(account,numberOfAccounts);
        }
        if(choice == 5)
        {
            change_balance(account,numberOfAccounts);
        }   
        if(choice == 6)
        {
            write_file(account,numberOfAccounts,filename);
            printf("Turning Off.\n");
            break;
        }
     }
}
