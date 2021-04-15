#ifndef BANK_H
#define BANK_H
struct date
{
	
    int month,day,year;
};
 struct customer
{
    int account_no;
    char name[80];
    int balance;
	//struct date dob;
} ;
void account(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);
int check(char *pass,char *password);

#endif 
