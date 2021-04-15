#include "header.h"
#include<stdio.h>
#include<stdlib.h>
void write_file(AccountInfo *account, int *numberOfAccounts, char *filename)
{
    int i;
	FILE *fptr;
	fptr = fopen(filename,"w");
	if(fptr == NULL)
	{
		printf("File not present.\n");
		exit(1);
	}
	for(i=0;i<*numberOfAccounts;i++)
	{
		fwrite(&account[i],sizeof(account[i]),1,fptr);
	}
	fclose(fptr);
}
