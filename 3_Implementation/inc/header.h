#ifndef __HEADER_BANK__
#define __HEADER_BANK__
typedef struct AccountInfo
{
    char name[60];
    int account_no;
    int age;
    char city[20];
    int phone;
    char account_type[15];
    float balance;
}AccountInfo;

typedef enum error_t
{
    ERROR_NULL_PTR = 0,    /**< Null pointer dereferncing error */
    SUCCESS = 1,             /**< Compute operation is successful */
    ERROR_MEMORY_FULL = -1   /**< Memory full error */
}error_t;

void menu(AccountInfo *account, int *numberOfAccounts, char *filename);
error_t register_account(AccountInfo *acc, int* numberOfAccounts);
error_t print_account_details(AccountInfo *acc, int *numberOfAccounts);
error_t search_account_details(AccountInfo *account, int *numberOfAccounts);
void change_account_balance(AccountInfo *account, int *numberOfAccounts);
error_t sort_account(AccountInfo *account, int *numberOfAccounts);
error_t write_account_to_file(AccountInfo *account, int *numberOfAccounts, char *filename);
#endif
