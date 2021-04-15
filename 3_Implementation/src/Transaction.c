#include "header.h"
#include<stdio.h>
void change_balance(AccountInfo *account, int *numberOfAccounts)
{
	int i,accountNo,searchflag=0;
	float amount;
    int choice=0;
    printf("\nEnter Account Number to make transaction: \n");
    scanf("%d",&accountNo);
    searchflag=0;
    for(i=0;i<*numberOfAccounts;i++)
    {
        if(account[i].account_no==accountNo)
        {
            searchflag=1;
            printf("Press 1 To Withdraw form Account No.:\n",accountNo);
            printf("Press 2 To Deposit to Account No.:\n",accountNo);
            printf("Enter Option: ");
            if(choice==1)
            {
                printf("Please Enter Amount to withdraw: \n");
                scanf("%f",&amount);
                if(amount>account[i].balance)
                {
                    printf("Sorry cannot withdraw Insufficient Balance.\n");
                }
                else
                {
                    account[i].balance-=amount;
                    printf("Withdrawal is Successful. Thank You!\n");
                }
            }
            if(choice==2)
            {
                printf("Enter Amount to be depoist: ");
                scanf("%f",&amount);
                account[i].balance+=amount;
                printf("Deposit is Successful. Thank You!\n");
            }

        }
    }
    if(searchflag==0)
    {
        printf("Given Account No. is not registered with us\n");
    }
}
