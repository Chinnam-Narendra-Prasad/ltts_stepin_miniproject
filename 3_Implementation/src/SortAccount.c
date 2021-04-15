#include "header.h"
error_t sort_account(AccountInfo *account, int *numberOfAccounts)
{
    int i=0,j=0,k,choice;
    AccountInfo tempstruct;
	printf("Press 1 To Sort By Account Number.\n");
    printf("Press 2 To Sort By Account Balance.\n");
    printf("Please Enter your choice\n");
    scanf("%d",&choice);
    if(choice == 1)
    {
		for(i=0;i<*numberOfAccounts-1;i++)
		{
			for(j=i+1;j<*numberOfAccounts;j++)
			{
				if(account[i].account_no>account[j].account_no)
				{
					tempstruct=account[i];
					account[i]=account[j];
					account[j]=tempstruct;

				}
			}
		}
		return SUCCESS;
    }
    if(choice == 2)
    {
        for(i=0;i<*numberOfAccounts-1;i++)
		{
			for(j=i+1;j<*numberOfAccounts;j++)
			{
				if(account[i].balance<account[j].balance)
				{
					tempstruct=account[i];
					account[i]=account[j];
					account[j]=tempstruct;

				}
			}
		}
		return SUCCESS;
    }
}
