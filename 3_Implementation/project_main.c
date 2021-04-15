#include "header.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
    AccountInfo account[1000];
    int numberOfAccounts = 0;
    char filename[30];
    FILE *fptr;
    printf("Please Enter File Name: ");
    gets(filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("New File Created.\n");
    }
    if (fptr != NULL)
    {
        while (fread(&account[numberOfAccounts], sizeof(account[numberOfAccounts]), 1, fptr) == 1)
        {
            numberOfAccounts++;
        }
    }
    /*
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
       */
    menu(account, &numberOfAccounts, filename);
    return 0;
}
