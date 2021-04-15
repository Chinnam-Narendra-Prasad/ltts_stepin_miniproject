#include "header.h"
#include "unity.h"

int numberOfAccounts = 0;
AccountInfo account[1000];
/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_register_account(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, register_account(account, numberOfAccounts));
}
void test_details(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, print_accountt(account, numberOfAccounts));
}
void test_search(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, search_account(account, numberOfAccounts));
}
void test_sort(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, sort_account(account, numberOfAccounts));
}
void test_write(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, write_file(account, numberOfAccounts, "Sample"));
}
int main(void)
{
    UNITY_BEGIN();
    //RUN_TEST(test_menu);
    RUN_TEST(test_register_account);
    RUN_TEST(test_details);
    RUN_TEST(test_search);
    RUN_TEST(test_sort);
    RUN_TEST(test_write);
    return UNITY_END();
}
