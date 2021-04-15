#include "header.h"
#include<stdio.h>
error_t print_account(AccountInfo *account, int *numberOfAccounts)
{
    int i;
	for(i=0;i<*numberOfAccounts;i++)
	{
		printf("Account No.:%d\tName:%s\tBalance:%f\tAge:%d\tPhone:%s\tAccount Type:%s\tCity%s\n",account[i].account_no,account[i].name,account[i].balance,account[i].age,account[i].phone,account[i].account_type,account[i].city);
		return SUCCESS;
	}
}

