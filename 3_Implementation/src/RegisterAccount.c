#include "header.h"
error_t register_account(AccountInfo *account, int* numberOfAccounts)
{
    char name[30];
    int age;
    char phone[12];
    char city[20];
    char accType[10];
    int accNum,i,flag=0;
    printf("%d",*numberOfAccounts);
    if(*numberOfAccounts<1000)
    {
    	printf("Enter Account Number\n");
        scanf("%d",&accNum);
        printf("Enter name\n");
        scanf("%s",&name);
        /* Search for an already existing account */
        for(i=0;i<*numberOfAccounts;i++)
        {
            if(account[i].account_no==accNum)
            {
                printf("Account Number Already Exists.\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
           account[*numberOfAccounts].account_no=accNum;
           strcpy(account[*numberOfAccounts].name,name);
           printf("Enter age\n");
           scanf("%d",&age);
           printf("Enter phone number\n");
           scanf("%s",&phone);
           printf("Enter city\n");
           scanf("%s",&city);
           printf("Enter Account Type\n");
           scanf("%s",&accType);
           strcpy(account[*numberOfAccounts].city, city);
           strcpy(account[*numberOfAccounts].account_type, accType);
		   account[*numberOfAccounts].age=age;
		   strcpy(account[*numberOfAccounts].phone,phone);            
		   account[*numberOfAccounts].balance=0.0;
            *numberOfAccounts=*numberOfAccounts+1;
        }
        return SUCCESS;
    }
    else
    {
        return ERROR_MEMORY_FULL;
    }
}
