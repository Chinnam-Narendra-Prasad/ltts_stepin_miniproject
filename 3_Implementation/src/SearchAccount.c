#include "header.h"
error_t search_account(AccountInfo *account, int *numberOfAccounts)
{
    int choice, i, accountNo;
    char name[30];
    int searchflag = 0;
    printf("\nChoose To Search Account By Account Number or by Account Owner Name\n\n");
    printf("Press 1 To Search By Account Number.\n");
    printf("Press 2 To Search By Account Owner Name.\n");
    printf("Enter Your Option: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Please Enter Account Number:\n");
        scanf("%d", &accountNo);
        for (i = 0; i < *numberOfAccounts; i++)
        {
            if (account[i].account_no == accountNo)
            {
                printf("Given Account No. is registered with following details\n");
                printf("Account No.:%d\tName:%s\tBalance:%f\tAccount Type:%s\n", account[i].account_no, account[i].name, account[i].balance, account[i].account_type);
                searchflag = 1;
                return SUCCESS;
            }
        }
        if (searchflag == 0)
        {
            printf("Given Account No. is not registered with us\n");
        }
    }
    if (choice == 2)
    {
        printf("Please Enter Account holder Name: \n");
        scanf("%s", name);
        printf("\nSearch Result.\n\n");
        for (i = 0; i < *numberOfAccounts; i++)
        {
            if (strcmp(account[i].name, name) == 0)
            {
                printf("Given Account No. is registered with following details\n");
                printf("Account No.:%d\tName:%s\tBalance:%f\tAccount Type:%s\n", account[i].account_no, account[i].name, account[i].balance, account[i].account_type);
                searchflag = 1;
                return SUCCESS;
            }
        }
        if (searchflag == 0)
        {
            printf("Given Account No. is not registered with us\n");
        }
    }
}
