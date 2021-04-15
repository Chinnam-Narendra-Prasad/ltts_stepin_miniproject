#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bank.h"

int main()
{
	system("cls");
	
	system("color 0A");

    struct customer data[20];
    int n,choice, account_no, amount, index,c;
    char pass[9],password[9]="archana1";
	login:
    printf("\n\n\t\tEnter the password to login at least 8 characters long:");
	scanf("%s",pass);
	c=check(pass,password);
	if(c)
	{
		system("color 04");
		printf("\nInvalid!");	
        goto login;		
      
	}
		system("color 0A");
		
    printf("\n\t\t\tWelcome to Banking System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
    account(data, n);
    do
    {

        printf("\nBanking System Menu :\n");
        printf("Enter 1 to display all records.\n");
        printf("Enter 2 to search a record.\n");
        printf("Enter 3 to deposit amount.\n");
        printf("Enter 4 to withdraw amount.\n");
        printf("Enter 0 to quit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &account_no);
                index = search(data, n, account_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nBalance: %d\n",
                        data[index].account_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, n, account_no, amount);
                break;
            case 4:
                printf("Enter account number : ");
                scanf("%d", &account_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, n, account_no, amount);
				break;
        }
    }
    while (choice != 0);

    return 0;
}
